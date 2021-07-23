// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from line.djinni

#pragma once

#include "ColorStateList.h"
#include "SizeType.h"
#include <utility>

struct LineStyle final {
    ::ColorStateList color;
    ::SizeType widthType;
    float width;

    LineStyle(::ColorStateList color_,
              ::SizeType widthType_,
              float width_)
    : color(std::move(color_))
    , widthType(std::move(widthType_))
    , width(std::move(width_))
    {}
};
