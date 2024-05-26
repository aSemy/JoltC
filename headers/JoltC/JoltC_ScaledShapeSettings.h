#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_ScaledShapeSettings_t * JoltC_ScaledShapeSettings_new(
  JoltC_ShapeSettings_t * inShape,
  JoltC_Vec3_t * inScale
);

//endregion

//region functions

unsigned long JoltC_ScaledShapeSettings_GetRefCount(
  JoltC_ScaledShapeSettings_t * self
);

void JoltC_ScaledShapeSettings_AddRef(
  JoltC_ScaledShapeSettings_t * self
);

void JoltC_ScaledShapeSettings_Release(
  JoltC_ScaledShapeSettings_t * self
);

JoltC_Shape_ShapeResult_t * JoltC_ScaledShapeSettings_Create(
  JoltC_ScaledShapeSettings_t * self
);

void JoltC_ScaledShapeSettings_ClearCachedResult(
  JoltC_ScaledShapeSettings_t * self
);

//endregion

//region properties

JoltC_Vec3_t * JoltC_ScaledShapeSettings_mScale_Get(
  JoltC_ScaledShapeSettings_t * self
);

void JoltC_ScaledShapeSettings_mScale_Set(
  JoltC_ScaledShapeSettings_t * self,
  JoltC_Vec3_t * mScale
);

unsigned long long int JoltC_ScaledShapeSettings_mUserData_Get(
  JoltC_ScaledShapeSettings_t * self
);

void JoltC_ScaledShapeSettings_mUserData_Set(
  JoltC_ScaledShapeSettings_t * self,
  unsigned long long int mUserData
);

//endregion


#ifdef __cplusplus
}
#endif

