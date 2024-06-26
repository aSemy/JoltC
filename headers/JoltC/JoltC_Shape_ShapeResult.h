#pragma once
#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region destructor

void JoltC_Shape_ShapeResult_destroy(
  JoltC_Shape_ShapeResult_t * self
);

//endregion
//region functions

bool JoltC_Shape_ShapeResult_IsValid(
  JoltC_Shape_ShapeResult_t * self
);

bool JoltC_Shape_ShapeResult_HasError(
  JoltC_Shape_ShapeResult_t * self
);

JoltC_JPHString_t * JoltC_Shape_ShapeResult_GetError(
  JoltC_Shape_ShapeResult_t * self
);

JoltC_Shape_t * JoltC_Shape_ShapeResult_Get(
  JoltC_Shape_ShapeResult_t * self
);

void JoltC_Shape_ShapeResult_Clear(
  JoltC_Shape_ShapeResult_t * self
);

//endregion


#ifdef __cplusplus
}
#endif
