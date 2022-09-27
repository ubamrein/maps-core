// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from common.djinni

#include "Color.h"  // my header


bool operator==(const Color& lhs, const Color& rhs) {
    return lhs.r == rhs.r &&
           lhs.g == rhs.g &&
           lhs.b == rhs.b &&
           lhs.a == rhs.a;
}

bool operator!=(const Color& lhs, const Color& rhs) {
    return !(lhs == rhs);
}

bool operator<(const Color& lhs, const Color& rhs) {
    if (lhs.r < rhs.r) {
        return true;
    }
    if (rhs.r < lhs.r) {
        return false;
    }
    if (lhs.g < rhs.g) {
        return true;
    }
    if (rhs.g < lhs.g) {
        return false;
    }
    if (lhs.b < rhs.b) {
        return true;
    }
    if (rhs.b < lhs.b) {
        return false;
    }
    if (lhs.a < rhs.a) {
        return true;
    }
    if (rhs.a < lhs.a) {
        return false;
    }
    return false;
}

bool operator>(const Color& lhs, const Color& rhs) {
    return rhs < lhs;
}

bool operator<=(const Color& lhs, const Color& rhs) {
    return !(rhs < lhs);
}

bool operator>=(const Color& lhs, const Color& rhs) {
    return !(lhs < rhs);
}