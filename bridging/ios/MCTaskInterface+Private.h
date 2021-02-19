// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from task_scheduler.djinni
#ifdef __cplusplus

#include "TaskInterface.h"
#include <memory>

static_assert(__has_feature(objc_arc), "Djinni requires ARC to be enabled for this file");

@protocol MCTaskInterface;

namespace djinni_generated {

class TaskInterface
{
public:
    using CppType = std::shared_ptr<::TaskInterface>;
    using CppOptType = std::shared_ptr<::TaskInterface>;
    using ObjcType = id<MCTaskInterface>;

    using Boxed = TaskInterface;

    static CppType toCpp(ObjcType objc);
    static ObjcType fromCppOpt(const CppOptType& cpp);
    static ObjcType fromCpp(const CppType& cpp) { return fromCppOpt(cpp); }

private:
    class ObjcProxy;
};

}  // namespace djinni_generated

#endif
