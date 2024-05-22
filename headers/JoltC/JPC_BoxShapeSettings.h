#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JPC_BoxShapeSettings_t * JPC_BoxShapeSettings_new(
  JPC_Vec3_t * inHalfExtent,
  float inConvexRadius,
  const JPC_PhysicsMaterial_t * inMaterial
);

//endregion constructors

//region functions

unsigned long JPC_BoxShapeSettings_GetRefCount(
  JPC_BoxShapeSettings_t * self
);

void JPC_BoxShapeSettings_AddRef(
  JPC_BoxShapeSettings_t * self
);

void JPC_BoxShapeSettings_Release(
  JPC_BoxShapeSettings_t * self
);

JPC_Shape_ShapeResult_t * JPC_BoxShapeSettings_Create(
  JPC_BoxShapeSettings_t * self
);

void JPC_BoxShapeSettings_ClearCachedResult(
  JPC_BoxShapeSettings_t * self
);

//endregion functions

//region properties

JPC_Vec3_t * JPC_BoxShapeSettings_mHalfExtent_Get(
  JPC_BoxShapeSettings_t * self
);

void JPC_BoxShapeSettings_mHalfExtent_Set(
  JPC_BoxShapeSettings_t * self,
  JPC_Vec3_t * mHalfExtent
);

float JPC_BoxShapeSettings_mConvexRadius_Get(
  JPC_BoxShapeSettings_t * self
);

void JPC_BoxShapeSettings_mConvexRadius_Set(
  JPC_BoxShapeSettings_t * self,
  float mConvexRadius
);

const JPC_PhysicsMaterial_t * JPC_BoxShapeSettings_mMaterial_Get(
  JPC_BoxShapeSettings_t * self
);

const void JPC_BoxShapeSettings_mMaterial_Set(
  JPC_BoxShapeSettings_t * self,
  const JPC_PhysicsMaterial_t * mMaterial
);

float JPC_BoxShapeSettings_mDensity_Get(
  JPC_BoxShapeSettings_t * self
);

void JPC_BoxShapeSettings_mDensity_Set(
  JPC_BoxShapeSettings_t * self,
  float mDensity
);

unsigned long long int JPC_BoxShapeSettings_mUserData_Get(
  JPC_BoxShapeSettings_t * self
);

void JPC_BoxShapeSettings_mUserData_Set(
  JPC_BoxShapeSettings_t * self,
  unsigned long long int mUserData
);

//endregion properties


#ifdef __cplusplus
}
#endif

