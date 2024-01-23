// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from graphicsobjects.djinni

#pragma once

#include "Line2dInterface.h"
#include "djinni_support.hpp"

namespace djinni_generated {

class NativeLine2dInterface final : ::djinni::JniInterface<::Line2dInterface, NativeLine2dInterface> {
public:
    using CppType = std::shared_ptr<::Line2dInterface>;
    using CppOptType = std::shared_ptr<::Line2dInterface>;
    using JniType = jobject;

    using Boxed = NativeLine2dInterface;

    ~NativeLine2dInterface();

    static CppType toCpp(JNIEnv* jniEnv, JniType j) { return ::djinni::JniClass<NativeLine2dInterface>::get()._fromJava(jniEnv, j); }
    static ::djinni::LocalRef<JniType> fromCppOpt(JNIEnv* jniEnv, const CppOptType& c) { return {jniEnv, ::djinni::JniClass<NativeLine2dInterface>::get()._toJava(jniEnv, c)}; }
    static ::djinni::LocalRef<JniType> fromCpp(JNIEnv* jniEnv, const CppType& c) { return fromCppOpt(jniEnv, c); }

private:
    NativeLine2dInterface();
    friend ::djinni::JniClass<NativeLine2dInterface>;
    friend ::djinni::JniInterface<::Line2dInterface, NativeLine2dInterface>;

    class JavaProxy final : ::djinni::JavaProxyHandle<JavaProxy>, public ::Line2dInterface
    {
    public:
        JavaProxy(JniType j);
        ~JavaProxy();

        void setLine(const ::SharedBytes & line, const ::SharedBytes & indices) override;
        std::shared_ptr<::GraphicsObjectInterface> asGraphicsObject() override;

    private:
        friend ::djinni::JniInterface<::Line2dInterface, ::djinni_generated::NativeLine2dInterface>;
    };

    const ::djinni::GlobalRef<jclass> clazz { ::djinni::jniFindClass("io/openmobilemaps/mapscore/shared/graphics/objects/Line2dInterface") };
    const jmethodID method_setLine { ::djinni::jniGetMethodID(clazz.get(), "setLine", "(Lio/openmobilemaps/mapscore/shared/graphics/common/SharedBytes;Lio/openmobilemaps/mapscore/shared/graphics/common/SharedBytes;)V") };
    const jmethodID method_asGraphicsObject { ::djinni::jniGetMethodID(clazz.get(), "asGraphicsObject", "()Lio/openmobilemaps/mapscore/shared/graphics/objects/GraphicsObjectInterface;") };
};

}  // namespace djinni_generated