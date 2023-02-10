// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from maps_core.djinni

#import "MCMapsCoreSharedModule+Private.h"
#import "MCMapsCoreSharedModule.h"
#import "DJICppWrapperCache+Private.h"
#import "DJIError.h"
#import "DJIMarshal+Private.h"
#include <exception>
#include <stdexcept>
#include <utility>

static_assert(__has_feature(objc_arc), "Djinni requires ARC to be enabled for this file");

@interface MCMapsCoreSharedModule ()

- (id)initWithCpp:(const std::shared_ptr<::MapsCoreSharedModule>&)cppRef;

@end

@implementation MCMapsCoreSharedModule {
    ::djinni::CppProxyCache::Handle<std::shared_ptr<::MapsCoreSharedModule>> _cppRefHandle;
}

- (id)initWithCpp:(const std::shared_ptr<::MapsCoreSharedModule>&)cppRef
{
    if (self = [super init]) {
        _cppRefHandle.assign(cppRef);
    }
    return self;
}

+ (nonnull NSString *)version {
    try {
        auto objcpp_result_ = ::MapsCoreSharedModule::version();
        return ::djinni::String::fromCpp(objcpp_result_);
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

namespace djinni_generated {

auto MapsCoreSharedModule::toCpp(ObjcType objc) -> CppType
{
    if (!objc) {
        return nullptr;
    }
    return objc->_cppRefHandle.get();
}

auto MapsCoreSharedModule::fromCppOpt(const CppOptType& cpp) -> ObjcType
{
    if (!cpp) {
        return nil;
    }
    return ::djinni::get_cpp_proxy<MCMapsCoreSharedModule>(cpp);
}

} // namespace djinni_generated

@end
