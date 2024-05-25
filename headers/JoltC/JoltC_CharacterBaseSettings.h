#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region functions

unsigned long JPC_CharacterBaseSettings_GetRefCount(
  JPC_CharacterBaseSettings_t * self
);

void JPC_CharacterBaseSettings_AddRef(
  JPC_CharacterBaseSettings_t * self
);

void JPC_CharacterBaseSettings_Release(
  JPC_CharacterBaseSettings_t * self
);

//endregion functions

//region properties

JPC_Vec3_t * JPC_CharacterBaseSettings_mUp_Get(
  JPC_CharacterBaseSettings_t * self
);

void JPC_CharacterBaseSettings_mUp_Set(
  JPC_CharacterBaseSettings_t * self,
  JPC_Vec3_t * mUp
);

JPC_Plane_t * JPC_CharacterBaseSettings_mSupportingVolume_Get(
  JPC_CharacterBaseSettings_t * self
);

void JPC_CharacterBaseSettings_mSupportingVolume_Set(
  JPC_CharacterBaseSettings_t * self,
  JPC_Plane_t * mSupportingVolume
);

float JPC_CharacterBaseSettings_mMaxSlopeAngle_Get(
  JPC_CharacterBaseSettings_t * self
);

void JPC_CharacterBaseSettings_mMaxSlopeAngle_Set(
  JPC_CharacterBaseSettings_t * self,
  float mMaxSlopeAngle
);

const JPC_Shape_t * JPC_CharacterBaseSettings_mShape_Get(
  JPC_CharacterBaseSettings_t * self
);

const void JPC_CharacterBaseSettings_mShape_Set(
  JPC_CharacterBaseSettings_t * self,
  const JPC_Shape_t * mShape
);

//endregion properties


#ifdef __cplusplus
}
#endif

