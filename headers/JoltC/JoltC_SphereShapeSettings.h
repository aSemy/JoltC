#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_SphereShapeSettings_t * JoltC_SphereShapeSettings_new(
  float inRadius,
  const JoltC_PhysicsMaterial_t * inMaterial,
  char** outErrMsg
);

//endregion constructors

//region functions

unsigned long JoltC_SphereShapeSettings_GetRefCount(
  JoltC_SphereShapeSettings_t * self,
  char** outErrMsg
);

void JoltC_SphereShapeSettings_AddRef(
  JoltC_SphereShapeSettings_t * self,
  char** outErrMsg
);

void JoltC_SphereShapeSettings_Release(
  JoltC_SphereShapeSettings_t * self,
  char** outErrMsg
);

JoltC_Shape_ShapeResult_t * JoltC_SphereShapeSettings_Create(
  JoltC_SphereShapeSettings_t * self,
  char** outErrMsg
);

void JoltC_SphereShapeSettings_ClearCachedResult(
  JoltC_SphereShapeSettings_t * self,
  char** outErrMsg
);

//endregion functions

//region properties

float JoltC_SphereShapeSettings_mRadius_Get(
  JoltC_SphereShapeSettings_t * self,
  char** outErrMsg
);

void JoltC_SphereShapeSettings_mRadius_Set(
  JoltC_SphereShapeSettings_t * self,
  float mRadius,
  char** outErrMsg
);

const JoltC_PhysicsMaterial_t * JoltC_SphereShapeSettings_mMaterial_Get(
  JoltC_SphereShapeSettings_t * self,
  char** outErrMsg
);

const void JoltC_SphereShapeSettings_mMaterial_Set(
  JoltC_SphereShapeSettings_t * self,
  const JoltC_PhysicsMaterial_t * mMaterial,
  char** outErrMsg
);

float JoltC_SphereShapeSettings_mDensity_Get(
  JoltC_SphereShapeSettings_t * self,
  char** outErrMsg
);

void JoltC_SphereShapeSettings_mDensity_Set(
  JoltC_SphereShapeSettings_t * self,
  float mDensity,
  char** outErrMsg
);

unsigned long long int JoltC_SphereShapeSettings_mUserData_Get(
  JoltC_SphereShapeSettings_t * self,
  char** outErrMsg
);

void JoltC_SphereShapeSettings_mUserData_Set(
  JoltC_SphereShapeSettings_t * self,
  unsigned long long int mUserData,
  char** outErrMsg
);

//endregion properties


#ifdef __cplusplus
}
#endif

