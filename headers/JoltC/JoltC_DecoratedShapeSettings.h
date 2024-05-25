#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region functions

unsigned long JoltC_DecoratedShapeSettings_GetRefCount(
  JoltC_DecoratedShapeSettings_t * self,
  char** outErrMsg
);

void JoltC_DecoratedShapeSettings_AddRef(
  JoltC_DecoratedShapeSettings_t * self,
  char** outErrMsg
);

void JoltC_DecoratedShapeSettings_Release(
  JoltC_DecoratedShapeSettings_t * self,
  char** outErrMsg
);

JoltC_Shape_ShapeResult_t * JoltC_DecoratedShapeSettings_Create(
  JoltC_DecoratedShapeSettings_t * self,
  char** outErrMsg
);

void JoltC_DecoratedShapeSettings_ClearCachedResult(
  JoltC_DecoratedShapeSettings_t * self,
  char** outErrMsg
);

//endregion functions

//region properties

unsigned long long int JoltC_DecoratedShapeSettings_mUserData_Get(
  JoltC_DecoratedShapeSettings_t * self,
  char** outErrMsg
);

void JoltC_DecoratedShapeSettings_mUserData_Set(
  JoltC_DecoratedShapeSettings_t * self,
  unsigned long long int mUserData,
  char** outErrMsg
);

//endregion properties


#ifdef __cplusplus
}
#endif

