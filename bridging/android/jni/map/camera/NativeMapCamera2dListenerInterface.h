// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from camera.djinni

#pragma once

#include "MapCamera2dListenerInterface.h"
#include "djinni_support.hpp"

namespace djinni_generated {

class NativeMapCamera2dListenerInterface final : ::djinni::JniInterface<::MapCamera2dListenerInterface, NativeMapCamera2dListenerInterface> {
public:
    using CppType = std::shared_ptr<::MapCamera2dListenerInterface>;
    using CppOptType = std::shared_ptr<::MapCamera2dListenerInterface>;
    using JniType = jobject;

    using Boxed = NativeMapCamera2dListenerInterface;

    ~NativeMapCamera2dListenerInterface();

    static CppType toCpp(JNIEnv* jniEnv, JniType j) { return ::djinni::JniClass<NativeMapCamera2dListenerInterface>::get()._fromJava(jniEnv, j); }
    static ::djinni::LocalRef<JniType> fromCppOpt(JNIEnv* jniEnv, const CppOptType& c) { return {jniEnv, ::djinni::JniClass<NativeMapCamera2dListenerInterface>::get()._toJava(jniEnv, c)}; }
    static ::djinni::LocalRef<JniType> fromCpp(JNIEnv* jniEnv, const CppType& c) { return fromCppOpt(jniEnv, c); }

private:
    NativeMapCamera2dListenerInterface();
    friend ::djinni::JniClass<NativeMapCamera2dListenerInterface>;
    friend ::djinni::JniInterface<::MapCamera2dListenerInterface, NativeMapCamera2dListenerInterface>;

    class JavaProxy final : ::djinni::JavaProxyHandle<JavaProxy>, public ::MapCamera2dListenerInterface
    {
    public:
        JavaProxy(JniType j);
        ~JavaProxy();

        void onVisibleBoundsChanged(const ::RectCoord & visibleBounds, double zoom) override;

    private:
        friend ::djinni::JniInterface<::MapCamera2dListenerInterface, ::djinni_generated::NativeMapCamera2dListenerInterface>;
    };

    const ::djinni::GlobalRef<jclass> clazz { ::djinni::jniFindClass("ch/ubique/mapscore/shared/map/camera/MapCamera2dListenerInterface") };
    const jmethodID method_onVisibleBoundsChanged { ::djinni::jniGetMethodID(clazz.get(), "onVisibleBoundsChanged", "(Lch/ubique/mapscore/shared/map/coordinates/RectCoord;D)V") };
};

}  // namespace djinni_generated
