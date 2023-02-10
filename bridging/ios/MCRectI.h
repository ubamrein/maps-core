// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from common.djinni

#import <Foundation/Foundation.h>

@interface MCRectI : NSObject
- (nonnull instancetype)init NS_UNAVAILABLE;
+ (nonnull instancetype)new NS_UNAVAILABLE;
- (nonnull instancetype)initWithX:(int32_t)x
                                y:(int32_t)y
                            width:(int32_t)width
                           height:(int32_t)height NS_DESIGNATED_INITIALIZER;
+ (nonnull instancetype)rectIWithX:(int32_t)x
                                 y:(int32_t)y
                             width:(int32_t)width
                            height:(int32_t)height;

@property (nonatomic, readonly) int32_t x;

@property (nonatomic, readonly) int32_t y;

@property (nonatomic, readonly) int32_t width;

@property (nonatomic, readonly) int32_t height;

@end
