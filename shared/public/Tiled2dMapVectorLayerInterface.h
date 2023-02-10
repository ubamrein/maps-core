// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from tiled_vector_layer.djinni

#pragma once

#include "FontLoaderInterface.h"
#include "LayerInterface.h"
#include "LoaderInterface.h"
#include <memory>
#include <string>
#include <vector>

class Tiled2dMapVectorLayerInterface {
public:
    virtual ~Tiled2dMapVectorLayerInterface() = default;

    static /*not-null*/ std::shared_ptr<Tiled2dMapVectorLayerInterface> createFromStyleJson(const std::string & layerName, const std::string & path, const std::vector</*not-null*/ std::shared_ptr<::LoaderInterface>> & loaders, const /*not-null*/ std::shared_ptr<::FontLoaderInterface> & fontLoader, double dpFactor);

    virtual /*not-null*/ std::shared_ptr<::LayerInterface> asLayerInterface() = 0;
};
