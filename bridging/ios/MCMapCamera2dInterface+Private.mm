// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from core.djinni

#import "MCMapCamera2dInterface+Private.h"
#import "MCMapCamera2dInterface.h"
#import "DJICppWrapperCache+Private.h"
#import "DJIError.h"
#import "DJIMarshal+Private.h"
#import "MCCameraInterface+Private.h"
#import "MCCoord+Private.h"
#import "MCMapCamera2dListenerInterface+Private.h"
#import "MCMapInterface+Private.h"
#import "MCRectCoord+Private.h"
#import "MCVec2F+Private.h"
#include <exception>
#include <stdexcept>
#include <utility>

static_assert(__has_feature(objc_arc), "Djinni requires ARC to be enabled for this file");

@interface MCMapCamera2dInterface ()

- (id)initWithCpp:(const std::shared_ptr<::MapCamera2dInterface>&)cppRef;

@end

@implementation MCMapCamera2dInterface {
    ::djinni::CppProxyCache::Handle<std::shared_ptr<::MapCamera2dInterface>> _cppRefHandle;
}

- (id)initWithCpp:(const std::shared_ptr<::MapCamera2dInterface>&)cppRef
{
    if (self = [super init]) {
        _cppRefHandle.assign(cppRef);
    }
    return self;
}

+ (nullable MCMapCamera2dInterface *)create:(nullable MCMapInterface *)mapInterface
                           screenDensityPpi:(float)screenDensityPpi {
    try {
        auto objcpp_result_ = ::MapCamera2dInterface::create(::djinni_generated::MapInterface::toCpp(mapInterface),
                                                             ::djinni::F32::toCpp(screenDensityPpi));
        return ::djinni_generated::MapCamera2dInterface::fromCpp(objcpp_result_);
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

- (void)moveToCenterPositionZoom:(nonnull MCCoord *)centerPosition
                            zoom:(double)zoom
                        animated:(BOOL)animated {
    try {
        _cppRefHandle.get()->moveToCenterPositionZoom(::djinni_generated::Coord::toCpp(centerPosition),
                                                      ::djinni::F64::toCpp(zoom),
                                                      ::djinni::Bool::toCpp(animated));
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

- (void)moveToCenterPosition:(nonnull MCCoord *)centerPosition
                    animated:(BOOL)animated {
    try {
        _cppRefHandle.get()->moveToCenterPosition(::djinni_generated::Coord::toCpp(centerPosition),
                                                  ::djinni::Bool::toCpp(animated));
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

- (nonnull MCCoord *)getCenterPosition {
    try {
        auto objcpp_result_ = _cppRefHandle.get()->getCenterPosition();
        return ::djinni_generated::Coord::fromCpp(objcpp_result_);
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

- (void)setZoom:(double)zoom
       animated:(BOOL)animated {
    try {
        _cppRefHandle.get()->setZoom(::djinni::F64::toCpp(zoom),
                                     ::djinni::Bool::toCpp(animated));
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

- (double)getZoom {
    try {
        auto objcpp_result_ = _cppRefHandle.get()->getZoom();
        return ::djinni::F64::fromCpp(objcpp_result_);
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

- (void)setRotation:(float)angle
           animated:(BOOL)animated {
    try {
        _cppRefHandle.get()->setRotation(::djinni::F32::toCpp(angle),
                                         ::djinni::Bool::toCpp(animated));
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

- (float)getRotation {
    try {
        auto objcpp_result_ = _cppRefHandle.get()->getRotation();
        return ::djinni::F32::fromCpp(objcpp_result_);
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

- (void)setMinZoom:(double)minZoom {
    try {
        _cppRefHandle.get()->setMinZoom(::djinni::F64::toCpp(minZoom));
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

- (void)setMaxZoom:(double)maxZoom {
    try {
        _cppRefHandle.get()->setMaxZoom(::djinni::F64::toCpp(maxZoom));
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

- (void)setBounds:(nonnull MCRectCoord *)bounds {
    try {
        _cppRefHandle.get()->setBounds(::djinni_generated::RectCoord::toCpp(bounds));
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

- (BOOL)isInBounds:(nonnull MCCoord *)coords {
    try {
        auto objcpp_result_ = _cppRefHandle.get()->isInBounds(::djinni_generated::Coord::toCpp(coords));
        return ::djinni::Bool::fromCpp(objcpp_result_);
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

- (void)setPaddingLeft:(float)padding {
    try {
        _cppRefHandle.get()->setPaddingLeft(::djinni::F32::toCpp(padding));
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

- (void)setPaddingRight:(float)padding {
    try {
        _cppRefHandle.get()->setPaddingRight(::djinni::F32::toCpp(padding));
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

- (void)setPaddingTop:(float)padding {
    try {
        _cppRefHandle.get()->setPaddingTop(::djinni::F32::toCpp(padding));
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

- (void)setPaddingBottom:(float)padding {
    try {
        _cppRefHandle.get()->setPaddingBottom(::djinni::F32::toCpp(padding));
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

- (nonnull MCRectCoord *)getVisibleRect {
    try {
        auto objcpp_result_ = _cppRefHandle.get()->getVisibleRect();
        return ::djinni_generated::RectCoord::fromCpp(objcpp_result_);
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

- (nonnull NSArray<NSNumber *> *)getInvariantModelMatrix:(nonnull MCCoord *)coordinate
                                          scaleInvariant:(BOOL)scaleInvariant
                                       rotationInvariant:(BOOL)rotationInvariant {
    try {
        auto objcpp_result_ = _cppRefHandle.get()->getInvariantModelMatrix(::djinni_generated::Coord::toCpp(coordinate),
                                                                           ::djinni::Bool::toCpp(scaleInvariant),
                                                                           ::djinni::Bool::toCpp(rotationInvariant));
        return ::djinni::List<::djinni::F32>::fromCpp(objcpp_result_);
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

- (void)addListener:(nullable id<MCMapCamera2dListenerInterface>)listener {
    try {
        _cppRefHandle.get()->addListener(::djinni_generated::MapCamera2dListenerInterface::toCpp(listener));
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

- (void)removeListener:(nullable id<MCMapCamera2dListenerInterface>)listener {
    try {
        _cppRefHandle.get()->removeListener(::djinni_generated::MapCamera2dListenerInterface::toCpp(listener));
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

- (nonnull MCCoord *)coordFromScreenPosition:(nonnull MCVec2F *)posScreen {
    try {
        auto objcpp_result_ = _cppRefHandle.get()->coordFromScreenPosition(::djinni_generated::Vec2F::toCpp(posScreen));
        return ::djinni_generated::Coord::fromCpp(objcpp_result_);
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

- (double)mapUnitsFromPixels:(double)distancePx {
    try {
        auto objcpp_result_ = _cppRefHandle.get()->mapUnitsFromPixels(::djinni::F64::toCpp(distancePx));
        return ::djinni::F64::fromCpp(objcpp_result_);
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

- (void)setRotationEnabled:(BOOL)enabled {
    try {
        _cppRefHandle.get()->setRotationEnabled(::djinni::Bool::toCpp(enabled));
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

- (void)setSnapToNorthEnabled:(BOOL)enabled {
    try {
        _cppRefHandle.get()->setSnapToNorthEnabled(::djinni::Bool::toCpp(enabled));
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

- (nullable id<MCCameraInterface>)asCameraInterface {
    try {
        auto objcpp_result_ = _cppRefHandle.get()->asCameraInterface();
        return ::djinni_generated::CameraInterface::fromCpp(objcpp_result_);
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

namespace djinni_generated {

auto MapCamera2dInterface::toCpp(ObjcType objc) -> CppType
{
    if (!objc) {
        return nullptr;
    }
    return objc->_cppRefHandle.get();
}

auto MapCamera2dInterface::fromCppOpt(const CppOptType& cpp) -> ObjcType
{
    if (!cpp) {
        return nil;
    }
    return ::djinni::get_cpp_proxy<MCMapCamera2dInterface>(cpp);
}

}  // namespace djinni_generated

@end
