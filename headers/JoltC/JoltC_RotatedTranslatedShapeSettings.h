#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_RotatedTranslatedShapeSettings_t * JoltC_RotatedTranslatedShapeSettings_new(
  const JoltC_Vec3_t * inPosition,
  const JoltC_Quat_t * inRotation,
  JoltC_ShapeSettings_t * inShape,
  char** outErrMsg
);

//endregion constructors

//region functions

unsigned long JoltC_RotatedTranslatedShapeSettings_GetRefCount(
  JoltC_RotatedTranslatedShapeSettings_t * self,
  char** outErrMsg
);

void JoltC_RotatedTranslatedShapeSettings_AddRef(
  JoltC_RotatedTranslatedShapeSettings_t * self,
  char** outErrMsg
);

void JoltC_RotatedTranslatedShapeSettings_Release(
  JoltC_RotatedTranslatedShapeSettings_t * self,
  char** outErrMsg
);

JoltC_Shape_ShapeResult_t * JoltC_RotatedTranslatedShapeSettings_Create(
  JoltC_RotatedTranslatedShapeSettings_t * self,
  char** outErrMsg
);

void JoltC_RotatedTranslatedShapeSettings_ClearCachedResult(
  JoltC_RotatedTranslatedShapeSettings_t * self,
  char** outErrMsg
);

//endregion functions

//region properties

JoltC_Vec3_t * JoltC_RotatedTranslatedShapeSettings_mPosition_Get(
  JoltC_RotatedTranslatedShapeSettings_t * self,
  char** outErrMsg
);

void JoltC_RotatedTranslatedShapeSettings_mPosition_Set(
  JoltC_RotatedTranslatedShapeSettings_t * self,
  JoltC_Vec3_t * mPosition,
  char** outErrMsg
);

JoltC_Quat_t * JoltC_RotatedTranslatedShapeSettings_mRotation_Get(
  JoltC_RotatedTranslatedShapeSettings_t * self,
  char** outErrMsg
);

void JoltC_RotatedTranslatedShapeSettings_mRotation_Set(
  JoltC_RotatedTranslatedShapeSettings_t * self,
  JoltC_Quat_t * mRotation,
  char** outErrMsg
);

unsigned long long int JoltC_RotatedTranslatedShapeSettings_mUserData_Get(
  JoltC_RotatedTranslatedShapeSettings_t * self,
  char** outErrMsg
);

void JoltC_RotatedTranslatedShapeSettings_mUserData_Set(
  JoltC_RotatedTranslatedShapeSettings_t * self,
  unsigned long long int mUserData,
  char** outErrMsg
);

//endregion properties


#ifdef __cplusplus
}
#endif

