#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region functions

bool JPC_PathConstraintPath_IsLooping(
  JPC_PathConstraintPath_t * self
);

void JPC_PathConstraintPath_SetIsLooping(
  JPC_PathConstraintPath_t * self,
  bool inIsLooping
);

unsigned long JPC_PathConstraintPath_GetRefCount(
  JPC_PathConstraintPath_t * self
);

void JPC_PathConstraintPath_AddRef(
  JPC_PathConstraintPath_t * self
);

void JPC_PathConstraintPath_Release(
  JPC_PathConstraintPath_t * self
);

//endregion functions


#ifdef __cplusplus
}
#endif

