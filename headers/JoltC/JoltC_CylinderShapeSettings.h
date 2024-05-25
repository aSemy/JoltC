#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_CylinderShapeSettings_t * JoltC_CylinderShapeSettings_new(
  float inHalfHeight,
  float inRadius,
  float inConvexRadius,
  const JoltC_PhysicsMaterial_t * inMaterial,
  char** outErrMsg
);

//endregion constructors

//region functions

unsigned long JoltC_CylinderShapeSettings_GetRefCount(
  JoltC_CylinderShapeSettings_t * self,
  char** outErrMsg
);

void JoltC_CylinderShapeSettings_AddRef(
  JoltC_CylinderShapeSettings_t * self,
  char** outErrMsg
);

void JoltC_CylinderShapeSettings_Release(
  JoltC_CylinderShapeSettings_t * self,
  char** outErrMsg
);

JoltC_Shape_ShapeResult_t * JoltC_CylinderShapeSettings_Create(
  JoltC_CylinderShapeSettings_t * self,
  char** outErrMsg
);

void JoltC_CylinderShapeSettings_ClearCachedResult(
  JoltC_CylinderShapeSettings_t * self,
  char** outErrMsg
);

//endregion functions

//region properties

float JoltC_CylinderShapeSettings_mHalfHeight_Get(
  JoltC_CylinderShapeSettings_t * self,
  char** outErrMsg
);

void JoltC_CylinderShapeSettings_mHalfHeight_Set(
  JoltC_CylinderShapeSettings_t * self,
  float mHalfHeight,
  char** outErrMsg
);

float JoltC_CylinderShapeSettings_mRadius_Get(
  JoltC_CylinderShapeSettings_t * self,
  char** outErrMsg
);

void JoltC_CylinderShapeSettings_mRadius_Set(
  JoltC_CylinderShapeSettings_t * self,
  float mRadius,
  char** outErrMsg
);

float JoltC_CylinderShapeSettings_mConvexRadius_Get(
  JoltC_CylinderShapeSettings_t * self,
  char** outErrMsg
);

void JoltC_CylinderShapeSettings_mConvexRadius_Set(
  JoltC_CylinderShapeSettings_t * self,
  float mConvexRadius,
  char** outErrMsg
);

const JoltC_PhysicsMaterial_t * JoltC_CylinderShapeSettings_mMaterial_Get(
  JoltC_CylinderShapeSettings_t * self,
  char** outErrMsg
);

const void JoltC_CylinderShapeSettings_mMaterial_Set(
  JoltC_CylinderShapeSettings_t * self,
  const JoltC_PhysicsMaterial_t * mMaterial,
  char** outErrMsg
);

float JoltC_CylinderShapeSettings_mDensity_Get(
  JoltC_CylinderShapeSettings_t * self,
  char** outErrMsg
);

void JoltC_CylinderShapeSettings_mDensity_Set(
  JoltC_CylinderShapeSettings_t * self,
  float mDensity,
  char** outErrMsg
);

unsigned long long int JoltC_CylinderShapeSettings_mUserData_Get(
  JoltC_CylinderShapeSettings_t * self,
  char** outErrMsg
);

void JoltC_CylinderShapeSettings_mUserData_Set(
  JoltC_CylinderShapeSettings_t * self,
  unsigned long long int mUserData,
  char** outErrMsg
);

//endregion properties


#ifdef __cplusplus
}
#endif

