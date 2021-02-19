// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from shader.djinni

#import "MCRenderingContextInterface.h"
#import <Foundation/Foundation.h>


@protocol MCLineShaderProgramInterface

- (nonnull NSString *)getRectProgramName;

- (void)setupRectProgram:(nullable id<MCRenderingContextInterface>)context;

- (nonnull NSString *)getPointProgramName;

- (void)setupPointProgram:(nullable id<MCRenderingContextInterface>)context;

- (void)preRenderRect:(nullable id<MCRenderingContextInterface>)context;

- (void)preRenderPoint:(nullable id<MCRenderingContextInterface>)context;

@end
