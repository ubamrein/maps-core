// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from graphicsobjects.djinni

#pragma once

#include <memory>
#include <vector>

class GraphicsObjectInterface;
struct RenderLineDescription;

class LineGroup2dInterface {
public:
    virtual ~LineGroup2dInterface() {}

    virtual void setLines(const std::vector<RenderLineDescription> & lines) = 0;

    virtual std::shared_ptr<GraphicsObjectInterface> asGraphicsObject() = 0;
};