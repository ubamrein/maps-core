// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from tiled_vector_layer.djinni

#pragma once

#include "Tiled2dMapVectorLayerLocalDataProviderInterface.h"
#include "djinni_support.hpp"

namespace djinni_generated {

class NativeTiled2dMapVectorLayerLocalDataProviderInterface final : ::djinni::JniInterface<::Tiled2dMapVectorLayerLocalDataProviderInterface, NativeTiled2dMapVectorLayerLocalDataProviderInterface> {
public:
    using CppType = std::shared_ptr<::Tiled2dMapVectorLayerLocalDataProviderInterface>;
    using CppOptType = std::shared_ptr<::Tiled2dMapVectorLayerLocalDataProviderInterface>;
    using JniType = jobject;

    using Boxed = NativeTiled2dMapVectorLayerLocalDataProviderInterface;

    ~NativeTiled2dMapVectorLayerLocalDataProviderInterface();

    static CppType toCpp(JNIEnv* jniEnv, JniType j) { return ::djinni::JniClass<NativeTiled2dMapVectorLayerLocalDataProviderInterface>::get()._fromJava(jniEnv, j); }
    static ::djinni::LocalRef<JniType> fromCppOpt(JNIEnv* jniEnv, const CppOptType& c) { return {jniEnv, ::djinni::JniClass<NativeTiled2dMapVectorLayerLocalDataProviderInterface>::get()._toJava(jniEnv, c)}; }
    static ::djinni::LocalRef<JniType> fromCpp(JNIEnv* jniEnv, const CppType& c) { return fromCppOpt(jniEnv, c); }

private:
    NativeTiled2dMapVectorLayerLocalDataProviderInterface();
    friend ::djinni::JniClass<NativeTiled2dMapVectorLayerLocalDataProviderInterface>;
    friend ::djinni::JniInterface<::Tiled2dMapVectorLayerLocalDataProviderInterface, NativeTiled2dMapVectorLayerLocalDataProviderInterface>;

    class JavaProxy final : ::djinni::JavaProxyHandle<JavaProxy>, public ::Tiled2dMapVectorLayerLocalDataProviderInterface
    {
    public:
        JavaProxy(JniType j);
        ~JavaProxy();

        std::string getStyleJson() override;
        ::djinni::Future<::TextureLoaderResult> loadSpriteAsync(int32_t scale) override;
        ::djinni::Future<::DataLoaderResult> loadSpriteJsonAsync(int32_t scale) override;
        ::djinni::Future<::DataLoaderResult> loadGeojson() override;

    private:
        friend ::djinni::JniInterface<::Tiled2dMapVectorLayerLocalDataProviderInterface, ::djinni_generated::NativeTiled2dMapVectorLayerLocalDataProviderInterface>;
    };

    const ::djinni::GlobalRef<jclass> clazz { ::djinni::jniFindClass("io/openmobilemaps/mapscore/shared/map/layers/tiled/vector/Tiled2dMapVectorLayerLocalDataProviderInterface") };
    const jmethodID method_getStyleJson { ::djinni::jniGetMethodID(clazz.get(), "getStyleJson", "()Ljava/lang/String;") };
    const jmethodID method_loadSpriteAsync { ::djinni::jniGetMethodID(clazz.get(), "loadSpriteAsync", "(I)Lcom/snapchat/djinni/Future;") };
    const jmethodID method_loadSpriteJsonAsync { ::djinni::jniGetMethodID(clazz.get(), "loadSpriteJsonAsync", "(I)Lcom/snapchat/djinni/Future;") };
    const jmethodID method_loadGeojson { ::djinni::jniGetMethodID(clazz.get(), "loadGeojson", "()Lcom/snapchat/djinni/Future;") };
};

} // namespace djinni_generated
