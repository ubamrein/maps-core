// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from icon.djinni
#ifdef __cplusplus

#include "IconLayerInterface.h"
#include <memory>

static_assert(__has_feature(objc_arc), "Djinni requires ARC to be enabled for this file");

@class MCIconLayerInterface;

namespace djinni_generated {

class IconLayerInterface
{
public:
    using CppType = std::shared_ptr<::IconLayerInterface>;
    using CppOptType = std::shared_ptr<::IconLayerInterface>;
    using ObjcType = MCIconLayerInterface*;

    using Boxed = IconLayerInterface;

    static CppType toCpp(ObjcType objc);
    static ObjcType fromCppOpt(const CppOptType& cpp);
    static ObjcType fromCpp(const CppType& cpp) { return fromCppOpt(cpp); }

private:
    class ObjcProxy;
};

} // namespace djinni_generated

#endif
