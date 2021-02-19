// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from coordinate_system.djinni

#include "NativeMapCoordinateSystem.h"  // my header
#include "Marshal.hpp"
#include "NativeRectCoord.h"

namespace djinni_generated {

NativeMapCoordinateSystem::NativeMapCoordinateSystem() = default;

NativeMapCoordinateSystem::~NativeMapCoordinateSystem() = default;

auto NativeMapCoordinateSystem::fromCpp(JNIEnv* jniEnv, const CppType& c) -> ::djinni::LocalRef<JniType> {
    const auto& data = ::djinni::JniClass<NativeMapCoordinateSystem>::get();
    auto r = ::djinni::LocalRef<JniType>{jniEnv->NewObject(data.clazz.get(), data.jconstructor,
                                                           ::djinni::get(::djinni::String::fromCpp(jniEnv, c.identifier)),
                                                           ::djinni::get(::djinni_generated::NativeRectCoord::fromCpp(jniEnv, c.bounds)),
                                                           ::djinni::get(::djinni::F32::fromCpp(jniEnv, c.unitToScreenMeterFactor)))};
    ::djinni::jniExceptionCheck(jniEnv);
    return r;
}

auto NativeMapCoordinateSystem::toCpp(JNIEnv* jniEnv, JniType j) -> CppType {
    ::djinni::JniLocalScope jscope(jniEnv, 4);
    assert(j != nullptr);
    const auto& data = ::djinni::JniClass<NativeMapCoordinateSystem>::get();
    return {::djinni::String::toCpp(jniEnv, (jstring)jniEnv->GetObjectField(j, data.field_identifier)),
            ::djinni_generated::NativeRectCoord::toCpp(jniEnv, jniEnv->GetObjectField(j, data.field_bounds)),
            ::djinni::F32::toCpp(jniEnv, jniEnv->GetFloatField(j, data.field_unitToScreenMeterFactor))};
}

}  // namespace djinni_generated
