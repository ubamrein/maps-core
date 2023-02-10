// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from wmts_capabilities.djinni

#include "NativeWmtsLayerDimension.h"  // my header
#include "Marshal.hpp"

namespace djinni_generated {

NativeWmtsLayerDimension::NativeWmtsLayerDimension() = default;

NativeWmtsLayerDimension::~NativeWmtsLayerDimension() = default;

auto NativeWmtsLayerDimension::fromCpp(JNIEnv* jniEnv, const CppType& c) -> ::djinni::LocalRef<JniType> {
    const auto& data = ::djinni::JniClass<NativeWmtsLayerDimension>::get();
    auto r = ::djinni::LocalRef<JniType>{jniEnv->NewObject(data.clazz.get(), data.jconstructor,
                                                           ::djinni::get(::djinni::String::fromCpp(jniEnv, c.identifier)),
                                                           ::djinni::get(::djinni::String::fromCpp(jniEnv, c.defaultValue)),
                                                           ::djinni::get(::djinni::List<::djinni::String>::fromCpp(jniEnv, c.values)))};
    ::djinni::jniExceptionCheck(jniEnv);
    return r;
}

auto NativeWmtsLayerDimension::toCpp(JNIEnv* jniEnv, JniType j) -> CppType {
    ::djinni::JniLocalScope jscope(jniEnv, 4);
    assert(j != nullptr);
    const auto& data = ::djinni::JniClass<NativeWmtsLayerDimension>::get();
    return {::djinni::String::toCpp(jniEnv, (jstring)jniEnv->GetObjectField(j, data.field_identifier)),
            ::djinni::String::toCpp(jniEnv, (jstring)jniEnv->GetObjectField(j, data.field_defaultValue)),
            ::djinni::List<::djinni::String>::toCpp(jniEnv, jniEnv->GetObjectField(j, data.field_values))};
}

} // namespace djinni_generated
