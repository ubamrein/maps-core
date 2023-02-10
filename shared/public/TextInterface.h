// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from graphicsobjects.djinni

#pragma once

#include "RenderingContextInterface.h"
#include <memory>
#include <vector>

class GraphicsObjectInterface;
class TextureHolderInterface;
struct TextDescription;

class TextInterface {
public:
    virtual ~TextInterface() = default;

    virtual void setTexts(const std::vector<TextDescription> & texts) = 0;

    virtual void loadTexture(const /*not-null*/ std::shared_ptr<::RenderingContextInterface> & context, const /*not-null*/ std::shared_ptr<TextureHolderInterface> & textureHolder) = 0;

    virtual void removeTexture() = 0;

    virtual /*not-null*/ std::shared_ptr<GraphicsObjectInterface> asGraphicsObject() = 0;
};
