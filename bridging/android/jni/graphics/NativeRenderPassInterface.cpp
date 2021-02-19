// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from core.djinni

#include "NativeRenderPassInterface.h"  // my header
#include "Marshal.hpp"
#include "NativeGraphicsObjectInterface.h"
#include "NativeRenderPassConfig.h"

namespace djinni_generated {

NativeRenderPassInterface::NativeRenderPassInterface() : ::djinni::JniInterface<::RenderPassInterface, NativeRenderPassInterface>("ch/ubique/mapscore/shared/graphics/RenderPassInterface$CppProxy") {}

NativeRenderPassInterface::~NativeRenderPassInterface() = default;

NativeRenderPassInterface::JavaProxy::JavaProxy(JniType j) : Handle(::djinni::jniGetThreadEnv(), j) { }

NativeRenderPassInterface::JavaProxy::~JavaProxy() = default;

std::vector<std::shared_ptr<::GraphicsObjectInterface>> NativeRenderPassInterface::JavaProxy::getGraphicsObjects() {
    auto jniEnv = ::djinni::jniGetThreadEnv();
    ::djinni::JniLocalScope jscope(jniEnv, 10);
    const auto& data = ::djinni::JniClass<::djinni_generated::NativeRenderPassInterface>::get();
    auto jret = jniEnv->CallObjectMethod(Handle::get().get(), data.method_getGraphicsObjects);
    ::djinni::jniExceptionCheck(jniEnv);
    return ::djinni::List<::djinni_generated::NativeGraphicsObjectInterface>::toCpp(jniEnv, jret);
}
::RenderPassConfig NativeRenderPassInterface::JavaProxy::getRenderPassConfig() {
    auto jniEnv = ::djinni::jniGetThreadEnv();
    ::djinni::JniLocalScope jscope(jniEnv, 10);
    const auto& data = ::djinni::JniClass<::djinni_generated::NativeRenderPassInterface>::get();
    auto jret = jniEnv->CallObjectMethod(Handle::get().get(), data.method_getRenderPassConfig);
    ::djinni::jniExceptionCheck(jniEnv);
    return ::djinni_generated::NativeRenderPassConfig::toCpp(jniEnv, jret);
}

CJNIEXPORT void JNICALL Java_ch_ubique_mapscore_shared_graphics_RenderPassInterface_00024CppProxy_nativeDestroy(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        delete reinterpret_cast<::djinni::CppProxyHandle<::RenderPassInterface>*>(nativeRef);
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT jobject JNICALL Java_ch_ubique_mapscore_shared_graphics_RenderPassInterface_00024CppProxy_native_1getGraphicsObjects(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::RenderPassInterface>(nativeRef);
        auto r = ref->getGraphicsObjects();
        return ::djinni::release(::djinni::List<::djinni_generated::NativeGraphicsObjectInterface>::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jobject JNICALL Java_ch_ubique_mapscore_shared_graphics_RenderPassInterface_00024CppProxy_native_1getRenderPassConfig(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::RenderPassInterface>(nativeRef);
        auto r = ref->getRenderPassConfig();
        return ::djinni::release(::djinni_generated::NativeRenderPassConfig::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

}  // namespace djinni_generated
