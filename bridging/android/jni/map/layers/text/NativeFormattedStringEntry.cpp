// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from text.djinni

#include "NativeFormattedStringEntry.h"  // my header
#include "Marshal.hpp"

namespace djinni_generated {

NativeFormattedStringEntry::NativeFormattedStringEntry() = default;

NativeFormattedStringEntry::~NativeFormattedStringEntry() = default;

auto NativeFormattedStringEntry::fromCpp(JNIEnv* jniEnv, const CppType& c) -> ::djinni::LocalRef<JniType> {
    const auto& data = ::djinni::JniClass<NativeFormattedStringEntry>::get();
    auto r = ::djinni::LocalRef<JniType>{jniEnv->NewObject(data.clazz.get(), data.jconstructor,
                                                           ::djinni::get(::djinni::String::fromCpp(jniEnv, c.text)),
                                                           ::djinni::get(::djinni::F32::fromCpp(jniEnv, c.scale)))};
    ::djinni::jniExceptionCheck(jniEnv);
    return r;
}

auto NativeFormattedStringEntry::toCpp(JNIEnv* jniEnv, JniType j) -> CppType {
    ::djinni::JniLocalScope jscope(jniEnv, 3);
    assert(j != nullptr);
    const auto& data = ::djinni::JniClass<NativeFormattedStringEntry>::get();
    return {::djinni::String::toCpp(jniEnv, (jstring)jniEnv->GetObjectField(j, data.field_text)),
            ::djinni::F32::toCpp(jniEnv, jniEnv->GetFloatField(j, data.field_scale))};
}

} // namespace djinni_generated
