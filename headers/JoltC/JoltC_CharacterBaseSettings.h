#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region functions

unsigned long JoltC_CharacterBaseSettings_GetRefCount(
  JoltC_CharacterBaseSettings_t * self,
  char** outErrMsg
);

void JoltC_CharacterBaseSettings_AddRef(
  JoltC_CharacterBaseSettings_t * self,
  char** outErrMsg
);

void JoltC_CharacterBaseSettings_Release(
  JoltC_CharacterBaseSettings_t * self,
  char** outErrMsg
);

//endregion functions

//region properties

JoltC_Vec3_t * JoltC_CharacterBaseSettings_mUp_Get(
  JoltC_CharacterBaseSettings_t * self,
  char** outErrMsg
);

void JoltC_CharacterBaseSettings_mUp_Set(
  JoltC_CharacterBaseSettings_t * self,
  JoltC_Vec3_t * mUp,
  char** outErrMsg
);

JoltC_Plane_t * JoltC_CharacterBaseSettings_mSupportingVolume_Get(
  JoltC_CharacterBaseSettings_t * self,
  char** outErrMsg
);

void JoltC_CharacterBaseSettings_mSupportingVolume_Set(
  JoltC_CharacterBaseSettings_t * self,
  JoltC_Plane_t * mSupportingVolume,
  char** outErrMsg
);

float JoltC_CharacterBaseSettings_mMaxSlopeAngle_Get(
  JoltC_CharacterBaseSettings_t * self,
  char** outErrMsg
);

void JoltC_CharacterBaseSettings_mMaxSlopeAngle_Set(
  JoltC_CharacterBaseSettings_t * self,
  float mMaxSlopeAngle,
  char** outErrMsg
);

const JoltC_Shape_t * JoltC_CharacterBaseSettings_mShape_Get(
  JoltC_CharacterBaseSettings_t * self,
  char** outErrMsg
);

const void JoltC_CharacterBaseSettings_mShape_Set(
  JoltC_CharacterBaseSettings_t * self,
  const JoltC_Shape_t * mShape,
  char** outErrMsg
);

//endregion properties


#ifdef __cplusplus
}
#endif

