#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region converters

/**
 * Convert an instance of JoltC_CharacterVirtual_t into JoltC_CharacterBase_t.
 */
JoltC_CharacterBase_t * JoltC_CharacterBase_From_CharacterVirtual(
  JoltC_CharacterVirtual_t * subtype
);

//endregion

//region functions

unsigned long JoltC_CharacterBase_GetRefCount(
  JoltC_CharacterBase_t * self
);

void JoltC_CharacterBase_AddRef(
  JoltC_CharacterBase_t * self
);

void JoltC_CharacterBase_Release(
  JoltC_CharacterBase_t * self
);

void JoltC_CharacterBase_SetMaxSlopeAngle(
  JoltC_CharacterBase_t * self,
  float inMaxSlopeAngle
);

float JoltC_CharacterBase_GetCosMaxSlopeAngle(
  JoltC_CharacterBase_t * self
);

void JoltC_CharacterBase_SetUp(
  JoltC_CharacterBase_t * self,
  const JoltC_Vec3_t * inUp
);

JoltC_Vec3_t * JoltC_CharacterBase_GetUp(
  JoltC_CharacterBase_t * self
);

const JoltC_Shape_t * JoltC_CharacterBase_GetShape(
  JoltC_CharacterBase_t * self
);

JoltC_EGroundState JoltC_CharacterBase_GetGroundState(
  JoltC_CharacterBase_t * self
);

bool JoltC_CharacterBase_IsSlopeTooSteep(
  JoltC_CharacterBase_t * self,
  JoltC_Vec3_t * inNormal
);

bool JoltC_CharacterBase_IsSupported(
  JoltC_CharacterBase_t * self
);

JoltC_RVec3_t * JoltC_CharacterBase_GetGroundPosition(
  JoltC_CharacterBase_t * self
);

JoltC_Vec3_t * JoltC_CharacterBase_GetGroundNormal(
  JoltC_CharacterBase_t * self
);

JoltC_Vec3_t * JoltC_CharacterBase_GetGroundVelocity(
  JoltC_CharacterBase_t * self
);

const JoltC_PhysicsMaterial_t * JoltC_CharacterBase_GetGroundMaterial(
  JoltC_CharacterBase_t * self
);

JoltC_BodyID_t * JoltC_CharacterBase_GetGroundBodyID(
  JoltC_CharacterBase_t * self
);

//endregion


#ifdef __cplusplus
}
#endif

