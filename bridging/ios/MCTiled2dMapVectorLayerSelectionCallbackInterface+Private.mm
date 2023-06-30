// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from tiled_vector_layer.djinni

#import "MCTiled2dMapVectorLayerSelectionCallbackInterface+Private.h"
#import "MCTiled2dMapVectorLayerSelectionCallbackInterface.h"
#import "DJICppWrapperCache+Private.h"
#import "DJIError.h"
#import "DJIMarshal+Private.h"
#import "DJIObjcWrapperCache+Private.h"
#import "MCCoord+Private.h"
#import "MCVectorLayerFeatureInfo+Private.h"
#include <exception>
#include <stdexcept>
#include <utility>

static_assert(__has_feature(objc_arc), "Djinni requires ARC to be enabled for this file");

@interface MCTiled2dMapVectorLayerSelectionCallbackInterfaceCppProxy : NSObject<MCTiled2dMapVectorLayerSelectionCallbackInterface>

- (id)initWithCpp:(const std::shared_ptr<::Tiled2dMapVectorLayerSelectionCallbackInterface>&)cppRef;

@end

@implementation MCTiled2dMapVectorLayerSelectionCallbackInterfaceCppProxy {
    ::djinni::CppProxyCache::Handle<std::shared_ptr<::Tiled2dMapVectorLayerSelectionCallbackInterface>> _cppRefHandle;
}

- (id)initWithCpp:(const std::shared_ptr<::Tiled2dMapVectorLayerSelectionCallbackInterface>&)cppRef
{
    if (self = [super init]) {
        _cppRefHandle.assign(cppRef);
    }
    return self;
}

- (void)didSelectFeature:(nonnull MCVectorLayerFeatureInfo *)featureInfo
         layerIdentifier:(nonnull NSString *)layerIdentifier
                   coord:(nonnull MCCoord *)coord {
    try {
        _cppRefHandle.get()->didSelectFeature(::djinni_generated::VectorLayerFeatureInfo::toCpp(featureInfo),
                                              ::djinni::String::toCpp(layerIdentifier),
                                              ::djinni_generated::Coord::toCpp(coord));
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

- (BOOL)didClickBackgroundConfirmed:(nonnull MCCoord *)coord {
    try {
        auto objcpp_result_ = _cppRefHandle.get()->didClickBackgroundConfirmed(::djinni_generated::Coord::toCpp(coord));
        return ::djinni::Bool::fromCpp(objcpp_result_);
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

namespace djinni_generated {

class Tiled2dMapVectorLayerSelectionCallbackInterface::ObjcProxy final
: public ::Tiled2dMapVectorLayerSelectionCallbackInterface
, private ::djinni::ObjcProxyBase<ObjcType>
{
    friend class ::djinni_generated::Tiled2dMapVectorLayerSelectionCallbackInterface;
public:
    using ObjcProxyBase::ObjcProxyBase;
    void didSelectFeature(const ::VectorLayerFeatureInfo & c_featureInfo, const std::string & c_layerIdentifier, const ::Coord & c_coord) override
    {
        @autoreleasepool {
            [djinni_private_get_proxied_objc_object() didSelectFeature:(::djinni_generated::VectorLayerFeatureInfo::fromCpp(c_featureInfo))
                                                       layerIdentifier:(::djinni::String::fromCpp(c_layerIdentifier))
                                                                 coord:(::djinni_generated::Coord::fromCpp(c_coord))];
        }
    }
    bool didClickBackgroundConfirmed(const ::Coord & c_coord) override
    {
        @autoreleasepool {
            auto objcpp_result_ = [djinni_private_get_proxied_objc_object() didClickBackgroundConfirmed:(::djinni_generated::Coord::fromCpp(c_coord))];
            return ::djinni::Bool::toCpp(objcpp_result_);
        }
    }
};

} // namespace djinni_generated

namespace djinni_generated {

auto Tiled2dMapVectorLayerSelectionCallbackInterface::toCpp(ObjcType objc) -> CppType
{
    if (!objc) {
        return nullptr;
    }
    if ([(id)objc isKindOfClass:[MCTiled2dMapVectorLayerSelectionCallbackInterfaceCppProxy class]]) {
        return ((MCTiled2dMapVectorLayerSelectionCallbackInterfaceCppProxy*)objc)->_cppRefHandle.get();
    }
    return ::djinni::get_objc_proxy<ObjcProxy>(objc);
}

auto Tiled2dMapVectorLayerSelectionCallbackInterface::fromCppOpt(const CppOptType& cpp) -> ObjcType
{
    if (!cpp) {
        return nil;
    }
    if (auto cppPtr = dynamic_cast<ObjcProxy*>(cpp.get())) {
        return cppPtr->djinni_private_get_proxied_objc_object();
    }
    return ::djinni::get_cpp_proxy<MCTiled2dMapVectorLayerSelectionCallbackInterfaceCppProxy>(cpp);
}

} // namespace djinni_generated

@end
