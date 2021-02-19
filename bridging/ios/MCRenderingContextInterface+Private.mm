// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from core.djinni

#import "MCRenderingContextInterface+Private.h"
#import "MCRenderingContextInterface.h"
#import "DJICppWrapperCache+Private.h"
#import "DJIError.h"
#import "DJIObjcWrapperCache+Private.h"
#import "MCColor+Private.h"
#import "MCVec2I+Private.h"
#include <exception>
#include <stdexcept>
#include <utility>

static_assert(__has_feature(objc_arc), "Djinni requires ARC to be enabled for this file");

@interface MCRenderingContextInterfaceCppProxy : NSObject<MCRenderingContextInterface>

- (id)initWithCpp:(const std::shared_ptr<::RenderingContextInterface>&)cppRef;

@end

@implementation MCRenderingContextInterfaceCppProxy {
    ::djinni::CppProxyCache::Handle<std::shared_ptr<::RenderingContextInterface>> _cppRefHandle;
}

- (id)initWithCpp:(const std::shared_ptr<::RenderingContextInterface>&)cppRef
{
    if (self = [super init]) {
        _cppRefHandle.assign(cppRef);
    }
    return self;
}

- (void)onSurfaceCreated {
    try {
        _cppRefHandle.get()->onSurfaceCreated();
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

- (void)setViewportSize:(nonnull MCVec2I *)size {
    try {
        _cppRefHandle.get()->setViewportSize(::djinni_generated::Vec2I::toCpp(size));
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

- (nonnull MCVec2I *)getViewportSize {
    try {
        auto objcpp_result_ = _cppRefHandle.get()->getViewportSize();
        return ::djinni_generated::Vec2I::fromCpp(objcpp_result_);
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

- (void)setBackgroundColor:(nonnull MCColor *)color {
    try {
        _cppRefHandle.get()->setBackgroundColor(::djinni_generated::Color::toCpp(color));
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

- (void)setupDrawFrame {
    try {
        _cppRefHandle.get()->setupDrawFrame();
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

namespace djinni_generated {

class RenderingContextInterface::ObjcProxy final
: public ::RenderingContextInterface
, private ::djinni::ObjcProxyBase<ObjcType>
{
    friend class ::djinni_generated::RenderingContextInterface;
public:
    using ObjcProxyBase::ObjcProxyBase;
    void onSurfaceCreated() override
    {
        @autoreleasepool {
            [djinni_private_get_proxied_objc_object() onSurfaceCreated];
        }
    }
    void setViewportSize(const ::Vec2I & c_size) override
    {
        @autoreleasepool {
            [djinni_private_get_proxied_objc_object() setViewportSize:(::djinni_generated::Vec2I::fromCpp(c_size))];
        }
    }
    ::Vec2I getViewportSize() override
    {
        @autoreleasepool {
            auto objcpp_result_ = [djinni_private_get_proxied_objc_object() getViewportSize];
            return ::djinni_generated::Vec2I::toCpp(objcpp_result_);
        }
    }
    void setBackgroundColor(const ::Color & c_color) override
    {
        @autoreleasepool {
            [djinni_private_get_proxied_objc_object() setBackgroundColor:(::djinni_generated::Color::fromCpp(c_color))];
        }
    }
    void setupDrawFrame() override
    {
        @autoreleasepool {
            [djinni_private_get_proxied_objc_object() setupDrawFrame];
        }
    }
};

}  // namespace djinni_generated

namespace djinni_generated {

auto RenderingContextInterface::toCpp(ObjcType objc) -> CppType
{
    if (!objc) {
        return nullptr;
    }
    if ([(id)objc isKindOfClass:[MCRenderingContextInterfaceCppProxy class]]) {
        return ((MCRenderingContextInterfaceCppProxy*)objc)->_cppRefHandle.get();
    }
    return ::djinni::get_objc_proxy<ObjcProxy>(objc);
}

auto RenderingContextInterface::fromCppOpt(const CppOptType& cpp) -> ObjcType
{
    if (!cpp) {
        return nil;
    }
    if (auto cppPtr = dynamic_cast<ObjcProxy*>(cpp.get())) {
        return cppPtr->djinni_private_get_proxied_objc_object();
    }
    return ::djinni::get_cpp_proxy<MCRenderingContextInterfaceCppProxy>(cpp);
}

}  // namespace djinni_generated

@end
