// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from tiled_raster_layer.djinni

#pragma once

#include "LayerInterface.h"
#include "TextureLoaderInterface.h"
#include "Tiled2dMapLayerConfig.h"
#include <memory>

class Tiled2dMapRasterLayerInterface {
public:
    virtual ~Tiled2dMapRasterLayerInterface() {}

    static std::shared_ptr<Tiled2dMapRasterLayerInterface> create(const std::shared_ptr<::Tiled2dMapLayerConfig> & layerConfig, const std::shared_ptr<::TextureLoaderInterface> & textureLoader);

    virtual std::shared_ptr<::LayerInterface> asLayerInterface() = 0;
};
