// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from core.djinni

#import "MCCameraInterface.h"
#import "MCCoord.h"
#import "MCMapCamera2dListenerInterface.h"
#import "MCRectCoord.h"
#import "MCVec2F.h"
#import <Foundation/Foundation.h>
@class MCMapCamera2dInterface;
@class MCMapInterface;


@interface MCMapCamera2dInterface : NSObject

+ (nullable MCMapCamera2dInterface *)create:(nullable MCMapInterface *)mapInterface
                           screenDensityPpi:(float)screenDensityPpi;

- (void)moveToCenterPositionZoom:(nonnull MCCoord *)centerPosition
                            zoom:(double)zoom
                        animated:(BOOL)animated;

- (void)moveToCenterPosition:(nonnull MCCoord *)centerPosition
                    animated:(BOOL)animated;

- (void)moveToBoundingBox:(nonnull MCRectCoord *)boundingBox
                paddingPc:(float)paddingPc
                 animated:(BOOL)animated
                  maxZoom:(nullable NSNumber *)maxZoom;

- (nonnull MCCoord *)getCenterPosition;

- (void)setZoom:(double)zoom
       animated:(BOOL)animated;

- (double)getZoom;

- (void)setRotation:(float)angle
           animated:(BOOL)animated;

- (float)getRotation;

- (void)setMinZoom:(double)minZoom;

- (void)setMaxZoom:(double)maxZoom;

- (double)getMinZoom;

- (double)getMaxZoom;

- (void)setBounds:(nonnull MCRectCoord *)bounds;

- (BOOL)isInBounds:(nonnull MCCoord *)coords;

- (void)setPaddingLeft:(float)padding;

- (void)setPaddingRight:(float)padding;

- (void)setPaddingTop:(float)padding;

- (void)setPaddingBottom:(float)padding;

- (nonnull MCRectCoord *)getVisibleRect;

- (nonnull MCRectCoord *)getPaddingAdjustedVisibleRect;

- (nonnull NSArray<NSNumber *> *)getInvariantModelMatrix:(nonnull MCCoord *)coordinate
                                          scaleInvariant:(BOOL)scaleInvariant
                                       rotationInvariant:(BOOL)rotationInvariant;

- (void)addListener:(nullable id<MCMapCamera2dListenerInterface>)listener;

- (void)removeListener:(nullable id<MCMapCamera2dListenerInterface>)listener;

- (nonnull MCCoord *)coordFromScreenPosition:(nonnull MCVec2F *)posScreen;

- (double)mapUnitsFromPixels:(double)distancePx;

- (void)setRotationEnabled:(BOOL)enabled;

- (void)setSnapToNorthEnabled:(BOOL)enabled;

- (nullable id<MCCameraInterface>)asCameraInterface;

- (nullable MCRectCoord *)getLastVpMatrixViewBounds;

- (nullable NSNumber *)getLastVpMatrixRotation;

- (nullable NSNumber *)getLastVpMatrixZoom;

@end
