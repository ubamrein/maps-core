// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from common.djinni

#import "MCVec2D+Private.h"
#import "DJIMarshal+Private.h"
#include <cassert>

namespace djinni_generated {

auto Vec2D::toCpp(ObjcType obj) -> CppType
{
    assert(obj);
    return {::djinni::F64::toCpp(obj.x),
            ::djinni::F64::toCpp(obj.y)};
}

auto Vec2D::fromCpp(const CppType& cpp) -> ObjcType
{
    return [[MCVec2D alloc] initWithX:(::djinni::F64::fromCpp(cpp.x))
                                    y:(::djinni::F64::fromCpp(cpp.y))];
}

} // namespace djinni_generated
