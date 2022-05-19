// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from core.djinni

#pragma once

#include <functional>

enum class LayerReadyState : int {
    READY,
    NOT_READY,
    ERROR,
    TIMEOUT_ERROR,
};

namespace std {

template <>
struct hash<::LayerReadyState> {
    size_t operator()(::LayerReadyState type) const {
        return std::hash<int>()(static_cast<int>(type));
    }
};

}  // namespace std
