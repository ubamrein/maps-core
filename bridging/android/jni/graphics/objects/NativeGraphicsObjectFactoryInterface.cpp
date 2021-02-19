// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from graphicsobjects.djinni

#include "NativeGraphicsObjectFactoryInterface.h"  // my header
#include "NativeLine2dInterface.h"
#include "NativeLineShaderProgramInterface.h"
#include "NativePolygon2dInterface.h"
#include "NativeRectangle2dInterface.h"
#include "NativeShaderProgramInterface.h"

namespace djinni_generated {

NativeGraphicsObjectFactoryInterface::NativeGraphicsObjectFactoryInterface() : ::djinni::JniInterface<::GraphicsObjectFactoryInterface, NativeGraphicsObjectFactoryInterface>("ch/ubique/mapscore/shared/graphics/objects/GraphicsObjectFactoryInterface$CppProxy") {}

NativeGraphicsObjectFactoryInterface::~NativeGraphicsObjectFactoryInterface() = default;

NativeGraphicsObjectFactoryInterface::JavaProxy::JavaProxy(JniType j) : Handle(::djinni::jniGetThreadEnv(), j) { }

NativeGraphicsObjectFactoryInterface::JavaProxy::~JavaProxy() = default;

std::shared_ptr<::Rectangle2dInterface> NativeGraphicsObjectFactoryInterface::JavaProxy::createRectangle(const std::shared_ptr<::ShaderProgramInterface> & c_shader) {
    auto jniEnv = ::djinni::jniGetThreadEnv();
    ::djinni::JniLocalScope jscope(jniEnv, 10);
    const auto& data = ::djinni::JniClass<::djinni_generated::NativeGraphicsObjectFactoryInterface>::get();
    auto jret = jniEnv->CallObjectMethod(Handle::get().get(), data.method_createRectangle,
                                         ::djinni::get(::djinni_generated::NativeShaderProgramInterface::fromCpp(jniEnv, c_shader)));
    ::djinni::jniExceptionCheck(jniEnv);
    return ::djinni_generated::NativeRectangle2dInterface::toCpp(jniEnv, jret);
}
std::shared_ptr<::Line2dInterface> NativeGraphicsObjectFactoryInterface::JavaProxy::createLine(const std::shared_ptr<::LineShaderProgramInterface> & c_lineShader) {
    auto jniEnv = ::djinni::jniGetThreadEnv();
    ::djinni::JniLocalScope jscope(jniEnv, 10);
    const auto& data = ::djinni::JniClass<::djinni_generated::NativeGraphicsObjectFactoryInterface>::get();
    auto jret = jniEnv->CallObjectMethod(Handle::get().get(), data.method_createLine,
                                         ::djinni::get(::djinni_generated::NativeLineShaderProgramInterface::fromCpp(jniEnv, c_lineShader)));
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

CJNIEXPORT void JNICALL Java_ch_ubique_mapscore_shared_graphics_objects_GraphicsObjectFactoryInterface_00024CppProxy_nativeDestroy(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        delete reinterpret_cast<::djinni::CppProxyHandle<::GraphicsObjectFactoryInterface>*>(nativeRef);
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT jobject JNICALL Java_ch_ubique_mapscore_shared_graphics_objects_GraphicsObjectFactoryInterface_00024CppProxy_native_1createRectangle(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef, ::djinni_generated::NativeShaderProgramInterface::JniType j_shader)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::GraphicsObjectFactoryInterface>(nativeRef);
        auto r = ref->createRectangle(::djinni_generated::NativeShaderProgramInterface::toCpp(jniEnv, j_shader));
        return ::djinni::release(::djinni_generated::NativeRectangle2dInterface::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jobject JNICALL Java_ch_ubique_mapscore_shared_graphics_objects_GraphicsObjectFactoryInterface_00024CppProxy_native_1createLine(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef, ::djinni_generated::NativeLineShaderProgramInterface::JniType j_lineShader)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::GraphicsObjectFactoryInterface>(nativeRef);
        auto r = ref->createLine(::djinni_generated::NativeLineShaderProgramInterface::toCpp(jniEnv, j_lineShader));
        return ::djinni::release(::djinni_generated::NativeLine2dInterface::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jobject JNICALL Java_ch_ubique_mapscore_shared_graphics_objects_GraphicsObjectFactoryInterface_00024CppProxy_native_1createPolygon(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef, ::djinni_generated::NativeShaderProgramInterface::JniType j_shader)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::GraphicsObjectFactoryInterface>(nativeRef);
        auto r = ref->createPolygon(::djinni_generated::NativeShaderProgramInterface::toCpp(jniEnv, j_shader));
        return ::djinni::release(::djinni_generated::NativePolygon2dInterface::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

}  // namespace djinni_generated
