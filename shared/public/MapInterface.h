// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from core.djinni

#pragma once

#include "Color.h"
#include "CoordinateConversionHelperInterface.h"
#include "GraphicsObjectFactoryInterface.h"
#include "RectCoord.h"
#include "RenderingContextInterface.h"
#include "SchedulerInterface.h"
#include "ShaderFactoryInterface.h"
#include "TouchHandlerInterface.h"
#include "Vec2I.h"
#include <cstdint>
#include <memory>
#include <vector>

class LayerInterface;
class MapCallbackInterface;
class MapCamera2dInterface;
class MapReadyCallbackInterface;
struct MapConfig;

class MapInterface {
public:
    virtual ~MapInterface() {}

    static std::shared_ptr<MapInterface> create(const std::shared_ptr<::GraphicsObjectFactoryInterface> & graphicsFactory, const std::shared_ptr<::ShaderFactoryInterface> & shaderFactory, const std::shared_ptr<::RenderingContextInterface> & renderingContext, const MapConfig & mapConfig, const std::shared_ptr<::SchedulerInterface> & scheduler, float pixelDensity);

    static std::shared_ptr<MapInterface> createWithOpenGl(const MapConfig & mapConfig, const std::shared_ptr<::SchedulerInterface> & scheduler, float pixelDensity);

    virtual void setCallbackHandler(const std::shared_ptr<MapCallbackInterface> & callbackInterface) = 0;

    virtual std::shared_ptr<::GraphicsObjectFactoryInterface> getGraphicsObjectFactory() = 0;

    virtual std::shared_ptr<::ShaderFactoryInterface> getShaderFactory() = 0;

    virtual std::shared_ptr<::SchedulerInterface> getScheduler() = 0;

    virtual std::shared_ptr<::RenderingContextInterface> getRenderingContext() = 0;

    virtual MapConfig getMapConfig() = 0;

    virtual std::shared_ptr<::CoordinateConversionHelperInterface> getCoordinateConverterHelper() = 0;

    virtual void setCamera(const std::shared_ptr<MapCamera2dInterface> & camera) = 0;

    virtual std::shared_ptr<MapCamera2dInterface> getCamera() = 0;

    virtual void setTouchHandler(const std::shared_ptr<::TouchHandlerInterface> & touchHandler) = 0;

    virtual std::shared_ptr<::TouchHandlerInterface> getTouchHandler() = 0;

    virtual std::vector<std::shared_ptr<LayerInterface>> getLayers() = 0;

    virtual void addLayer(const std::shared_ptr<LayerInterface> & layer) = 0;

    virtual void insertLayerAt(const std::shared_ptr<LayerInterface> & layer, int32_t atIndex) = 0;

    virtual void insertLayerAbove(const std::shared_ptr<LayerInterface> & layer, const std::shared_ptr<LayerInterface> & above) = 0;

    virtual void insertLayerBelow(const std::shared_ptr<LayerInterface> & layer, const std::shared_ptr<LayerInterface> & below) = 0;

    virtual void removeLayer(const std::shared_ptr<LayerInterface> & layer) = 0;

    virtual void setViewportSize(const ::Vec2I & size) = 0;

    virtual void setBackgroundColor(const ::Color & color) = 0;

    virtual void invalidate() = 0;

    virtual void drawFrame() = 0;

    virtual void resume() = 0;

    virtual void pause() = 0;

    /**
     * changes bounds to bounds, checks all layers for readiness, and updates callbacks, timeout in
     * seconds
     */
    virtual void drawReadyFrame(const ::RectCoord & bounds, float timeout, const std::shared_ptr<MapReadyCallbackInterface> & callbacks) = 0;
};
