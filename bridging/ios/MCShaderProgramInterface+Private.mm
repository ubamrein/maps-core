// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from shader.djinni

#import "MCShaderProgramInterface+Private.h"
#import "MCShaderProgramInterface.h"
#import "DJICppWrapperCache+Private.h"
#import "DJIError.h"
#import "DJIMarshal+Private.h"
#import "DJIObjcWrapperCache+Private.h"
#import "MCRenderingContextInterface+Private.h"
#include <exception>
#include <stdexcept>
#include <utility>

static_assert(__has_feature(objc_arc), "Djinni requires ARC to be enabled for this file");

@interface MCShaderProgramInterfaceCppProxy : NSObject<MCShaderProgramInterface>

- (id)initWithCpp:(const std::shared_ptr<::ShaderProgramInterface>&)cppRef;

@end

@implementation MCShaderProgramInterfaceCppProxy {
    ::djinni::CppProxyCache::Handle<std::shared_ptr<::ShaderProgramInterface>> _cppRefHandle;
}

- (id)initWithCpp:(const std::shared_ptr<::ShaderProgramInterface>&)cppRef
{
    if (self = [super init]) {
        _cppRefHandle.assign(cppRef);
    }
    return self;
}

- (nonnull NSString *)getProgramName {
    try {
        auto objcpp_result_ = _cppRefHandle.get()->getProgramName();
        return ::djinni::String::fromCpp(objcpp_result_);
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

- (void)setupProgram:(nullable id<MCRenderingContextInterface>)context {
    try {
        _cppRefHandle.get()->setupProgram(::djinni_generated::RenderingContextInterface::toCpp(context));
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

- (void)preRender:(nullable id<MCRenderingContextInterface>)context {
    try {
        _cppRefHandle.get()->preRender(::djinni_generated::RenderingContextInterface::toCpp(context));
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

namespace djinni_generated {

class ShaderProgramInterface::ObjcProxy final
: public ::ShaderProgramInterface
, private ::djinni::ObjcProxyBase<ObjcType>
{
    friend class ::djinni_generated::ShaderProgramInterface;
public:
    using ObjcProxyBase::ObjcProxyBase;
    std::string getProgramName() override
    {
        @autoreleasepool {
            auto objcpp_result_ = [djinni_private_get_proxied_objc_object() getProgramName];
            return ::djinni::String::toCpp(objcpp_result_);
        }
    }
    void setupProgram(const std::shared_ptr<::RenderingContextInterface> & c_context) override
    {
        @autoreleasepool {
            [djinni_private_get_proxied_objc_object() setupProgram:(::djinni_generated::RenderingContextInterface::fromCpp(c_context))];
        }
    }
    void preRender(const std::shared_ptr<::RenderingContextInterface> & c_context) override
    {
        @autoreleasepool {
            [djinni_private_get_proxied_objc_object() preRender:(::djinni_generated::RenderingContextInterface::fromCpp(c_context))];
        }
    }
};

}  // namespace djinni_generated

namespace djinni_generated {

auto ShaderProgramInterface::toCpp(ObjcType objc) -> CppType
{
    if (!objc) {
        return nullptr;
    }
    if ([(id)objc isKindOfClass:[MCShaderProgramInterfaceCppProxy class]]) {
        return ((MCShaderProgramInterfaceCppProxy*)objc)->_cppRefHandle.get();
    }
    return ::djinni::get_objc_proxy<ObjcProxy>(objc);
}

auto ShaderProgramInterface::fromCppOpt(const CppOptType& cpp) -> ObjcType
{
    if (!cpp) {
        return nil;
    }
    if (auto cppPtr = dynamic_cast<ObjcProxy*>(cpp.get())) {
        return cppPtr->djinni_private_get_proxied_objc_object();
    }
    return ::djinni::get_cpp_proxy<MCShaderProgramInterfaceCppProxy>(cpp);
}

}  // namespace djinni_generated

@end
