// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from camera.djinni

#pragma once

#include "RectCoord.h"

class MapCamera2dListenerInterface {
public:
    virtual ~MapCamera2dListenerInterface() {}

    virtual void onVisibleBoundsChanged(const ::RectCoord & visibleBounds, double zoom) = 0;
};
