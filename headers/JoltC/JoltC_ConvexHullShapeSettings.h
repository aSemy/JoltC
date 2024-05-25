#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_ConvexHullShapeSettings_t * JoltC_ConvexHullShapeSettings_new(
  char** outErrMsg
);

//endregion constructors

//region functions

unsigned long JoltC_ConvexHullShapeSettings_GetRefCount(
  JoltC_ConvexHullShapeSettings_t * self,
  char** outErrMsg
);

void JoltC_ConvexHullShapeSettings_AddRef(
  JoltC_ConvexHullShapeSettings_t * self,
  char** outErrMsg
);

void JoltC_ConvexHullShapeSettings_Release(
  JoltC_ConvexHullShapeSettings_t * self,
  char** outErrMsg
);

JoltC_Shape_ShapeResult_t * JoltC_ConvexHullShapeSettings_Create(
  JoltC_ConvexHullShapeSettings_t * self,
  char** outErrMsg
);

void JoltC_ConvexHullShapeSettings_ClearCachedResult(
  JoltC_ConvexHullShapeSettings_t * self,
  char** outErrMsg
);

//endregion functions

//region properties

JoltC_ArrayVec3_t * JoltC_ConvexHullShapeSettings_mPoints_Get(
  JoltC_ConvexHullShapeSettings_t * self,
  char** outErrMsg
);

void JoltC_ConvexHullShapeSettings_mPoints_Set(
  JoltC_ConvexHullShapeSettings_t * self,
  JoltC_ArrayVec3_t * mPoints,
  char** outErrMsg
);

float JoltC_ConvexHullShapeSettings_mMaxConvexRadius_Get(
  JoltC_ConvexHullShapeSettings_t * self,
  char** outErrMsg
);

void JoltC_ConvexHullShapeSettings_mMaxConvexRadius_Set(
  JoltC_ConvexHullShapeSettings_t * self,
  float mMaxConvexRadius,
  char** outErrMsg
);

float JoltC_ConvexHullShapeSettings_mMaxErrorConvexRadius_Get(
  JoltC_ConvexHullShapeSettings_t * self,
  char** outErrMsg
);

void JoltC_ConvexHullShapeSettings_mMaxErrorConvexRadius_Set(
  JoltC_ConvexHullShapeSettings_t * self,
  float mMaxErrorConvexRadius,
  char** outErrMsg
);

float JoltC_ConvexHullShapeSettings_mHullTolerance_Get(
  JoltC_ConvexHullShapeSettings_t * self,
  char** outErrMsg
);

void JoltC_ConvexHullShapeSettings_mHullTolerance_Set(
  JoltC_ConvexHullShapeSettings_t * self,
  float mHullTolerance,
  char** outErrMsg
);

const JoltC_PhysicsMaterial_t * JoltC_ConvexHullShapeSettings_mMaterial_Get(
  JoltC_ConvexHullShapeSettings_t * self,
  char** outErrMsg
);

const void JoltC_ConvexHullShapeSettings_mMaterial_Set(
  JoltC_ConvexHullShapeSettings_t * self,
  const JoltC_PhysicsMaterial_t * mMaterial,
  char** outErrMsg
);

float JoltC_ConvexHullShapeSettings_mDensity_Get(
  JoltC_ConvexHullShapeSettings_t * self,
  char** outErrMsg
);

void JoltC_ConvexHullShapeSettings_mDensity_Set(
  JoltC_ConvexHullShapeSettings_t * self,
  float mDensity,
  char** outErrMsg
);

unsigned long long int JoltC_ConvexHullShapeSettings_mUserData_Get(
  JoltC_ConvexHullShapeSettings_t * self,
  char** outErrMsg
);

void JoltC_ConvexHullShapeSettings_mUserData_Set(
  JoltC_ConvexHullShapeSettings_t * self,
  unsigned long long int mUserData,
  char** outErrMsg
);

//endregion properties


#ifdef __cplusplus
}
#endif

