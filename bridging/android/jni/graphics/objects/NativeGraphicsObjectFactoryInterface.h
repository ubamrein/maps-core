// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from graphicsobjects.djinni

#pragma once

#include "GraphicsObjectFactoryInterface.h"
#include "djinni_support.hpp"

namespace djinni_generated {

class NativeGraphicsObjectFactoryInterface final : ::djinni::JniInterface<::GraphicsObjectFactoryInterface, NativeGraphicsObjectFactoryInterface> {
public:
    using CppType = std::shared_ptr<::GraphicsObjectFactoryInterface>;
    using CppOptType = std::shared_ptr<::GraphicsObjectFactoryInterface>;
    using JniType = jobject;

    using Boxed = NativeGraphicsObjectFactoryInterface;

    ~NativeGraphicsObjectFactoryInterface();

    static CppType toCpp(JNIEnv* jniEnv, JniType j) { return ::djinni::JniClass<NativeGraphicsObjectFactoryInterface>::get()._fromJava(jniEnv, j); }
    static ::djinni::LocalRef<JniType> fromCppOpt(JNIEnv* jniEnv, const CppOptType& c) { return {jniEnv, ::djinni::JniClass<NativeGraphicsObjectFactoryInterface>::get()._toJava(jniEnv, c)}; }
    static ::djinni::LocalRef<JniType> fromCpp(JNIEnv* jniEnv, const CppType& c) { return fromCppOpt(jniEnv, c); }

private:
    NativeGraphicsObjectFactoryInterface();
    friend ::djinni::JniClass<NativeGraphicsObjectFactoryInterface>;
    friend ::djinni::JniInterface<::GraphicsObjectFactoryInterface, NativeGraphicsObjectFactoryInterface>;

    class JavaProxy final : ::djinni::JavaProxyHandle<JavaProxy>, public ::GraphicsObjectFactoryInterface
    {
    public:
        JavaProxy(JniType j);
        ~JavaProxy();

        /*not-null*/ std::shared_ptr<::Quad2dInterface> createQuad(const /*not-null*/ std::shared_ptr<::ShaderProgramInterface> & shader) override;
        /*not-null*/ std::shared_ptr<::Line2dInterface> createLine(const /*not-null*/ std::shared_ptr<::ShaderProgramInterface> & shader) override;
        /*not-null*/ std::shared_ptr<::Polygon2dInterface> createPolygon(const /*not-null*/ std::shared_ptr<::ShaderProgramInterface> & shader) override;
        /*not-null*/ std::shared_ptr<::Quad2dInstancedInterface> createQuadInstanced(const /*not-null*/ std::shared_ptr<::ShaderProgramInterface> & shader) override;
        /*not-null*/ std::shared_ptr<::Quad2dStretchedInstancedInterface> createQuadStretchedInstanced(const /*not-null*/ std::shared_ptr<::ShaderProgramInterface> & shader) override;
        /*not-null*/ std::shared_ptr<::LineGroup2dInterface> createLineGroup(const /*not-null*/ std::shared_ptr<::ShaderProgramInterface> & shader) override;
        /*not-null*/ std::shared_ptr<::PolygonGroup2dInterface> createPolygonGroup(const /*not-null*/ std::shared_ptr<::ShaderProgramInterface> & shader) override;
        /*not-null*/ std::shared_ptr<::Quad2dInterface> createQuadMask() override;
        /*not-null*/ std::shared_ptr<::Polygon2dInterface> createPolygonMask() override;
        /*not-null*/ std::shared_ptr<::TextInterface> createText(const /*not-null*/ std::shared_ptr<::ShaderProgramInterface> & shader) override;
        /*not-null*/ std::shared_ptr<::TextInstancedInterface> createTextInstanced(const /*not-null*/ std::shared_ptr<::ShaderProgramInterface> & shader) override;

    private:
        friend ::djinni::JniInterface<::GraphicsObjectFactoryInterface, ::djinni_generated::NativeGraphicsObjectFactoryInterface>;
    };

    const ::djinni::GlobalRef<jclass> clazz { ::djinni::jniFindClass("io/openmobilemaps/mapscore/shared/graphics/objects/GraphicsObjectFactoryInterface") };
    const jmethodID method_createQuad { ::djinni::jniGetMethodID(clazz.get(), "createQuad", "(Lio/openmobilemaps/mapscore/shared/graphics/shader/ShaderProgramInterface;)Lio/openmobilemaps/mapscore/shared/graphics/objects/Quad2dInterface;") };
    const jmethodID method_createLine { ::djinni::jniGetMethodID(clazz.get(), "createLine", "(Lio/openmobilemaps/mapscore/shared/graphics/shader/ShaderProgramInterface;)Lio/openmobilemaps/mapscore/shared/graphics/objects/Line2dInterface;") };
    const jmethodID method_createPolygon { ::djinni::jniGetMethodID(clazz.get(), "createPolygon", "(Lio/openmobilemaps/mapscore/shared/graphics/shader/ShaderProgramInterface;)Lio/openmobilemaps/mapscore/shared/graphics/objects/Polygon2dInterface;") };
    const jmethodID method_createQuadInstanced { ::djinni::jniGetMethodID(clazz.get(), "createQuadInstanced", "(Lio/openmobilemaps/mapscore/shared/graphics/shader/ShaderProgramInterface;)Lio/openmobilemaps/mapscore/shared/graphics/objects/Quad2dInstancedInterface;") };
    const jmethodID method_createQuadStretchedInstanced { ::djinni::jniGetMethodID(clazz.get(), "createQuadStretchedInstanced", "(Lio/openmobilemaps/mapscore/shared/graphics/shader/ShaderProgramInterface;)Lio/openmobilemaps/mapscore/shared/graphics/objects/Quad2dStretchedInstancedInterface;") };
    const jmethodID method_createLineGroup { ::djinni::jniGetMethodID(clazz.get(), "createLineGroup", "(Lio/openmobilemaps/mapscore/shared/graphics/shader/ShaderProgramInterface;)Lio/openmobilemaps/mapscore/shared/graphics/objects/LineGroup2dInterface;") };
    const jmethodID method_createPolygonGroup { ::djinni::jniGetMethodID(clazz.get(), "createPolygonGroup", "(Lio/openmobilemaps/mapscore/shared/graphics/shader/ShaderProgramInterface;)Lio/openmobilemaps/mapscore/shared/graphics/objects/PolygonGroup2dInterface;") };
    const jmethodID method_createQuadMask { ::djinni::jniGetMethodID(clazz.get(), "createQuadMask", "()Lio/openmobilemaps/mapscore/shared/graphics/objects/Quad2dInterface;") };
    const jmethodID method_createPolygonMask { ::djinni::jniGetMethodID(clazz.get(), "createPolygonMask", "()Lio/openmobilemaps/mapscore/shared/graphics/objects/Polygon2dInterface;") };
    const jmethodID method_createText { ::djinni::jniGetMethodID(clazz.get(), "createText", "(Lio/openmobilemaps/mapscore/shared/graphics/shader/ShaderProgramInterface;)Lio/openmobilemaps/mapscore/shared/graphics/objects/TextInterface;") };
    const jmethodID method_createTextInstanced { ::djinni::jniGetMethodID(clazz.get(), "createTextInstanced", "(Lio/openmobilemaps/mapscore/shared/graphics/shader/ShaderProgramInterface;)Lio/openmobilemaps/mapscore/shared/graphics/objects/TextInstancedInterface;") };
};

} // namespace djinni_generated
