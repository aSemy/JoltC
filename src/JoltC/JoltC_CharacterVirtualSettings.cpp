#include "JoltC/JPC_CharacterVirtualSettings.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JPC_CharacterVirtualSettings_t * JPC_CharacterVirtualSettings_new() {
  JPC_CharacterVirtualSettings_t * cInstance = new JPC_CharacterVirtualSettings_t();
  CharacterVirtualSettings * cppInstance = new CharacterVirtualSettings();
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion constructors

//region functions

unsigned long JPC_CharacterVirtualSettings_GetRefCount(
  JPC_CharacterVirtualSettings_t * self
) {
  CharacterVirtualSettings * selfCpp = static_cast<CharacterVirtualSettings *>(self->obj);
  unsigned long result = selfCpp->GetRefCount();
  return result;
};

void JPC_CharacterVirtualSettings_AddRef(
  JPC_CharacterVirtualSettings_t * self
) {
  CharacterVirtualSettings * selfCpp = static_cast<CharacterVirtualSettings *>(self->obj);
  
  selfCpp->AddRef();
};

void JPC_CharacterVirtualSettings_Release(
  JPC_CharacterVirtualSettings_t * self
) {
  CharacterVirtualSettings * selfCpp = static_cast<CharacterVirtualSettings *>(self->obj);
  
  selfCpp->Release();
};

//endregion functions

//region properties

float JPC_CharacterVirtualSettings_mMass_Get(
  JPC_CharacterVirtualSettings_t * self
) {
  CharacterVirtualSettings * selfCpp = static_cast<CharacterVirtualSettings *>(self->obj);
  float result = selfCpp->mMass;
  return result;
};

void JPC_CharacterVirtualSettings_mMass_Set(
  JPC_CharacterVirtualSettings_t * self,
  float mMass
) {
  CharacterVirtualSettings * selfCpp = static_cast<CharacterVirtualSettings *>(self->obj);
  selfCpp->mMass = mMass;
};

float JPC_CharacterVirtualSettings_mMaxStrength_Get(
  JPC_CharacterVirtualSettings_t * self
) {
  CharacterVirtualSettings * selfCpp = static_cast<CharacterVirtualSettings *>(self->obj);
  float result = selfCpp->mMaxStrength;
  return result;
};

void JPC_CharacterVirtualSettings_mMaxStrength_Set(
  JPC_CharacterVirtualSettings_t * self,
  float mMaxStrength
) {
  CharacterVirtualSettings * selfCpp = static_cast<CharacterVirtualSettings *>(self->obj);
  selfCpp->mMaxStrength = mMaxStrength;
};

JPC_Vec3_t * JPC_CharacterVirtualSettings_mShapeOffset_Get(
  JPC_CharacterVirtualSettings_t * self
) {
  CharacterVirtualSettings * selfCpp = static_cast<CharacterVirtualSettings *>(self->obj);
  Vec3 resultValue = selfCpp->mShapeOffset;
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JPC_Vec3_t *>(result);
};

void JPC_CharacterVirtualSettings_mShapeOffset_Set(
  JPC_CharacterVirtualSettings_t * self,
  JPC_Vec3_t * mShapeOffset
) {
  CharacterVirtualSettings * selfCpp = static_cast<CharacterVirtualSettings *>(self->obj);
  selfCpp->mShapeOffset = *reinterpret_cast<Vec3 *>(mShapeOffset->obj);
};

JPC_EBackFaceMode JPC_CharacterVirtualSettings_mBackFaceMode_Get(
  JPC_CharacterVirtualSettings_t * self
) {
  CharacterVirtualSettings * selfCpp = static_cast<CharacterVirtualSettings *>(self->obj);
  EBackFaceMode result = selfCpp->mBackFaceMode;
  return static_cast<JPC_EBackFaceMode>(static_cast<int>(result));
};

void JPC_CharacterVirtualSettings_mBackFaceMode_Set(
  JPC_CharacterVirtualSettings_t * self,
  JPC_EBackFaceMode mBackFaceMode
) {
  CharacterVirtualSettings * selfCpp = static_cast<CharacterVirtualSettings *>(self->obj);
  selfCpp->mBackFaceMode = static_cast<EBackFaceMode>(static_cast<int>(mBackFaceMode));
};

float JPC_CharacterVirtualSettings_mPredictiveContactDistance_Get(
  JPC_CharacterVirtualSettings_t * self
) {
  CharacterVirtualSettings * selfCpp = static_cast<CharacterVirtualSettings *>(self->obj);
  float result = selfCpp->mPredictiveContactDistance;
  return result;
};

void JPC_CharacterVirtualSettings_mPredictiveContactDistance_Set(
  JPC_CharacterVirtualSettings_t * self,
  float mPredictiveContactDistance
) {
  CharacterVirtualSettings * selfCpp = static_cast<CharacterVirtualSettings *>(self->obj);
  selfCpp->mPredictiveContactDistance = mPredictiveContactDistance;
};

unsigned long JPC_CharacterVirtualSettings_mMaxCollisionIterations_Get(
  JPC_CharacterVirtualSettings_t * self
) {
  CharacterVirtualSettings * selfCpp = static_cast<CharacterVirtualSettings *>(self->obj);
  unsigned long result = selfCpp->mMaxCollisionIterations;
  return result;
};

void JPC_CharacterVirtualSettings_mMaxCollisionIterations_Set(
  JPC_CharacterVirtualSettings_t * self,
  unsigned long mMaxCollisionIterations
) {
  CharacterVirtualSettings * selfCpp = static_cast<CharacterVirtualSettings *>(self->obj);
  selfCpp->mMaxCollisionIterations = mMaxCollisionIterations;
};

unsigned long JPC_CharacterVirtualSettings_mMaxConstraintIterations_Get(
  JPC_CharacterVirtualSettings_t * self
) {
  CharacterVirtualSettings * selfCpp = static_cast<CharacterVirtualSettings *>(self->obj);
  unsigned long result = selfCpp->mMaxConstraintIterations;
  return result;
};

void JPC_CharacterVirtualSettings_mMaxConstraintIterations_Set(
  JPC_CharacterVirtualSettings_t * self,
  unsigned long mMaxConstraintIterations
) {
  CharacterVirtualSettings * selfCpp = static_cast<CharacterVirtualSettings *>(self->obj);
  selfCpp->mMaxConstraintIterations = mMaxConstraintIterations;
};

float JPC_CharacterVirtualSettings_mMinTimeRemaining_Get(
  JPC_CharacterVirtualSettings_t * self
) {
  CharacterVirtualSettings * selfCpp = static_cast<CharacterVirtualSettings *>(self->obj);
  float result = selfCpp->mMinTimeRemaining;
  return result;
};

void JPC_CharacterVirtualSettings_mMinTimeRemaining_Set(
  JPC_CharacterVirtualSettings_t * self,
  float mMinTimeRemaining
) {
  CharacterVirtualSettings * selfCpp = static_cast<CharacterVirtualSettings *>(self->obj);
  selfCpp->mMinTimeRemaining = mMinTimeRemaining;
};

float JPC_CharacterVirtualSettings_mCollisionTolerance_Get(
  JPC_CharacterVirtualSettings_t * self
) {
  CharacterVirtualSettings * selfCpp = static_cast<CharacterVirtualSettings *>(self->obj);
  float result = selfCpp->mCollisionTolerance;
  return result;
};

void JPC_CharacterVirtualSettings_mCollisionTolerance_Set(
  JPC_CharacterVirtualSettings_t * self,
  float mCollisionTolerance
) {
  CharacterVirtualSettings * selfCpp = static_cast<CharacterVirtualSettings *>(self->obj);
  selfCpp->mCollisionTolerance = mCollisionTolerance;
};

float JPC_CharacterVirtualSettings_mCharacterPadding_Get(
  JPC_CharacterVirtualSettings_t * self
) {
  CharacterVirtualSettings * selfCpp = static_cast<CharacterVirtualSettings *>(self->obj);
  float result = selfCpp->mCharacterPadding;
  return result;
};

void JPC_CharacterVirtualSettings_mCharacterPadding_Set(
  JPC_CharacterVirtualSettings_t * self,
  float mCharacterPadding
) {
  CharacterVirtualSettings * selfCpp = static_cast<CharacterVirtualSettings *>(self->obj);
  selfCpp->mCharacterPadding = mCharacterPadding;
};

unsigned long JPC_CharacterVirtualSettings_mMaxNumHits_Get(
  JPC_CharacterVirtualSettings_t * self
) {
  CharacterVirtualSettings * selfCpp = static_cast<CharacterVirtualSettings *>(self->obj);
  unsigned long result = selfCpp->mMaxNumHits;
  return result;
};

void JPC_CharacterVirtualSettings_mMaxNumHits_Set(
  JPC_CharacterVirtualSettings_t * self,
  unsigned long mMaxNumHits
) {
  CharacterVirtualSettings * selfCpp = static_cast<CharacterVirtualSettings *>(self->obj);
  selfCpp->mMaxNumHits = mMaxNumHits;
};

float JPC_CharacterVirtualSettings_mHitReductionCosMaxAngle_Get(
  JPC_CharacterVirtualSettings_t * self
) {
  CharacterVirtualSettings * selfCpp = static_cast<CharacterVirtualSettings *>(self->obj);
  float result = selfCpp->mHitReductionCosMaxAngle;
  return result;
};

void JPC_CharacterVirtualSettings_mHitReductionCosMaxAngle_Set(
  JPC_CharacterVirtualSettings_t * self,
  float mHitReductionCosMaxAngle
) {
  CharacterVirtualSettings * selfCpp = static_cast<CharacterVirtualSettings *>(self->obj);
  selfCpp->mHitReductionCosMaxAngle = mHitReductionCosMaxAngle;
};

float JPC_CharacterVirtualSettings_mPenetrationRecoverySpeed_Get(
  JPC_CharacterVirtualSettings_t * self
) {
  CharacterVirtualSettings * selfCpp = static_cast<CharacterVirtualSettings *>(self->obj);
  float result = selfCpp->mPenetrationRecoverySpeed;
  return result;
};

void JPC_CharacterVirtualSettings_mPenetrationRecoverySpeed_Set(
  JPC_CharacterVirtualSettings_t * self,
  float mPenetrationRecoverySpeed
) {
  CharacterVirtualSettings * selfCpp = static_cast<CharacterVirtualSettings *>(self->obj);
  selfCpp->mPenetrationRecoverySpeed = mPenetrationRecoverySpeed;
};

JPC_Vec3_t * JPC_CharacterVirtualSettings_mUp_Get(
  JPC_CharacterVirtualSettings_t * self
) {
  CharacterVirtualSettings * selfCpp = static_cast<CharacterVirtualSettings *>(self->obj);
  Vec3 resultValue = selfCpp->mUp;
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JPC_Vec3_t *>(result);
};

void JPC_CharacterVirtualSettings_mUp_Set(
  JPC_CharacterVirtualSettings_t * self,
  JPC_Vec3_t * mUp
) {
  CharacterVirtualSettings * selfCpp = static_cast<CharacterVirtualSettings *>(self->obj);
  selfCpp->mUp = *reinterpret_cast<Vec3 *>(mUp->obj);
};

JPC_Plane_t * JPC_CharacterVirtualSettings_mSupportingVolume_Get(
  JPC_CharacterVirtualSettings_t * self
) {
  CharacterVirtualSettings * selfCpp = static_cast<CharacterVirtualSettings *>(self->obj);
  Plane resultValue = selfCpp->mSupportingVolume;
  Plane* result = new Plane(resultValue);
  return reinterpret_cast<JPC_Plane_t *>(result);
};

void JPC_CharacterVirtualSettings_mSupportingVolume_Set(
  JPC_CharacterVirtualSettings_t * self,
  JPC_Plane_t * mSupportingVolume
) {
  CharacterVirtualSettings * selfCpp = static_cast<CharacterVirtualSettings *>(self->obj);
  selfCpp->mSupportingVolume = *reinterpret_cast<Plane *>(mSupportingVolume->obj);
};

float JPC_CharacterVirtualSettings_mMaxSlopeAngle_Get(
  JPC_CharacterVirtualSettings_t * self
) {
  CharacterVirtualSettings * selfCpp = static_cast<CharacterVirtualSettings *>(self->obj);
  float result = selfCpp->mMaxSlopeAngle;
  return result;
};

void JPC_CharacterVirtualSettings_mMaxSlopeAngle_Set(
  JPC_CharacterVirtualSettings_t * self,
  float mMaxSlopeAngle
) {
  CharacterVirtualSettings * selfCpp = static_cast<CharacterVirtualSettings *>(self->obj);
  selfCpp->mMaxSlopeAngle = mMaxSlopeAngle;
};

const JPC_Shape_t * JPC_CharacterVirtualSettings_mShape_Get(
  JPC_CharacterVirtualSettings_t * self
) {
  CharacterVirtualSettings * selfCpp = static_cast<CharacterVirtualSettings *>(self->obj);
  const Shape * result = selfCpp->mShape;
  return reinterpret_cast<const JPC_Shape_t *>(result);
};

const void JPC_CharacterVirtualSettings_mShape_Set(
  JPC_CharacterVirtualSettings_t * self,
  const JPC_Shape_t * mShape
) {
  CharacterVirtualSettings * selfCpp = static_cast<CharacterVirtualSettings *>(self->obj);
  selfCpp->mShape = reinterpret_cast<Shape *>(mShape->obj);
};

//endregion properties

#ifdef __cplusplus
}
#endif

