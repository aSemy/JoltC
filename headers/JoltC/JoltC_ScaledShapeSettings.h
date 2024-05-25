#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JPC_ScaledShapeSettings_t * JPC_ScaledShapeSettings_new(
  JPC_ShapeSettings_t * inShape,
  const JPC_Vec3_t * inScale
);

//endregion constructors

//region functions

unsigned long JPC_ScaledShapeSettings_GetRefCount(
  JPC_ScaledShapeSettings_t * self
);

void JPC_ScaledShapeSettings_AddRef(
  JPC_ScaledShapeSettings_t * self
);

void JPC_ScaledShapeSettings_Release(
  JPC_ScaledShapeSettings_t * self
);

JPC_Shape_ShapeResult_t * JPC_ScaledShapeSettings_Create(
  JPC_ScaledShapeSettings_t * self
);

void JPC_ScaledShapeSettings_ClearCachedResult(
  JPC_ScaledShapeSettings_t * self
);

//endregion functions

//region properties

JPC_Vec3_t * JPC_ScaledShapeSettings_mScale_Get(
  JPC_ScaledShapeSettings_t * self
);

void JPC_ScaledShapeSettings_mScale_Set(
  JPC_ScaledShapeSettings_t * self,
  JPC_Vec3_t * mScale
);

unsigned long long int JPC_ScaledShapeSettings_mUserData_Get(
  JPC_ScaledShapeSettings_t * self
);

void JPC_ScaledShapeSettings_mUserData_Set(
  JPC_ScaledShapeSettings_t * self,
  unsigned long long int mUserData
);

//endregion properties


#ifdef __cplusplus
}
#endif

