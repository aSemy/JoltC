#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_CharacterVirtualSettings_t * JoltC_CharacterVirtualSettings_new();

//endregion

//region functions

unsigned long JoltC_CharacterVirtualSettings_GetRefCount(
  JoltC_CharacterVirtualSettings_t * self
);

void JoltC_CharacterVirtualSettings_AddRef(
  JoltC_CharacterVirtualSettings_t * self
);

void JoltC_CharacterVirtualSettings_Release(
  JoltC_CharacterVirtualSettings_t * self
);

//endregion

//region properties

float JoltC_CharacterVirtualSettings_mMass_Get(
  JoltC_CharacterVirtualSettings_t * self
);

void JoltC_CharacterVirtualSettings_mMass_Set(
  JoltC_CharacterVirtualSettings_t * self,
  float mMass
);

float JoltC_CharacterVirtualSettings_mMaxStrength_Get(
  JoltC_CharacterVirtualSettings_t * self
);

void JoltC_CharacterVirtualSettings_mMaxStrength_Set(
  JoltC_CharacterVirtualSettings_t * self,
  float mMaxStrength
);

JoltC_Vec3_t * JoltC_CharacterVirtualSettings_mShapeOffset_Get(
  JoltC_CharacterVirtualSettings_t * self
);

void JoltC_CharacterVirtualSettings_mShapeOffset_Set(
  JoltC_CharacterVirtualSettings_t * self,
  JoltC_Vec3_t * mShapeOffset
);

JoltC_EBackFaceMode JoltC_CharacterVirtualSettings_mBackFaceMode_Get(
  JoltC_CharacterVirtualSettings_t * self
);

void JoltC_CharacterVirtualSettings_mBackFaceMode_Set(
  JoltC_CharacterVirtualSettings_t * self,
  JoltC_EBackFaceMode mBackFaceMode
);

float JoltC_CharacterVirtualSettings_mPredictiveContactDistance_Get(
  JoltC_CharacterVirtualSettings_t * self
);

void JoltC_CharacterVirtualSettings_mPredictiveContactDistance_Set(
  JoltC_CharacterVirtualSettings_t * self,
  float mPredictiveContactDistance
);

unsigned long JoltC_CharacterVirtualSettings_mMaxCollisionIterations_Get(
  JoltC_CharacterVirtualSettings_t * self
);

void JoltC_CharacterVirtualSettings_mMaxCollisionIterations_Set(
  JoltC_CharacterVirtualSettings_t * self,
  unsigned long mMaxCollisionIterations
);

unsigned long JoltC_CharacterVirtualSettings_mMaxConstraintIterations_Get(
  JoltC_CharacterVirtualSettings_t * self
);

void JoltC_CharacterVirtualSettings_mMaxConstraintIterations_Set(
  JoltC_CharacterVirtualSettings_t * self,
  unsigned long mMaxConstraintIterations
);

float JoltC_CharacterVirtualSettings_mMinTimeRemaining_Get(
  JoltC_CharacterVirtualSettings_t * self
);

void JoltC_CharacterVirtualSettings_mMinTimeRemaining_Set(
  JoltC_CharacterVirtualSettings_t * self,
  float mMinTimeRemaining
);

float JoltC_CharacterVirtualSettings_mCollisionTolerance_Get(
  JoltC_CharacterVirtualSettings_t * self
);

void JoltC_CharacterVirtualSettings_mCollisionTolerance_Set(
  JoltC_CharacterVirtualSettings_t * self,
  float mCollisionTolerance
);

float JoltC_CharacterVirtualSettings_mCharacterPadding_Get(
  JoltC_CharacterVirtualSettings_t * self
);

void JoltC_CharacterVirtualSettings_mCharacterPadding_Set(
  JoltC_CharacterVirtualSettings_t * self,
  float mCharacterPadding
);

unsigned long JoltC_CharacterVirtualSettings_mMaxNumHits_Get(
  JoltC_CharacterVirtualSettings_t * self
);

void JoltC_CharacterVirtualSettings_mMaxNumHits_Set(
  JoltC_CharacterVirtualSettings_t * self,
  unsigned long mMaxNumHits
);

float JoltC_CharacterVirtualSettings_mHitReductionCosMaxAngle_Get(
  JoltC_CharacterVirtualSettings_t * self
);

void JoltC_CharacterVirtualSettings_mHitReductionCosMaxAngle_Set(
  JoltC_CharacterVirtualSettings_t * self,
  float mHitReductionCosMaxAngle
);

float JoltC_CharacterVirtualSettings_mPenetrationRecoverySpeed_Get(
  JoltC_CharacterVirtualSettings_t * self
);

void JoltC_CharacterVirtualSettings_mPenetrationRecoverySpeed_Set(
  JoltC_CharacterVirtualSettings_t * self,
  float mPenetrationRecoverySpeed
);

JoltC_Vec3_t * JoltC_CharacterVirtualSettings_mUp_Get(
  JoltC_CharacterVirtualSettings_t * self
);

void JoltC_CharacterVirtualSettings_mUp_Set(
  JoltC_CharacterVirtualSettings_t * self,
  JoltC_Vec3_t * mUp
);

JoltC_Plane_t * JoltC_CharacterVirtualSettings_mSupportingVolume_Get(
  JoltC_CharacterVirtualSettings_t * self
);

void JoltC_CharacterVirtualSettings_mSupportingVolume_Set(
  JoltC_CharacterVirtualSettings_t * self,
  JoltC_Plane_t * mSupportingVolume
);

float JoltC_CharacterVirtualSettings_mMaxSlopeAngle_Get(
  JoltC_CharacterVirtualSettings_t * self
);

void JoltC_CharacterVirtualSettings_mMaxSlopeAngle_Set(
  JoltC_CharacterVirtualSettings_t * self,
  float mMaxSlopeAngle
);

JoltC_Shape_t * JoltC_CharacterVirtualSettings_mShape_Get(
  JoltC_CharacterVirtualSettings_t * self
);

void JoltC_CharacterVirtualSettings_mShape_Set(
  JoltC_CharacterVirtualSettings_t * self,
  JoltC_Shape_t * mShape
);

//endregion


#ifdef __cplusplus
}
#endif

