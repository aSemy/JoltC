#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_StaticCompoundShapeSettings_t * JoltC_StaticCompoundShapeSettings_new(
  char** outErrMsg
);

//endregion constructors

//region functions

void JoltC_StaticCompoundShapeSettings_AddShape(
  JoltC_StaticCompoundShapeSettings_t * self,
  const JoltC_Vec3_t * inPosition,
  const JoltC_Quat_t * inRotation,
  const JoltC_ShapeSettings_t * inShape,
  unsigned long inUserData,
  char** outErrMsg
);

unsigned long JoltC_StaticCompoundShapeSettings_GetRefCount(
  JoltC_StaticCompoundShapeSettings_t * self,
  char** outErrMsg
);

void JoltC_StaticCompoundShapeSettings_AddRef(
  JoltC_StaticCompoundShapeSettings_t * self,
  char** outErrMsg
);

void JoltC_StaticCompoundShapeSettings_Release(
  JoltC_StaticCompoundShapeSettings_t * self,
  char** outErrMsg
);

JoltC_Shape_ShapeResult_t * JoltC_StaticCompoundShapeSettings_Create(
  JoltC_StaticCompoundShapeSettings_t * self,
  char** outErrMsg
);

void JoltC_StaticCompoundShapeSettings_ClearCachedResult(
  JoltC_StaticCompoundShapeSettings_t * self,
  char** outErrMsg
);

//endregion functions

//region properties

unsigned long long int JoltC_StaticCompoundShapeSettings_mUserData_Get(
  JoltC_StaticCompoundShapeSettings_t * self,
  char** outErrMsg
);

void JoltC_StaticCompoundShapeSettings_mUserData_Set(
  JoltC_StaticCompoundShapeSettings_t * self,
  unsigned long long int mUserData,
  char** outErrMsg
);

//endregion properties


#ifdef __cplusplus
}
#endif

