#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_SphereShapeSettings_t * JoltC_SphereShapeSettings_new(
  float inRadius,
  JoltC_PhysicsMaterial_t * inMaterial
);

//endregion

//region functions

unsigned long JoltC_SphereShapeSettings_GetRefCount(
  JoltC_SphereShapeSettings_t * self
);

void JoltC_SphereShapeSettings_AddRef(
  JoltC_SphereShapeSettings_t * self
);

void JoltC_SphereShapeSettings_Release(
  JoltC_SphereShapeSettings_t * self
);

JoltC_Shape_ShapeResult_t * JoltC_SphereShapeSettings_Create(
  JoltC_SphereShapeSettings_t * self
);

void JoltC_SphereShapeSettings_ClearCachedResult(
  JoltC_SphereShapeSettings_t * self
);

//endregion

//region properties

float JoltC_SphereShapeSettings_mRadius_Get(
  JoltC_SphereShapeSettings_t * self
);

void JoltC_SphereShapeSettings_mRadius_Set(
  JoltC_SphereShapeSettings_t * self,
  float mRadius
);

JoltC_PhysicsMaterial_t * JoltC_SphereShapeSettings_mMaterial_Get(
  JoltC_SphereShapeSettings_t * self
);

void JoltC_SphereShapeSettings_mMaterial_Set(
  JoltC_SphereShapeSettings_t * self,
  JoltC_PhysicsMaterial_t * mMaterial
);

float JoltC_SphereShapeSettings_mDensity_Get(
  JoltC_SphereShapeSettings_t * self
);

void JoltC_SphereShapeSettings_mDensity_Set(
  JoltC_SphereShapeSettings_t * self,
  float mDensity
);

unsigned long long int JoltC_SphereShapeSettings_mUserData_Get(
  JoltC_SphereShapeSettings_t * self
);

void JoltC_SphereShapeSettings_mUserData_Set(
  JoltC_SphereShapeSettings_t * self,
  unsigned long long int mUserData
);

//endregion


#ifdef __cplusplus
}
#endif

