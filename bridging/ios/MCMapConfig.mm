// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from core.djinni

#import "MCMapConfig.h"


@implementation MCMapConfig

- (nonnull instancetype)initWithMapCoordinateSystem:(nonnull MCMapCoordinateSystem *)mapCoordinateSystem
                                            zoomMin:(double)zoomMin
                                            zoomMax:(double)zoomMax
{
    if (self = [super init]) {
        _mapCoordinateSystem = mapCoordinateSystem;
        _zoomMin = zoomMin;
        _zoomMax = zoomMax;
    }
    return self;
}

+ (nonnull instancetype)mapConfigWithMapCoordinateSystem:(nonnull MCMapCoordinateSystem *)mapCoordinateSystem
                                                 zoomMin:(double)zoomMin
                                                 zoomMax:(double)zoomMax
{
    return [(MCMapConfig*)[self alloc] initWithMapCoordinateSystem:mapCoordinateSystem
                                                           zoomMin:zoomMin
                                                           zoomMax:zoomMax];
}

- (NSString *)description
{
    return [NSString stringWithFormat:@"<%@ %p mapCoordinateSystem:%@ zoomMin:%@ zoomMax:%@>", self.class, (void *)self, self.mapCoordinateSystem, @(self.zoomMin), @(self.zoomMax)];
}

@end
