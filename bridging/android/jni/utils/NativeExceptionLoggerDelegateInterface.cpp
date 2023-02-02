// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from exception_logger.djinni

#include "NativeExceptionLoggerDelegateInterface.h"  // my header
#include "Marshal.hpp"

namespace djinni_generated {

NativeExceptionLoggerDelegateInterface::NativeExceptionLoggerDelegateInterface() : ::djinni::JniInterface<::ExceptionLoggerDelegateInterface, NativeExceptionLoggerDelegateInterface>("io/openmobilemaps/mapscore/shared/utils/ExceptionLoggerDelegateInterface$CppProxy") {}

NativeExceptionLoggerDelegateInterface::~NativeExceptionLoggerDelegateInterface() = default;

NativeExceptionLoggerDelegateInterface::JavaProxy::JavaProxy(JniType j) : Handle(::djinni::jniGetThreadEnv(), j) { }

NativeExceptionLoggerDelegateInterface::JavaProxy::~JavaProxy() = default;

void NativeExceptionLoggerDelegateInterface::JavaProxy::logMessage(const std::string & c_errorDomain, int32_t c_code, const std::unordered_map<std::string, std::string> & c_customValues, const std::string & c_function, const std::string & c_file, int32_t c_line) {
    auto jniEnv = ::djinni::jniGetThreadEnv();
    ::djinni::JniLocalScope jscope(jniEnv, 10);
    const auto& data = ::djinni::JniClass<::djinni_generated::NativeExceptionLoggerDelegateInterface>::get();
    jniEnv->CallVoidMethod(Handle::get().get(), data.method_logMessage,
                           ::djinni::get(::djinni::String::fromCpp(jniEnv, c_errorDomain)),
                           ::djinni::get(::djinni::I32::fromCpp(jniEnv, c_code)),
                           ::djinni::get(::djinni::Map<::djinni::String, ::djinni::String>::fromCpp(jniEnv, c_customValues)),
                           ::djinni::get(::djinni::String::fromCpp(jniEnv, c_function)),
                           ::djinni::get(::djinni::String::fromCpp(jniEnv, c_file)),
                           ::djinni::get(::djinni::I32::fromCpp(jniEnv, c_line)));
    ::djinni::jniExceptionCheck(jniEnv);
}

CJNIEXPORT void JNICALL Java_io_openmobilemaps_mapscore_shared_utils_ExceptionLoggerDelegateInterface_00024CppProxy_nativeDestroy(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        delete reinterpret_cast<::djinni::CppProxyHandle<::ExceptionLoggerDelegateInterface>*>(nativeRef);
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT void JNICALL Java_io_openmobilemaps_mapscore_shared_utils_ExceptionLoggerDelegateInterface_00024CppProxy_native_1logMessage(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef, jstring j_errorDomain, jint j_code, jobject j_customValues, jstring j_function, jstring j_file, jint j_line)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::ExceptionLoggerDelegateInterface>(nativeRef);
        ref->logMessage(::djinni::String::toCpp(jniEnv, j_errorDomain),
                        ::djinni::I32::toCpp(jniEnv, j_code),
                        ::djinni::Map<::djinni::String, ::djinni::String>::toCpp(jniEnv, j_customValues),
                        ::djinni::String::toCpp(jniEnv, j_function),
                        ::djinni::String::toCpp(jniEnv, j_file),
                        ::djinni::I32::toCpp(jniEnv, j_line));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

}  // namespace djinni_generated
