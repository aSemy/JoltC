#include "JoltC/JoltC_HeightFieldShapeConstantValues.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region properties

const float JoltC_HeightFieldShapeConstantValues_cNoCollisionValue_Get(
  JoltC_HeightFieldShapeConstantValues_t * self,
  char** outErrMsg
) {
  const float result = HeightFieldShapeConstantValues::cNoCollisionValue;
  return result;
};

//endregion properties

#ifdef __cplusplus
}
#endif

