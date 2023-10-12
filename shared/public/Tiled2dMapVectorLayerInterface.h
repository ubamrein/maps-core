// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from tiled_vector_layer.djinni

#pragma once

#include "FontLoaderInterface.h"
#include "LayerInterface.h"
#include "LoaderInterface.h"
#include "Tiled2dMapZoomInfo.h"
#include <memory>
#include <optional>
#include <string>
#include <unordered_map>
#include <vector>

class Tiled2dMapVectorLayerSelectionCallbackInterface;
struct VectorLayerFeatureInfoValue;

class Tiled2dMapVectorLayerInterface {
public:
    virtual ~Tiled2dMapVectorLayerInterface() = default;

    static /*not-null*/ std::shared_ptr<Tiled2dMapVectorLayerInterface> createFromStyleJson(const std::string & layerName, const std::string & path, const std::vector</*not-null*/ std::shared_ptr<::LoaderInterface>> & loaders, const /*not-null*/ std::shared_ptr<::FontLoaderInterface> & fontLoader, double dpFactor);

    static /*not-null*/ std::shared_ptr<Tiled2dMapVectorLayerInterface> createFromStyleJsonWithZoomInfo(const std::string & layerName, const std::string & path, const std::vector</*not-null*/ std::shared_ptr<::LoaderInterface>> & loaders, const /*not-null*/ std::shared_ptr<::FontLoaderInterface> & fontLoader, double dpFactor, const ::Tiled2dMapZoomInfo & zoomInfo);

    static /*not-null*/ std::shared_ptr<Tiled2dMapVectorLayerInterface> createFromLocalStyleJson(const std::string & layerName, const std::string & styleJson, const std::vector</*not-null*/ std::shared_ptr<::LoaderInterface>> & loaders, const /*not-null*/ std::shared_ptr<::FontLoaderInterface> & fontLoader, double dpFactor);

    static /*not-null*/ std::shared_ptr<Tiled2dMapVectorLayerInterface> createFromLocalStyleJsonWithZoomInfo(const std::string & layerName, const std::string & styleJson, const std::vector</*not-null*/ std::shared_ptr<::LoaderInterface>> & loaders, const /*not-null*/ std::shared_ptr<::FontLoaderInterface> & fontLoader, double dpFactor, const ::Tiled2dMapZoomInfo & zoomInfo);

    static /*not-null*/ std::shared_ptr<Tiled2dMapVectorLayerInterface> createFromStyleJsonWithUrlParams(const std::string & layerName, const std::string & path, const std::vector</*not-null*/ std::shared_ptr<::LoaderInterface>> & loaders, const /*not-null*/ std::shared_ptr<::FontLoaderInterface> & fontLoader, double dpFactor, const std::unordered_map<std::string, std::string> & sourceUrlParams);

    static /*not-null*/ std::shared_ptr<Tiled2dMapVectorLayerInterface> createFromStyleJsonWithZoomInfoUrlParams(const std::string & layerName, const std::string & path, const std::vector</*not-null*/ std::shared_ptr<::LoaderInterface>> & loaders, const /*not-null*/ std::shared_ptr<::FontLoaderInterface> & fontLoader, double dpFactor, const ::Tiled2dMapZoomInfo & zoomInfo, const std::unordered_map<std::string, std::string> & sourceUrlParams);

    static /*not-null*/ std::shared_ptr<Tiled2dMapVectorLayerInterface> createFromLocalStyleJsonWithUrlParams(const std::string & layerName, const std::string & styleJson, const std::vector</*not-null*/ std::shared_ptr<::LoaderInterface>> & loaders, const /*not-null*/ std::shared_ptr<::FontLoaderInterface> & fontLoader, double dpFactor, const std::unordered_map<std::string, std::string> & sourceUrlParams);

    static /*not-null*/ std::shared_ptr<Tiled2dMapVectorLayerInterface> createFromLocalStyleJsonWithZoomInfoUrlParams(const std::string & layerName, const std::string & styleJson, const std::vector</*not-null*/ std::shared_ptr<::LoaderInterface>> & loaders, const /*not-null*/ std::shared_ptr<::FontLoaderInterface> & fontLoader, double dpFactor, const ::Tiled2dMapZoomInfo & zoomInfo, const std::unordered_map<std::string, std::string> & sourceUrlParams);

    virtual void setSelectionDelegate(const /*nullable*/ std::shared_ptr<Tiled2dMapVectorLayerSelectionCallbackInterface> & selectionDelegate) = 0;

    virtual /*not-null*/ std::shared_ptr<::LayerInterface> asLayerInterface() = 0;

    virtual std::optional<std::string> getStyleMetadataJson() = 0;

    virtual void setFeatureState(const std::string & identifier, const std::unordered_map<std::string, VectorLayerFeatureInfoValue> & properties) = 0;
};
