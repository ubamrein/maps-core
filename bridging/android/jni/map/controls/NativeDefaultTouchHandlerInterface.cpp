// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from touch_handler.djinni

#include "NativeDefaultTouchHandlerInterface.h"  // my header
#include "Marshal.hpp"
#include "NativeSchedulerInterface.h"
#include "NativeTouchHandlerInterface.h"

namespace djinni_generated {

NativeDefaultTouchHandlerInterface::NativeDefaultTouchHandlerInterface() : ::djinni::JniInterface<::DefaultTouchHandlerInterface, NativeDefaultTouchHandlerInterface>("ch/ubique/mapscore/shared/map/controls/DefaultTouchHandlerInterface$CppProxy") {}

NativeDefaultTouchHandlerInterface::~NativeDefaultTouchHandlerInterface() = default;


CJNIEXPORT void JNICALL Java_ch_ubique_mapscore_shared_map_controls_DefaultTouchHandlerInterface_00024CppProxy_nativeDestroy(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        delete reinterpret_cast<::djinni::CppProxyHandle<::DefaultTouchHandlerInterface>*>(nativeRef);
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT jobject JNICALL Java_ch_ubique_mapscore_shared_map_controls_DefaultTouchHandlerInterface_00024CppProxy_create(JNIEnv* jniEnv, jobject /*this*/, ::djinni_generated::NativeSchedulerInterface::JniType j_scheduler, jfloat j_density)
{
    try {
        DJINNI_FUNCTION_PROLOGUE0(jniEnv);
        auto r = ::DefaultTouchHandlerInterface::create(::djinni_generated::NativeSchedulerInterface::toCpp(jniEnv, j_scheduler),
                                                        ::djinni::F32::toCpp(jniEnv, j_density));
        return ::djinni::release(::djinni_generated::NativeTouchHandlerInterface::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

}  // namespace djinni_generated
