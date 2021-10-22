// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from shader.djinni

#pragma once

#include "Vec3D.h"
#include <memory>

class ShaderProgramInterface;

class TextShaderInterface {
public:
    virtual ~TextShaderInterface() {}

    virtual void setColor(float red, float green, float blue, float alpha) = 0;

    virtual void setScale(float scale) = 0;

    virtual void setReferencePoint(const ::Vec3D & point) = 0;

    virtual std::shared_ptr<ShaderProgramInterface> asShaderProgramInterface() = 0;
};