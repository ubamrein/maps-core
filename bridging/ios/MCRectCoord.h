// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from coordinate_system.djinni

#import "MCCoord.h"
#import <Foundation/Foundation.h>

@interface MCRectCoord : NSObject
- (nonnull instancetype)initWithTopLeft:(nonnull MCCoord *)topLeft
                            bottomRight:(nonnull MCCoord *)bottomRight;
+ (nonnull instancetype)rectCoordWithTopLeft:(nonnull MCCoord *)topLeft
                                 bottomRight:(nonnull MCCoord *)bottomRight;

@property (nonatomic, readonly, nonnull) MCCoord * topLeft;

@property (nonatomic, readonly, nonnull) MCCoord * bottomRight;

@end