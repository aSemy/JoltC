#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region functions

bool JoltC_Shape_ShapeResult_IsValid(
  JoltC_Shape_ShapeResult_t * self,
  char** outErrMsg
);

bool JoltC_Shape_ShapeResult_HasError(
  JoltC_Shape_ShapeResult_t * self,
  char** outErrMsg
);

const JoltC_JPHString_t * JoltC_Shape_ShapeResult_GetError(
  JoltC_Shape_ShapeResult_t * self,
  char** outErrMsg
);

JoltC_Shape_t * JoltC_Shape_ShapeResult_Get(
  JoltC_Shape_ShapeResult_t * self,
  char** outErrMsg
);

void JoltC_Shape_ShapeResult_Clear(
  JoltC_Shape_ShapeResult_t * self,
  char** outErrMsg
);

//endregion functions


#ifdef __cplusplus
}
#endif

