// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from shader.djinni

#import <Foundation/Foundation.h>
@protocol MCAlphaInstancedShaderInterface;
@protocol MCAlphaShaderInterface;
@protocol MCColorCircleShaderInterface;
@protocol MCColorLineShaderInterface;
@protocol MCColorShaderInterface;
@protocol MCLineGroupShaderInterface;
@protocol MCPolygonGroupShaderInterface;
@protocol MCRasterShaderInterface;
@protocol MCStretchInstancedShaderInterface;
@protocol MCStretchShaderInterface;
@protocol MCTextInstancedShaderInterface;
@protocol MCTextShaderInterface;


@protocol MCShaderFactoryInterface

- (nullable id<MCAlphaShaderInterface>)createAlphaShader;

- (nullable id<MCAlphaInstancedShaderInterface>)createAlphaInstancedShader;

- (nullable id<MCColorLineShaderInterface>)createColorLineShader;

- (nullable id<MCLineGroupShaderInterface>)createLineGroupShader;

- (nullable id<MCColorShaderInterface>)createColorShader;

- (nullable id<MCColorCircleShaderInterface>)createColorCircleShader;

- (nullable id<MCPolygonGroupShaderInterface>)createPolygonGroupShader;

- (nullable id<MCTextShaderInterface>)createTextShader;

- (nullable id<MCTextInstancedShaderInterface>)createTextInstancedShader;

- (nullable id<MCRasterShaderInterface>)createRasterShader;

- (nullable id<MCStretchShaderInterface>)createStretchShader;

- (nullable id<MCStretchInstancedShaderInterface>)createStretchInstancedShader;

@end
