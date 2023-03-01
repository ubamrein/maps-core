/*
 * Copyright (c) 2021 Ubique Innovation AG <https://www.ubique.ch>
 *
 *  This Source Code Form is subject to the terms of the Mozilla Public
 *  License, v. 2.0. If a copy of the MPL was not distributed with this
 *  file, You can obtain one at https://mozilla.org/MPL/2.0/.
 *
 *  SPDX-License-Identifier: MPL-2.0
 */

#pragma once

#include "Actor.h"
#include "Tiled2dMapTileInfo.h"
#include "Value.h"
#include "MapInterface.h"
#include "VectorTileGeometryHandler.h"
#include "RenderPassInterface.h"
#include "Quad2dInterface.h"
#include "ColorShaderInterface.h"

class Tiled2dMapVectorLayer;

class Tiled2dMapVectorTile : public ActorObject {
public:
    Tiled2dMapVectorTile(const std::weak_ptr<MapInterface> &mapInterface, const Tiled2dMapTileInfo &tileInfo, const WeakActor<Tiled2dMapVectorLayer> &vectorLayer);

    virtual void update() = 0;

    virtual std::vector<std::shared_ptr<RenderPassInterface>> buildRenderPasses() = 0;

    virtual void clear();

    virtual void setup();

    virtual void setAlpha(float alpha);

    virtual float getAlpha();

    virtual void setScissorRect(const std::optional<::RectI> &scissorRect) = 0;

    virtual void setTileData(const std::shared_ptr<MaskingObjectInterface> &tileMask,
                             const std::vector<std::tuple<const FeatureContext, const VectorTileGeometryHandler>> &layerFeatures) = 0;

    virtual void updateTileMask(const std::shared_ptr<MaskingObjectInterface> &tileMask) = 0;

protected:
    virtual void preGenerateRenderPasses();

    const std::weak_ptr<MapInterface> mapInterface;
    const Tiled2dMapTileInfo tileInfo;
    const WeakActor<Tiled2dMapVectorLayer> vectorLayer;

    float alpha = 1.0;

    std::vector<std::shared_ptr<RenderPassInterface>> debugRenderPasses;
    std::shared_ptr<ColorShaderInterface> debugShader;
    std::shared_ptr<Quad2dInterface> debugQuad;
};
