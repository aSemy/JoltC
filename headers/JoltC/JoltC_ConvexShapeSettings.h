#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region functions

unsigned long JoltC_ConvexShapeSettings_GetRefCount(
  JoltC_ConvexShapeSettings_t * self,
  char** outErrMsg
);

void JoltC_ConvexShapeSettings_AddRef(
  JoltC_ConvexShapeSettings_t * self,
  char** outErrMsg
);

void JoltC_ConvexShapeSettings_Release(
  JoltC_ConvexShapeSettings_t * self,
  char** outErrMsg
);

JoltC_Shape_ShapeResult_t * JoltC_ConvexShapeSettings_Create(
  JoltC_ConvexShapeSettings_t * self,
  char** outErrMsg
);

void JoltC_ConvexShapeSettings_ClearCachedResult(
  JoltC_ConvexShapeSettings_t * self,
  char** outErrMsg
);

//endregion functions

//region properties

const JoltC_PhysicsMaterial_t * JoltC_ConvexShapeSettings_mMaterial_Get(
  JoltC_ConvexShapeSettings_t * self,
  char** outErrMsg
);

const void JoltC_ConvexShapeSettings_mMaterial_Set(
  JoltC_ConvexShapeSettings_t * self,
  const JoltC_PhysicsMaterial_t * mMaterial,
  char** outErrMsg
);

float JoltC_ConvexShapeSettings_mDensity_Get(
  JoltC_ConvexShapeSettings_t * self,
  char** outErrMsg
);

void JoltC_ConvexShapeSettings_mDensity_Set(
  JoltC_ConvexShapeSettings_t * self,
  float mDensity,
  char** outErrMsg
);

unsigned long long int JoltC_ConvexShapeSettings_mUserData_Get(
  JoltC_ConvexShapeSettings_t * self,
  char** outErrMsg
);

void JoltC_ConvexShapeSettings_mUserData_Set(
  JoltC_ConvexShapeSettings_t * self,
  unsigned long long int mUserData,
  char** outErrMsg
);

//endregion properties


#ifdef __cplusplus
}
#endif

