// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from shader.djinni

#import "MCColorLineShaderInterface+Private.h"
#import "MCColorLineShaderInterface.h"
#import "DJICppWrapperCache+Private.h"
#import "DJIError.h"
#import "DJIMarshal+Private.h"
#import "DJIObjcWrapperCache+Private.h"
#import "MCLineStyle+Private.h"
#import "MCShaderProgramInterface+Private.h"
#include <exception>
#include <stdexcept>
#include <utility>

static_assert(__has_feature(objc_arc), "Djinni requires ARC to be enabled for this file");

@interface MCColorLineShaderInterfaceCppProxy : NSObject<MCColorLineShaderInterface>

- (id)initWithCpp:(const std::shared_ptr<::ColorLineShaderInterface>&)cppRef;

@end

@implementation MCColorLineShaderInterfaceCppProxy {
    ::djinni::CppProxyCache::Handle<std::shared_ptr<::ColorLineShaderInterface>> _cppRefHandle;
}

- (id)initWithCpp:(const std::shared_ptr<::ColorLineShaderInterface>&)cppRef
{
    if (self = [super init]) {
        _cppRefHandle.assign(cppRef);
    }
    return self;
}

- (void)setStyle:(nonnull MCLineStyle *)lineStyle {
    try {
        _cppRefHandle.get()->setStyle(::djinni_generated::LineStyle::toCpp(lineStyle));
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

- (void)setHighlighted:(BOOL)highlighted {
    try {
        _cppRefHandle.get()->setHighlighted(::djinni::Bool::toCpp(highlighted));
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

- (nullable id<MCShaderProgramInterface>)asShaderProgramInterface {
    try {
        auto objcpp_result_ = _cppRefHandle.get()->asShaderProgramInterface();
        return ::djinni_generated::ShaderProgramInterface::fromCpp(objcpp_result_);
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

namespace djinni_generated {

class ColorLineShaderInterface::ObjcProxy final
: public ::ColorLineShaderInterface
, private ::djinni::ObjcProxyBase<ObjcType>
{
    friend class ::djinni_generated::ColorLineShaderInterface;
public:
    using ObjcProxyBase::ObjcProxyBase;
    void setStyle(const ::LineStyle & c_lineStyle) override
    {
        @autoreleasepool {
            [djinni_private_get_proxied_objc_object() setStyle:(::djinni_generated::LineStyle::fromCpp(c_lineStyle))];
        }
    }
    void setHighlighted(bool c_highlighted) override
    {
        @autoreleasepool {
            [djinni_private_get_proxied_objc_object() setHighlighted:(::djinni::Bool::fromCpp(c_highlighted))];
        }
    }
    std::shared_ptr<::ShaderProgramInterface> asShaderProgramInterface() override
    {
        @autoreleasepool {
            auto objcpp_result_ = [djinni_private_get_proxied_objc_object() asShaderProgramInterface];
            return ::djinni_generated::ShaderProgramInterface::toCpp(objcpp_result_);
        }
    }
};

}  // namespace djinni_generated

namespace djinni_generated {

auto ColorLineShaderInterface::toCpp(ObjcType objc) -> CppType
{
    if (!objc) {
        return nullptr;
    }
    if ([(id)objc isKindOfClass:[MCColorLineShaderInterfaceCppProxy class]]) {
        return ((MCColorLineShaderInterfaceCppProxy*)objc)->_cppRefHandle.get();
    }
    return ::djinni::get_objc_proxy<ObjcProxy>(objc);
}

auto ColorLineShaderInterface::fromCppOpt(const CppOptType& cpp) -> ObjcType
{
    if (!cpp) {
        return nil;
    }
    if (auto cppPtr = dynamic_cast<ObjcProxy*>(cpp.get())) {
        return cppPtr->djinni_private_get_proxied_objc_object();
    }
    return ::djinni::get_cpp_proxy<MCColorLineShaderInterfaceCppProxy>(cpp);
}

}  // namespace djinni_generated

@end