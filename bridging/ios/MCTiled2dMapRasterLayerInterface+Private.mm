// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from tiled_raster_layer.djinni

#import "MCTiled2dMapRasterLayerInterface+Private.h"
#import "MCTiled2dMapRasterLayerInterface.h"
#import "DJICppWrapperCache+Private.h"
#import "DJIError.h"
#import "MCLayerInterface+Private.h"
#import "MCTextureLoaderInterface+Private.h"
#import "MCTiled2dMapLayerConfig+Private.h"
#include <exception>
#include <stdexcept>
#include <utility>

static_assert(__has_feature(objc_arc), "Djinni requires ARC to be enabled for this file");

@interface MCTiled2dMapRasterLayerInterface ()

- (id)initWithCpp:(const std::shared_ptr<::Tiled2dMapRasterLayerInterface>&)cppRef;

@end

@implementation MCTiled2dMapRasterLayerInterface {
    ::djinni::CppProxyCache::Handle<std::shared_ptr<::Tiled2dMapRasterLayerInterface>> _cppRefHandle;
}

- (id)initWithCpp:(const std::shared_ptr<::Tiled2dMapRasterLayerInterface>&)cppRef
{
    if (self = [super init]) {
        _cppRefHandle.assign(cppRef);
    }
    return self;
}

+ (nullable MCTiled2dMapRasterLayerInterface *)create:(nullable id<MCTiled2dMapLayerConfig>)layerConfig
                                        textureLoader:(nullable id<MCTextureLoaderInterface>)textureLoader {
    try {
        auto objcpp_result_ = ::Tiled2dMapRasterLayerInterface::create(::djinni_generated::Tiled2dMapLayerConfig::toCpp(layerConfig),
                                                                       ::djinni_generated::TextureLoaderInterface::toCpp(textureLoader));
        return ::djinni_generated::Tiled2dMapRasterLayerInterface::fromCpp(objcpp_result_);
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

- (nullable id<MCLayerInterface>)asLayerInterface {
    try {
        auto objcpp_result_ = _cppRefHandle.get()->asLayerInterface();
        return ::djinni_generated::LayerInterface::fromCpp(objcpp_result_);
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

namespace djinni_generated {

auto Tiled2dMapRasterLayerInterface::toCpp(ObjcType objc) -> CppType
{
    if (!objc) {
        return nullptr;
    }
    return objc->_cppRefHandle.get();
}

auto Tiled2dMapRasterLayerInterface::fromCppOpt(const CppOptType& cpp) -> ObjcType
{
    if (!cpp) {
        return nil;
    }
    return ::djinni::get_cpp_proxy<MCTiled2dMapRasterLayerInterface>(cpp);
}

}  // namespace djinni_generated

@end
