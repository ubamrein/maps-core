// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from touch_handler.djinni

#import "MCTouchHandlerInterface+Private.h"
#import "MCTouchHandlerInterface.h"
#import "DJICppWrapperCache+Private.h"
#import "DJIError.h"
#import "DJIObjcWrapperCache+Private.h"
#import "MCTouchEvent+Private.h"
#import "MCTouchInterface+Private.h"
#include <exception>
#include <stdexcept>
#include <utility>

static_assert(__has_feature(objc_arc), "Djinni requires ARC to be enabled for this file");

@interface MCTouchHandlerInterfaceCppProxy : NSObject<MCTouchHandlerInterface>

- (id)initWithCpp:(const std::shared_ptr<::TouchHandlerInterface>&)cppRef;

@end

@implementation MCTouchHandlerInterfaceCppProxy {
    ::djinni::CppProxyCache::Handle<std::shared_ptr<::TouchHandlerInterface>> _cppRefHandle;
}

- (id)initWithCpp:(const std::shared_ptr<::TouchHandlerInterface>&)cppRef
{
    if (self = [super init]) {
        _cppRefHandle.assign(cppRef);
    }
    return self;
}

- (void)onTouchEvent:(nonnull MCTouchEvent *)touchEvent {
    try {
        _cppRefHandle.get()->onTouchEvent(::djinni_generated::TouchEvent::toCpp(touchEvent));
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

- (void)addListener:(nullable MCTouchInterface *)listener {
    try {
        _cppRefHandle.get()->addListener(::djinni_generated::TouchInterface::toCpp(listener));
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

- (void)removeListener:(nullable MCTouchInterface *)listener {
    try {
        _cppRefHandle.get()->removeListener(::djinni_generated::TouchInterface::toCpp(listener));
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

namespace djinni_generated {

class TouchHandlerInterface::ObjcProxy final
: public ::TouchHandlerInterface
, private ::djinni::ObjcProxyBase<ObjcType>
{
    friend class ::djinni_generated::TouchHandlerInterface;
public:
    using ObjcProxyBase::ObjcProxyBase;
    void onTouchEvent(const ::TouchEvent & c_touchEvent) override
    {
        @autoreleasepool {
            [djinni_private_get_proxied_objc_object() onTouchEvent:(::djinni_generated::TouchEvent::fromCpp(c_touchEvent))];
        }
    }
    void addListener(const std::shared_ptr<::TouchInterface> & c_listener) override
    {
        @autoreleasepool {
            [djinni_private_get_proxied_objc_object() addListener:(::djinni_generated::TouchInterface::fromCpp(c_listener))];
        }
    }
    void removeListener(const std::shared_ptr<::TouchInterface> & c_listener) override
    {
        @autoreleasepool {
            [djinni_private_get_proxied_objc_object() removeListener:(::djinni_generated::TouchInterface::fromCpp(c_listener))];
        }
    }
};

}  // namespace djinni_generated

namespace djinni_generated {

auto TouchHandlerInterface::toCpp(ObjcType objc) -> CppType
{
    if (!objc) {
        return nullptr;
    }
    if ([(id)objc isKindOfClass:[MCTouchHandlerInterfaceCppProxy class]]) {
        return ((MCTouchHandlerInterfaceCppProxy*)objc)->_cppRefHandle.get();
    }
    return ::djinni::get_objc_proxy<ObjcProxy>(objc);
}

auto TouchHandlerInterface::fromCppOpt(const CppOptType& cpp) -> ObjcType
{
    if (!cpp) {
        return nil;
    }
    if (auto cppPtr = dynamic_cast<ObjcProxy*>(cpp.get())) {
        return cppPtr->djinni_private_get_proxied_objc_object();
    }
    return ::djinni::get_cpp_proxy<MCTouchHandlerInterfaceCppProxy>(cpp);
}

}  // namespace djinni_generated

@end
