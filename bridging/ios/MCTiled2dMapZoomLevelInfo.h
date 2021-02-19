// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from tiled_layer.djinni

#import <Foundation/Foundation.h>

@interface MCTiled2dMapZoomLevelInfo : NSObject
- (nonnull instancetype)initWithZoom:(double)zoom
           tileWidthLayerSystemUnits:(float)tileWidthLayerSystemUnits
                           numTilesX:(int32_t)numTilesX
                           numTilesY:(int32_t)numTilesY
                 zoomLevelIdentifier:(int32_t)zoomLevelIdentifier;
+ (nonnull instancetype)tiled2dMapZoomLevelInfoWithZoom:(double)zoom
                              tileWidthLayerSystemUnits:(float)tileWidthLayerSystemUnits
                                              numTilesX:(int32_t)numTilesX
                                              numTilesY:(int32_t)numTilesY
                                    zoomLevelIdentifier:(int32_t)zoomLevelIdentifier;

@property (nonatomic, readonly) double zoom;

@property (nonatomic, readonly) float tileWidthLayerSystemUnits;

@property (nonatomic, readonly) int32_t numTilesX;

@property (nonatomic, readonly) int32_t numTilesY;

@property (nonatomic, readonly) int32_t zoomLevelIdentifier;

@end