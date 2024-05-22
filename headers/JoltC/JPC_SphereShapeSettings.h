#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JPC_SphereShapeSettings_t * JPC_SphereShapeSettings_new(
  float inRadius,
  const JPC_PhysicsMaterial_t * inMaterial
);

//endregion constructors

//region functions

unsigned long JPC_SphereShapeSettings_GetRefCount(
  JPC_SphereShapeSettings_t * self
);

void JPC_SphereShapeSettings_AddRef(
  JPC_SphereShapeSettings_t * self
);

void JPC_SphereShapeSettings_Release(
  JPC_SphereShapeSettings_t * self
);

JPC_Shape_ShapeResult_t * JPC_SphereShapeSettings_Create(
  JPC_SphereShapeSettings_t * self
);

void JPC_SphereShapeSettings_ClearCachedResult(
  JPC_SphereShapeSettings_t * self
);

//endregion functions

//region properties

float JPC_SphereShapeSettings_mRadius_Get(
  JPC_SphereShapeSettings_t * self
);

void JPC_SphereShapeSettings_mRadius_Set(
  JPC_SphereShapeSettings_t * self,
  float mRadius
);

const JPC_PhysicsMaterial_t * JPC_SphereShapeSettings_mMaterial_Get(
  JPC_SphereShapeSettings_t * self
);

const void JPC_SphereShapeSettings_mMaterial_Set(
  JPC_SphereShapeSettings_t * self,
  const JPC_PhysicsMaterial_t * mMaterial
);

float JPC_SphereShapeSettings_mDensity_Get(
  JPC_SphereShapeSettings_t * self
);

void JPC_SphereShapeSettings_mDensity_Set(
  JPC_SphereShapeSettings_t * self,
  float mDensity
);

unsigned long long int JPC_SphereShapeSettings_mUserData_Get(
  JPC_SphereShapeSettings_t * self
);

void JPC_SphereShapeSettings_mUserData_Set(
  JPC_SphereShapeSettings_t * self,
  unsigned long long int mUserData
);

//endregion properties


#ifdef __cplusplus
}
#endif

