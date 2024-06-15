#pragma once
#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region destructor

void JoltC_PathConstraintPathEm_destroy(
  JoltC_PathConstraintPathEm_t * self
);

//endregion
//region functions

bool JoltC_PathConstraintPathEm_IsLooping(
  JoltC_PathConstraintPathEm_t * self
);

void JoltC_PathConstraintPathEm_SetIsLooping(
  JoltC_PathConstraintPathEm_t * self,
  bool inIsLooping
);

unsigned long JoltC_PathConstraintPathEm_GetRefCount(
  JoltC_PathConstraintPathEm_t * self
);

void JoltC_PathConstraintPathEm_AddRef(
  JoltC_PathConstraintPathEm_t * self
);

void JoltC_PathConstraintPathEm_Release(
  JoltC_PathConstraintPathEm_t * self
);

//endregion


#ifdef __cplusplus
}
#endif
