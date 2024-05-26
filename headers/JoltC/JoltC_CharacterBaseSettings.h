#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region converters

/**
 * Convert an instance of JoltC_CharacterVirtualSettings_t into JoltC_CharacterBaseSettings_t.
 */
JoltC_CharacterBaseSettings_t * JoltC_CharacterBaseSettings_From_CharacterVirtualSettings(
  JoltC_CharacterVirtualSettings_t * subtype
);

//endregion

//region functions

unsigned long JoltC_CharacterBaseSettings_GetRefCount(
  JoltC_CharacterBaseSettings_t * self
);

void JoltC_CharacterBaseSettings_AddRef(
  JoltC_CharacterBaseSettings_t * self
);

void JoltC_CharacterBaseSettings_Release(
  JoltC_CharacterBaseSettings_t * self
);

//endregion

//region properties

JoltC_Vec3_t * JoltC_CharacterBaseSettings_mUp_Get(
  JoltC_CharacterBaseSettings_t * self
);

void JoltC_CharacterBaseSettings_mUp_Set(
  JoltC_CharacterBaseSettings_t * self,
  JoltC_Vec3_t * mUp
);

JoltC_Plane_t * JoltC_CharacterBaseSettings_mSupportingVolume_Get(
  JoltC_CharacterBaseSettings_t * self
);

void JoltC_CharacterBaseSettings_mSupportingVolume_Set(
  JoltC_CharacterBaseSettings_t * self,
  JoltC_Plane_t * mSupportingVolume
);

float JoltC_CharacterBaseSettings_mMaxSlopeAngle_Get(
  JoltC_CharacterBaseSettings_t * self
);

void JoltC_CharacterBaseSettings_mMaxSlopeAngle_Set(
  JoltC_CharacterBaseSettings_t * self,
  float mMaxSlopeAngle
);

const JoltC_Shape_t * JoltC_CharacterBaseSettings_mShape_Get(
  JoltC_CharacterBaseSettings_t * self
);

const void JoltC_CharacterBaseSettings_mShape_Set(
  JoltC_CharacterBaseSettings_t * self,
  const JoltC_Shape_t * mShape
);

//endregion


#ifdef __cplusplus
}
#endif

