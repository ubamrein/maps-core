// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from text.djinni

#import "MCTextInfoInterface+Private.h"
#import "MCTextInfoInterface.h"
#import "DJICppWrapperCache+Private.h"
#import "DJIError.h"
#import "DJIMarshal+Private.h"
#import "DJIObjcWrapperCache+Private.h"
#import "MCAnchor+Private.h"
#import "MCCoord+Private.h"
#import "MCFont+Private.h"
#import "MCFormattedStringEntry+Private.h"
#import "MCTextJustify+Private.h"
#import "MCTextSymbolPlacement+Private.h"
#include <exception>
#include <stdexcept>
#include <utility>

static_assert(__has_feature(objc_arc), "Djinni requires ARC to be enabled for this file");

@interface MCTextInfoInterfaceCppProxy : NSObject<MCTextInfoInterface>

- (id)initWithCpp:(const std::shared_ptr<::TextInfoInterface>&)cppRef;

@end

@implementation MCTextInfoInterfaceCppProxy {
    ::djinni::CppProxyCache::Handle<std::shared_ptr<::TextInfoInterface>> _cppRefHandle;
}

- (id)initWithCpp:(const std::shared_ptr<::TextInfoInterface>&)cppRef
{
    if (self = [super init]) {
        _cppRefHandle.assign(cppRef);
    }
    return self;
}

- (nonnull NSArray<MCFormattedStringEntry *> *)getText {
    try {
        auto objcpp_result_ = _cppRefHandle.get()->getText();
        return ::djinni::List<::djinni_generated::FormattedStringEntry>::fromCpp(objcpp_result_);
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

- (nonnull MCCoord *)getCoordinate {
    try {
        auto objcpp_result_ = _cppRefHandle.get()->getCoordinate();
        return ::djinni_generated::Coord::fromCpp(objcpp_result_);
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

- (nonnull MCFont *)getFont {
    try {
        auto objcpp_result_ = _cppRefHandle.get()->getFont();
        return ::djinni_generated::Font::fromCpp(objcpp_result_);
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

- (MCAnchor)getTextAnchor {
    try {
        auto objcpp_result_ = _cppRefHandle.get()->getTextAnchor();
        return ::djinni::Enum<::Anchor, MCAnchor>::fromCpp(objcpp_result_);
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

- (MCTextJustify)getTextJustify {
    try {
        auto objcpp_result_ = _cppRefHandle.get()->getTextJustify();
        return ::djinni::Enum<::TextJustify, MCTextJustify>::fromCpp(objcpp_result_);
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

- (MCTextSymbolPlacement)getSymbolPlacement {
    try {
        auto objcpp_result_ = _cppRefHandle.get()->getSymbolPlacement();
        return ::djinni::Enum<::TextSymbolPlacement, MCTextSymbolPlacement>::fromCpp(objcpp_result_);
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

- (nullable NSArray<MCCoord *> *)getLineCoordinates {
    try {
        auto objcpp_result_ = _cppRefHandle.get()->getLineCoordinates();
        return ::djinni::Optional<std::optional, ::djinni::List<::djinni_generated::Coord>>::fromCpp(objcpp_result_);
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

namespace djinni_generated {

class TextInfoInterface::ObjcProxy final
: public ::TextInfoInterface
, private ::djinni::ObjcProxyBase<ObjcType>
{
    friend class ::djinni_generated::TextInfoInterface;
public:
    using ObjcProxyBase::ObjcProxyBase;
    std::vector<::FormattedStringEntry> getText() override
    {
        @autoreleasepool {
            auto objcpp_result_ = [djinni_private_get_proxied_objc_object() getText];
            return ::djinni::List<::djinni_generated::FormattedStringEntry>::toCpp(objcpp_result_);
        }
    }
    ::Coord getCoordinate() override
    {
        @autoreleasepool {
            auto objcpp_result_ = [djinni_private_get_proxied_objc_object() getCoordinate];
            return ::djinni_generated::Coord::toCpp(objcpp_result_);
        }
    }
    ::Font getFont() override
    {
        @autoreleasepool {
            auto objcpp_result_ = [djinni_private_get_proxied_objc_object() getFont];
            return ::djinni_generated::Font::toCpp(objcpp_result_);
        }
    }
    ::Anchor getTextAnchor() override
    {
        @autoreleasepool {
            auto objcpp_result_ = [djinni_private_get_proxied_objc_object() getTextAnchor];
            return ::djinni::Enum<::Anchor, MCAnchor>::toCpp(objcpp_result_);
        }
    }
    ::TextJustify getTextJustify() override
    {
        @autoreleasepool {
            auto objcpp_result_ = [djinni_private_get_proxied_objc_object() getTextJustify];
            return ::djinni::Enum<::TextJustify, MCTextJustify>::toCpp(objcpp_result_);
        }
    }
    ::TextSymbolPlacement getSymbolPlacement() override
    {
        @autoreleasepool {
            auto objcpp_result_ = [djinni_private_get_proxied_objc_object() getSymbolPlacement];
            return ::djinni::Enum<::TextSymbolPlacement, MCTextSymbolPlacement>::toCpp(objcpp_result_);
        }
    }
    std::optional<std::vector<::Coord>> getLineCoordinates() override
    {
        @autoreleasepool {
            auto objcpp_result_ = [djinni_private_get_proxied_objc_object() getLineCoordinates];
            return ::djinni::Optional<std::optional, ::djinni::List<::djinni_generated::Coord>>::toCpp(objcpp_result_);
        }
    }
};

} // namespace djinni_generated

namespace djinni_generated {

auto TextInfoInterface::toCpp(ObjcType objc) -> CppType
{
    if (!objc) {
        return nullptr;
    }
    if ([(id)objc isKindOfClass:[MCTextInfoInterfaceCppProxy class]]) {
        return ((MCTextInfoInterfaceCppProxy*)objc)->_cppRefHandle.get();
    }
    return ::djinni::get_objc_proxy<ObjcProxy>(objc);
}

auto TextInfoInterface::fromCppOpt(const CppOptType& cpp) -> ObjcType
{
    if (!cpp) {
        return nil;
    }
    if (auto cppPtr = dynamic_cast<ObjcProxy*>(cpp.get())) {
        return cppPtr->djinni_private_get_proxied_objc_object();
    }
    return ::djinni::get_cpp_proxy<MCTextInfoInterfaceCppProxy>(cpp);
}

} // namespace djinni_generated

@end
