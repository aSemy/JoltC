#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_BoxShapeSettings_t * JoltC_BoxShapeSettings_new(
  JoltC_Vec3_t * inHalfExtent,
  float inConvexRadius,
  const JoltC_PhysicsMaterial_t * inMaterial,
  char** outErrMsg
);

//endregion constructors

//region functions

unsigned long JoltC_BoxShapeSettings_GetRefCount(
  JoltC_BoxShapeSettings_t * self,
  char** outErrMsg
);

void JoltC_BoxShapeSettings_AddRef(
  JoltC_BoxShapeSettings_t * self,
  char** outErrMsg
);

void JoltC_BoxShapeSettings_Release(
  JoltC_BoxShapeSettings_t * self,
  char** outErrMsg
);

JoltC_Shape_ShapeResult_t * JoltC_BoxShapeSettings_Create(
  JoltC_BoxShapeSettings_t * self,
  char** outErrMsg
);

void JoltC_BoxShapeSettings_ClearCachedResult(
  JoltC_BoxShapeSettings_t * self,
  char** outErrMsg
);

//endregion functions

//region properties

JoltC_Vec3_t * JoltC_BoxShapeSettings_mHalfExtent_Get(
  JoltC_BoxShapeSettings_t * self,
  char** outErrMsg
);

void JoltC_BoxShapeSettings_mHalfExtent_Set(
  JoltC_BoxShapeSettings_t * self,
  JoltC_Vec3_t * mHalfExtent,
  char** outErrMsg
);

float JoltC_BoxShapeSettings_mConvexRadius_Get(
  JoltC_BoxShapeSettings_t * self,
  char** outErrMsg
);

void JoltC_BoxShapeSettings_mConvexRadius_Set(
  JoltC_BoxShapeSettings_t * self,
  float mConvexRadius,
  char** outErrMsg
);

const JoltC_PhysicsMaterial_t * JoltC_BoxShapeSettings_mMaterial_Get(
  JoltC_BoxShapeSettings_t * self,
  char** outErrMsg
);

const void JoltC_BoxShapeSettings_mMaterial_Set(
  JoltC_BoxShapeSettings_t * self,
  const JoltC_PhysicsMaterial_t * mMaterial,
  char** outErrMsg
);

float JoltC_BoxShapeSettings_mDensity_Get(
  JoltC_BoxShapeSettings_t * self,
  char** outErrMsg
);

void JoltC_BoxShapeSettings_mDensity_Set(
  JoltC_BoxShapeSettings_t * self,
  float mDensity,
  char** outErrMsg
);

unsigned long long int JoltC_BoxShapeSettings_mUserData_Get(
  JoltC_BoxShapeSettings_t * self,
  char** outErrMsg
);

void JoltC_BoxShapeSettings_mUserData_Set(
  JoltC_BoxShapeSettings_t * self,
  unsigned long long int mUserData,
  char** outErrMsg
);

//endregion properties


#ifdef __cplusplus
}
#endif

