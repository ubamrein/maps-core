// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from geo_json_parser.djinni

#import "MCGeoJsonFeatureParserInterface+Private.h"
#import "MCGeoJsonFeatureParserInterface.h"
#import "DJICppWrapperCache+Private.h"
#import "DJIError.h"
#import "DJIMarshal+Private.h"
#import "MCVectorLayerFeatureInfo+Private.h"
#include <exception>
#include <stdexcept>
#include <utility>

static_assert(__has_feature(objc_arc), "Djinni requires ARC to be enabled for this file");

@interface MCGeoJsonFeatureParserInterface ()

- (id)initWithCpp:(const std::shared_ptr<::GeoJsonFeatureParserInterface>&)cppRef;

@end

@implementation MCGeoJsonFeatureParserInterface {
    ::djinni::CppProxyCache::Handle<std::shared_ptr<::GeoJsonFeatureParserInterface>> _cppRefHandle;
}

- (id)initWithCpp:(const std::shared_ptr<::GeoJsonFeatureParserInterface>&)cppRef
{
    if (self = [super init]) {
        _cppRefHandle.assign(cppRef);
    }
    return self;
}

+ (nullable MCGeoJsonFeatureParserInterface *)create {
    try {
        auto objcpp_result_ = ::GeoJsonFeatureParserInterface::create();
        return ::djinni_generated::GeoJsonFeatureParserInterface::fromCpp(objcpp_result_);
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

- (nullable NSArray<MCVectorLayerFeatureInfo *> *)parse:(nonnull NSString *)geoJson {
    try {
        auto objcpp_result_ = _cppRefHandle.get()->parse(::djinni::String::toCpp(geoJson));
        return ::djinni::Optional<std::optional, ::djinni::List<::djinni_generated::VectorLayerFeatureInfo>>::fromCpp(objcpp_result_);
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

namespace djinni_generated {

auto GeoJsonFeatureParserInterface::toCpp(ObjcType objc) -> CppType
{
    if (!objc) {
        return nullptr;
    }
    return objc->_cppRefHandle.get();
}

auto GeoJsonFeatureParserInterface::fromCppOpt(const CppOptType& cpp) -> ObjcType
{
    if (!cpp) {
        return nil;
    }
    return ::djinni::get_cpp_proxy<MCGeoJsonFeatureParserInterface>(cpp);
}

} // namespace djinni_generated

@end
