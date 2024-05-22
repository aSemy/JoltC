#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JPC_SubShapeID_t * JPC_SubShapeID_new();

//endregion constructors

//region functions

const long JPC_SubShapeID_GetValue(
  JPC_SubShapeID_t * self
);

void JPC_SubShapeID_SetValue(
  JPC_SubShapeID_t * self,
  long inValue
);

//endregion functions


#ifdef __cplusplus
}
#endif

