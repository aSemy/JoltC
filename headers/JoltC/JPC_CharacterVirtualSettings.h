#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JPC_CharacterVirtualSettings_t * JPC_CharacterVirtualSettings_new();

//endregion constructors

//region functions

unsigned long JPC_CharacterVirtualSettings_GetRefCount(
  JPC_CharacterVirtualSettings_t * self
);

void JPC_CharacterVirtualSettings_AddRef(
  JPC_CharacterVirtualSettings_t * self
);

void JPC_CharacterVirtualSettings_Release(
  JPC_CharacterVirtualSettings_t * self
);

//endregion functions

//region properties

float JPC_CharacterVirtualSettings_mMass_Get(
  JPC_CharacterVirtualSettings_t * self
);

void JPC_CharacterVirtualSettings_mMass_Set(
  JPC_CharacterVirtualSettings_t * self,
  float mMass
);

float JPC_CharacterVirtualSettings_mMaxStrength_Get(
  JPC_CharacterVirtualSettings_t * self
);

void JPC_CharacterVirtualSettings_mMaxStrength_Set(
  JPC_CharacterVirtualSettings_t * self,
  float mMaxStrength
);

JPC_Vec3_t * JPC_CharacterVirtualSettings_mShapeOffset_Get(
  JPC_CharacterVirtualSettings_t * self
);

void JPC_CharacterVirtualSettings_mShapeOffset_Set(
  JPC_CharacterVirtualSettings_t * self,
  JPC_Vec3_t * mShapeOffset
);

JPC_EBackFaceMode JPC_CharacterVirtualSettings_mBackFaceMode_Get(
  JPC_CharacterVirtualSettings_t * self
);

void JPC_CharacterVirtualSettings_mBackFaceMode_Set(
  JPC_CharacterVirtualSettings_t * self,
  JPC_EBackFaceMode mBackFaceMode
);

float JPC_CharacterVirtualSettings_mPredictiveContactDistance_Get(
  JPC_CharacterVirtualSettings_t * self
);

void JPC_CharacterVirtualSettings_mPredictiveContactDistance_Set(
  JPC_CharacterVirtualSettings_t * self,
  float mPredictiveContactDistance
);

unsigned long JPC_CharacterVirtualSettings_mMaxCollisionIterations_Get(
  JPC_CharacterVirtualSettings_t * self
);

void JPC_CharacterVirtualSettings_mMaxCollisionIterations_Set(
  JPC_CharacterVirtualSettings_t * self,
  unsigned long mMaxCollisionIterations
);

unsigned long JPC_CharacterVirtualSettings_mMaxConstraintIterations_Get(
  JPC_CharacterVirtualSettings_t * self
);

void JPC_CharacterVirtualSettings_mMaxConstraintIterations_Set(
  JPC_CharacterVirtualSettings_t * self,
  unsigned long mMaxConstraintIterations
);

float JPC_CharacterVirtualSettings_mMinTimeRemaining_Get(
  JPC_CharacterVirtualSettings_t * self
);

void JPC_CharacterVirtualSettings_mMinTimeRemaining_Set(
  JPC_CharacterVirtualSettings_t * self,
  float mMinTimeRemaining
);

float JPC_CharacterVirtualSettings_mCollisionTolerance_Get(
  JPC_CharacterVirtualSettings_t * self
);

void JPC_CharacterVirtualSettings_mCollisionTolerance_Set(
  JPC_CharacterVirtualSettings_t * self,
  float mCollisionTolerance
);

float JPC_CharacterVirtualSettings_mCharacterPadding_Get(
  JPC_CharacterVirtualSettings_t * self
);

void JPC_CharacterVirtualSettings_mCharacterPadding_Set(
  JPC_CharacterVirtualSettings_t * self,
  float mCharacterPadding
);

unsigned long JPC_CharacterVirtualSettings_mMaxNumHits_Get(
  JPC_CharacterVirtualSettings_t * self
);

void JPC_CharacterVirtualSettings_mMaxNumHits_Set(
  JPC_CharacterVirtualSettings_t * self,
  unsigned long mMaxNumHits
);

float JPC_CharacterVirtualSettings_mHitReductionCosMaxAngle_Get(
  JPC_CharacterVirtualSettings_t * self
);

void JPC_CharacterVirtualSettings_mHitReductionCosMaxAngle_Set(
  JPC_CharacterVirtualSettings_t * self,
  float mHitReductionCosMaxAngle
);

float JPC_CharacterVirtualSettings_mPenetrationRecoverySpeed_Get(
  JPC_CharacterVirtualSettings_t * self
);

void JPC_CharacterVirtualSettings_mPenetrationRecoverySpeed_Set(
  JPC_CharacterVirtualSettings_t * self,
  float mPenetrationRecoverySpeed
);

JPC_Vec3_t * JPC_CharacterVirtualSettings_mUp_Get(
  JPC_CharacterVirtualSettings_t * self
);

void JPC_CharacterVirtualSettings_mUp_Set(
  JPC_CharacterVirtualSettings_t * self,
  JPC_Vec3_t * mUp
);

JPC_Plane_t * JPC_CharacterVirtualSettings_mSupportingVolume_Get(
  JPC_CharacterVirtualSettings_t * self
);

void JPC_CharacterVirtualSettings_mSupportingVolume_Set(
  JPC_CharacterVirtualSettings_t * self,
  JPC_Plane_t * mSupportingVolume
);

float JPC_CharacterVirtualSettings_mMaxSlopeAngle_Get(
  JPC_CharacterVirtualSettings_t * self
);

void JPC_CharacterVirtualSettings_mMaxSlopeAngle_Set(
  JPC_CharacterVirtualSettings_t * self,
  float mMaxSlopeAngle
);

const JPC_Shape_t * JPC_CharacterVirtualSettings_mShape_Get(
  JPC_CharacterVirtualSettings_t * self
);

const void JPC_CharacterVirtualSettings_mShape_Set(
  JPC_CharacterVirtualSettings_t * self,
  const JPC_Shape_t * mShape
);

//endregion properties


#ifdef __cplusplus
}
#endif

