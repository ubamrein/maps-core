// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from coordinate_system.djinni

#import "MCCoord.h"


@implementation MCCoord

- (nonnull instancetype)initWithSystemIdentifier:(nonnull NSString *)systemIdentifier
                                               x:(double)x
                                               y:(double)y
                                               z:(double)z
{
    if (self = [super init]) {
        _systemIdentifier = [systemIdentifier copy];
        _x = x;
        _y = y;
        _z = z;
    }
    return self;
}

+ (nonnull instancetype)coordWithSystemIdentifier:(nonnull NSString *)systemIdentifier
                                                x:(double)x
                                                y:(double)y
                                                z:(double)z
{
    return [(MCCoord*)[self alloc] initWithSystemIdentifier:systemIdentifier
                                                          x:x
                                                          y:y
                                                          z:z];
}

- (NSString *)description
{
    return [NSString stringWithFormat:@"<%@ %p systemIdentifier:%@ x:%@ y:%@ z:%@>", self.class, (void *)self, self.systemIdentifier, @(self.x), @(self.y), @(self.z)];
}

@end