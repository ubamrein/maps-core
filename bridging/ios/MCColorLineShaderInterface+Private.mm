// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from shader.djinni

#import "MCColorLineShaderInterface+Private.h"
#import "MCColorLineShaderInterface.h"
#import "DJICppWrapperCache+Private.h"
#import "DJIError.h"
#import "DJIMarshal+Private.h"
#import "DJIObjcWrapperCache+Private.h"
#import "MCLineShaderProgramInterface+Private.h"
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

- (void)setColor:(float)red
           green:(float)green
            blue:(float)blue
           alpha:(float)alpha {
    try {
        _cppRefHandle.get()->setColor(::djinni::F32::toCpp(red),
                                      ::djinni::F32::toCpp(green),
                                      ::djinni::F32::toCpp(blue),
                                      ::djinni::F32::toCpp(alpha));
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

- (void)setMiter:(float)miter {
    try {
        _cppRefHandle.get()->setMiter(::djinni::F32::toCpp(miter));
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

- (nullable id<MCLineShaderProgramInterface>)asLineShaderProgramInterface {
    try {
        auto objcpp_result_ = _cppRefHandle.get()->asLineShaderProgramInterface();
        return ::djinni_generated::LineShaderProgramInterface::fromCpp(objcpp_result_);
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
    void setColor(float c_red, float c_green, float c_blue, float c_alpha) override
    {
        @autoreleasepool {
            [djinni_private_get_proxied_objc_object() setColor:(::djinni::F32::fromCpp(c_red))
                                                         green:(::djinni::F32::fromCpp(c_green))
                                                          blue:(::djinni::F32::fromCpp(c_blue))
                                                         alpha:(::djinni::F32::fromCpp(c_alpha))];
        }
    }
    void setMiter(float c_miter) override
    {
        @autoreleasepool {
            [djinni_private_get_proxied_objc_object() setMiter:(::djinni::F32::fromCpp(c_miter))];
        }
    }
    std::shared_ptr<::LineShaderProgramInterface> asLineShaderProgramInterface() override
    {
        @autoreleasepool {
            auto objcpp_result_ = [djinni_private_get_proxied_objc_object() asLineShaderProgramInterface];
            return ::djinni_generated::LineShaderProgramInterface::toCpp(objcpp_result_);
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
