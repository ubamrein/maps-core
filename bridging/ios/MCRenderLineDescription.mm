// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from graphicsobjects.djinni

#import "MCRenderLineDescription.h"


@implementation MCRenderLineDescription

- (nonnull instancetype)initWithPositions:(nonnull NSArray<MCVec2D *> *)positions
                               styleIndex:(int32_t)styleIndex
{
    if (self = [super init]) {
        _positions = [positions copy];
        _styleIndex = styleIndex;
    }
    return self;
}

+ (nonnull instancetype)renderLineDescriptionWithPositions:(nonnull NSArray<MCVec2D *> *)positions
                                                styleIndex:(int32_t)styleIndex
{
    return [[self alloc] initWithPositions:positions
                                styleIndex:styleIndex];
}

#ifndef DJINNI_DISABLE_DESCRIPTION_METHODS
- (NSString *)description
{
    return [NSString stringWithFormat:@"<%@ %p positions:%@ styleIndex:%@>", self.class, (void *)self, self.positions, @(self.styleIndex)];
}

#endif
@end
