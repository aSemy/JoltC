#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region functions

unsigned long JoltC_CharacterBase_GetRefCount(
  JoltC_CharacterBase_t * self,
  char** outErrMsg
);

void JoltC_CharacterBase_AddRef(
  JoltC_CharacterBase_t * self,
  char** outErrMsg
);

void JoltC_CharacterBase_Release(
  JoltC_CharacterBase_t * self,
  char** outErrMsg
);

void JoltC_CharacterBase_SetMaxSlopeAngle(
  JoltC_CharacterBase_t * self,
  float inMaxSlopeAngle,
  char** outErrMsg
);

float JoltC_CharacterBase_GetCosMaxSlopeAngle(
  JoltC_CharacterBase_t * self,
  char** outErrMsg
);

void JoltC_CharacterBase_SetUp(
  JoltC_CharacterBase_t * self,
  const JoltC_Vec3_t * inUp,
  char** outErrMsg
);

JoltC_Vec3_t * JoltC_CharacterBase_GetUp(
  JoltC_CharacterBase_t * self,
  char** outErrMsg
);

const JoltC_Shape_t * JoltC_CharacterBase_GetShape(
  JoltC_CharacterBase_t * self,
  char** outErrMsg
);

JoltC_EGroundState JoltC_CharacterBase_GetGroundState(
  JoltC_CharacterBase_t * self,
  char** outErrMsg
);

bool JoltC_CharacterBase_IsSlopeTooSteep(
  JoltC_CharacterBase_t * self,
  JoltC_Vec3_t * inNormal,
  char** outErrMsg
);

bool JoltC_CharacterBase_IsSupported(
  JoltC_CharacterBase_t * self,
  char** outErrMsg
);

JoltC_RVec3_t * JoltC_CharacterBase_GetGroundPosition(
  JoltC_CharacterBase_t * self,
  char** outErrMsg
);

JoltC_Vec3_t * JoltC_CharacterBase_GetGroundNormal(
  JoltC_CharacterBase_t * self,
  char** outErrMsg
);

JoltC_Vec3_t * JoltC_CharacterBase_GetGroundVelocity(
  JoltC_CharacterBase_t * self,
  char** outErrMsg
);

const JoltC_PhysicsMaterial_t * JoltC_CharacterBase_GetGroundMaterial(
  JoltC_CharacterBase_t * self,
  char** outErrMsg
);

JoltC_BodyID_t * JoltC_CharacterBase_GetGroundBodyID(
  JoltC_CharacterBase_t * self,
  char** outErrMsg
);

//endregion functions


#ifdef __cplusplus
}
#endif

