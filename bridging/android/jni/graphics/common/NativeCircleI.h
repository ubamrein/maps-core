// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from common.djinni

#pragma once

#include "CircleI.h"
#include "djinni_support.hpp"

namespace djinni_generated {

class NativeCircleI final {
public:
    using CppType = ::CircleI;
    using JniType = jobject;

    using Boxed = NativeCircleI;

    ~NativeCircleI();

    static CppType toCpp(JNIEnv* jniEnv, JniType j);
    static ::djinni::LocalRef<JniType> fromCpp(JNIEnv* jniEnv, const CppType& c);

private:
    NativeCircleI();
    friend ::djinni::JniClass<NativeCircleI>;

    const ::djinni::GlobalRef<jclass> clazz { ::djinni::jniFindClass("io/openmobilemaps/mapscore/shared/graphics/common/CircleI") };
    const jmethodID jconstructor { ::djinni::jniGetMethodID(clazz.get(), "<init>", "(Lio/openmobilemaps/mapscore/shared/graphics/common/Vec2I;I)V") };
    const jfieldID field_origin { ::djinni::jniGetFieldID(clazz.get(), "origin", "Lio/openmobilemaps/mapscore/shared/graphics/common/Vec2I;") };
    const jfieldID field_radius { ::djinni::jniGetFieldID(clazz.get(), "radius", "I") };
};

} // namespace djinni_generated
