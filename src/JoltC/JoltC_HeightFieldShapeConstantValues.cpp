#include "JoltC/JoltC_HeightFieldShapeConstantValues.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region properties

const float JoltC_HeightFieldShapeConstantValues_cNoCollisionValue_Get(
  JoltC_HeightFieldShapeConstantValues_t * self
) {
  const float result = HeightFieldShapeConstantValues::cNoCollisionValue;
  return result;
};

//endregion

#ifdef __cplusplus
}
#endif

