// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from error_manager.djinni

#pragma once

#include <utility>

struct ErrorManagerConfiguration final {
    bool clearErrorsOnMapBoundsUpdate;

    ErrorManagerConfiguration(bool clearErrorsOnMapBoundsUpdate_)
    : clearErrorsOnMapBoundsUpdate(std::move(clearErrorsOnMapBoundsUpdate_))
    {}
};
