// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from core.djinni

#import "MCMapInterface+Private.h"
#import "MCMapInterface.h"
#import "DJICppWrapperCache+Private.h"
#import "DJIError.h"
#import "DJIMarshal+Private.h"
#import "MCColor+Private.h"
#import "MCCoordinateConversionHelperInterface+Private.h"
#import "MCGraphicsObjectFactoryInterface+Private.h"
#import "MCLayerInterface+Private.h"
#import "MCMapCallbackInterface+Private.h"
#import "MCMapCamera2dInterface+Private.h"
#import "MCMapConfig+Private.h"
#import "MCMapReadyCallbackInterface+Private.h"
#import "MCRectCoord+Private.h"
#import "MCRenderingContextInterface+Private.h"
#import "MCSchedulerInterface+Private.h"
#import "MCShaderFactoryInterface+Private.h"
#import "MCTouchHandlerInterface+Private.h"
#import "MCVec2I+Private.h"
#include <exception>
#include <stdexcept>
#include <utility>

static_assert(__has_feature(objc_arc), "Djinni requires ARC to be enabled for this file");

@interface MCMapInterface ()

- (id)initWithCpp:(const std::shared_ptr<::MapInterface>&)cppRef;

@end

@implementation MCMapInterface {
    ::djinni::CppProxyCache::Handle<std::shared_ptr<::MapInterface>> _cppRefHandle;
}

- (id)initWithCpp:(const std::shared_ptr<::MapInterface>&)cppRef
{
    if (self = [super init]) {
        _cppRefHandle.assign(cppRef);
    }
    return self;
}

+ (nullable MCMapInterface *)create:(nullable id<MCGraphicsObjectFactoryInterface>)graphicsFactory
                      shaderFactory:(nullable id<MCShaderFactoryInterface>)shaderFactory
                   renderingContext:(nullable id<MCRenderingContextInterface>)renderingContext
                          mapConfig:(nonnull MCMapConfig *)mapConfig
                          scheduler:(nullable id<MCSchedulerInterface>)scheduler
                       pixelDensity:(float)pixelDensity {
    try {
        auto objcpp_result_ = ::MapInterface::create(::djinni_generated::GraphicsObjectFactoryInterface::toCpp(graphicsFactory),
                                                     ::djinni_generated::ShaderFactoryInterface::toCpp(shaderFactory),
                                                     ::djinni_generated::RenderingContextInterface::toCpp(renderingContext),
                                                     ::djinni_generated::MapConfig::toCpp(mapConfig),
                                                     ::djinni_generated::SchedulerInterface::toCpp(scheduler),
                                                     ::djinni::F32::toCpp(pixelDensity));
        return ::djinni_generated::MapInterface::fromCpp(objcpp_result_);
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

+ (nullable MCMapInterface *)createWithOpenGl:(nonnull MCMapConfig *)mapConfig
                                    scheduler:(nullable id<MCSchedulerInterface>)scheduler
                                 pixelDensity:(float)pixelDensity {
    try {
        auto objcpp_result_ = ::MapInterface::createWithOpenGl(::djinni_generated::MapConfig::toCpp(mapConfig),
                                                               ::djinni_generated::SchedulerInterface::toCpp(scheduler),
                                                               ::djinni::F32::toCpp(pixelDensity));
        return ::djinni_generated::MapInterface::fromCpp(objcpp_result_);
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

- (void)setCallbackHandler:(nullable id<MCMapCallbackInterface>)callbackInterface {
    try {
        _cppRefHandle.get()->setCallbackHandler(::djinni_generated::MapCallbackInterface::toCpp(callbackInterface));
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

- (nullable id<MCGraphicsObjectFactoryInterface>)getGraphicsObjectFactory {
    try {
        auto objcpp_result_ = _cppRefHandle.get()->getGraphicsObjectFactory();
        return ::djinni_generated::GraphicsObjectFactoryInterface::fromCpp(objcpp_result_);
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

- (nullable id<MCShaderFactoryInterface>)getShaderFactory {
    try {
        auto objcpp_result_ = _cppRefHandle.get()->getShaderFactory();
        return ::djinni_generated::ShaderFactoryInterface::fromCpp(objcpp_result_);
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

- (nullable id<MCSchedulerInterface>)getScheduler {
    try {
        auto objcpp_result_ = _cppRefHandle.get()->getScheduler();
        return ::djinni_generated::SchedulerInterface::fromCpp(objcpp_result_);
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

- (nullable id<MCRenderingContextInterface>)getRenderingContext {
    try {
        auto objcpp_result_ = _cppRefHandle.get()->getRenderingContext();
        return ::djinni_generated::RenderingContextInterface::fromCpp(objcpp_result_);
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

- (nonnull MCMapConfig *)getMapConfig {
    try {
        auto objcpp_result_ = _cppRefHandle.get()->getMapConfig();
        return ::djinni_generated::MapConfig::fromCpp(objcpp_result_);
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

- (nullable MCCoordinateConversionHelperInterface *)getCoordinateConverterHelper {
    try {
        auto objcpp_result_ = _cppRefHandle.get()->getCoordinateConverterHelper();
        return ::djinni_generated::CoordinateConversionHelperInterface::fromCpp(objcpp_result_);
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

- (void)setCamera:(nullable MCMapCamera2dInterface *)camera {
    try {
        _cppRefHandle.get()->setCamera(::djinni_generated::MapCamera2dInterface::toCpp(camera));
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

- (nullable MCMapCamera2dInterface *)getCamera {
    try {
        auto objcpp_result_ = _cppRefHandle.get()->getCamera();
        return ::djinni_generated::MapCamera2dInterface::fromCpp(objcpp_result_);
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

- (void)setTouchHandler:(nullable id<MCTouchHandlerInterface>)touchHandler {
    try {
        _cppRefHandle.get()->setTouchHandler(::djinni_generated::TouchHandlerInterface::toCpp(touchHandler));
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

- (nullable id<MCTouchHandlerInterface>)getTouchHandler {
    try {
        auto objcpp_result_ = _cppRefHandle.get()->getTouchHandler();
        return ::djinni_generated::TouchHandlerInterface::fromCpp(objcpp_result_);
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

- (nonnull NSArray<id<MCLayerInterface>> *)getLayers {
    try {
        auto objcpp_result_ = _cppRefHandle.get()->getLayers();
        return ::djinni::List<::djinni_generated::LayerInterface>::fromCpp(objcpp_result_);
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

- (void)addLayer:(nullable id<MCLayerInterface>)layer {
    try {
        _cppRefHandle.get()->addLayer(::djinni_generated::LayerInterface::toCpp(layer));
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

- (void)insertLayerAt:(nullable id<MCLayerInterface>)layer
              atIndex:(int32_t)atIndex {
    try {
        _cppRefHandle.get()->insertLayerAt(::djinni_generated::LayerInterface::toCpp(layer),
                                           ::djinni::I32::toCpp(atIndex));
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

- (void)insertLayerAbove:(nullable id<MCLayerInterface>)layer
                   above:(nullable id<MCLayerInterface>)above {
    try {
        _cppRefHandle.get()->insertLayerAbove(::djinni_generated::LayerInterface::toCpp(layer),
                                              ::djinni_generated::LayerInterface::toCpp(above));
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

- (void)insertLayerBelow:(nullable id<MCLayerInterface>)layer
                   below:(nullable id<MCLayerInterface>)below {
    try {
        _cppRefHandle.get()->insertLayerBelow(::djinni_generated::LayerInterface::toCpp(layer),
                                              ::djinni_generated::LayerInterface::toCpp(below));
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

- (void)removeLayer:(nullable id<MCLayerInterface>)layer {
    try {
        _cppRefHandle.get()->removeLayer(::djinni_generated::LayerInterface::toCpp(layer));
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

- (void)setViewportSize:(nonnull MCVec2I *)size {
    try {
        _cppRefHandle.get()->setViewportSize(::djinni_generated::Vec2I::toCpp(size));
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

- (void)setBackgroundColor:(nonnull MCColor *)color {
    try {
        _cppRefHandle.get()->setBackgroundColor(::djinni_generated::Color::toCpp(color));
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

- (void)invalidate {
    try {
        _cppRefHandle.get()->invalidate();
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

- (void)drawFrame {
    try {
        _cppRefHandle.get()->drawFrame();
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

- (void)resume {
    try {
        _cppRefHandle.get()->resume();
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

- (void)pause {
    try {
        _cppRefHandle.get()->pause();
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

- (void)drawReadyFrame:(nonnull MCRectCoord *)bounds
               timeout:(float)timeout
             callbacks:(nullable id<MCMapReadyCallbackInterface>)callbacks {
    try {
        _cppRefHandle.get()->drawReadyFrame(::djinni_generated::RectCoord::toCpp(bounds),
                                            ::djinni::F32::toCpp(timeout),
                                            ::djinni_generated::MapReadyCallbackInterface::toCpp(callbacks));
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

namespace djinni_generated {

auto MapInterface::toCpp(ObjcType objc) -> CppType
{
    if (!objc) {
        return nullptr;
    }
    return objc->_cppRefHandle.get();
}

auto MapInterface::fromCppOpt(const CppOptType& cpp) -> ObjcType
{
    if (!cpp) {
        return nil;
    }
    return ::djinni::get_cpp_proxy<MCMapInterface>(cpp);
}

}  // namespace djinni_generated

@end
