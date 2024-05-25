#include "JoltC/JoltC_CharacterVirtualSettings.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_CharacterVirtualSettings_t * JoltC_CharacterVirtualSettings_new(
  char** outErrMsg
) {
  try {
    JoltC_CharacterVirtualSettings_t * cInstance = new JoltC_CharacterVirtualSettings_t();
    CharacterVirtualSettings * cppInstance = new CharacterVirtualSettings();
    cInstance->obj = cppInstance;
    return cInstance;
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

//endregion constructors

//region functions

unsigned long JoltC_CharacterVirtualSettings_GetRefCount(
  JoltC_CharacterVirtualSettings_t * self,
  char** outErrMsg
) {
  try {
    CharacterVirtualSettings * selfCpp = static_cast<CharacterVirtualSettings *>(self->obj);
    unsigned long result = selfCpp->GetRefCount();
    return result;
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_CharacterVirtualSettings_AddRef(
  JoltC_CharacterVirtualSettings_t * self,
  char** outErrMsg
) {
  try {
    CharacterVirtualSettings * selfCpp = static_cast<CharacterVirtualSettings *>(self->obj);
    
    selfCpp->AddRef();
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_CharacterVirtualSettings_Release(
  JoltC_CharacterVirtualSettings_t * self,
  char** outErrMsg
) {
  try {
    CharacterVirtualSettings * selfCpp = static_cast<CharacterVirtualSettings *>(self->obj);
    
    selfCpp->Release();
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

//endregion functions

//region properties

float JoltC_CharacterVirtualSettings_mMass_Get(
  JoltC_CharacterVirtualSettings_t * self,
  char** outErrMsg
) {
  CharacterVirtualSettings * selfCpp = static_cast<CharacterVirtualSettings *>(self->obj);
  float result = selfCpp->mMass;
  return result;
};

void JoltC_CharacterVirtualSettings_mMass_Set(
  JoltC_CharacterVirtualSettings_t * self,
  float mMass,
  char** outErrMsg
) {
  CharacterVirtualSettings * selfCpp = static_cast<CharacterVirtualSettings *>(self->obj);
  selfCpp->mMass = mMass;
};

float JoltC_CharacterVirtualSettings_mMaxStrength_Get(
  JoltC_CharacterVirtualSettings_t * self,
  char** outErrMsg
) {
  CharacterVirtualSettings * selfCpp = static_cast<CharacterVirtualSettings *>(self->obj);
  float result = selfCpp->mMaxStrength;
  return result;
};

void JoltC_CharacterVirtualSettings_mMaxStrength_Set(
  JoltC_CharacterVirtualSettings_t * self,
  float mMaxStrength,
  char** outErrMsg
) {
  CharacterVirtualSettings * selfCpp = static_cast<CharacterVirtualSettings *>(self->obj);
  selfCpp->mMaxStrength = mMaxStrength;
};

JoltC_Vec3_t * JoltC_CharacterVirtualSettings_mShapeOffset_Get(
  JoltC_CharacterVirtualSettings_t * self,
  char** outErrMsg
) {
  CharacterVirtualSettings * selfCpp = static_cast<CharacterVirtualSettings *>(self->obj);
  Vec3 resultValue = selfCpp->mShapeOffset;
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JoltC_Vec3_t *>(result);
};

void JoltC_CharacterVirtualSettings_mShapeOffset_Set(
  JoltC_CharacterVirtualSettings_t * self,
  JoltC_Vec3_t * mShapeOffset,
  char** outErrMsg
) {
  CharacterVirtualSettings * selfCpp = static_cast<CharacterVirtualSettings *>(self->obj);
  selfCpp->mShapeOffset = *reinterpret_cast<Vec3 *>(mShapeOffset->obj);
};

JoltC_EBackFaceMode JoltC_CharacterVirtualSettings_mBackFaceMode_Get(
  JoltC_CharacterVirtualSettings_t * self,
  char** outErrMsg
) {
  CharacterVirtualSettings * selfCpp = static_cast<CharacterVirtualSettings *>(self->obj);
  EBackFaceMode result = selfCpp->mBackFaceMode;
  return static_cast<JoltC_EBackFaceMode>(static_cast<int>(result));
};

void JoltC_CharacterVirtualSettings_mBackFaceMode_Set(
  JoltC_CharacterVirtualSettings_t * self,
  JoltC_EBackFaceMode mBackFaceMode,
  char** outErrMsg
) {
  CharacterVirtualSettings * selfCpp = static_cast<CharacterVirtualSettings *>(self->obj);
  selfCpp->mBackFaceMode = static_cast<EBackFaceMode>(static_cast<int>(mBackFaceMode));
};

float JoltC_CharacterVirtualSettings_mPredictiveContactDistance_Get(
  JoltC_CharacterVirtualSettings_t * self,
  char** outErrMsg
) {
  CharacterVirtualSettings * selfCpp = static_cast<CharacterVirtualSettings *>(self->obj);
  float result = selfCpp->mPredictiveContactDistance;
  return result;
};

void JoltC_CharacterVirtualSettings_mPredictiveContactDistance_Set(
  JoltC_CharacterVirtualSettings_t * self,
  float mPredictiveContactDistance,
  char** outErrMsg
) {
  CharacterVirtualSettings * selfCpp = static_cast<CharacterVirtualSettings *>(self->obj);
  selfCpp->mPredictiveContactDistance = mPredictiveContactDistance;
};

unsigned long JoltC_CharacterVirtualSettings_mMaxCollisionIterations_Get(
  JoltC_CharacterVirtualSettings_t * self,
  char** outErrMsg
) {
  CharacterVirtualSettings * selfCpp = static_cast<CharacterVirtualSettings *>(self->obj);
  unsigned long result = selfCpp->mMaxCollisionIterations;
  return result;
};

void JoltC_CharacterVirtualSettings_mMaxCollisionIterations_Set(
  JoltC_CharacterVirtualSettings_t * self,
  unsigned long mMaxCollisionIterations,
  char** outErrMsg
) {
  CharacterVirtualSettings * selfCpp = static_cast<CharacterVirtualSettings *>(self->obj);
  selfCpp->mMaxCollisionIterations = mMaxCollisionIterations;
};

unsigned long JoltC_CharacterVirtualSettings_mMaxConstraintIterations_Get(
  JoltC_CharacterVirtualSettings_t * self,
  char** outErrMsg
) {
  CharacterVirtualSettings * selfCpp = static_cast<CharacterVirtualSettings *>(self->obj);
  unsigned long result = selfCpp->mMaxConstraintIterations;
  return result;
};

void JoltC_CharacterVirtualSettings_mMaxConstraintIterations_Set(
  JoltC_CharacterVirtualSettings_t * self,
  unsigned long mMaxConstraintIterations,
  char** outErrMsg
) {
  CharacterVirtualSettings * selfCpp = static_cast<CharacterVirtualSettings *>(self->obj);
  selfCpp->mMaxConstraintIterations = mMaxConstraintIterations;
};

float JoltC_CharacterVirtualSettings_mMinTimeRemaining_Get(
  JoltC_CharacterVirtualSettings_t * self,
  char** outErrMsg
) {
  CharacterVirtualSettings * selfCpp = static_cast<CharacterVirtualSettings *>(self->obj);
  float result = selfCpp->mMinTimeRemaining;
  return result;
};

void JoltC_CharacterVirtualSettings_mMinTimeRemaining_Set(
  JoltC_CharacterVirtualSettings_t * self,
  float mMinTimeRemaining,
  char** outErrMsg
) {
  CharacterVirtualSettings * selfCpp = static_cast<CharacterVirtualSettings *>(self->obj);
  selfCpp->mMinTimeRemaining = mMinTimeRemaining;
};

float JoltC_CharacterVirtualSettings_mCollisionTolerance_Get(
  JoltC_CharacterVirtualSettings_t * self,
  char** outErrMsg
) {
  CharacterVirtualSettings * selfCpp = static_cast<CharacterVirtualSettings *>(self->obj);
  float result = selfCpp->mCollisionTolerance;
  return result;
};

void JoltC_CharacterVirtualSettings_mCollisionTolerance_Set(
  JoltC_CharacterVirtualSettings_t * self,
  float mCollisionTolerance,
  char** outErrMsg
) {
  CharacterVirtualSettings * selfCpp = static_cast<CharacterVirtualSettings *>(self->obj);
  selfCpp->mCollisionTolerance = mCollisionTolerance;
};

float JoltC_CharacterVirtualSettings_mCharacterPadding_Get(
  JoltC_CharacterVirtualSettings_t * self,
  char** outErrMsg
) {
  CharacterVirtualSettings * selfCpp = static_cast<CharacterVirtualSettings *>(self->obj);
  float result = selfCpp->mCharacterPadding;
  return result;
};

void JoltC_CharacterVirtualSettings_mCharacterPadding_Set(
  JoltC_CharacterVirtualSettings_t * self,
  float mCharacterPadding,
  char** outErrMsg
) {
  CharacterVirtualSettings * selfCpp = static_cast<CharacterVirtualSettings *>(self->obj);
  selfCpp->mCharacterPadding = mCharacterPadding;
};

unsigned long JoltC_CharacterVirtualSettings_mMaxNumHits_Get(
  JoltC_CharacterVirtualSettings_t * self,
  char** outErrMsg
) {
  CharacterVirtualSettings * selfCpp = static_cast<CharacterVirtualSettings *>(self->obj);
  unsigned long result = selfCpp->mMaxNumHits;
  return result;
};

void JoltC_CharacterVirtualSettings_mMaxNumHits_Set(
  JoltC_CharacterVirtualSettings_t * self,
  unsigned long mMaxNumHits,
  char** outErrMsg
) {
  CharacterVirtualSettings * selfCpp = static_cast<CharacterVirtualSettings *>(self->obj);
  selfCpp->mMaxNumHits = mMaxNumHits;
};

float JoltC_CharacterVirtualSettings_mHitReductionCosMaxAngle_Get(
  JoltC_CharacterVirtualSettings_t * self,
  char** outErrMsg
) {
  CharacterVirtualSettings * selfCpp = static_cast<CharacterVirtualSettings *>(self->obj);
  float result = selfCpp->mHitReductionCosMaxAngle;
  return result;
};

void JoltC_CharacterVirtualSettings_mHitReductionCosMaxAngle_Set(
  JoltC_CharacterVirtualSettings_t * self,
  float mHitReductionCosMaxAngle,
  char** outErrMsg
) {
  CharacterVirtualSettings * selfCpp = static_cast<CharacterVirtualSettings *>(self->obj);
  selfCpp->mHitReductionCosMaxAngle = mHitReductionCosMaxAngle;
};

float JoltC_CharacterVirtualSettings_mPenetrationRecoverySpeed_Get(
  JoltC_CharacterVirtualSettings_t * self,
  char** outErrMsg
) {
  CharacterVirtualSettings * selfCpp = static_cast<CharacterVirtualSettings *>(self->obj);
  float result = selfCpp->mPenetrationRecoverySpeed;
  return result;
};

void JoltC_CharacterVirtualSettings_mPenetrationRecoverySpeed_Set(
  JoltC_CharacterVirtualSettings_t * self,
  float mPenetrationRecoverySpeed,
  char** outErrMsg
) {
  CharacterVirtualSettings * selfCpp = static_cast<CharacterVirtualSettings *>(self->obj);
  selfCpp->mPenetrationRecoverySpeed = mPenetrationRecoverySpeed;
};

JoltC_Vec3_t * JoltC_CharacterVirtualSettings_mUp_Get(
  JoltC_CharacterVirtualSettings_t * self,
  char** outErrMsg
) {
  CharacterVirtualSettings * selfCpp = static_cast<CharacterVirtualSettings *>(self->obj);
  Vec3 resultValue = selfCpp->mUp;
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JoltC_Vec3_t *>(result);
};

void JoltC_CharacterVirtualSettings_mUp_Set(
  JoltC_CharacterVirtualSettings_t * self,
  JoltC_Vec3_t * mUp,
  char** outErrMsg
) {
  CharacterVirtualSettings * selfCpp = static_cast<CharacterVirtualSettings *>(self->obj);
  selfCpp->mUp = *reinterpret_cast<Vec3 *>(mUp->obj);
};

JoltC_Plane_t * JoltC_CharacterVirtualSettings_mSupportingVolume_Get(
  JoltC_CharacterVirtualSettings_t * self,
  char** outErrMsg
) {
  CharacterVirtualSettings * selfCpp = static_cast<CharacterVirtualSettings *>(self->obj);
  Plane resultValue = selfCpp->mSupportingVolume;
  Plane* result = new Plane(resultValue);
  return reinterpret_cast<JoltC_Plane_t *>(result);
};

void JoltC_CharacterVirtualSettings_mSupportingVolume_Set(
  JoltC_CharacterVirtualSettings_t * self,
  JoltC_Plane_t * mSupportingVolume,
  char** outErrMsg
) {
  CharacterVirtualSettings * selfCpp = static_cast<CharacterVirtualSettings *>(self->obj);
  selfCpp->mSupportingVolume = *reinterpret_cast<Plane *>(mSupportingVolume->obj);
};

float JoltC_CharacterVirtualSettings_mMaxSlopeAngle_Get(
  JoltC_CharacterVirtualSettings_t * self,
  char** outErrMsg
) {
  CharacterVirtualSettings * selfCpp = static_cast<CharacterVirtualSettings *>(self->obj);
  float result = selfCpp->mMaxSlopeAngle;
  return result;
};

void JoltC_CharacterVirtualSettings_mMaxSlopeAngle_Set(
  JoltC_CharacterVirtualSettings_t * self,
  float mMaxSlopeAngle,
  char** outErrMsg
) {
  CharacterVirtualSettings * selfCpp = static_cast<CharacterVirtualSettings *>(self->obj);
  selfCpp->mMaxSlopeAngle = mMaxSlopeAngle;
};

const JoltC_Shape_t * JoltC_CharacterVirtualSettings_mShape_Get(
  JoltC_CharacterVirtualSettings_t * self,
  char** outErrMsg
) {
  CharacterVirtualSettings * selfCpp = static_cast<CharacterVirtualSettings *>(self->obj);
  const Shape * result = selfCpp->mShape;
  return reinterpret_cast<const JoltC_Shape_t *>(result);
};

const void JoltC_CharacterVirtualSettings_mShape_Set(
  JoltC_CharacterVirtualSettings_t * self,
  const JoltC_Shape_t * mShape,
  char** outErrMsg
) {
  CharacterVirtualSettings * selfCpp = static_cast<CharacterVirtualSettings *>(self->obj);
  selfCpp->mShape = reinterpret_cast<Shape *>(mShape->obj);
};

//endregion properties

#ifdef __cplusplus
}
#endif

