// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from icon.djinni
#ifdef __cplusplus

#include "IconInfoInterface.h"
#include <memory>

static_assert(__has_feature(objc_arc), "Djinni requires ARC to be enabled for this file");

@class MCIconInfoInterface;

namespace djinni_generated {

class IconInfoInterface
{
public:
    using CppType = std::shared_ptr<::IconInfoInterface>;
    using CppOptType = std::shared_ptr<::IconInfoInterface>;
    using ObjcType = MCIconInfoInterface*;

    using Boxed = IconInfoInterface;

    static CppType toCpp(ObjcType objc);
    static ObjcType fromCppOpt(const CppOptType& cpp);
    static ObjcType fromCpp(const CppType& cpp) { return fromCppOpt(cpp); }

private:
    class ObjcProxy;
};

} // namespace djinni_generated

#endif
