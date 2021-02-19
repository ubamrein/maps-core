// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from touch_handler.djinni

#pragma once

#include "TouchInterface.h"
#include "djinni_support.hpp"

namespace djinni_generated {

class NativeTouchInterface final : ::djinni::JniInterface<::TouchInterface, NativeTouchInterface> {
public:
    using CppType = std::shared_ptr<::TouchInterface>;
    using CppOptType = std::shared_ptr<::TouchInterface>;
    using JniType = jobject;

    using Boxed = NativeTouchInterface;

    ~NativeTouchInterface();

    static CppType toCpp(JNIEnv* jniEnv, JniType j) { return ::djinni::JniClass<NativeTouchInterface>::get()._fromJava(jniEnv, j); }
    static ::djinni::LocalRef<JniType> fromCppOpt(JNIEnv* jniEnv, const CppOptType& c) { return {jniEnv, ::djinni::JniClass<NativeTouchInterface>::get()._toJava(jniEnv, c)}; }
    static ::djinni::LocalRef<JniType> fromCpp(JNIEnv* jniEnv, const CppType& c) { return fromCppOpt(jniEnv, c); }

private:
    NativeTouchInterface();
    friend ::djinni::JniClass<NativeTouchInterface>;
    friend ::djinni::JniInterface<::TouchInterface, NativeTouchInterface>;

};

}  // namespace djinni_generated