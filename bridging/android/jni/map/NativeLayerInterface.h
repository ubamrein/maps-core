// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from core.djinni

#pragma once

#include "LayerInterface.h"
#include "djinni_support.hpp"

namespace djinni_generated {

class NativeLayerInterface final : ::djinni::JniInterface<::LayerInterface, NativeLayerInterface> {
public:
    using CppType = std::shared_ptr<::LayerInterface>;
    using CppOptType = std::shared_ptr<::LayerInterface>;
    using JniType = jobject;

    using Boxed = NativeLayerInterface;

    ~NativeLayerInterface();

    static CppType toCpp(JNIEnv* jniEnv, JniType j) { return ::djinni::JniClass<NativeLayerInterface>::get()._fromJava(jniEnv, j); }
    static ::djinni::LocalRef<JniType> fromCppOpt(JNIEnv* jniEnv, const CppOptType& c) { return {jniEnv, ::djinni::JniClass<NativeLayerInterface>::get()._toJava(jniEnv, c)}; }
    static ::djinni::LocalRef<JniType> fromCpp(JNIEnv* jniEnv, const CppType& c) { return fromCppOpt(jniEnv, c); }

private:
    NativeLayerInterface();
    friend ::djinni::JniClass<NativeLayerInterface>;
    friend ::djinni::JniInterface<::LayerInterface, NativeLayerInterface>;

    class JavaProxy final : ::djinni::JavaProxyHandle<JavaProxy>, public ::LayerInterface
    {
    public:
        JavaProxy(JniType j);
        ~JavaProxy();

        void setMaskingObject(const std::shared_ptr<::MaskingObjectInterface> & maskingObject) override;
        void update() override;
        std::vector<std::shared_ptr<::RenderPassInterface>> buildRenderPasses() override;
        void onAdded(const std::shared_ptr<::MapInterface> & mapInterface) override;
        void onRemoved() override;
        void pause() override;
        void resume() override;
        void hide() override;
        void show() override;
        void setAlpha(float alpha) override;
        float getAlpha() override;
        void setScissorRect(const std::optional<::RectI> & scissorRect) override;
        ::LayerReadyState isReadyToRenderOffscreen() override;
        void enableAnimations(bool enabled) override;
        void setErrorManager(const std::shared_ptr<::ErrorManager> & errorManager) override;
        void forceReload() override;

    private:
        friend ::djinni::JniInterface<::LayerInterface, ::djinni_generated::NativeLayerInterface>;
    };

    const ::djinni::GlobalRef<jclass> clazz { ::djinni::jniFindClass("io/openmobilemaps/mapscore/shared/map/LayerInterface") };
    const jmethodID method_setMaskingObject { ::djinni::jniGetMethodID(clazz.get(), "setMaskingObject", "(Lio/openmobilemaps/mapscore/shared/graphics/objects/MaskingObjectInterface;)V") };
    const jmethodID method_update { ::djinni::jniGetMethodID(clazz.get(), "update", "()V") };
    const jmethodID method_buildRenderPasses { ::djinni::jniGetMethodID(clazz.get(), "buildRenderPasses", "()Ljava/util/ArrayList;") };
    const jmethodID method_onAdded { ::djinni::jniGetMethodID(clazz.get(), "onAdded", "(Lio/openmobilemaps/mapscore/shared/map/MapInterface;)V") };
    const jmethodID method_onRemoved { ::djinni::jniGetMethodID(clazz.get(), "onRemoved", "()V") };
    const jmethodID method_pause { ::djinni::jniGetMethodID(clazz.get(), "pause", "()V") };
    const jmethodID method_resume { ::djinni::jniGetMethodID(clazz.get(), "resume", "()V") };
    const jmethodID method_hide { ::djinni::jniGetMethodID(clazz.get(), "hide", "()V") };
    const jmethodID method_show { ::djinni::jniGetMethodID(clazz.get(), "show", "()V") };
    const jmethodID method_setAlpha { ::djinni::jniGetMethodID(clazz.get(), "setAlpha", "(F)V") };
    const jmethodID method_getAlpha { ::djinni::jniGetMethodID(clazz.get(), "getAlpha", "()F") };
    const jmethodID method_setScissorRect { ::djinni::jniGetMethodID(clazz.get(), "setScissorRect", "(Lio/openmobilemaps/mapscore/shared/graphics/common/RectI;)V") };
    const jmethodID method_isReadyToRenderOffscreen { ::djinni::jniGetMethodID(clazz.get(), "isReadyToRenderOffscreen", "()Lio/openmobilemaps/mapscore/shared/map/LayerReadyState;") };
    const jmethodID method_enableAnimations { ::djinni::jniGetMethodID(clazz.get(), "enableAnimations", "(Z)V") };
    const jmethodID method_setErrorManager { ::djinni::jniGetMethodID(clazz.get(), "setErrorManager", "(Lio/openmobilemaps/mapscore/shared/map/ErrorManager;)V") };
    const jmethodID method_forceReload { ::djinni::jniGetMethodID(clazz.get(), "forceReload", "()V") };
};

}  // namespace djinni_generated
