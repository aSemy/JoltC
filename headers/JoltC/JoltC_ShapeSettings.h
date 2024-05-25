#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region functions

unsigned long JoltC_ShapeSettings_GetRefCount(
  JoltC_ShapeSettings_t * self,
  char** outErrMsg
);

void JoltC_ShapeSettings_AddRef(
  JoltC_ShapeSettings_t * self,
  char** outErrMsg
);

void JoltC_ShapeSettings_Release(
  JoltC_ShapeSettings_t * self,
  char** outErrMsg
);

JoltC_Shape_ShapeResult_t * JoltC_ShapeSettings_Create(
  JoltC_ShapeSettings_t * self,
  char** outErrMsg
);

void JoltC_ShapeSettings_ClearCachedResult(
  JoltC_ShapeSettings_t * self,
  char** outErrMsg
);

//endregion functions

//region properties

unsigned long long int JoltC_ShapeSettings_mUserData_Get(
  JoltC_ShapeSettings_t * self,
  char** outErrMsg
);

void JoltC_ShapeSettings_mUserData_Set(
  JoltC_ShapeSettings_t * self,
  unsigned long long int mUserData,
  char** outErrMsg
);

//endregion properties


#ifdef __cplusplus
}
#endif

