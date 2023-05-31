// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from shader.djinni

#pragma once

#include "PolygonPatternGroupShaderInterface.h"
#include "djinni_support.hpp"

namespace djinni_generated {

class NativePolygonPatternGroupShaderInterface final : ::djinni::JniInterface<::PolygonPatternGroupShaderInterface, NativePolygonPatternGroupShaderInterface> {
public:
    using CppType = std::shared_ptr<::PolygonPatternGroupShaderInterface>;
    using CppOptType = std::shared_ptr<::PolygonPatternGroupShaderInterface>;
    using JniType = jobject;

    using Boxed = NativePolygonPatternGroupShaderInterface;

    ~NativePolygonPatternGroupShaderInterface();

    static CppType toCpp(JNIEnv* jniEnv, JniType j) { return ::djinni::JniClass<NativePolygonPatternGroupShaderInterface>::get()._fromJava(jniEnv, j); }
    static ::djinni::LocalRef<JniType> fromCppOpt(JNIEnv* jniEnv, const CppOptType& c) { return {jniEnv, ::djinni::JniClass<NativePolygonPatternGroupShaderInterface>::get()._toJava(jniEnv, c)}; }
    static ::djinni::LocalRef<JniType> fromCpp(JNIEnv* jniEnv, const CppType& c) { return fromCppOpt(jniEnv, c); }

private:
    NativePolygonPatternGroupShaderInterface();
    friend ::djinni::JniClass<NativePolygonPatternGroupShaderInterface>;
    friend ::djinni::JniInterface<::PolygonPatternGroupShaderInterface, NativePolygonPatternGroupShaderInterface>;

};

} // namespace djinni_generated