#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_CapsuleShapeSettings_t * JoltC_CapsuleShapeSettings_new(
  float inHalfHeight,
  float inRadius,
  JoltC_PhysicsMaterial_t * inMaterial
);

//endregion

//region functions

unsigned long JoltC_CapsuleShapeSettings_GetRefCount(
  JoltC_CapsuleShapeSettings_t * self
);

void JoltC_CapsuleShapeSettings_AddRef(
  JoltC_CapsuleShapeSettings_t * self
);

void JoltC_CapsuleShapeSettings_Release(
  JoltC_CapsuleShapeSettings_t * self
);

JoltC_Shape_ShapeResult_t * JoltC_CapsuleShapeSettings_Create(
  JoltC_CapsuleShapeSettings_t * self
);

void JoltC_CapsuleShapeSettings_ClearCachedResult(
  JoltC_CapsuleShapeSettings_t * self
);

//endregion

//region properties

float JoltC_CapsuleShapeSettings_mRadius_Get(
  JoltC_CapsuleShapeSettings_t * self
);

void JoltC_CapsuleShapeSettings_mRadius_Set(
  JoltC_CapsuleShapeSettings_t * self,
  float mRadius
);

float JoltC_CapsuleShapeSettings_mHalfHeightOfCylinder_Get(
  JoltC_CapsuleShapeSettings_t * self
);

void JoltC_CapsuleShapeSettings_mHalfHeightOfCylinder_Set(
  JoltC_CapsuleShapeSettings_t * self,
  float mHalfHeightOfCylinder
);

JoltC_PhysicsMaterial_t * JoltC_CapsuleShapeSettings_mMaterial_Get(
  JoltC_CapsuleShapeSettings_t * self
);

void JoltC_CapsuleShapeSettings_mMaterial_Set(
  JoltC_CapsuleShapeSettings_t * self,
  JoltC_PhysicsMaterial_t * mMaterial
);

float JoltC_CapsuleShapeSettings_mDensity_Get(
  JoltC_CapsuleShapeSettings_t * self
);

void JoltC_CapsuleShapeSettings_mDensity_Set(
  JoltC_CapsuleShapeSettings_t * self,
  float mDensity
);

unsigned long long int JoltC_CapsuleShapeSettings_mUserData_Get(
  JoltC_CapsuleShapeSettings_t * self
);

void JoltC_CapsuleShapeSettings_mUserData_Set(
  JoltC_CapsuleShapeSettings_t * self,
  unsigned long long int mUserData
);

//endregion


#ifdef __cplusplus
}
#endif

