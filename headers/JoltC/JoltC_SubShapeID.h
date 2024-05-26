#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_SubShapeID_t * JoltC_SubShapeID_new();

//endregion

//region functions

const long JoltC_SubShapeID_GetValue(
  JoltC_SubShapeID_t * self
);

void JoltC_SubShapeID_SetValue(
  JoltC_SubShapeID_t * self,
  long inValue
);

//endregion


#ifdef __cplusplus
}
#endif

