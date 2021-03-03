// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from core.djinni

#pragma once

#include "GraphicsObjectInterface.h"
#include <memory>
#include <vector>

class RenderObjectInterface {
public:
    virtual ~RenderObjectInterface() {}

    virtual std::shared_ptr<::GraphicsObjectInterface> getGraphicsObject() = 0;

    virtual bool hasCustomModelMatrix() = 0;

    virtual std::vector<float> getCustomModelMatrix() = 0;
};
