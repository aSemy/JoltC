#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region functions

bool JPC_Shape_ShapeResult_IsValid(
  JPC_Shape_ShapeResult_t * self
);

bool JPC_Shape_ShapeResult_HasError(
  JPC_Shape_ShapeResult_t * self
);

const JPC_JPHString_t * JPC_Shape_ShapeResult_GetError(
  JPC_Shape_ShapeResult_t * self
);

JPC_Shape_t * JPC_Shape_ShapeResult_Get(
  JPC_Shape_ShapeResult_t * self
);

void JPC_Shape_ShapeResult_Clear(
  JPC_Shape_ShapeResult_t * self
);

//endregion functions


#ifdef __cplusplus
}
#endif

