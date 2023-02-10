// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from core.djinni

#pragma once

#include "RenderObjectInterface.h"
#include "djinni_support.hpp"

namespace djinni_generated {

class NativeRenderObjectInterface final : ::djinni::JniInterface<::RenderObjectInterface, NativeRenderObjectInterface> {
public:
    using CppType = std::shared_ptr<::RenderObjectInterface>;
    using CppOptType = std::shared_ptr<::RenderObjectInterface>;
    using JniType = jobject;

    using Boxed = NativeRenderObjectInterface;

    ~NativeRenderObjectInterface();

    static CppType toCpp(JNIEnv* jniEnv, JniType j) { return ::djinni::JniClass<NativeRenderObjectInterface>::get()._fromJava(jniEnv, j); }
    static ::djinni::LocalRef<JniType> fromCppOpt(JNIEnv* jniEnv, const CppOptType& c) { return {jniEnv, ::djinni::JniClass<NativeRenderObjectInterface>::get()._toJava(jniEnv, c)}; }
    static ::djinni::LocalRef<JniType> fromCpp(JNIEnv* jniEnv, const CppType& c) { return fromCppOpt(jniEnv, c); }

private:
    NativeRenderObjectInterface();
    friend ::djinni::JniClass<NativeRenderObjectInterface>;
    friend ::djinni::JniInterface<::RenderObjectInterface, NativeRenderObjectInterface>;

    class JavaProxy final : ::djinni::JavaProxyHandle<JavaProxy>, public ::RenderObjectInterface
    {
    public:
        JavaProxy(JniType j);
        ~JavaProxy();

        /*not-null*/ std::shared_ptr<::GraphicsObjectInterface> getGraphicsObject() override;
        bool hasCustomModelMatrix() override;
        bool isScreenSpaceCoords() override;
        std::vector<float> getCustomModelMatrix() override;

    private:
        friend ::djinni::JniInterface<::RenderObjectInterface, ::djinni_generated::NativeRenderObjectInterface>;
    };

    const ::djinni::GlobalRef<jclass> clazz { ::djinni::jniFindClass("io/openmobilemaps/mapscore/shared/graphics/RenderObjectInterface") };
    const jmethodID method_getGraphicsObject { ::djinni::jniGetMethodID(clazz.get(), "getGraphicsObject", "()Lio/openmobilemaps/mapscore/shared/graphics/objects/GraphicsObjectInterface;") };
    const jmethodID method_hasCustomModelMatrix { ::djinni::jniGetMethodID(clazz.get(), "hasCustomModelMatrix", "()Z") };
    const jmethodID method_isScreenSpaceCoords { ::djinni::jniGetMethodID(clazz.get(), "isScreenSpaceCoords", "()Z") };
    const jmethodID method_getCustomModelMatrix { ::djinni::jniGetMethodID(clazz.get(), "getCustomModelMatrix", "()Ljava/util/ArrayList;") };
};

} // namespace djinni_generated
