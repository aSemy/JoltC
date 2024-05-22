#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JPC_RotatedTranslatedShapeSettings_t * JPC_RotatedTranslatedShapeSettings_new(
  const JPC_Vec3_t * inPosition,
  const JPC_Quat_t * inRotation,
  JPC_ShapeSettings_t * inShape
);

//endregion constructors

//region functions

unsigned long JPC_RotatedTranslatedShapeSettings_GetRefCount(
  JPC_RotatedTranslatedShapeSettings_t * self
);

void JPC_RotatedTranslatedShapeSettings_AddRef(
  JPC_RotatedTranslatedShapeSettings_t * self
);

void JPC_RotatedTranslatedShapeSettings_Release(
  JPC_RotatedTranslatedShapeSettings_t * self
);

JPC_Shape_ShapeResult_t * JPC_RotatedTranslatedShapeSettings_Create(
  JPC_RotatedTranslatedShapeSettings_t * self
);

void JPC_RotatedTranslatedShapeSettings_ClearCachedResult(
  JPC_RotatedTranslatedShapeSettings_t * self
);

//endregion functions

//region properties

JPC_Vec3_t * JPC_RotatedTranslatedShapeSettings_mPosition_Get(
  JPC_RotatedTranslatedShapeSettings_t * self
);

void JPC_RotatedTranslatedShapeSettings_mPosition_Set(
  JPC_RotatedTranslatedShapeSettings_t * self,
  JPC_Vec3_t * mPosition
);

JPC_Quat_t * JPC_RotatedTranslatedShapeSettings_mRotation_Get(
  JPC_RotatedTranslatedShapeSettings_t * self
);

void JPC_RotatedTranslatedShapeSettings_mRotation_Set(
  JPC_RotatedTranslatedShapeSettings_t * self,
  JPC_Quat_t * mRotation
);

unsigned long long int JPC_RotatedTranslatedShapeSettings_mUserData_Get(
  JPC_RotatedTranslatedShapeSettings_t * self
);

void JPC_RotatedTranslatedShapeSettings_mUserData_Set(
  JPC_RotatedTranslatedShapeSettings_t * self,
  unsigned long long int mUserData
);

//endregion properties


#ifdef __cplusplus
}
#endif

