#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_TaperedCapsuleShapeSettings_t * JoltC_TaperedCapsuleShapeSettings_new(
  float inHalfHeightOfTaperedCylinder,
  float inTopRadius,
  float inBottomRadius,
  const JoltC_PhysicsMaterial_t * inMaterial,
  char** outErrMsg
);

//endregion constructors

//region functions

unsigned long JoltC_TaperedCapsuleShapeSettings_GetRefCount(
  JoltC_TaperedCapsuleShapeSettings_t * self,
  char** outErrMsg
);

void JoltC_TaperedCapsuleShapeSettings_AddRef(
  JoltC_TaperedCapsuleShapeSettings_t * self,
  char** outErrMsg
);

void JoltC_TaperedCapsuleShapeSettings_Release(
  JoltC_TaperedCapsuleShapeSettings_t * self,
  char** outErrMsg
);

JoltC_Shape_ShapeResult_t * JoltC_TaperedCapsuleShapeSettings_Create(
  JoltC_TaperedCapsuleShapeSettings_t * self,
  char** outErrMsg
);

void JoltC_TaperedCapsuleShapeSettings_ClearCachedResult(
  JoltC_TaperedCapsuleShapeSettings_t * self,
  char** outErrMsg
);

//endregion functions

//region properties

float JoltC_TaperedCapsuleShapeSettings_mHalfHeightOfTaperedCylinder_Get(
  JoltC_TaperedCapsuleShapeSettings_t * self,
  char** outErrMsg
);

void JoltC_TaperedCapsuleShapeSettings_mHalfHeightOfTaperedCylinder_Set(
  JoltC_TaperedCapsuleShapeSettings_t * self,
  float mHalfHeightOfTaperedCylinder,
  char** outErrMsg
);

float JoltC_TaperedCapsuleShapeSettings_mTopRadius_Get(
  JoltC_TaperedCapsuleShapeSettings_t * self,
  char** outErrMsg
);

void JoltC_TaperedCapsuleShapeSettings_mTopRadius_Set(
  JoltC_TaperedCapsuleShapeSettings_t * self,
  float mTopRadius,
  char** outErrMsg
);

float JoltC_TaperedCapsuleShapeSettings_mBottomRadius_Get(
  JoltC_TaperedCapsuleShapeSettings_t * self,
  char** outErrMsg
);

void JoltC_TaperedCapsuleShapeSettings_mBottomRadius_Set(
  JoltC_TaperedCapsuleShapeSettings_t * self,
  float mBottomRadius,
  char** outErrMsg
);

const JoltC_PhysicsMaterial_t * JoltC_TaperedCapsuleShapeSettings_mMaterial_Get(
  JoltC_TaperedCapsuleShapeSettings_t * self,
  char** outErrMsg
);

const void JoltC_TaperedCapsuleShapeSettings_mMaterial_Set(
  JoltC_TaperedCapsuleShapeSettings_t * self,
  const JoltC_PhysicsMaterial_t * mMaterial,
  char** outErrMsg
);

float JoltC_TaperedCapsuleShapeSettings_mDensity_Get(
  JoltC_TaperedCapsuleShapeSettings_t * self,
  char** outErrMsg
);

void JoltC_TaperedCapsuleShapeSettings_mDensity_Set(
  JoltC_TaperedCapsuleShapeSettings_t * self,
  float mDensity,
  char** outErrMsg
);

unsigned long long int JoltC_TaperedCapsuleShapeSettings_mUserData_Get(
  JoltC_TaperedCapsuleShapeSettings_t * self,
  char** outErrMsg
);

void JoltC_TaperedCapsuleShapeSettings_mUserData_Set(
  JoltC_TaperedCapsuleShapeSettings_t * self,
  unsigned long long int mUserData,
  char** outErrMsg
);

//endregion properties


#ifdef __cplusplus
}
#endif

