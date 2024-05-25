#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JPC_StaticCompoundShapeSettings_t * JPC_StaticCompoundShapeSettings_new();

//endregion constructors

//region functions

void JPC_StaticCompoundShapeSettings_AddShape(
  JPC_StaticCompoundShapeSettings_t * self,
  const JPC_Vec3_t * inPosition,
  const JPC_Quat_t * inRotation,
  const JPC_ShapeSettings_t * inShape,
  unsigned long inUserData
);

unsigned long JPC_StaticCompoundShapeSettings_GetRefCount(
  JPC_StaticCompoundShapeSettings_t * self
);

void JPC_StaticCompoundShapeSettings_AddRef(
  JPC_StaticCompoundShapeSettings_t * self
);

void JPC_StaticCompoundShapeSettings_Release(
  JPC_StaticCompoundShapeSettings_t * self
);

JPC_Shape_ShapeResult_t * JPC_StaticCompoundShapeSettings_Create(
  JPC_StaticCompoundShapeSettings_t * self
);

void JPC_StaticCompoundShapeSettings_ClearCachedResult(
  JPC_StaticCompoundShapeSettings_t * self
);

//endregion functions

//region properties

unsigned long long int JPC_StaticCompoundShapeSettings_mUserData_Get(
  JPC_StaticCompoundShapeSettings_t * self
);

void JPC_StaticCompoundShapeSettings_mUserData_Set(
  JPC_StaticCompoundShapeSettings_t * self,
  unsigned long long int mUserData
);

//endregion properties


#ifdef __cplusplus
}
#endif

