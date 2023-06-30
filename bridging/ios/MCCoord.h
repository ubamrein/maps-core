// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from coordinate_system.djinni

#import <Foundation/Foundation.h>

@interface MCCoord : NSObject
- (nonnull instancetype)init NS_UNAVAILABLE;
+ (nonnull instancetype)new NS_UNAVAILABLE;
- (nonnull instancetype)initWithSystemIdentifier:(int32_t)systemIdentifier
                                               x:(double)x
                                               y:(double)y
                                               z:(double)z NS_DESIGNATED_INITIALIZER;
+ (nonnull instancetype)coordWithSystemIdentifier:(int32_t)systemIdentifier
                                                x:(double)x
                                                y:(double)y
                                                z:(double)z;

@property (nonatomic, readonly) int32_t systemIdentifier;

@property (nonatomic, readonly) double x;

@property (nonatomic, readonly) double y;

@property (nonatomic, readonly) double z;

- (NSComparisonResult)compare:(nonnull MCCoord *)other;

@end
