#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region functions

bool JPC_PathConstraintPathEm_IsLooping(
  JPC_PathConstraintPathEm_t * self
);

void JPC_PathConstraintPathEm_SetIsLooping(
  JPC_PathConstraintPathEm_t * self,
  bool inIsLooping
);

unsigned long JPC_PathConstraintPathEm_GetRefCount(
  JPC_PathConstraintPathEm_t * self
);

void JPC_PathConstraintPathEm_AddRef(
  JPC_PathConstraintPathEm_t * self
);

void JPC_PathConstraintPathEm_Release(
  JPC_PathConstraintPathEm_t * self
);

//endregion functions


#ifdef __cplusplus
}
#endif

