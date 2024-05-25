#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JPC_TaperedCapsuleShapeSettings_t * JPC_TaperedCapsuleShapeSettings_new(
  float inHalfHeightOfTaperedCylinder,
  float inTopRadius,
  float inBottomRadius,
  const JPC_PhysicsMaterial_t * inMaterial
);

//endregion constructors

//region functions

unsigned long JPC_TaperedCapsuleShapeSettings_GetRefCount(
  JPC_TaperedCapsuleShapeSettings_t * self
);

void JPC_TaperedCapsuleShapeSettings_AddRef(
  JPC_TaperedCapsuleShapeSettings_t * self
);

void JPC_TaperedCapsuleShapeSettings_Release(
  JPC_TaperedCapsuleShapeSettings_t * self
);

JPC_Shape_ShapeResult_t * JPC_TaperedCapsuleShapeSettings_Create(
  JPC_TaperedCapsuleShapeSettings_t * self
);

void JPC_TaperedCapsuleShapeSettings_ClearCachedResult(
  JPC_TaperedCapsuleShapeSettings_t * self
);

//endregion functions

//region properties

float JPC_TaperedCapsuleShapeSettings_mHalfHeightOfTaperedCylinder_Get(
  JPC_TaperedCapsuleShapeSettings_t * self
);

void JPC_TaperedCapsuleShapeSettings_mHalfHeightOfTaperedCylinder_Set(
  JPC_TaperedCapsuleShapeSettings_t * self,
  float mHalfHeightOfTaperedCylinder
);

float JPC_TaperedCapsuleShapeSettings_mTopRadius_Get(
  JPC_TaperedCapsuleShapeSettings_t * self
);

void JPC_TaperedCapsuleShapeSettings_mTopRadius_Set(
  JPC_TaperedCapsuleShapeSettings_t * self,
  float mTopRadius
);

float JPC_TaperedCapsuleShapeSettings_mBottomRadius_Get(
  JPC_TaperedCapsuleShapeSettings_t * self
);

void JPC_TaperedCapsuleShapeSettings_mBottomRadius_Set(
  JPC_TaperedCapsuleShapeSettings_t * self,
  float mBottomRadius
);

const JPC_PhysicsMaterial_t * JPC_TaperedCapsuleShapeSettings_mMaterial_Get(
  JPC_TaperedCapsuleShapeSettings_t * self
);

const void JPC_TaperedCapsuleShapeSettings_mMaterial_Set(
  JPC_TaperedCapsuleShapeSettings_t * self,
  const JPC_PhysicsMaterial_t * mMaterial
);

float JPC_TaperedCapsuleShapeSettings_mDensity_Get(
  JPC_TaperedCapsuleShapeSettings_t * self
);

void JPC_TaperedCapsuleShapeSettings_mDensity_Set(
  JPC_TaperedCapsuleShapeSettings_t * self,
  float mDensity
);

unsigned long long int JPC_TaperedCapsuleShapeSettings_mUserData_Get(
  JPC_TaperedCapsuleShapeSettings_t * self
);

void JPC_TaperedCapsuleShapeSettings_mUserData_Set(
  JPC_TaperedCapsuleShapeSettings_t * self,
  unsigned long long int mUserData
);

//endregion properties


#ifdef __cplusplus
}
#endif

