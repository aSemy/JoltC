#include "JoltC/JoltC_IgnoreSingleBodyFilter.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

/**
  Construct a new `IgnoreSingleBodyFilter` instance.
 */
JoltC_IgnoreSingleBodyFilter_t * JoltC_IgnoreSingleBodyFilter_new(
  JoltC_BodyID_t * inBodyID
) {
  const BodyID * inBodyIDCpp = static_cast<const BodyID *>(inBodyID->obj);
  JoltC_IgnoreSingleBodyFilter_t * cInstance = new JoltC_IgnoreSingleBodyFilter_t();
  IgnoreSingleBodyFilter * cppInstance = new IgnoreSingleBodyFilter(
    *inBodyIDCpp
  );
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion

#ifdef __cplusplus
}
#endif

