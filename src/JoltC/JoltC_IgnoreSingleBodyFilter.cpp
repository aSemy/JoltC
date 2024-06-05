#include "JoltC/JoltC_IgnoreSingleBodyFilter.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_IgnoreSingleBodyFilter_t * JoltC_IgnoreSingleBodyFilter_new(
  JoltC_BodyID_t * inBodyID
) {
  JoltC_IgnoreSingleBodyFilter_t * cInstance = new JoltC_IgnoreSingleBodyFilter_t();
  IgnoreSingleBodyFilter * cppInstance = new IgnoreSingleBodyFilter(
    *reinterpret_cast<BodyID *>(inBodyID->obj)
  );
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion

#ifdef __cplusplus
}
#endif

