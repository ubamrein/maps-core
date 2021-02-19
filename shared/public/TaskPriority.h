// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from task_scheduler.djinni

#pragma once

#include <functional>

enum class TaskPriority : int {
    HIGH,
    NORMAL,
    LOW,
};

namespace std {

template <>
struct hash<::TaskPriority> {
    size_t operator()(::TaskPriority type) const {
        return std::hash<int>()(static_cast<int>(type));
    }
};

}  // namespace std
