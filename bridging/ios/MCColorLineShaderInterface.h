// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from shader.djinni

#import "MCLineStyle.h"
#import <Foundation/Foundation.h>
@protocol MCShaderProgramInterface;


@protocol MCColorLineShaderInterface

- (void)setStyle:(nonnull MCLineStyle *)lineStyle;

- (void)setHighlighted:(BOOL)highlighted;

- (nullable id<MCShaderProgramInterface>)asShaderProgramInterface;

@end
