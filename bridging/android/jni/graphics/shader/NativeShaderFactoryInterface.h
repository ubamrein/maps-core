// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from shader.djinni

#pragma once

#include "ShaderFactoryInterface.h"
#include "djinni_support.hpp"

namespace djinni_generated {

class NativeShaderFactoryInterface final : ::djinni::JniInterface<::ShaderFactoryInterface, NativeShaderFactoryInterface> {
public:
    using CppType = std::shared_ptr<::ShaderFactoryInterface>;
    using CppOptType = std::shared_ptr<::ShaderFactoryInterface>;
    using JniType = jobject;

    using Boxed = NativeShaderFactoryInterface;

    ~NativeShaderFactoryInterface();

    static CppType toCpp(JNIEnv* jniEnv, JniType j) { return ::djinni::JniClass<NativeShaderFactoryInterface>::get()._fromJava(jniEnv, j); }
    static ::djinni::LocalRef<JniType> fromCppOpt(JNIEnv* jniEnv, const CppOptType& c) { return {jniEnv, ::djinni::JniClass<NativeShaderFactoryInterface>::get()._toJava(jniEnv, c)}; }
    static ::djinni::LocalRef<JniType> fromCpp(JNIEnv* jniEnv, const CppType& c) { return fromCppOpt(jniEnv, c); }

private:
    NativeShaderFactoryInterface();
    friend ::djinni::JniClass<NativeShaderFactoryInterface>;
    friend ::djinni::JniInterface<::ShaderFactoryInterface, NativeShaderFactoryInterface>;

    class JavaProxy final : ::djinni::JavaProxyHandle<JavaProxy>, public ::ShaderFactoryInterface
    {
    public:
        JavaProxy(JniType j);
        ~JavaProxy();

        /*not-null*/ std::shared_ptr<::AlphaShaderInterface> createAlphaShader() override;
        /*not-null*/ std::shared_ptr<::AlphaInstancedShaderInterface> createAlphaInstancedShader() override;
        /*not-null*/ std::shared_ptr<::ColorLineShaderInterface> createColorLineShader() override;
        /*not-null*/ std::shared_ptr<::LineGroupShaderInterface> createLineGroupShader() override;
        /*not-null*/ std::shared_ptr<::ColorShaderInterface> createColorShader() override;
        /*not-null*/ std::shared_ptr<::ColorCircleShaderInterface> createColorCircleShader() override;
        /*not-null*/ std::shared_ptr<::PolygonGroupShaderInterface> createPolygonGroupShader() override;
        /*not-null*/ std::shared_ptr<::TextShaderInterface> createTextShader() override;
        /*not-null*/ std::shared_ptr<::TextInstancedShaderInterface> createTextInstancedShader() override;
        /*not-null*/ std::shared_ptr<::RasterShaderInterface> createRasterShader() override;
        /*not-null*/ std::shared_ptr<::StretchShaderInterface> createStretchShader() override;
        /*not-null*/ std::shared_ptr<::StretchInstancedShaderInterface> createStretchInstancedShader() override;

    private:
        friend ::djinni::JniInterface<::ShaderFactoryInterface, ::djinni_generated::NativeShaderFactoryInterface>;
    };

    const ::djinni::GlobalRef<jclass> clazz { ::djinni::jniFindClass("io/openmobilemaps/mapscore/shared/graphics/shader/ShaderFactoryInterface") };
    const jmethodID method_createAlphaShader { ::djinni::jniGetMethodID(clazz.get(), "createAlphaShader", "()Lio/openmobilemaps/mapscore/shared/graphics/shader/AlphaShaderInterface;") };
    const jmethodID method_createAlphaInstancedShader { ::djinni::jniGetMethodID(clazz.get(), "createAlphaInstancedShader", "()Lio/openmobilemaps/mapscore/shared/graphics/shader/AlphaInstancedShaderInterface;") };
    const jmethodID method_createColorLineShader { ::djinni::jniGetMethodID(clazz.get(), "createColorLineShader", "()Lio/openmobilemaps/mapscore/shared/graphics/shader/ColorLineShaderInterface;") };
    const jmethodID method_createLineGroupShader { ::djinni::jniGetMethodID(clazz.get(), "createLineGroupShader", "()Lio/openmobilemaps/mapscore/shared/graphics/shader/LineGroupShaderInterface;") };
    const jmethodID method_createColorShader { ::djinni::jniGetMethodID(clazz.get(), "createColorShader", "()Lio/openmobilemaps/mapscore/shared/graphics/shader/ColorShaderInterface;") };
    const jmethodID method_createColorCircleShader { ::djinni::jniGetMethodID(clazz.get(), "createColorCircleShader", "()Lio/openmobilemaps/mapscore/shared/graphics/shader/ColorCircleShaderInterface;") };
    const jmethodID method_createPolygonGroupShader { ::djinni::jniGetMethodID(clazz.get(), "createPolygonGroupShader", "()Lio/openmobilemaps/mapscore/shared/graphics/shader/PolygonGroupShaderInterface;") };
    const jmethodID method_createTextShader { ::djinni::jniGetMethodID(clazz.get(), "createTextShader", "()Lio/openmobilemaps/mapscore/shared/graphics/shader/TextShaderInterface;") };
    const jmethodID method_createTextInstancedShader { ::djinni::jniGetMethodID(clazz.get(), "createTextInstancedShader", "()Lio/openmobilemaps/mapscore/shared/graphics/shader/TextInstancedShaderInterface;") };
    const jmethodID method_createRasterShader { ::djinni::jniGetMethodID(clazz.get(), "createRasterShader", "()Lio/openmobilemaps/mapscore/shared/graphics/shader/RasterShaderInterface;") };
    const jmethodID method_createStretchShader { ::djinni::jniGetMethodID(clazz.get(), "createStretchShader", "()Lio/openmobilemaps/mapscore/shared/graphics/shader/StretchShaderInterface;") };
    const jmethodID method_createStretchInstancedShader { ::djinni::jniGetMethodID(clazz.get(), "createStretchInstancedShader", "()Lio/openmobilemaps/mapscore/shared/graphics/shader/StretchInstancedShaderInterface;") };
};

} // namespace djinni_generated
