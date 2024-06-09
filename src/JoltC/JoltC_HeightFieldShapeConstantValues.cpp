#include "JoltC/JoltC_HeightFieldShapeConstantValues.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region properties

const float JoltC_HeightFieldShapeConstantValues_cNoCollisionValue_Get(
  JoltC_HeightFieldShapeConstantValues_t * self
) {
  return HeightFieldShapeConstantValues::cNoCollisionValue;
}

//endregion

#ifdef __cplusplus
}
#endif

