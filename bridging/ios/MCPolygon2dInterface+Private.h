// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from graphicsobjects.djinni
#ifdef __cplusplus

#include "Polygon2dInterface.h"
#include <memory>

static_assert(__has_feature(objc_arc), "Djinni requires ARC to be enabled for this file");

@protocol MCPolygon2dInterface;

namespace djinni_generated {

class Polygon2dInterface
{
public:
    using CppType = std::shared_ptr<::Polygon2dInterface>;
    using CppOptType = std::shared_ptr<::Polygon2dInterface>;
    using ObjcType = id<MCPolygon2dInterface>;

    using Boxed = Polygon2dInterface;

    static CppType toCpp(ObjcType objc);
    static ObjcType fromCppOpt(const CppOptType& cpp);
    static ObjcType fromCpp(const CppType& cpp) { return fromCppOpt(cpp); }

private:
    class ObjcProxy;
};

}  // namespace djinni_generated

#endif
