// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from icon.djinni

#include "NativeIconFactory.h"  // my header
#include "Marshal.hpp"
#include "NativeBlendMode.h"
#include "NativeCoord.h"
#include "NativeIconInfoInterface.h"
#include "NativeIconType.h"
#include "NativeTextureHolderInterface.h"
#include "NativeVec2F.h"

namespace djinni_generated {

NativeIconFactory::NativeIconFactory() : ::djinni::JniInterface<::IconFactory, NativeIconFactory>("io/openmobilemaps/mapscore/shared/map/layers/icon/IconFactory$CppProxy") {}

NativeIconFactory::~NativeIconFactory() = default;


CJNIEXPORT void JNICALL Java_io_openmobilemaps_mapscore_shared_map_layers_icon_IconFactory_00024CppProxy_nativeDestroy(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        delete reinterpret_cast<::djinni::CppProxyHandle<::IconFactory>*>(nativeRef);
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT jobject JNICALL Java_io_openmobilemaps_mapscore_shared_map_layers_icon_IconFactory_createIcon(JNIEnv* jniEnv, jobject /*this*/, jstring j_identifier, ::djinni_generated::NativeCoord::JniType j_coordinate, ::djinni_generated::NativeTextureHolderInterface::JniType j_texture, ::djinni_generated::NativeVec2F::JniType j_iconSize, jobject j_scaleType, ::djinni_generated::NativeBlendMode::JniType j_blendMode)
{
    try {
        auto r = ::IconFactory::createIcon(::djinni::String::toCpp(jniEnv, j_identifier),
                                           ::djinni_generated::NativeCoord::toCpp(jniEnv, j_coordinate),
                                           ::djinni_generated::NativeTextureHolderInterface::toCpp(jniEnv, j_texture),
                                           ::djinni_generated::NativeVec2F::toCpp(jniEnv, j_iconSize),
                                           ::djinni_generated::NativeIconType::toCpp(jniEnv, j_scaleType),
                                           ::djinni_generated::NativeBlendMode::toCpp(jniEnv, j_blendMode));
        return ::djinni::release(::djinni_generated::NativeIconInfoInterface::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jobject JNICALL Java_io_openmobilemaps_mapscore_shared_map_layers_icon_IconFactory_createIconWithAnchor(JNIEnv* jniEnv, jobject /*this*/, jstring j_identifier, ::djinni_generated::NativeCoord::JniType j_coordinate, ::djinni_generated::NativeTextureHolderInterface::JniType j_texture, ::djinni_generated::NativeVec2F::JniType j_iconSize, jobject j_scaleType, ::djinni_generated::NativeBlendMode::JniType j_blendMode, ::djinni_generated::NativeVec2F::JniType j_iconAnchor)
{
    try {
        auto r = ::IconFactory::createIconWithAnchor(::djinni::String::toCpp(jniEnv, j_identifier),
                                                     ::djinni_generated::NativeCoord::toCpp(jniEnv, j_coordinate),
                                                     ::djinni_generated::NativeTextureHolderInterface::toCpp(jniEnv, j_texture),
                                                     ::djinni_generated::NativeVec2F::toCpp(jniEnv, j_iconSize),
                                                     ::djinni_generated::NativeIconType::toCpp(jniEnv, j_scaleType),
                                                     ::djinni_generated::NativeBlendMode::toCpp(jniEnv, j_blendMode),
                                                     ::djinni_generated::NativeVec2F::toCpp(jniEnv, j_iconAnchor));
        return ::djinni::release(::djinni_generated::NativeIconInfoInterface::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

} // namespace djinni_generated
