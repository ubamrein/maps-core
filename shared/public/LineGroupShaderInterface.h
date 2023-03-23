// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from shader.djinni

#pragma once

#include "LineStyle.h"
#include <memory>
#include <vector>

class ShaderProgramInterface;

class LineGroupShaderInterface {
public:
    virtual ~LineGroupShaderInterface() {}

    virtual void setStyles(const std::vector<::LineStyle> & styles) = 0;

    virtual std::shared_ptr<ShaderProgramInterface> asShaderProgramInterface() = 0;
};
