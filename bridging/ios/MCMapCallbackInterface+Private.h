// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from core.djinni
#ifdef __cplusplus

#include "MapCallbackInterface.h"
#include <memory>

static_assert(__has_feature(objc_arc), "Djinni requires ARC to be enabled for this file");

@protocol MCMapCallbackInterface;

namespace djinni_generated {

class MapCallbackInterface
{
public:
    using CppType = std::shared_ptr<::MapCallbackInterface>;
    using CppOptType = std::shared_ptr<::MapCallbackInterface>;
    using ObjcType = id<MCMapCallbackInterface>;

    using Boxed = MapCallbackInterface;

    static CppType toCpp(ObjcType objc);
    static ObjcType fromCppOpt(const CppOptType& cpp);
    static ObjcType fromCpp(const CppType& cpp) { return fromCppOpt(cpp); }

private:
    class ObjcProxy;
};

}  // namespace djinni_generated

#endif
