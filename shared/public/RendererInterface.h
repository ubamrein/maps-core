// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from core.djinni

#pragma once

#include <memory>

class CameraInterface;
class RenderPassInterface;
class RenderingContextInterface;

class RendererInterface {
public:
    virtual ~RendererInterface() {}

    virtual void addToRenderQueue(const std::shared_ptr<RenderPassInterface> & renderPass) = 0;

    /** Ensure calling on graphics thread */
    virtual void drawFrame(const std::shared_ptr<RenderingContextInterface> & renderingContext, const std::shared_ptr<CameraInterface> & camera) = 0;
};