#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JPC_CylinderShapeSettings_t * JPC_CylinderShapeSettings_new(
  float inHalfHeight,
  float inRadius,
  float inConvexRadius,
  const JPC_PhysicsMaterial_t * inMaterial
);

//endregion constructors

//region functions

unsigned long JPC_CylinderShapeSettings_GetRefCount(
  JPC_CylinderShapeSettings_t * self
);

void JPC_CylinderShapeSettings_AddRef(
  JPC_CylinderShapeSettings_t * self
);

void JPC_CylinderShapeSettings_Release(
  JPC_CylinderShapeSettings_t * self
);

JPC_Shape_ShapeResult_t * JPC_CylinderShapeSettings_Create(
  JPC_CylinderShapeSettings_t * self
);

void JPC_CylinderShapeSettings_ClearCachedResult(
  JPC_CylinderShapeSettings_t * self
);

//endregion functions

//region properties

float JPC_CylinderShapeSettings_mHalfHeight_Get(
  JPC_CylinderShapeSettings_t * self
);

void JPC_CylinderShapeSettings_mHalfHeight_Set(
  JPC_CylinderShapeSettings_t * self,
  float mHalfHeight
);

float JPC_CylinderShapeSettings_mRadius_Get(
  JPC_CylinderShapeSettings_t * self
);

void JPC_CylinderShapeSettings_mRadius_Set(
  JPC_CylinderShapeSettings_t * self,
  float mRadius
);

float JPC_CylinderShapeSettings_mConvexRadius_Get(
  JPC_CylinderShapeSettings_t * self
);

void JPC_CylinderShapeSettings_mConvexRadius_Set(
  JPC_CylinderShapeSettings_t * self,
  float mConvexRadius
);

const JPC_PhysicsMaterial_t * JPC_CylinderShapeSettings_mMaterial_Get(
  JPC_CylinderShapeSettings_t * self
);

const void JPC_CylinderShapeSettings_mMaterial_Set(
  JPC_CylinderShapeSettings_t * self,
  const JPC_PhysicsMaterial_t * mMaterial
);

float JPC_CylinderShapeSettings_mDensity_Get(
  JPC_CylinderShapeSettings_t * self
);

void JPC_CylinderShapeSettings_mDensity_Set(
  JPC_CylinderShapeSettings_t * self,
  float mDensity
);

unsigned long long int JPC_CylinderShapeSettings_mUserData_Get(
  JPC_CylinderShapeSettings_t * self
);

void JPC_CylinderShapeSettings_mUserData_Set(
  JPC_CylinderShapeSettings_t * self,
  unsigned long long int mUserData
);

//endregion properties


#ifdef __cplusplus
}
#endif

