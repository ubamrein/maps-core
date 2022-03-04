// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from polygon.djinni

#import "MCPolygonInfo.h"


@implementation MCPolygonInfo

- (nonnull instancetype)initWithIdentifier:(nonnull NSString *)identifier
                               coordinates:(nonnull NSArray<MCCoord *> *)coordinates
                                     holes:(nonnull NSArray<NSArray<MCCoord *> *> *)holes
                                     color:(nonnull MCColor *)color
                            highlightColor:(nonnull MCColor *)highlightColor
{
    if (self = [super init]) {
        _identifier = [identifier copy];
        _coordinates = [coordinates copy];
        _holes = [holes copy];
        _color = color;
        _highlightColor = highlightColor;
    }
    return self;
}

+ (nonnull instancetype)polygonInfoWithIdentifier:(nonnull NSString *)identifier
                                      coordinates:(nonnull NSArray<MCCoord *> *)coordinates
                                            holes:(nonnull NSArray<NSArray<MCCoord *> *> *)holes
                                            color:(nonnull MCColor *)color
                                   highlightColor:(nonnull MCColor *)highlightColor
{
    return [(MCPolygonInfo*)[self alloc] initWithIdentifier:identifier
                                                coordinates:coordinates
                                                      holes:holes
                                                      color:color
                                             highlightColor:highlightColor];
}

- (NSString *)description
{
    return [NSString stringWithFormat:@"<%@ %p identifier:%@ coordinates:%@ holes:%@ color:%@ highlightColor:%@>", self.class, (void *)self, self.identifier, self.coordinates, self.holes, self.color, self.highlightColor];
}

@end
