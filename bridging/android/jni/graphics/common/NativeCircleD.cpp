// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from common.djinni

#include "NativeCircleD.h"  // my header
#include "Marshal.hpp"

namespace djinni_generated {

NativeCircleD::NativeCircleD() = default;

NativeCircleD::~NativeCircleD() = default;

auto NativeCircleD::fromCpp(JNIEnv* jniEnv, const CppType& c) -> ::djinni::LocalRef<JniType> {
    const auto& data = ::djinni::JniClass<NativeCircleD>::get();
    auto r = ::djinni::LocalRef<JniType>{jniEnv->NewObject(data.clazz.get(), data.jconstructor,
                                                           ::djinni::get(::djinni::F64::fromCpp(jniEnv, c.x)),
                                                           ::djinni::get(::djinni::F64::fromCpp(jniEnv, c.y)),
                                                           ::djinni::get(::djinni::F64::fromCpp(jniEnv, c.radius)))};
    ::djinni::jniExceptionCheck(jniEnv);
    return r;
}

auto NativeCircleD::toCpp(JNIEnv* jniEnv, JniType j) -> CppType {
    ::djinni::JniLocalScope jscope(jniEnv, 4);
    assert(j != nullptr);
    const auto& data = ::djinni::JniClass<NativeCircleD>::get();
    return {::djinni::F64::toCpp(jniEnv, jniEnv->GetDoubleField(j, data.field_x)),
            ::djinni::F64::toCpp(jniEnv, jniEnv->GetDoubleField(j, data.field_y)),
            ::djinni::F64::toCpp(jniEnv, jniEnv->GetDoubleField(j, data.field_radius))};
}

} // namespace djinni_generated