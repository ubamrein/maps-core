// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from graphicsobjects.djinni

#import "MCRenderLineDescription+Private.h"
#import "DJIMarshal+Private.h"
#import "MCVec2D+Private.h"
#include <cassert>

namespace djinni_generated {

auto RenderLineDescription::toCpp(ObjcType obj) -> CppType
{
    assert(obj);
    return {::djinni::List<::djinni_generated::Vec2D>::toCpp(obj.positions),
            ::djinni::I32::toCpp(obj.styleIndex)};
}

auto RenderLineDescription::fromCpp(const CppType& cpp) -> ObjcType
{
    return [[MCRenderLineDescription alloc] initWithPositions:(::djinni::List<::djinni_generated::Vec2D>::fromCpp(cpp.positions))
                                                   styleIndex:(::djinni::I32::fromCpp(cpp.styleIndex))];
}

} // namespace djinni_generated
