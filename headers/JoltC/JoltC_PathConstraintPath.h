#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region functions

bool JoltC_PathConstraintPath_IsLooping(
  JoltC_PathConstraintPath_t * self,
  char** outErrMsg
);

void JoltC_PathConstraintPath_SetIsLooping(
  JoltC_PathConstraintPath_t * self,
  bool inIsLooping,
  char** outErrMsg
);

unsigned long JoltC_PathConstraintPath_GetRefCount(
  JoltC_PathConstraintPath_t * self,
  char** outErrMsg
);

void JoltC_PathConstraintPath_AddRef(
  JoltC_PathConstraintPath_t * self,
  char** outErrMsg
);

void JoltC_PathConstraintPath_Release(
  JoltC_PathConstraintPath_t * self,
  char** outErrMsg
);

//endregion functions


#ifdef __cplusplus
}
#endif

