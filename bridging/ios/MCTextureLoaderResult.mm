// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from loader.djinni

#import "MCTextureLoaderResult.h"


@implementation MCTextureLoaderResult

- (nonnull instancetype)initWithData:(nullable id<MCTextureHolderInterface>)data
                                etag:(nullable NSString *)etag
                              status:(MCLoaderStatus)status
                           errorCode:(nullable NSString *)errorCode
{
    if (self = [super init]) {
        _data = data;
        _etag = [etag copy];
        _status = status;
        _errorCode = [errorCode copy];
    }
    return self;
}

+ (nonnull instancetype)textureLoaderResultWithData:(nullable id<MCTextureHolderInterface>)data
                                               etag:(nullable NSString *)etag
                                             status:(MCLoaderStatus)status
                                          errorCode:(nullable NSString *)errorCode
{
    return [[self alloc] initWithData:data
                                 etag:etag
                               status:status
                            errorCode:errorCode];
}

#ifndef DJINNI_DISABLE_DESCRIPTION_METHODS
- (NSString *)description
{
    return [NSString stringWithFormat:@"<%@ %p data:%@ etag:%@ status:%@ errorCode:%@>", self.class, (void *)self, self.data, self.etag, @(self.status), self.errorCode];
}

#endif
@end
