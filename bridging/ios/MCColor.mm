// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from common.djinni

#import "MCColor.h"


@implementation MCColor

- (nonnull instancetype)initWithR:(float)r
                                g:(float)g
                                b:(float)b
                                a:(float)a
{
    if (self = [super init]) {
        _r = r;
        _g = g;
        _b = b;
        _a = a;
    }
    return self;
}

+ (nonnull instancetype)colorWithR:(float)r
                                 g:(float)g
                                 b:(float)b
                                 a:(float)a
{
    return [(MCColor*)[self alloc] initWithR:r
                                           g:g
                                           b:b
                                           a:a];
}

- (NSString *)description
{
    return [NSString stringWithFormat:@"<%@ %p r:%@ g:%@ b:%@ a:%@>", self.class, (void *)self, @(self.r), @(self.g), @(self.b), @(self.a)];
}

@end
