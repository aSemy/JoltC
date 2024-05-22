#include "JoltC/JPC_IgnoreSingleBodyFilter.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JPC_IgnoreSingleBodyFilter_t * JPC_IgnoreSingleBodyFilter_new(
  const JPC_BodyID_t * inBodyID
) {
  JPC_IgnoreSingleBodyFilter_t * cInstance = new JPC_IgnoreSingleBodyFilter_t();
  IgnoreSingleBodyFilter * cppInstance = new IgnoreSingleBodyFilter(
    *reinterpret_cast<BodyID *>(inBodyID->obj)
  );
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion constructors

#ifdef __cplusplus
}
#endif

