// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from tiled_layer.djinni

#pragma once

#include "Tiled2dMapVectorTileOrigin.h"
#include "djinni_support.hpp"

namespace djinni_generated {

class NativeTiled2dMapVectorTileOrigin final : ::djinni::JniEnum {
public:
    using CppType = ::Tiled2dMapVectorTileOrigin;
    using JniType = jobject;

    using Boxed = NativeTiled2dMapVectorTileOrigin;

    static CppType toCpp(JNIEnv* jniEnv, JniType j) { return static_cast<CppType>(::djinni::JniClass<NativeTiled2dMapVectorTileOrigin>::get().ordinal(jniEnv, j)); }
    static ::djinni::LocalRef<JniType> fromCpp(JNIEnv* jniEnv, CppType c) { return ::djinni::JniClass<NativeTiled2dMapVectorTileOrigin>::get().create(jniEnv, static_cast<jint>(c)); }

private:
    NativeTiled2dMapVectorTileOrigin() : JniEnum("io/openmobilemaps/mapscore/shared/map/layers/tiled/Tiled2dMapVectorTileOrigin") {}
    friend ::djinni::JniClass<NativeTiled2dMapVectorTileOrigin>;
};

}  // namespace djinni_generated
