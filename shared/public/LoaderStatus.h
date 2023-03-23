// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from loader.djinni

#pragma once

#include <functional>

enum class LoaderStatus : int {
    OK,
    ERROR_400,
    ERROR_404,
    ERROR_TIMEOUT,
    ERROR_NETWORK,
    ERROR_OTHER,
    NOOP,
};

namespace std {

template <>
struct hash<::LoaderStatus> {
    size_t operator()(::LoaderStatus type) const {
        return std::hash<int>()(static_cast<int>(type));
    }
};

}  // namespace std
