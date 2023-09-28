// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from graphicsobjects.djinni

#include "NativeGraphicsObjectInterface.h"  // my header
#include "Marshal.hpp"
#include "NativeRenderPassConfig.h"
#include "NativeRenderingContextInterface.h"

namespace djinni_generated {

NativeGraphicsObjectInterface::NativeGraphicsObjectInterface() : ::djinni::JniInterface<::GraphicsObjectInterface, NativeGraphicsObjectInterface>("io/openmobilemaps/mapscore/shared/graphics/objects/GraphicsObjectInterface$CppProxy") {}

NativeGraphicsObjectInterface::~NativeGraphicsObjectInterface() = default;

NativeGraphicsObjectInterface::JavaProxy::JavaProxy(JniType j) : Handle(::djinni::jniGetThreadEnv(), j) { }

NativeGraphicsObjectInterface::JavaProxy::~JavaProxy() = default;

bool NativeGraphicsObjectInterface::JavaProxy::isReady() {
    auto jniEnv = ::djinni::jniGetThreadEnv();
    ::djinni::JniLocalScope jscope(jniEnv, 10);
    const auto& data = ::djinni::JniClass<::djinni_generated::NativeGraphicsObjectInterface>::get();
    auto jret = jniEnv->CallBooleanMethod(Handle::get().get(), data.method_isReady);
    ::djinni::jniExceptionCheck(jniEnv);
    return ::djinni::Bool::toCpp(jniEnv, jret);
}
void NativeGraphicsObjectInterface::JavaProxy::setup(const /*not-null*/ std::shared_ptr<::RenderingContextInterface> & c_context) {
    auto jniEnv = ::djinni::jniGetThreadEnv();
    ::djinni::JniLocalScope jscope(jniEnv, 10);
    const auto& data = ::djinni::JniClass<::djinni_generated::NativeGraphicsObjectInterface>::get();
    jniEnv->CallVoidMethod(Handle::get().get(), data.method_setup,
                           ::djinni::get(::djinni_generated::NativeRenderingContextInterface::fromCpp(jniEnv, c_context)));
    ::djinni::jniExceptionCheck(jniEnv);
}
void NativeGraphicsObjectInterface::JavaProxy::clear() {
    auto jniEnv = ::djinni::jniGetThreadEnv();
    ::djinni::JniLocalScope jscope(jniEnv, 10);
    const auto& data = ::djinni::JniClass<::djinni_generated::NativeGraphicsObjectInterface>::get();
    jniEnv->CallVoidMethod(Handle::get().get(), data.method_clear);
    ::djinni::jniExceptionCheck(jniEnv);
}
void NativeGraphicsObjectInterface::JavaProxy::setIsInverseMasked(bool c_inversed) {
    auto jniEnv = ::djinni::jniGetThreadEnv();
    ::djinni::JniLocalScope jscope(jniEnv, 10);
    const auto& data = ::djinni::JniClass<::djinni_generated::NativeGraphicsObjectInterface>::get();
    jniEnv->CallVoidMethod(Handle::get().get(), data.method_setIsInverseMasked,
                           ::djinni::get(::djinni::Bool::fromCpp(jniEnv, c_inversed)));
    ::djinni::jniExceptionCheck(jniEnv);
}
void NativeGraphicsObjectInterface::JavaProxy::setDebugLabel(const std::string & c_label) {
    auto jniEnv = ::djinni::jniGetThreadEnv();
    ::djinni::JniLocalScope jscope(jniEnv, 10);
    const auto& data = ::djinni::JniClass<::djinni_generated::NativeGraphicsObjectInterface>::get();
    jniEnv->CallVoidMethod(Handle::get().get(), data.method_setDebugLabel,
                           ::djinni::get(::djinni::String::fromCpp(jniEnv, c_label)));
    ::djinni::jniExceptionCheck(jniEnv);
}
void NativeGraphicsObjectInterface::JavaProxy::render(const /*not-null*/ std::shared_ptr<::RenderingContextInterface> & c_context, const ::RenderPassConfig & c_renderPass, int64_t c_mvpMatrix, bool c_isMasked, double c_screenPixelAsRealMeterFactor) {
    auto jniEnv = ::djinni::jniGetThreadEnv();
    ::djinni::JniLocalScope jscope(jniEnv, 10);
    const auto& data = ::djinni::JniClass<::djinni_generated::NativeGraphicsObjectInterface>::get();
    jniEnv->CallVoidMethod(Handle::get().get(), data.method_render,
                           ::djinni::get(::djinni_generated::NativeRenderingContextInterface::fromCpp(jniEnv, c_context)),
                           ::djinni::get(::djinni_generated::NativeRenderPassConfig::fromCpp(jniEnv, c_renderPass)),
                           ::djinni::get(::djinni::I64::fromCpp(jniEnv, c_mvpMatrix)),
                           ::djinni::get(::djinni::Bool::fromCpp(jniEnv, c_isMasked)),
                           ::djinni::get(::djinni::F64::fromCpp(jniEnv, c_screenPixelAsRealMeterFactor)));
    ::djinni::jniExceptionCheck(jniEnv);
}

CJNIEXPORT void JNICALL Java_io_openmobilemaps_mapscore_shared_graphics_objects_GraphicsObjectInterface_00024CppProxy_nativeDestroy(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        delete reinterpret_cast<::djinni::CppProxyHandle<::GraphicsObjectInterface>*>(nativeRef);
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT jboolean JNICALL Java_io_openmobilemaps_mapscore_shared_graphics_objects_GraphicsObjectInterface_00024CppProxy_native_1isReady(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        const auto& ref = ::djinni::objectFromHandleAddress<::GraphicsObjectInterface>(nativeRef);
        auto r = ref->isReady();
        return ::djinni::release(::djinni::Bool::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT void JNICALL Java_io_openmobilemaps_mapscore_shared_graphics_objects_GraphicsObjectInterface_00024CppProxy_native_1setup(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef, ::djinni_generated::NativeRenderingContextInterface::JniType j_context)
{
    try {
        const auto& ref = ::djinni::objectFromHandleAddress<::GraphicsObjectInterface>(nativeRef);
        ref->setup(::djinni_generated::NativeRenderingContextInterface::toCpp(jniEnv, j_context));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT void JNICALL Java_io_openmobilemaps_mapscore_shared_graphics_objects_GraphicsObjectInterface_00024CppProxy_native_1clear(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        const auto& ref = ::djinni::objectFromHandleAddress<::GraphicsObjectInterface>(nativeRef);
        ref->clear();
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT void JNICALL Java_io_openmobilemaps_mapscore_shared_graphics_objects_GraphicsObjectInterface_00024CppProxy_native_1setIsInverseMasked(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef, jboolean j_inversed)
{
    try {
        const auto& ref = ::djinni::objectFromHandleAddress<::GraphicsObjectInterface>(nativeRef);
        ref->setIsInverseMasked(::djinni::Bool::toCpp(jniEnv, j_inversed));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT void JNICALL Java_io_openmobilemaps_mapscore_shared_graphics_objects_GraphicsObjectInterface_00024CppProxy_native_1setDebugLabel(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef, jstring j_label)
{
    try {
        const auto& ref = ::djinni::objectFromHandleAddress<::GraphicsObjectInterface>(nativeRef);
        ref->setDebugLabel(::djinni::String::toCpp(jniEnv, j_label));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT void JNICALL Java_io_openmobilemaps_mapscore_shared_graphics_objects_GraphicsObjectInterface_00024CppProxy_native_1render(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef, ::djinni_generated::NativeRenderingContextInterface::JniType j_context, ::djinni_generated::NativeRenderPassConfig::JniType j_renderPass, jlong j_mvpMatrix, jboolean j_isMasked, jdouble j_screenPixelAsRealMeterFactor)
{
    try {
        const auto& ref = ::djinni::objectFromHandleAddress<::GraphicsObjectInterface>(nativeRef);
        ref->render(::djinni_generated::NativeRenderingContextInterface::toCpp(jniEnv, j_context),
                    ::djinni_generated::NativeRenderPassConfig::toCpp(jniEnv, j_renderPass),
                    ::djinni::I64::toCpp(jniEnv, j_mvpMatrix),
                    ::djinni::Bool::toCpp(jniEnv, j_isMasked),
                    ::djinni::F64::toCpp(jniEnv, j_screenPixelAsRealMeterFactor));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

} // namespace djinni_generated
