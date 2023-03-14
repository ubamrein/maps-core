/*
 * Copyright (c) 2021 Ubique Innovation AG <https://www.ubique.ch>
 *
 *  This Source Code Form is subject to the terms of the Mozilla Public
 *  License, v. 2.0. If a copy of the MPL was not distributed with this
 *  file, You can obtain one at https://mozilla.org/MPL/2.0/.
 *
 *  SPDX-License-Identifier: MPL-2.0
 */

#include "Tiled2dMapVectorSourceTileDataManager.h"
#include "Tiled2dMapVectorRasterTile.h"
#include "Tiled2dMapVectorPolygonTile.h"
#include "Tiled2dMapVectorLineTile.h"
#include "Tiled2dMapVectorLayer.h"

Tiled2dMapVectorSourceTileDataManager::Tiled2dMapVectorSourceTileDataManager(const WeakActor<Tiled2dMapVectorLayer> &vectorLayer,
                                                                             const std::shared_ptr<VectorMapDescription> &mapDescription,
                                                                             const std::string &source)
        : Tiled2dMapVectorSourceDataManager(vectorLayer, mapDescription, source) {

}

void Tiled2dMapVectorSourceTileDataManager::update() {
    for (const auto &[tileInfo, subTiles] : tiles) {
        for (const auto &[index, identifier, tile]: subTiles) {
            tile.syncAccess([](auto t) {
                t->update();
            });
        }
    }
}

std::vector<std::tuple<int32_t, std::vector<std::shared_ptr<RenderPassInterface>>>>
Tiled2dMapVectorSourceTileDataManager::buildRenderPasses() {
    std::vector<std::tuple<int32_t, std::vector<std::shared_ptr<RenderPassInterface>>>> renderPasses;
    for (const auto &[tileInfo, subTiles]: tiles) {
        for (const auto &[index, identifier, tile]: subTiles) {
            auto tilePasses = tile.syncAccess([](auto t) {
                return t->buildRenderPasses();
            });
            renderPasses.emplace_back(index, std::move(tilePasses));
        }
    }
    return renderPasses;
}

void Tiled2dMapVectorSourceTileDataManager::pause() {
    for (const auto &tileMask: tileMaskMap) {
        if (tileMask.second.getGraphicsObject() &&
            tileMask.second.getGraphicsObject()->isReady()) {
            tileMask.second.getGraphicsObject()->clear();
        }
    }

    for (const auto &[tileInfo, subTiles] : tiles) {
        for (const auto &[index, identifier, tile]: subTiles) {
            tile.message(MailboxExecutionEnvironment::graphics, &Tiled2dMapVectorTile::clear);
        }
    }

    tilesReady.clear();
    tilesReadyCount.clear();
}

void Tiled2dMapVectorSourceTileDataManager::resume() {
    auto mapInterface = this->mapInterface.lock();
    if (!mapInterface) {
        return;
    }
    const auto &context = mapInterface->getRenderingContext();

    for (const auto &tileMask: tileMaskMap) {
        if (tileMask.second.getGraphicsObject() && !tileMask.second.getGraphicsObject()->isReady()) {
            tileMask.second.getGraphicsObject()->setup(context);
        }
    }

    for (const auto &[tileInfo, subTiles] : tiles) {
        for (const auto &[index, identifier, tile]: subTiles) {
            tile.message(MailboxExecutionEnvironment::graphics, &Tiled2dMapVectorTile::setup);
        }
        tilesReady.insert(tileInfo);
        onTileCompletelyReady(tileInfo);
    }
}

void Tiled2dMapVectorSourceTileDataManager::setAlpha(float alpha) {
    for (const auto &[tileInfo, subTiles] : tiles) {
        for (const auto &[index, identifier, tile]: subTiles) {
            tile.message(&Tiled2dMapVectorTile::setAlpha, alpha);
        }
    }
}

void Tiled2dMapVectorSourceTileDataManager::setSelectionDelegate(
        const WeakActor<Tiled2dMapVectorLayerSelectionInterface> &selectionDelegate) {
    Tiled2dMapVectorSourceDataManager::setSelectionDelegate(selectionDelegate);
}

void Tiled2dMapVectorSourceTileDataManager::setSelectedFeatureIdentifier(std::optional<int64_t> identifier) {

}

void Tiled2dMapVectorSourceTileDataManager::updateMaskObjects(
        const std::unordered_map<Tiled2dMapTileInfo, Tiled2dMapLayerMaskWrapper> toSetupMaskObject,
        const std::unordered_set<Tiled2dMapTileInfo> tilesToRemove) {
    // TODO
    /*
        auto mapInterface = this->mapInterface;
    auto renderingContext = mapInterface ? mapInterface->getRenderingContext() : nullptr;
    if (!renderingContext) return;

    for (const auto &[tileInfo, wrapper] : toSetupMaskObject) {

        wrapper.getGraphicsObject()->setup(renderingContext);

        std::shared_ptr<GraphicsObjectInterface> toClear;
        {
            std::lock_guard<std::recursive_mutex> lock(tileMaskMapMutex);
            auto it = tileMaskMap.find(tileInfo);
            if (it != tileMaskMap.end() && it->second.getGraphicsMaskObject()) {
                toClear = it->second.getGraphicsMaskObject()->asGraphicsObject();
            }
            tileMaskMap[tileInfo] = wrapper;
        }
        if (toClear) {
            toClear->clear();
        }

        {
            std::lock_guard<std::recursive_mutex> lock(tilesMutex);
            auto subTiles = tiles.find(tileInfo);
            if (subTiles != tiles.end()) {
                for (auto const &[index, identifier, tile]: subTiles->second) {
                    tile.syncAccess([tileI = tileInfo, maskObject = wrapper.getGraphicsMaskObject()](auto tile){
                        tile->updateTileMask(maskObject);
                    });
                }
            }
        }
    }

    for (const auto &tileToRemove: tilesToRemove) {
        {
            std::lock_guard<std::recursive_mutex> lock(tilesMutex);
            auto tilesVectorIt = tiles.find(tileToRemove);
            if (tilesVectorIt != tiles.end()) {
                for (const auto &[index, identifier, tile]: tiles.at(tileToRemove)) {
                    tile.syncAccess([](auto tile){
                        tile->clear();
                    });
                }
            }
            tiles.erase(tileToRemove);
        }

        {
            std::lock_guard<std::recursive_mutex> lock(tileMaskMapMutex);
            auto maskIt = tileMaskMap.find(tileToRemove);
            if (maskIt != tileMaskMap.end()) {
                const auto &object = maskIt->second.getGraphicsMaskObject()->asGraphicsObject();
                if (object->isReady()) object->clear();

                tileMaskMap.erase(tileToRemove);
            }
        }
        {
            std::lock_guard<std::recursive_mutex> tilesReadyLock(tilesReadyMutex);
            tilesReady.erase(tileToRemove);
        }
        {
            std::lock_guard<std::recursive_mutex> tilesReadyCountLock(tilesReadyCountMutex);
            tilesReadyCount.erase(tileToRemove);
        }
    }
    mapInterface->invalidate();
     */
}

Actor<Tiled2dMapVectorTile> Tiled2dMapVectorSourceTileDataManager::createTileActor(const Tiled2dMapTileInfo &tileInfo,
                                                                                   const std::shared_ptr<VectorLayerDescription> &layerDescription) {
    Actor<Tiled2dMapVectorTile> actor;

    auto mapInterface = this->mapInterface.lock();
    if (!mapInterface) {
        return actor;
    }

    auto castedMe = std::static_pointer_cast<Tiled2dMapVectorLayerReadyInterface>(shared_from_this());
    auto selfActor = WeakActor<Tiled2dMapVectorLayerReadyInterface>(mailbox, castedMe);

    switch (layerDescription->getType()) {
        case VectorLayerType::background: {
            break;
        }
        case VectorLayerType::line: {
            auto mailbox = std::make_shared<Mailbox>(mapInterface->getScheduler());

            auto lineActor = Actor<Tiled2dMapVectorLineTile>(mailbox, (std::weak_ptr<MapInterface>) mapInterface, tileInfo,
                                                             selfActor, std::static_pointer_cast<LineVectorLayerDescription>(
                            layerDescription));

            actor = lineActor.strongActor<Tiled2dMapVectorTile>();
            break;
        }
        case VectorLayerType::polygon: {
            auto mailbox = std::make_shared<Mailbox>(mapInterface->getScheduler());

            auto polygonActor = Actor<Tiled2dMapVectorPolygonTile>(mailbox, (std::weak_ptr<MapInterface>) mapInterface,
                                                                   tileInfo, selfActor,
                                                                   std::static_pointer_cast<PolygonVectorLayerDescription>(
                                                                           layerDescription));

            actor = polygonActor.strongActor<Tiled2dMapVectorTile>();
            break;
        }
        case VectorLayerType::symbol: {
            break;
        }
        case VectorLayerType::raster: {
            auto mailbox = std::make_shared<Mailbox>(mapInterface->getScheduler());

            auto rasterActor = Actor<Tiled2dMapVectorRasterTile>(mailbox, (std::weak_ptr<MapInterface>) mapInterface,
                                                                 tileInfo, selfActor,
                                                                 std::static_pointer_cast<RasterVectorLayerDescription>(
                                                                         layerDescription));

            actor = rasterActor.strongActor<Tiled2dMapVectorTile>();
            break;
        }
        case VectorLayerType::custom: {
            break;
        }
    }
    return std::move(actor);
}

void Tiled2dMapVectorSourceTileDataManager::tileIsReady(const Tiled2dMapTileInfo &tile) {
    {
        // TODO: Remove: std::lock_guard<std::recursive_mutex> tilesReadyLock(tilesReadyMutex);
        if (tilesReady.count(tile) > 0) return;
    }
    bool isCompletelyReady = false;
    {
        // TODO: Remove: std::lock_guard<std::recursive_mutex> tilesReadyCountLock(tilesReadyCountMutex);
        if (tilesReadyCount.count(tile) == 0) {
            return;
        }
        tilesReadyCount[tile] -= 1;
        if (tilesReadyCount.at(tile) == 0) {
            tilesReadyCount.erase(tile);
            {
                // TODO: Remove: std::lock_guard<std::recursive_mutex> tilesReadyLock(tilesReadyMutex);
                tilesReady.insert(tile);
            }
            isCompletelyReady = true;
        }
    }

    if (isCompletelyReady) {
        onTileCompletelyReady(tile);
    }}

void Tiled2dMapVectorSourceTileDataManager::updateLayerDescription(std::shared_ptr<VectorLayerDescription> layerDescription) {
    auto mapInterface = this->mapInterface.lock();
    if (!mapInterface) {
        return;
    }

    std::shared_ptr<VectorLayerDescription> legacyDescription;
    int32_t legacyIndex = -1;
    size_t numLayers = mapDescription->layers.size();
    for (int index = 0; index < numLayers; index++) {
        if (mapDescription->layers[index]->identifier == layerDescription->identifier) {
            legacyDescription = mapDescription->layers[index];
            legacyIndex = index;
            mapDescription->layers[index] = layerDescription;
            break;
        }
    }

    if (legacyIndex < 0) {
        return;
    }

    // Evaluate if a complete replacement of the tiles is needed (source/zoom adjustments may lead to a different set of created tiles)
    bool needsTileReplace = legacyDescription->source != layerDescription->source
                            || legacyDescription->sourceId != layerDescription->sourceId
                            || legacyDescription->minZoom != layerDescription->minZoom
                            || legacyDescription->maxZoom != layerDescription->maxZoom;

    // TODO: Adjust for multi-source case
    /*auto const &currentTileInfos = vectorTileSource.converse(&Tiled2dMapVectorSource::getCurrentTiles).get();

    {
        auto castedMe = std::static_pointer_cast<Tiled2dMapVectorLayer>(shared_from_this());
        auto selfActor = WeakActor<Tiled2dMapVectorLayer>(mailbox, castedMe);

        for (const auto &tileData: currentTileInfos) {

            std::shared_ptr<MaskingObjectInterface> tileMask;
            {
                // TODO: Remove: std::lock_guard<std::recursive_mutex> lock(tileMaskMapMutex);
                auto tileMaskIter = tileMaskMap.find(tileData.tileInfo);
                if (tileMaskIter != tileMaskMap.end()) {
                    tileMask = tileMaskIter->second.getGraphicsMaskObject();
                }
            }

            // TODO: Remove: std::lock_guard<std::recursive_mutex> lock(tilesMutex);
            auto subTiles = tiles.find(tileData.tileInfo);
            if (subTiles == tiles.end()) {
                continue;
            }

            if (needsTileReplace) {
                // Remove invalid legacy tile (only one - identifier is unique)
                subTiles->second.erase(std::remove_if(subTiles->second.begin(), subTiles->second.end(),
                                                      [&identifier = layerDescription->identifier]
                                                              (const std::tuple<int32_t, std::string, Actor<Tiled2dMapVectorTile>> &subTile) {
                                                          return std::get<1>(subTile) == identifier;
                                                      }));

                // Re-evaluate criteria for the tile creation of this specific sublayer
                if (!(layerDescription->minZoom <= tileData.tileInfo.zoomIdentifier && layerDescription->maxZoom >= tileData.tileInfo.zoomIdentifier)) {
                    continue;
                }
                auto const mapIt = tileData.layerFeatureMaps.find(layerDescription->source);
                if (mapIt == tileData.layerFeatureMaps.end()) {
                    continue;
                }
                auto const dataIt = mapIt->second->find(layerDescription->sourceId);
                if (dataIt == mapIt->second->end()) {
                    continue;
                }

                Actor<Tiled2dMapVectorTile> actor = createTileActor(tileData.tileInfo, layerDescription);
                if (actor) {
                    if (selectionDelegate) {
                        actor.message(&Tiled2dMapVectorTile::setSelectionDelegate, selectionDelegate);
                    }

                    if (subTiles->second.empty()) {
                        subTiles->second.push_back({legacyIndex, layerDescription->identifier, actor.strongActor<Tiled2dMapVectorTile>()});
                    } else {
                        for (auto subTileIter = subTiles->second.begin(); subTileIter != subTiles->second.end(); subTileIter++) {
                            if (std::get<0>(*subTileIter) > legacyIndex) {
                                subTiles->second.insert(subTileIter - 1, {legacyIndex, layerDescription->identifier, actor.strongActor<Tiled2dMapVectorTile>()});
                                break;
                            }
                        }
                    }

                    actor.message(&Tiled2dMapVectorTile::setTileData, tileMask, dataIt->second);
                }

            } else {
                for (auto &[index, identifier, tile]  : subTiles->second) {
                    if (identifier == layerDescription->identifier) {
                        auto const mapIt = tileData.layerFeatureMaps.find(layerDescription->source);
                        if (mapIt == tileData.layerFeatureMaps.end()) {
                            break;
                        }
                        auto const dataIt = mapIt->second->find(layerDescription->sourceId);
                        if (dataIt == mapIt->second->end()) {
                            break;
                        }
                        //tile.message(&Tiled2dMapVectorTile::updateLayerDescription, layerDescription, dataIt->second);
                        break;
                    }
                }
            }

        }
    }*/
}