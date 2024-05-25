#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region properties

const float JoltC_HeightFieldShapeConstantValues_cNoCollisionValue_Get(
  JoltC_HeightFieldShapeConstantValues_t * self,
  char** outErrMsg
);

//endregion properties


#ifdef __cplusplus
}
#endif

