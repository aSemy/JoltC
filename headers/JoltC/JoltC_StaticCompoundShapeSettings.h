#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_StaticCompoundShapeSettings_t * JoltC_StaticCompoundShapeSettings_new();

//endregion

//region functions

void JoltC_StaticCompoundShapeSettings_AddShape(
  JoltC_StaticCompoundShapeSettings_t * self,
  JoltC_Vec3_t * inPosition,
  JoltC_Quat_t * inRotation,
  JoltC_ShapeSettings_t * inShape,
  unsigned long inUserData
);

unsigned long JoltC_StaticCompoundShapeSettings_GetRefCount(
  JoltC_StaticCompoundShapeSettings_t * self
);

void JoltC_StaticCompoundShapeSettings_AddRef(
  JoltC_StaticCompoundShapeSettings_t * self
);

void JoltC_StaticCompoundShapeSettings_Release(
  JoltC_StaticCompoundShapeSettings_t * self
);

JoltC_Shape_ShapeResult_t * JoltC_StaticCompoundShapeSettings_Create(
  JoltC_StaticCompoundShapeSettings_t * self
);

void JoltC_StaticCompoundShapeSettings_ClearCachedResult(
  JoltC_StaticCompoundShapeSettings_t * self
);

//endregion

//region properties

unsigned long long int JoltC_StaticCompoundShapeSettings_mUserData_Get(
  JoltC_StaticCompoundShapeSettings_t * self
);

void JoltC_StaticCompoundShapeSettings_mUserData_Set(
  JoltC_StaticCompoundShapeSettings_t * self,
  unsigned long long int mUserData
);

//endregion


#ifdef __cplusplus
}
#endif

