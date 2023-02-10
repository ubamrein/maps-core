// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from polygon.djinni

#include "NativePolygonLayerInterface.h"  // my header
#include "Marshal.hpp"
#include "NativeLayerInterface.h"
#include "NativePolygonInfo.h"
#include "NativePolygonLayerCallbackInterface.h"

namespace djinni_generated {

NativePolygonLayerInterface::NativePolygonLayerInterface() : ::djinni::JniInterface<::PolygonLayerInterface, NativePolygonLayerInterface>("io/openmobilemaps/mapscore/shared/map/layers/polygon/PolygonLayerInterface$CppProxy") {}

NativePolygonLayerInterface::~NativePolygonLayerInterface() = default;


CJNIEXPORT void JNICALL Java_io_openmobilemaps_mapscore_shared_map_layers_polygon_PolygonLayerInterface_00024CppProxy_nativeDestroy(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        delete reinterpret_cast<::djinni::CppProxyHandle<::PolygonLayerInterface>*>(nativeRef);
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT jobject JNICALL Java_io_openmobilemaps_mapscore_shared_map_layers_polygon_PolygonLayerInterface_create(JNIEnv* jniEnv, jobject /*this*/)
{
    try {
        auto r = ::PolygonLayerInterface::create();
        return ::djinni::release(::djinni_generated::NativePolygonLayerInterface::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT void JNICALL Java_io_openmobilemaps_mapscore_shared_map_layers_polygon_PolygonLayerInterface_00024CppProxy_native_1setPolygons(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef, jobject j_polygons)
{
    try {
        const auto& ref = ::djinni::objectFromHandleAddress<::PolygonLayerInterface>(nativeRef);
        ref->setPolygons(::djinni::List<::djinni_generated::NativePolygonInfo>::toCpp(jniEnv, j_polygons));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT jobject JNICALL Java_io_openmobilemaps_mapscore_shared_map_layers_polygon_PolygonLayerInterface_00024CppProxy_native_1getPolygons(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        const auto& ref = ::djinni::objectFromHandleAddress<::PolygonLayerInterface>(nativeRef);
        auto r = ref->getPolygons();
        return ::djinni::release(::djinni::List<::djinni_generated::NativePolygonInfo>::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT void JNICALL Java_io_openmobilemaps_mapscore_shared_map_layers_polygon_PolygonLayerInterface_00024CppProxy_native_1remove(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef, jobject j_polygon)
{
    try {
        const auto& ref = ::djinni::objectFromHandleAddress<::PolygonLayerInterface>(nativeRef);
        ref->remove(::djinni_generated::NativePolygonInfo::toCpp(jniEnv, j_polygon));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT void JNICALL Java_io_openmobilemaps_mapscore_shared_map_layers_polygon_PolygonLayerInterface_00024CppProxy_native_1add(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef, jobject j_polygon)
{
    try {
        const auto& ref = ::djinni::objectFromHandleAddress<::PolygonLayerInterface>(nativeRef);
        ref->add(::djinni_generated::NativePolygonInfo::toCpp(jniEnv, j_polygon));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT void JNICALL Java_io_openmobilemaps_mapscore_shared_map_layers_polygon_PolygonLayerInterface_00024CppProxy_native_1addAll(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef, jobject j_polygons)
{
    try {
        const auto& ref = ::djinni::objectFromHandleAddress<::PolygonLayerInterface>(nativeRef);
        ref->addAll(::djinni::List<::djinni_generated::NativePolygonInfo>::toCpp(jniEnv, j_polygons));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT void JNICALL Java_io_openmobilemaps_mapscore_shared_map_layers_polygon_PolygonLayerInterface_00024CppProxy_native_1clear(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        const auto& ref = ::djinni::objectFromHandleAddress<::PolygonLayerInterface>(nativeRef);
        ref->clear();
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT void JNICALL Java_io_openmobilemaps_mapscore_shared_map_layers_polygon_PolygonLayerInterface_00024CppProxy_native_1setCallbackHandler(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef, jobject j_handler)
{
    try {
        const auto& ref = ::djinni::objectFromHandleAddress<::PolygonLayerInterface>(nativeRef);
        ref->setCallbackHandler(::djinni_generated::NativePolygonLayerCallbackInterface::toCpp(jniEnv, j_handler));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT ::djinni_generated::NativeLayerInterface::JniType JNICALL Java_io_openmobilemaps_mapscore_shared_map_layers_polygon_PolygonLayerInterface_00024CppProxy_native_1asLayerInterface(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        const auto& ref = ::djinni::objectFromHandleAddress<::PolygonLayerInterface>(nativeRef);
        auto r = ref->asLayerInterface();
        return ::djinni::release(::djinni_generated::NativeLayerInterface::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT void JNICALL Java_io_openmobilemaps_mapscore_shared_map_layers_polygon_PolygonLayerInterface_00024CppProxy_native_1resetSelection(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        const auto& ref = ::djinni::objectFromHandleAddress<::PolygonLayerInterface>(nativeRef);
        ref->resetSelection();
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT void JNICALL Java_io_openmobilemaps_mapscore_shared_map_layers_polygon_PolygonLayerInterface_00024CppProxy_native_1setLayerClickable(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef, jboolean j_isLayerClickable)
{
    try {
        const auto& ref = ::djinni::objectFromHandleAddress<::PolygonLayerInterface>(nativeRef);
        ref->setLayerClickable(::djinni::Bool::toCpp(jniEnv, j_isLayerClickable));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

} // namespace djinni_generated
