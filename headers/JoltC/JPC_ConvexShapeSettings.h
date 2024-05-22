#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region functions

unsigned long JPC_ConvexShapeSettings_GetRefCount(
  JPC_ConvexShapeSettings_t * self
);

void JPC_ConvexShapeSettings_AddRef(
  JPC_ConvexShapeSettings_t * self
);

void JPC_ConvexShapeSettings_Release(
  JPC_ConvexShapeSettings_t * self
);

JPC_Shape_ShapeResult_t * JPC_ConvexShapeSettings_Create(
  JPC_ConvexShapeSettings_t * self
);

void JPC_ConvexShapeSettings_ClearCachedResult(
  JPC_ConvexShapeSettings_t * self
);

//endregion functions

//region properties

const JPC_PhysicsMaterial_t * JPC_ConvexShapeSettings_mMaterial_Get(
  JPC_ConvexShapeSettings_t * self
);

const void JPC_ConvexShapeSettings_mMaterial_Set(
  JPC_ConvexShapeSettings_t * self,
  const JPC_PhysicsMaterial_t * mMaterial
);

float JPC_ConvexShapeSettings_mDensity_Get(
  JPC_ConvexShapeSettings_t * self
);

void JPC_ConvexShapeSettings_mDensity_Set(
  JPC_ConvexShapeSettings_t * self,
  float mDensity
);

unsigned long long int JPC_ConvexShapeSettings_mUserData_Get(
  JPC_ConvexShapeSettings_t * self
);

void JPC_ConvexShapeSettings_mUserData_Set(
  JPC_ConvexShapeSettings_t * self,
  unsigned long long int mUserData
);

//endregion properties


#ifdef __cplusplus
}
#endif

