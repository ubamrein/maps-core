// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from graphicsobjects.djinni

#include "NativePolygonGroup2dInterface.h"  // my header
#include "Marshal.hpp"
#include "NativeGraphicsObjectInterface.h"
#include "NativeRenderVerticesDescription.h"

namespace djinni_generated {

NativePolygonGroup2dInterface::NativePolygonGroup2dInterface() : ::djinni::JniInterface<::PolygonGroup2dInterface, NativePolygonGroup2dInterface>("io/openmobilemaps/mapscore/shared/graphics/objects/PolygonGroup2dInterface$CppProxy") {}

NativePolygonGroup2dInterface::~NativePolygonGroup2dInterface() = default;

NativePolygonGroup2dInterface::JavaProxy::JavaProxy(JniType j) : Handle(::djinni::jniGetThreadEnv(), j) { }

NativePolygonGroup2dInterface::JavaProxy::~JavaProxy() = default;

void NativePolygonGroup2dInterface::JavaProxy::setVertices(const std::vector<::RenderVerticesDescription> & c_vertices, const std::vector<int32_t> & c_indices) {
    auto jniEnv = ::djinni::jniGetThreadEnv();
    ::djinni::JniLocalScope jscope(jniEnv, 10);
    const auto& data = ::djinni::JniClass<::djinni_generated::NativePolygonGroup2dInterface>::get();
    jniEnv->CallVoidMethod(Handle::get().get(), data.method_setVertices,
                           ::djinni::get(::djinni::List<::djinni_generated::NativeRenderVerticesDescription>::fromCpp(jniEnv, c_vertices)),
                           ::djinni::get(::djinni::List<::djinni::I32>::fromCpp(jniEnv, c_indices)));
    ::djinni::jniExceptionCheck(jniEnv);
}
std::shared_ptr<::GraphicsObjectInterface> NativePolygonGroup2dInterface::JavaProxy::asGraphicsObject() {
    auto jniEnv = ::djinni::jniGetThreadEnv();
    ::djinni::JniLocalScope jscope(jniEnv, 10);
    const auto& data = ::djinni::JniClass<::djinni_generated::NativePolygonGroup2dInterface>::get();
    auto jret = jniEnv->CallObjectMethod(Handle::get().get(), data.method_asGraphicsObject);
    ::djinni::jniExceptionCheck(jniEnv);
    return ::djinni_generated::NativeGraphicsObjectInterface::toCpp(jniEnv, jret);
}

CJNIEXPORT void JNICALL Java_io_openmobilemaps_mapscore_shared_graphics_objects_PolygonGroup2dInterface_00024CppProxy_nativeDestroy(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        delete reinterpret_cast<::djinni::CppProxyHandle<::PolygonGroup2dInterface>*>(nativeRef);
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT void JNICALL Java_io_openmobilemaps_mapscore_shared_graphics_objects_PolygonGroup2dInterface_00024CppProxy_native_1setVertices(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef, jobject j_vertices, jobject j_indices)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::PolygonGroup2dInterface>(nativeRef);
        ref->setVertices(::djinni::List<::djinni_generated::NativeRenderVerticesDescription>::toCpp(jniEnv, j_vertices),
                         ::djinni::List<::djinni::I32>::toCpp(jniEnv, j_indices));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT jobject JNICALL Java_io_openmobilemaps_mapscore_shared_graphics_objects_PolygonGroup2dInterface_00024CppProxy_native_1asGraphicsObject(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::PolygonGroup2dInterface>(nativeRef);
        auto r = ref->asGraphicsObject();
        return ::djinni::release(::djinni_generated::NativeGraphicsObjectInterface::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

}  // namespace djinni_generated