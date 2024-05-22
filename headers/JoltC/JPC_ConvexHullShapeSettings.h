#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JPC_ConvexHullShapeSettings_t * JPC_ConvexHullShapeSettings_new();

//endregion constructors

//region functions

unsigned long JPC_ConvexHullShapeSettings_GetRefCount(
  JPC_ConvexHullShapeSettings_t * self
);

void JPC_ConvexHullShapeSettings_AddRef(
  JPC_ConvexHullShapeSettings_t * self
);

void JPC_ConvexHullShapeSettings_Release(
  JPC_ConvexHullShapeSettings_t * self
);

JPC_Shape_ShapeResult_t * JPC_ConvexHullShapeSettings_Create(
  JPC_ConvexHullShapeSettings_t * self
);

void JPC_ConvexHullShapeSettings_ClearCachedResult(
  JPC_ConvexHullShapeSettings_t * self
);

//endregion functions

//region properties

JPC_ArrayVec3_t * JPC_ConvexHullShapeSettings_mPoints_Get(
  JPC_ConvexHullShapeSettings_t * self
);

void JPC_ConvexHullShapeSettings_mPoints_Set(
  JPC_ConvexHullShapeSettings_t * self,
  JPC_ArrayVec3_t * mPoints
);

float JPC_ConvexHullShapeSettings_mMaxConvexRadius_Get(
  JPC_ConvexHullShapeSettings_t * self
);

void JPC_ConvexHullShapeSettings_mMaxConvexRadius_Set(
  JPC_ConvexHullShapeSettings_t * self,
  float mMaxConvexRadius
);

float JPC_ConvexHullShapeSettings_mMaxErrorConvexRadius_Get(
  JPC_ConvexHullShapeSettings_t * self
);

void JPC_ConvexHullShapeSettings_mMaxErrorConvexRadius_Set(
  JPC_ConvexHullShapeSettings_t * self,
  float mMaxErrorConvexRadius
);

float JPC_ConvexHullShapeSettings_mHullTolerance_Get(
  JPC_ConvexHullShapeSettings_t * self
);

void JPC_ConvexHullShapeSettings_mHullTolerance_Set(
  JPC_ConvexHullShapeSettings_t * self,
  float mHullTolerance
);

const JPC_PhysicsMaterial_t * JPC_ConvexHullShapeSettings_mMaterial_Get(
  JPC_ConvexHullShapeSettings_t * self
);

const void JPC_ConvexHullShapeSettings_mMaterial_Set(
  JPC_ConvexHullShapeSettings_t * self,
  const JPC_PhysicsMaterial_t * mMaterial
);

float JPC_ConvexHullShapeSettings_mDensity_Get(
  JPC_ConvexHullShapeSettings_t * self
);

void JPC_ConvexHullShapeSettings_mDensity_Set(
  JPC_ConvexHullShapeSettings_t * self,
  float mDensity
);

unsigned long long int JPC_ConvexHullShapeSettings_mUserData_Get(
  JPC_ConvexHullShapeSettings_t * self
);

void JPC_ConvexHullShapeSettings_mUserData_Set(
  JPC_ConvexHullShapeSettings_t * self,
  unsigned long long int mUserData
);

//endregion properties


#ifdef __cplusplus
}
#endif

