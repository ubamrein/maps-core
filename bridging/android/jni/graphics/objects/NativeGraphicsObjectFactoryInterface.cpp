// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from graphicsobjects.djinni

#include "NativeGraphicsObjectFactoryInterface.h"  // my header
#include "NativeLine2dInterface.h"
#include "NativePolygon2dInterface.h"
#include "NativeQuad2dInterface.h"
#include "NativeShaderProgramInterface.h"

namespace djinni_generated {

NativeGraphicsObjectFactoryInterface::NativeGraphicsObjectFactoryInterface() : ::djinni::JniInterface<::GraphicsObjectFactoryInterface, NativeGraphicsObjectFactoryInterface>("io/openmobilemaps/mapscore/shared/graphics/objects/GraphicsObjectFactoryInterface$CppProxy") {}

NativeGraphicsObjectFactoryInterface::~NativeGraphicsObjectFactoryInterface() = default;

NativeGraphicsObjectFactoryInterface::JavaProxy::JavaProxy(JniType j) : Handle(::djinni::jniGetThreadEnv(), j) { }

NativeGraphicsObjectFactoryInterface::JavaProxy::~JavaProxy() = default;

std::shared_ptr<::Quad2dInterface> NativeGraphicsObjectFactoryInterface::JavaProxy::createQuad(const std::shared_ptr<::ShaderProgramInterface> & c_shader) {
    auto jniEnv = ::djinni::jniGetThreadEnv();
    ::djinni::JniLocalScope jscope(jniEnv, 10);
    const auto& data = ::djinni::JniClass<::djinni_generated::NativeGraphicsObjectFactoryInterface>::get();
    auto jret = jniEnv->CallObjectMethod(Handle::get().get(), data.method_createQuad,
                                         ::djinni::get(::djinni_generated::NativeShaderProgramInterface::fromCpp(jniEnv, c_shader)));
    ::djinni::jniExceptionCheck(jniEnv);
    return ::djinni_generated::NativeQuad2dInterface::toCpp(jniEnv, jret);
}
std::shared_ptr<::Line2dInterface> NativeGraphicsObjectFactoryInterface::JavaProxy::createLine(const std::shared_ptr<::ShaderProgramInterface> & c_shader) {
    auto jniEnv = ::djinni::jniGetThreadEnv();
    ::djinni::JniLocalScope jscope(jniEnv, 10);
    const auto& data = ::djinni::JniClass<::djinni_generated::NativeGraphicsObjectFactoryInterface>::get();
    auto jret = jniEnv->CallObjectMethod(Handle::get().get(), data.method_createLine,
                                         ::djinni::get(::djinni_generated::NativeShaderProgramInterface::fromCpp(jniEnv, c_shader)));
    ::djinni::jniExceptionCheck(jniEnv);
    return ::djinni_generated::NativeLine2dInterface::toCpp(jniEnv, jret);
}
std::shared_ptr<::Polygon2dInterface> NativeGraphicsObjectFactoryInterface::JavaProxy::createPolygon(const std::shared_ptr<::ShaderProgramInterface> & c_shader) {
    auto jniEnv = ::djinni::jniGetThreadEnv();
    ::djinni::JniLocalScope jscope(jniEnv, 10);
    const auto& data = ::djinni::JniClass<::djinni_generated::NativeGraphicsObjectFactoryInterface>::get();
    auto jret = jniEnv->CallObjectMethod(Handle::get().get(), data.method_createPolygon,
                                         ::djinni::get(::djinni_generated::NativeShaderProgramInterface::fromCpp(jniEnv, c_shader)));
    ::djinni::jniExceptionCheck(jniEnv);
    return ::djinni_generated::NativePolygon2dInterface::toCpp(jniEnv, jret);
}

CJNIEXPORT void JNICALL Java_io_openmobilemaps_mapscore_shared_graphics_objects_GraphicsObjectFactoryInterface_00024CppProxy_nativeDestroy(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        delete reinterpret_cast<::djinni::CppProxyHandle<::GraphicsObjectFactoryInterface>*>(nativeRef);
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT jobject JNICALL Java_io_openmobilemaps_mapscore_shared_graphics_objects_GraphicsObjectFactoryInterface_00024CppProxy_native_1createQuad(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef, ::djinni_generated::NativeShaderProgramInterface::JniType j_shader)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::GraphicsObjectFactoryInterface>(nativeRef);
        auto r = ref->createQuad(::djinni_generated::NativeShaderProgramInterface::toCpp(jniEnv, j_shader));
        return ::djinni::release(::djinni_generated::NativeQuad2dInterface::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jobject JNICALL Java_io_openmobilemaps_mapscore_shared_graphics_objects_GraphicsObjectFactoryInterface_00024CppProxy_native_1createLine(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef, ::djinni_generated::NativeShaderProgramInterface::JniType j_shader)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::GraphicsObjectFactoryInterface>(nativeRef);
        auto r = ref->createLine(::djinni_generated::NativeShaderProgramInterface::toCpp(jniEnv, j_shader));
        return ::djinni::release(::djinni_generated::NativeLine2dInterface::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jobject JNICALL Java_io_openmobilemaps_mapscore_shared_graphics_objects_GraphicsObjectFactoryInterface_00024CppProxy_native_1createPolygon(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef, ::djinni_generated::NativeShaderProgramInterface::JniType j_shader)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::GraphicsObjectFactoryInterface>(nativeRef);
        auto r = ref->createPolygon(::djinni_generated::NativeShaderProgramInterface::toCpp(jniEnv, j_shader));
        return ::djinni::release(::djinni_generated::NativePolygon2dInterface::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

}  // namespace djinni_generated
