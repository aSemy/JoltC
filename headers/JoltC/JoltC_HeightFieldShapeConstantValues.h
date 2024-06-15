#pragma once
#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region destructor

void JoltC_HeightFieldShapeConstantValues_destroy(
  JoltC_HeightFieldShapeConstantValues_t * self
);

//endregion
//region properties

const float JoltC_HeightFieldShapeConstantValues_cNoCollisionValue_Get(
  JoltC_HeightFieldShapeConstantValues_t * self
);

//endregion


#ifdef __cplusplus
}
#endif
