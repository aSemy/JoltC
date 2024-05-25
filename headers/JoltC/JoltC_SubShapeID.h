#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_SubShapeID_t * JoltC_SubShapeID_new(
  char** outErrMsg
);

//endregion constructors

//region functions

const long JoltC_SubShapeID_GetValue(
  JoltC_SubShapeID_t * self,
  char** outErrMsg
);

void JoltC_SubShapeID_SetValue(
  JoltC_SubShapeID_t * self,
  long inValue,
  char** outErrMsg
);

//endregion functions


#ifdef __cplusplus
}
#endif

