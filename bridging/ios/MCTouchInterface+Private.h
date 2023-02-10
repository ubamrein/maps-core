// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from touch_handler.djinni
#ifdef __cplusplus

#include "TouchInterface.h"
#include <memory>

static_assert(__has_feature(objc_arc), "Djinni requires ARC to be enabled for this file");

@protocol MCTouchInterface;

namespace djinni_generated {

class TouchInterface
{
public:
    using CppType = std::shared_ptr<::TouchInterface>;
    using CppOptType = std::shared_ptr<::TouchInterface>;
    using ObjcType = id<MCTouchInterface>;

    using Boxed = TouchInterface;

    static CppType toCpp(ObjcType objc);
    static ObjcType fromCppOpt(const CppOptType& cpp);
    static ObjcType fromCpp(const CppType& cpp) { return fromCppOpt(cpp); }

private:
    class ObjcProxy;
};

} // namespace djinni_generated

#endif
