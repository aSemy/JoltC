#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region functions

JoltC_Vec3_t * JoltC_CompoundShapeSubShape_GetPositionCOM(
  JoltC_CompoundShapeSubShape_t * self,
  char** outErrMsg
);

JoltC_Quat_t * JoltC_CompoundShapeSubShape_GetRotation(
  JoltC_CompoundShapeSubShape_t * self,
  char** outErrMsg
);

//endregion functions

//region properties

const JoltC_Shape_t * JoltC_CompoundShapeSubShape_mShape_Get(
  JoltC_CompoundShapeSubShape_t * self,
  char** outErrMsg
);

const void JoltC_CompoundShapeSubShape_mShape_Set(
  JoltC_CompoundShapeSubShape_t * self,
  const JoltC_Shape_t * mShape,
  char** outErrMsg
);

unsigned long JoltC_CompoundShapeSubShape_mUserData_Get(
  JoltC_CompoundShapeSubShape_t * self,
  char** outErrMsg
);

void JoltC_CompoundShapeSubShape_mUserData_Set(
  JoltC_CompoundShapeSubShape_t * self,
  unsigned long mUserData,
  char** outErrMsg
);

//endregion properties


#ifdef __cplusplus
}
#endif

