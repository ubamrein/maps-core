// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from tiled_vector_layer.djinni

#import "MCTiled2dMapVectorAssetInfo.h"
#import "MCVectorLayerFeatureInfo.h"
#import <Foundation/Foundation.h>


@protocol MCTiled2dMapVectorLayerSymbolDelegateInterface

- (nonnull NSArray<MCTiled2dMapVectorAssetInfo *> *)getCustomAssetsFor:(nonnull NSArray<MCVectorLayerFeatureInfo *> *)featureInfos
                                                       layerIdentifier:(nonnull NSString *)layerIdentifier;

@end
