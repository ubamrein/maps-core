// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from loader.djinni

#pragma once

#include "FontWrapper.h"
#include "djinni_support.hpp"

namespace djinni_generated {

class NativeFontWrapper final {
public:
    using CppType = ::FontWrapper;
    using JniType = jobject;

    using Boxed = NativeFontWrapper;

    ~NativeFontWrapper();

    static CppType toCpp(JNIEnv* jniEnv, JniType j);
    static ::djinni::LocalRef<JniType> fromCpp(JNIEnv* jniEnv, const CppType& c);

private:
    NativeFontWrapper();
    friend ::djinni::JniClass<NativeFontWrapper>;

    const ::djinni::GlobalRef<jclass> clazz { ::djinni::jniFindClass("io/openmobilemaps/mapscore/shared/map/loader/FontWrapper") };
    const jmethodID jconstructor { ::djinni::jniGetMethodID(clazz.get(), "<init>", "(Ljava/lang/String;DDDLio/openmobilemaps/mapscore/shared/graphics/common/Vec2D;D)V") };
    const jfieldID field_name { ::djinni::jniGetFieldID(clazz.get(), "name", "Ljava/lang/String;") };
    const jfieldID field_ascender { ::djinni::jniGetFieldID(clazz.get(), "ascender", "D") };
    const jfieldID field_descender { ::djinni::jniGetFieldID(clazz.get(), "descender", "D") };
    const jfieldID field_spaceAdvance { ::djinni::jniGetFieldID(clazz.get(), "spaceAdvance", "D") };
    const jfieldID field_bitmapSize { ::djinni::jniGetFieldID(clazz.get(), "bitmapSize", "Lio/openmobilemaps/mapscore/shared/graphics/common/Vec2D;") };
    const jfieldID field_size { ::djinni::jniGetFieldID(clazz.get(), "size", "D") };
};

} // namespace djinni_generated
