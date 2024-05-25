#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JPC_CapsuleShapeSettings_t * JPC_CapsuleShapeSettings_new(
  float inHalfHeight,
  float inRadius,
  const JPC_PhysicsMaterial_t * inMaterial
);

//endregion constructors

//region functions

unsigned long JPC_CapsuleShapeSettings_GetRefCount(
  JPC_CapsuleShapeSettings_t * self
);

void JPC_CapsuleShapeSettings_AddRef(
  JPC_CapsuleShapeSettings_t * self
);

void JPC_CapsuleShapeSettings_Release(
  JPC_CapsuleShapeSettings_t * self
);

JPC_Shape_ShapeResult_t * JPC_CapsuleShapeSettings_Create(
  JPC_CapsuleShapeSettings_t * self
);

void JPC_CapsuleShapeSettings_ClearCachedResult(
  JPC_CapsuleShapeSettings_t * self
);

//endregion functions

//region properties

float JPC_CapsuleShapeSettings_mRadius_Get(
  JPC_CapsuleShapeSettings_t * self
);

void JPC_CapsuleShapeSettings_mRadius_Set(
  JPC_CapsuleShapeSettings_t * self,
  float mRadius
);

float JPC_CapsuleShapeSettings_mHalfHeightOfCylinder_Get(
  JPC_CapsuleShapeSettings_t * self
);

void JPC_CapsuleShapeSettings_mHalfHeightOfCylinder_Set(
  JPC_CapsuleShapeSettings_t * self,
  float mHalfHeightOfCylinder
);

const JPC_PhysicsMaterial_t * JPC_CapsuleShapeSettings_mMaterial_Get(
  JPC_CapsuleShapeSettings_t * self
);

const void JPC_CapsuleShapeSettings_mMaterial_Set(
  JPC_CapsuleShapeSettings_t * self,
  const JPC_PhysicsMaterial_t * mMaterial
);

float JPC_CapsuleShapeSettings_mDensity_Get(
  JPC_CapsuleShapeSettings_t * self
);

void JPC_CapsuleShapeSettings_mDensity_Set(
  JPC_CapsuleShapeSettings_t * self,
  float mDensity
);

unsigned long long int JPC_CapsuleShapeSettings_mUserData_Get(
  JPC_CapsuleShapeSettings_t * self
);

void JPC_CapsuleShapeSettings_mUserData_Set(
  JPC_CapsuleShapeSettings_t * self,
  unsigned long long int mUserData
);

//endregion properties


#ifdef __cplusplus
}
#endif

