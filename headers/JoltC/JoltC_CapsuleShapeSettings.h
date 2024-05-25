#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_CapsuleShapeSettings_t * JoltC_CapsuleShapeSettings_new(
  float inHalfHeight,
  float inRadius,
  const JoltC_PhysicsMaterial_t * inMaterial,
  char** outErrMsg
);

//endregion constructors

//region functions

unsigned long JoltC_CapsuleShapeSettings_GetRefCount(
  JoltC_CapsuleShapeSettings_t * self,
  char** outErrMsg
);

void JoltC_CapsuleShapeSettings_AddRef(
  JoltC_CapsuleShapeSettings_t * self,
  char** outErrMsg
);

void JoltC_CapsuleShapeSettings_Release(
  JoltC_CapsuleShapeSettings_t * self,
  char** outErrMsg
);

JoltC_Shape_ShapeResult_t * JoltC_CapsuleShapeSettings_Create(
  JoltC_CapsuleShapeSettings_t * self,
  char** outErrMsg
);

void JoltC_CapsuleShapeSettings_ClearCachedResult(
  JoltC_CapsuleShapeSettings_t * self,
  char** outErrMsg
);

//endregion functions

//region properties

float JoltC_CapsuleShapeSettings_mRadius_Get(
  JoltC_CapsuleShapeSettings_t * self,
  char** outErrMsg
);

void JoltC_CapsuleShapeSettings_mRadius_Set(
  JoltC_CapsuleShapeSettings_t * self,
  float mRadius,
  char** outErrMsg
);

float JoltC_CapsuleShapeSettings_mHalfHeightOfCylinder_Get(
  JoltC_CapsuleShapeSettings_t * self,
  char** outErrMsg
);

void JoltC_CapsuleShapeSettings_mHalfHeightOfCylinder_Set(
  JoltC_CapsuleShapeSettings_t * self,
  float mHalfHeightOfCylinder,
  char** outErrMsg
);

const JoltC_PhysicsMaterial_t * JoltC_CapsuleShapeSettings_mMaterial_Get(
  JoltC_CapsuleShapeSettings_t * self,
  char** outErrMsg
);

const void JoltC_CapsuleShapeSettings_mMaterial_Set(
  JoltC_CapsuleShapeSettings_t * self,
  const JoltC_PhysicsMaterial_t * mMaterial,
  char** outErrMsg
);

float JoltC_CapsuleShapeSettings_mDensity_Get(
  JoltC_CapsuleShapeSettings_t * self,
  char** outErrMsg
);

void JoltC_CapsuleShapeSettings_mDensity_Set(
  JoltC_CapsuleShapeSettings_t * self,
  float mDensity,
  char** outErrMsg
);

unsigned long long int JoltC_CapsuleShapeSettings_mUserData_Get(
  JoltC_CapsuleShapeSettings_t * self,
  char** outErrMsg
);

void JoltC_CapsuleShapeSettings_mUserData_Set(
  JoltC_CapsuleShapeSettings_t * self,
  unsigned long long int mUserData,
  char** outErrMsg
);

//endregion properties


#ifdef __cplusplus
}
#endif

