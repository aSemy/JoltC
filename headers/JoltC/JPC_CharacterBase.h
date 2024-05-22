#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region functions

unsigned long JPC_CharacterBase_GetRefCount(
  JPC_CharacterBase_t * self
);

void JPC_CharacterBase_AddRef(
  JPC_CharacterBase_t * self
);

void JPC_CharacterBase_Release(
  JPC_CharacterBase_t * self
);

void JPC_CharacterBase_SetMaxSlopeAngle(
  JPC_CharacterBase_t * self,
  float inMaxSlopeAngle
);

float JPC_CharacterBase_GetCosMaxSlopeAngle(
  JPC_CharacterBase_t * self
);

void JPC_CharacterBase_SetUp(
  JPC_CharacterBase_t * self,
  const JPC_Vec3_t * inUp
);

JPC_Vec3_t * JPC_CharacterBase_GetUp(
  JPC_CharacterBase_t * self
);

const JPC_Shape_t * JPC_CharacterBase_GetShape(
  JPC_CharacterBase_t * self
);

JPC_EGroundState JPC_CharacterBase_GetGroundState(
  JPC_CharacterBase_t * self
);

bool JPC_CharacterBase_IsSlopeTooSteep(
  JPC_CharacterBase_t * self,
  JPC_Vec3_t * inNormal
);

bool JPC_CharacterBase_IsSupported(
  JPC_CharacterBase_t * self
);

JPC_RVec3_t * JPC_CharacterBase_GetGroundPosition(
  JPC_CharacterBase_t * self
);

JPC_Vec3_t * JPC_CharacterBase_GetGroundNormal(
  JPC_CharacterBase_t * self
);

JPC_Vec3_t * JPC_CharacterBase_GetGroundVelocity(
  JPC_CharacterBase_t * self
);

const JPC_PhysicsMaterial_t * JPC_CharacterBase_GetGroundMaterial(
  JPC_CharacterBase_t * self
);

JPC_BodyID_t * JPC_CharacterBase_GetGroundBodyID(
  JPC_CharacterBase_t * self
);

//endregion functions


#ifdef __cplusplus
}
#endif

