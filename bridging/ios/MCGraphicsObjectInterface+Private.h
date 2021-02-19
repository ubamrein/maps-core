// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from graphicsobjects.djinni
#ifdef __cplusplus

#include "GraphicsObjectInterface.h"
#include <memory>

static_assert(__has_feature(objc_arc), "Djinni requires ARC to be enabled for this file");

@protocol MCGraphicsObjectInterface;

namespace djinni_generated {

class GraphicsObjectInterface
{
public:
    using CppType = std::shared_ptr<::GraphicsObjectInterface>;
    using CppOptType = std::shared_ptr<::GraphicsObjectInterface>;
    using ObjcType = id<MCGraphicsObjectInterface>;

    using Boxed = GraphicsObjectInterface;

    static CppType toCpp(ObjcType objc);
    static ObjcType fromCppOpt(const CppOptType& cpp);
    static ObjcType fromCpp(const CppType& cpp) { return fromCppOpt(cpp); }

private:
    class ObjcProxy;
};

}  // namespace djinni_generated

#endif