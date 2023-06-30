// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from tiled_vector_layer.djinni

#pragma once

#include "Tiled2dMapVectorLayerSelectionCallbackInterface.h"
#include "djinni_support.hpp"

namespace djinni_generated {

class NativeTiled2dMapVectorLayerSelectionCallbackInterface final : ::djinni::JniInterface<::Tiled2dMapVectorLayerSelectionCallbackInterface, NativeTiled2dMapVectorLayerSelectionCallbackInterface> {
public:
    using CppType = std::shared_ptr<::Tiled2dMapVectorLayerSelectionCallbackInterface>;
    using CppOptType = std::shared_ptr<::Tiled2dMapVectorLayerSelectionCallbackInterface>;
    using JniType = jobject;

    using Boxed = NativeTiled2dMapVectorLayerSelectionCallbackInterface;

    ~NativeTiled2dMapVectorLayerSelectionCallbackInterface();

    static CppType toCpp(JNIEnv* jniEnv, JniType j) { return ::djinni::JniClass<NativeTiled2dMapVectorLayerSelectionCallbackInterface>::get()._fromJava(jniEnv, j); }
    static ::djinni::LocalRef<JniType> fromCppOpt(JNIEnv* jniEnv, const CppOptType& c) { return {jniEnv, ::djinni::JniClass<NativeTiled2dMapVectorLayerSelectionCallbackInterface>::get()._toJava(jniEnv, c)}; }
    static ::djinni::LocalRef<JniType> fromCpp(JNIEnv* jniEnv, const CppType& c) { return fromCppOpt(jniEnv, c); }

private:
    NativeTiled2dMapVectorLayerSelectionCallbackInterface();
    friend ::djinni::JniClass<NativeTiled2dMapVectorLayerSelectionCallbackInterface>;
    friend ::djinni::JniInterface<::Tiled2dMapVectorLayerSelectionCallbackInterface, NativeTiled2dMapVectorLayerSelectionCallbackInterface>;

    class JavaProxy final : ::djinni::JavaProxyHandle<JavaProxy>, public ::Tiled2dMapVectorLayerSelectionCallbackInterface
    {
    public:
        JavaProxy(JniType j);
        ~JavaProxy();

        void didSelectFeature(const ::VectorLayerFeatureInfo & featureInfo, const std::string & layerIdentifier, const ::Coord & coord) override;
        bool didClickBackgroundConfirmed(const ::Coord & coord) override;

    private:
        friend ::djinni::JniInterface<::Tiled2dMapVectorLayerSelectionCallbackInterface, ::djinni_generated::NativeTiled2dMapVectorLayerSelectionCallbackInterface>;
    };

    const ::djinni::GlobalRef<jclass> clazz { ::djinni::jniFindClass("io/openmobilemaps/mapscore/shared/map/layers/tiled/vector/Tiled2dMapVectorLayerSelectionCallbackInterface") };
    const jmethodID method_didSelectFeature { ::djinni::jniGetMethodID(clazz.get(), "didSelectFeature", "(Lio/openmobilemaps/mapscore/shared/map/layers/tiled/vector/VectorLayerFeatureInfo;Ljava/lang/String;Lio/openmobilemaps/mapscore/shared/map/coordinates/Coord;)V") };
    const jmethodID method_didClickBackgroundConfirmed { ::djinni::jniGetMethodID(clazz.get(), "didClickBackgroundConfirmed", "(Lio/openmobilemaps/mapscore/shared/map/coordinates/Coord;)Z") };
};

} // namespace djinni_generated
