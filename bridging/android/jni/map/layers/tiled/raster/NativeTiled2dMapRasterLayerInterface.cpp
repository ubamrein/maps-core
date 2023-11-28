// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from tiled_raster_layer.djinni

#include "NativeTiled2dMapRasterLayerInterface.h"  // my header
#include "Marshal.hpp"
#include "NativeLayerInterface.h"
#include "NativeLoaderInterface.h"
#include "NativeMaskingObjectInterface.h"
#include "NativeRasterShaderStyle.h"
#include "NativeShaderProgramInterface.h"
#include "NativeTiled2dMapLayerConfig.h"
#include "NativeTiled2dMapRasterLayerCallbackInterface.h"
#include "NativeTiled2dMapReadyStateListener.h"

namespace djinni_generated {

NativeTiled2dMapRasterLayerInterface::NativeTiled2dMapRasterLayerInterface() : ::djinni::JniInterface<::Tiled2dMapRasterLayerInterface, NativeTiled2dMapRasterLayerInterface>("io/openmobilemaps/mapscore/shared/map/layers/tiled/raster/Tiled2dMapRasterLayerInterface$CppProxy") {}

NativeTiled2dMapRasterLayerInterface::~NativeTiled2dMapRasterLayerInterface() = default;


CJNIEXPORT void JNICALL Java_io_openmobilemaps_mapscore_shared_map_layers_tiled_raster_Tiled2dMapRasterLayerInterface_00024CppProxy_nativeDestroy(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        delete reinterpret_cast<::djinni::CppProxyHandle<::Tiled2dMapRasterLayerInterface>*>(nativeRef);
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT jobject JNICALL Java_io_openmobilemaps_mapscore_shared_map_layers_tiled_raster_Tiled2dMapRasterLayerInterface_createWithMask(JNIEnv* jniEnv, jobject /*this*/, ::djinni_generated::NativeTiled2dMapLayerConfig::JniType j_layerConfig, jobject j_loaders, ::djinni_generated::NativeMaskingObjectInterface::JniType j_mask)
{
    try {
        auto r = ::Tiled2dMapRasterLayerInterface::createWithMask(::djinni_generated::NativeTiled2dMapLayerConfig::toCpp(jniEnv, j_layerConfig),
                                                                  ::djinni::List<::djinni_generated::NativeLoaderInterface>::toCpp(jniEnv, j_loaders),
                                                                  ::djinni_generated::NativeMaskingObjectInterface::toCpp(jniEnv, j_mask));
        return ::djinni::release(::djinni_generated::NativeTiled2dMapRasterLayerInterface::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jobject JNICALL Java_io_openmobilemaps_mapscore_shared_map_layers_tiled_raster_Tiled2dMapRasterLayerInterface_createWithShader(JNIEnv* jniEnv, jobject /*this*/, ::djinni_generated::NativeTiled2dMapLayerConfig::JniType j_layerConfig, jobject j_loaders, ::djinni_generated::NativeShaderProgramInterface::JniType j_shader)
{
    try {
        auto r = ::Tiled2dMapRasterLayerInterface::createWithShader(::djinni_generated::NativeTiled2dMapLayerConfig::toCpp(jniEnv, j_layerConfig),
                                                                    ::djinni::List<::djinni_generated::NativeLoaderInterface>::toCpp(jniEnv, j_loaders),
                                                                    ::djinni_generated::NativeShaderProgramInterface::toCpp(jniEnv, j_shader));
        return ::djinni::release(::djinni_generated::NativeTiled2dMapRasterLayerInterface::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jobject JNICALL Java_io_openmobilemaps_mapscore_shared_map_layers_tiled_raster_Tiled2dMapRasterLayerInterface_create(JNIEnv* jniEnv, jobject /*this*/, ::djinni_generated::NativeTiled2dMapLayerConfig::JniType j_layerConfig, jobject j_loaders)
{
    try {
        auto r = ::Tiled2dMapRasterLayerInterface::create(::djinni_generated::NativeTiled2dMapLayerConfig::toCpp(jniEnv, j_layerConfig),
                                                          ::djinni::List<::djinni_generated::NativeLoaderInterface>::toCpp(jniEnv, j_loaders));
        return ::djinni::release(::djinni_generated::NativeTiled2dMapRasterLayerInterface::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT ::djinni_generated::NativeLayerInterface::JniType JNICALL Java_io_openmobilemaps_mapscore_shared_map_layers_tiled_raster_Tiled2dMapRasterLayerInterface_00024CppProxy_native_1asLayerInterface(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        const auto& ref = ::djinni::objectFromHandleAddress<::Tiled2dMapRasterLayerInterface>(nativeRef);
        auto r = ref->asLayerInterface();
        return ::djinni::release(::djinni_generated::NativeLayerInterface::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT void JNICALL Java_io_openmobilemaps_mapscore_shared_map_layers_tiled_raster_Tiled2dMapRasterLayerInterface_00024CppProxy_native_1setCallbackHandler(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef, jobject j_handler)
{
    try {
        const auto& ref = ::djinni::objectFromHandleAddress<::Tiled2dMapRasterLayerInterface>(nativeRef);
        ref->setCallbackHandler(::djinni_generated::NativeTiled2dMapRasterLayerCallbackInterface::toCpp(jniEnv, j_handler));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT jobject JNICALL Java_io_openmobilemaps_mapscore_shared_map_layers_tiled_raster_Tiled2dMapRasterLayerInterface_00024CppProxy_native_1getCallbackHandler(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        const auto& ref = ::djinni::objectFromHandleAddress<::Tiled2dMapRasterLayerInterface>(nativeRef);
        auto r = ref->getCallbackHandler();
        return ::djinni::release(::djinni::Optional<std::optional, ::djinni_generated::NativeTiled2dMapRasterLayerCallbackInterface>::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT void JNICALL Java_io_openmobilemaps_mapscore_shared_map_layers_tiled_raster_Tiled2dMapRasterLayerInterface_00024CppProxy_native_1removeCallbackHandler(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        const auto& ref = ::djinni::objectFromHandleAddress<::Tiled2dMapRasterLayerInterface>(nativeRef);
        ref->removeCallbackHandler();
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT void JNICALL Java_io_openmobilemaps_mapscore_shared_map_layers_tiled_raster_Tiled2dMapRasterLayerInterface_00024CppProxy_native_1setAlpha(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef, jfloat j_alpha)
{
    try {
        const auto& ref = ::djinni::objectFromHandleAddress<::Tiled2dMapRasterLayerInterface>(nativeRef);
        ref->setAlpha(::djinni::F32::toCpp(jniEnv, j_alpha));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT jfloat JNICALL Java_io_openmobilemaps_mapscore_shared_map_layers_tiled_raster_Tiled2dMapRasterLayerInterface_00024CppProxy_native_1getAlpha(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        const auto& ref = ::djinni::objectFromHandleAddress<::Tiled2dMapRasterLayerInterface>(nativeRef);
        auto r = ref->getAlpha();
        return ::djinni::release(::djinni::F32::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT void JNICALL Java_io_openmobilemaps_mapscore_shared_map_layers_tiled_raster_Tiled2dMapRasterLayerInterface_00024CppProxy_native_1setStyle(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef, ::djinni_generated::NativeRasterShaderStyle::JniType j_style)
{
    try {
        const auto& ref = ::djinni::objectFromHandleAddress<::Tiled2dMapRasterLayerInterface>(nativeRef);
        ref->setStyle(::djinni_generated::NativeRasterShaderStyle::toCpp(jniEnv, j_style));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT ::djinni_generated::NativeRasterShaderStyle::JniType JNICALL Java_io_openmobilemaps_mapscore_shared_map_layers_tiled_raster_Tiled2dMapRasterLayerInterface_00024CppProxy_native_1getStyle(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        const auto& ref = ::djinni::objectFromHandleAddress<::Tiled2dMapRasterLayerInterface>(nativeRef);
        auto r = ref->getStyle();
        return ::djinni::release(::djinni_generated::NativeRasterShaderStyle::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT void JNICALL Java_io_openmobilemaps_mapscore_shared_map_layers_tiled_raster_Tiled2dMapRasterLayerInterface_00024CppProxy_native_1setMinZoomLevelIdentifier(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef, jobject j_value)
{
    try {
        const auto& ref = ::djinni::objectFromHandleAddress<::Tiled2dMapRasterLayerInterface>(nativeRef);
        ref->setMinZoomLevelIdentifier(::djinni::Optional<std::optional, ::djinni::I32>::toCpp(jniEnv, j_value));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT jobject JNICALL Java_io_openmobilemaps_mapscore_shared_map_layers_tiled_raster_Tiled2dMapRasterLayerInterface_00024CppProxy_native_1getMinZoomLevelIdentifier(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        const auto& ref = ::djinni::objectFromHandleAddress<::Tiled2dMapRasterLayerInterface>(nativeRef);
        auto r = ref->getMinZoomLevelIdentifier();
        return ::djinni::release(::djinni::Optional<std::optional, ::djinni::I32>::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT void JNICALL Java_io_openmobilemaps_mapscore_shared_map_layers_tiled_raster_Tiled2dMapRasterLayerInterface_00024CppProxy_native_1setMaxZoomLevelIdentifier(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef, jobject j_value)
{
    try {
        const auto& ref = ::djinni::objectFromHandleAddress<::Tiled2dMapRasterLayerInterface>(nativeRef);
        ref->setMaxZoomLevelIdentifier(::djinni::Optional<std::optional, ::djinni::I32>::toCpp(jniEnv, j_value));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT jobject JNICALL Java_io_openmobilemaps_mapscore_shared_map_layers_tiled_raster_Tiled2dMapRasterLayerInterface_00024CppProxy_native_1getMaxZoomLevelIdentifier(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        const auto& ref = ::djinni::objectFromHandleAddress<::Tiled2dMapRasterLayerInterface>(nativeRef);
        auto r = ref->getMaxZoomLevelIdentifier();
        return ::djinni::release(::djinni::Optional<std::optional, ::djinni::I32>::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT void JNICALL Java_io_openmobilemaps_mapscore_shared_map_layers_tiled_raster_Tiled2dMapRasterLayerInterface_00024CppProxy_native_1setT(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef, jint j_t)
{
    try {
        const auto& ref = ::djinni::objectFromHandleAddress<::Tiled2dMapRasterLayerInterface>(nativeRef);
        ref->setT(::djinni::I32::toCpp(jniEnv, j_t));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT void JNICALL Java_io_openmobilemaps_mapscore_shared_map_layers_tiled_raster_Tiled2dMapRasterLayerInterface_00024CppProxy_native_1setReadyStateListener(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef, ::djinni_generated::NativeTiled2dMapReadyStateListener::JniType j_listener)
{
    try {
        const auto& ref = ::djinni::objectFromHandleAddress<::Tiled2dMapRasterLayerInterface>(nativeRef);
        ref->setReadyStateListener(::djinni_generated::NativeTiled2dMapReadyStateListener::toCpp(jniEnv, j_listener));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT ::djinni_generated::NativeTiled2dMapLayerConfig::JniType JNICALL Java_io_openmobilemaps_mapscore_shared_map_layers_tiled_raster_Tiled2dMapRasterLayerInterface_00024CppProxy_native_1getConfig(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        const auto& ref = ::djinni::objectFromHandleAddress<::Tiled2dMapRasterLayerInterface>(nativeRef);
        auto r = ref->getConfig();
        return ::djinni::release(::djinni_generated::NativeTiled2dMapLayerConfig::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

} // namespace djinni_generated
