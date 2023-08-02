// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from common.djinni

#import "MCCircleI+Private.h"
#import "DJIMarshal+Private.h"
#import "MCVec2I+Private.h"
#include <cassert>

namespace djinni_generated {

auto CircleI::toCpp(ObjcType obj) -> CppType
{
    assert(obj);
    return {::djinni_generated::Vec2I::toCpp(obj.origin),
            ::djinni::I32::toCpp(obj.radius)};
}

auto CircleI::fromCpp(const CppType& cpp) -> ObjcType
{
    return [[MCCircleI alloc] initWithOrigin:(::djinni_generated::Vec2I::fromCpp(cpp.origin))
                                      radius:(::djinni::I32::fromCpp(cpp.radius))];
}

} // namespace djinni_generated
