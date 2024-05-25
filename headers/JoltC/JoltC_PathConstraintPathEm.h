#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region functions

bool JoltC_PathConstraintPathEm_IsLooping(
  JoltC_PathConstraintPathEm_t * self,
  char** outErrMsg
);

void JoltC_PathConstraintPathEm_SetIsLooping(
  JoltC_PathConstraintPathEm_t * self,
  bool inIsLooping,
  char** outErrMsg
);

unsigned long JoltC_PathConstraintPathEm_GetRefCount(
  JoltC_PathConstraintPathEm_t * self,
  char** outErrMsg
);

void JoltC_PathConstraintPathEm_AddRef(
  JoltC_PathConstraintPathEm_t * self,
  char** outErrMsg
);

void JoltC_PathConstraintPathEm_Release(
  JoltC_PathConstraintPathEm_t * self,
  char** outErrMsg
);

//endregion functions


#ifdef __cplusplus
}
#endif

