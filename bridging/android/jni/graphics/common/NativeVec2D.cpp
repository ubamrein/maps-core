// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from common.djinni

#include "NativeVec2D.h"  // my header
#include "Marshal.hpp"

namespace djinni_generated {

NativeVec2D::NativeVec2D() = default;

NativeVec2D::~NativeVec2D() = default;

auto NativeVec2D::fromCpp(JNIEnv* jniEnv, const CppType& c) -> ::djinni::LocalRef<JniType> {
    const auto& data = ::djinni::JniClass<NativeVec2D>::get();
    auto r = ::djinni::LocalRef<JniType>{jniEnv->NewObject(data.clazz.get(), data.jconstructor,
                                                           ::djinni::get(::djinni::F64::fromCpp(jniEnv, c.x)),
                                                           ::djinni::get(::djinni::F64::fromCpp(jniEnv, c.y)))};
    ::djinni::jniExceptionCheck(jniEnv);
    return r;
}

auto NativeVec2D::toCpp(JNIEnv* jniEnv, JniType j) -> CppType {
    ::djinni::JniLocalScope jscope(jniEnv, 3);
    assert(j != nullptr);
    const auto& data = ::djinni::JniClass<NativeVec2D>::get();
    return {::djinni::F64::toCpp(jniEnv, jniEnv->GetDoubleField(j, data.field_x)),
            ::djinni::F64::toCpp(jniEnv, jniEnv->GetDoubleField(j, data.field_y))};
}

}  // namespace djinni_generated
