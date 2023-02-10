// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from tiled_layer.djinni

#import "MCTiled2dMapZoomInfo.h"


@implementation MCTiled2dMapZoomInfo

- (nonnull instancetype)initWithZoomLevelScaleFactor:(float)zoomLevelScaleFactor
                               numDrawPreviousLayers:(int32_t)numDrawPreviousLayers
                                  adaptScaleToScreen:(BOOL)adaptScaleToScreen
                                            maskTile:(BOOL)maskTile
                                           underzoom:(BOOL)underzoom
                                            overzoom:(BOOL)overzoom
{
    if (self = [super init]) {
        _zoomLevelScaleFactor = zoomLevelScaleFactor;
        _numDrawPreviousLayers = numDrawPreviousLayers;
        _adaptScaleToScreen = adaptScaleToScreen;
        _maskTile = maskTile;
        _underzoom = underzoom;
        _overzoom = overzoom;
    }
    return self;
}

+ (nonnull instancetype)tiled2dMapZoomInfoWithZoomLevelScaleFactor:(float)zoomLevelScaleFactor
                                             numDrawPreviousLayers:(int32_t)numDrawPreviousLayers
                                                adaptScaleToScreen:(BOOL)adaptScaleToScreen
                                                          maskTile:(BOOL)maskTile
                                                         underzoom:(BOOL)underzoom
                                                          overzoom:(BOOL)overzoom
{
    return [[self alloc] initWithZoomLevelScaleFactor:zoomLevelScaleFactor
                                numDrawPreviousLayers:numDrawPreviousLayers
                                   adaptScaleToScreen:adaptScaleToScreen
                                             maskTile:maskTile
                                            underzoom:underzoom
                                             overzoom:overzoom];
}

#ifndef DJINNI_DISABLE_DESCRIPTION_METHODS
- (NSString *)description
{
    return [NSString stringWithFormat:@"<%@ %p zoomLevelScaleFactor:%@ numDrawPreviousLayers:%@ adaptScaleToScreen:%@ maskTile:%@ underzoom:%@ overzoom:%@>", self.class, (void *)self, @(self.zoomLevelScaleFactor), @(self.numDrawPreviousLayers), @(self.adaptScaleToScreen), @(self.maskTile), @(self.underzoom), @(self.overzoom)];
}

#endif
@end
