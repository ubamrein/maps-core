// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from graphicsobjects.djinni

#pragma once

#include "Quad2dD.h"
#include "RenderingContextInterface.h"
#include "SharedBytes.h"
#include <cstdint>
#include <memory>

class GraphicsObjectInterface;
class TextureHolderInterface;

class TextInstancedInterface {
public:
    virtual ~TextInstancedInterface() = default;

    /** set the frame of the root object */
    virtual void setFrame(const ::Quad2dD & frame) = 0;

    virtual void setInstanceCount(int32_t count) = 0;

    /** 2 floats (x and y) for each instance */
    virtual void setPositions(const ::SharedBytes & positions) = 0;

    /** 4 floats (x, y, width and height) for each instanced */
    virtual void setTextureCoordinates(const ::SharedBytes & textureCoordinates) = 0;

    /** 2 floats for width and height scale for each instance */
    virtual void setScales(const ::SharedBytes & scales) = 0;

    /** one float for each instance in degree */
    virtual void setRotations(const ::SharedBytes & rotations) = 0;

    /** one uint16 for each instance */
    virtual void setStyleIndices(const ::SharedBytes & indices) = 0;

    /**
     * a style contains of:
     * color RGBA
     * halo-color RGBA
     * halo=width
     * so a total of 9 floats for each style
     */
    virtual void setStyles(const ::SharedBytes & values) = 0;

    virtual void loadTexture(const /*not-null*/ std::shared_ptr<::RenderingContextInterface> & context, const /*not-null*/ std::shared_ptr<TextureHolderInterface> & textureHolder) = 0;

    virtual void removeTexture() = 0;

    virtual /*not-null*/ std::shared_ptr<GraphicsObjectInterface> asGraphicsObject() = 0;
};