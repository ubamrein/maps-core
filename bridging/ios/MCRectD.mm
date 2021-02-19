// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from common.djinni

#import "MCRectD.h"


@implementation MCRectD

- (nonnull instancetype)initWithX:(double)x
                                y:(double)y
                            width:(double)width
                           height:(double)height
{
    if (self = [super init]) {
        _x = x;
        _y = y;
        _width = width;
        _height = height;
    }
    return self;
}

+ (nonnull instancetype)rectDWithX:(double)x
                                 y:(double)y
                             width:(double)width
                            height:(double)height
{
    return [(MCRectD*)[self alloc] initWithX:x
                                           y:y
                                       width:width
                                      height:height];
}

- (NSString *)description
{
    return [NSString stringWithFormat:@"<%@ %p x:%@ y:%@ width:%@ height:%@>", self.class, (void *)self, @(self.x), @(self.y), @(self.width), @(self.height)];
}

@end
