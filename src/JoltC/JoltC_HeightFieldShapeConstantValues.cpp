#include "JoltC/JPC_HeightFieldShapeConstantValues.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region properties

const float JPC_HeightFieldShapeConstantValues_cNoCollisionValue_Get(
  JPC_HeightFieldShapeConstantValues_t * self
) {
  const float result = HeightFieldShapeConstantValues::cNoCollisionValue;
  return result;
};

//endregion properties

#ifdef __cplusplus
}
#endif

