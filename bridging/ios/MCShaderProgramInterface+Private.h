// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from shader.djinni
#ifdef __cplusplus

#include "ShaderProgramInterface.h"
#include <memory>

static_assert(__has_feature(objc_arc), "Djinni requires ARC to be enabled for this file");

@protocol MCShaderProgramInterface;

namespace djinni_generated {

class ShaderProgramInterface
{
public:
    using CppType = std::shared_ptr<::ShaderProgramInterface>;
    using CppOptType = std::shared_ptr<::ShaderProgramInterface>;
    using ObjcType = id<MCShaderProgramInterface>;

    using Boxed = ShaderProgramInterface;

    static CppType toCpp(ObjcType objc);
    static ObjcType fromCppOpt(const CppOptType& cpp);
    static ObjcType fromCpp(const CppType& cpp) { return fromCppOpt(cpp); }

private:
    class ObjcProxy;
};

}  // namespace djinni_generated

#endif
