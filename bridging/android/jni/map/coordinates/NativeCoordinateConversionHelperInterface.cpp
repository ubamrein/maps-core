// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from coordinate_system.djinni

#include "NativeCoordinateConversionHelperInterface.h"  // my header
#include "Marshal.hpp"
#include "NativeCoord.h"
#include "NativeCoordinateConverterInterface.h"
#include "NativeQuadCoord.h"
#include "NativeRectCoord.h"

namespace djinni_generated {

NativeCoordinateConversionHelperInterface::NativeCoordinateConversionHelperInterface() : ::djinni::JniInterface<::CoordinateConversionHelperInterface, NativeCoordinateConversionHelperInterface>("io/openmobilemaps/mapscore/shared/map/coordinates/CoordinateConversionHelperInterface$CppProxy") {}

NativeCoordinateConversionHelperInterface::~NativeCoordinateConversionHelperInterface() = default;


CJNIEXPORT void JNICALL Java_io_openmobilemaps_mapscore_shared_map_coordinates_CoordinateConversionHelperInterface_00024CppProxy_nativeDestroy(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        delete reinterpret_cast<::djinni::CppProxyHandle<::CoordinateConversionHelperInterface>*>(nativeRef);
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT jobject JNICALL Java_io_openmobilemaps_mapscore_shared_map_coordinates_CoordinateConversionHelperInterface_independentInstance(JNIEnv* jniEnv, jobject /*this*/)
{
    try {
        auto r = ::CoordinateConversionHelperInterface::independentInstance();
        return ::djinni::release(::djinni_generated::NativeCoordinateConversionHelperInterface::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT void JNICALL Java_io_openmobilemaps_mapscore_shared_map_coordinates_CoordinateConversionHelperInterface_00024CppProxy_native_1registerConverter(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef, jobject j_converter)
{
    try {
        const auto& ref = ::djinni::objectFromHandleAddress<::CoordinateConversionHelperInterface>(nativeRef);
        ref->registerConverter(::djinni_generated::NativeCoordinateConverterInterface::toCpp(jniEnv, j_converter));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT jobject JNICALL Java_io_openmobilemaps_mapscore_shared_map_coordinates_CoordinateConversionHelperInterface_00024CppProxy_native_1convert(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef, jint j_to, jobject j_coordinate)
{
    try {
        const auto& ref = ::djinni::objectFromHandleAddress<::CoordinateConversionHelperInterface>(nativeRef);
        auto r = ref->convert(::djinni::I32::toCpp(jniEnv, j_to),
                              ::djinni_generated::NativeCoord::toCpp(jniEnv, j_coordinate));
        return ::djinni::release(::djinni_generated::NativeCoord::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jobject JNICALL Java_io_openmobilemaps_mapscore_shared_map_coordinates_CoordinateConversionHelperInterface_00024CppProxy_native_1convertRect(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef, jint j_to, jobject j_rect)
{
    try {
        const auto& ref = ::djinni::objectFromHandleAddress<::CoordinateConversionHelperInterface>(nativeRef);
        auto r = ref->convertRect(::djinni::I32::toCpp(jniEnv, j_to),
                                  ::djinni_generated::NativeRectCoord::toCpp(jniEnv, j_rect));
        return ::djinni::release(::djinni_generated::NativeRectCoord::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jobject JNICALL Java_io_openmobilemaps_mapscore_shared_map_coordinates_CoordinateConversionHelperInterface_00024CppProxy_native_1convertRectToRenderSystem(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef, jobject j_rect)
{
    try {
        const auto& ref = ::djinni::objectFromHandleAddress<::CoordinateConversionHelperInterface>(nativeRef);
        auto r = ref->convertRectToRenderSystem(::djinni_generated::NativeRectCoord::toCpp(jniEnv, j_rect));
        return ::djinni::release(::djinni_generated::NativeRectCoord::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jobject JNICALL Java_io_openmobilemaps_mapscore_shared_map_coordinates_CoordinateConversionHelperInterface_00024CppProxy_native_1convertQuad(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef, jint j_to, jobject j_quad)
{
    try {
        const auto& ref = ::djinni::objectFromHandleAddress<::CoordinateConversionHelperInterface>(nativeRef);
        auto r = ref->convertQuad(::djinni::I32::toCpp(jniEnv, j_to),
                                  ::djinni_generated::NativeQuadCoord::toCpp(jniEnv, j_quad));
        return ::djinni::release(::djinni_generated::NativeQuadCoord::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jobject JNICALL Java_io_openmobilemaps_mapscore_shared_map_coordinates_CoordinateConversionHelperInterface_00024CppProxy_native_1convertQuadToRenderSystem(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef, jobject j_quad)
{
    try {
        const auto& ref = ::djinni::objectFromHandleAddress<::CoordinateConversionHelperInterface>(nativeRef);
        auto r = ref->convertQuadToRenderSystem(::djinni_generated::NativeQuadCoord::toCpp(jniEnv, j_quad));
        return ::djinni::release(::djinni_generated::NativeQuadCoord::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jobject JNICALL Java_io_openmobilemaps_mapscore_shared_map_coordinates_CoordinateConversionHelperInterface_00024CppProxy_native_1convertToRenderSystem(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef, jobject j_coordinate)
{
    try {
        const auto& ref = ::djinni::objectFromHandleAddress<::CoordinateConversionHelperInterface>(nativeRef);
        auto r = ref->convertToRenderSystem(::djinni_generated::NativeCoord::toCpp(jniEnv, j_coordinate));
        return ::djinni::release(::djinni_generated::NativeCoord::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

} // namespace djinni_generated
