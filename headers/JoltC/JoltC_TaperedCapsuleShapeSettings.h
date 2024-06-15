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
  JoltC_PhysicsMaterial_t * inMaterial
);

//endregion

//region destructor

void JoltC_TaperedCapsuleShapeSettings_destroy(
  JoltC_TaperedCapsuleShapeSettings_t * self
);

//endregion
//region functions

unsigned long JoltC_TaperedCapsuleShapeSettings_GetRefCount(
  JoltC_TaperedCapsuleShapeSettings_t * self
);

void JoltC_TaperedCapsuleShapeSettings_AddRef(
  JoltC_TaperedCapsuleShapeSettings_t * self
);

void JoltC_TaperedCapsuleShapeSettings_Release(
  JoltC_TaperedCapsuleShapeSettings_t * self
);

JoltC_Shape_ShapeResult_t * JoltC_TaperedCapsuleShapeSettings_Create(
  JoltC_TaperedCapsuleShapeSettings_t * self
);

void JoltC_TaperedCapsuleShapeSettings_ClearCachedResult(
  JoltC_TaperedCapsuleShapeSettings_t * self
);

//endregion

//region properties

float JoltC_TaperedCapsuleShapeSettings_mHalfHeightOfTaperedCylinder_Get(
  JoltC_TaperedCapsuleShapeSettings_t * self
);

void JoltC_TaperedCapsuleShapeSettings_mHalfHeightOfTaperedCylinder_Set(
  JoltC_TaperedCapsuleShapeSettings_t * self,
  float mHalfHeightOfTaperedCylinder
);

float JoltC_TaperedCapsuleShapeSettings_mTopRadius_Get(
  JoltC_TaperedCapsuleShapeSettings_t * self
);

void JoltC_TaperedCapsuleShapeSettings_mTopRadius_Set(
  JoltC_TaperedCapsuleShapeSettings_t * self,
  float mTopRadius
);

float JoltC_TaperedCapsuleShapeSettings_mBottomRadius_Get(
  JoltC_TaperedCapsuleShapeSettings_t * self
);

void JoltC_TaperedCapsuleShapeSettings_mBottomRadius_Set(
  JoltC_TaperedCapsuleShapeSettings_t * self,
  float mBottomRadius
);

JoltC_PhysicsMaterial_t * JoltC_TaperedCapsuleShapeSettings_mMaterial_Get(
  JoltC_TaperedCapsuleShapeSettings_t * self
);

void JoltC_TaperedCapsuleShapeSettings_mMaterial_Set(
  JoltC_TaperedCapsuleShapeSettings_t * self,
  JoltC_PhysicsMaterial_t * mMaterial
);

float JoltC_TaperedCapsuleShapeSettings_mDensity_Get(
  JoltC_TaperedCapsuleShapeSettings_t * self
);

void JoltC_TaperedCapsuleShapeSettings_mDensity_Set(
  JoltC_TaperedCapsuleShapeSettings_t * self,
  float mDensity
);

unsigned long long int JoltC_TaperedCapsuleShapeSettings_mUserData_Get(
  JoltC_TaperedCapsuleShapeSettings_t * self
);

void JoltC_TaperedCapsuleShapeSettings_mUserData_Set(
  JoltC_TaperedCapsuleShapeSettings_t * self,
  unsigned long long int mUserData
);

//endregion


#ifdef __cplusplus
}
#endif
