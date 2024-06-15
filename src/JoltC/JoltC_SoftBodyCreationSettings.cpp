#include "JoltC/JoltC_SoftBodyCreationSettings.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

/**
  Construct a new `SoftBodyCreationSettings` instance.
 */
JoltC_SoftBodyCreationSettings_t * JoltC_SoftBodyCreationSettings_new(
  JoltC_SoftBodySharedSettings_t * inSettings,
  JoltC_RVec3_t * inPosition,
  JoltC_Quat_t * inRotation,
  unsigned long inObjectLayer
) {
  const SoftBodySharedSettings * inSettingsCpp = static_cast<const SoftBodySharedSettings *>(inSettings->obj);
  RVec3 * inPositionCpp = static_cast<RVec3 *>(inPosition->obj);
  Quat * inRotationCpp = static_cast<Quat *>(inRotation->obj);
  JoltC_SoftBodyCreationSettings_t * cInstance = new JoltC_SoftBodyCreationSettings_t();
  SoftBodyCreationSettings * cppInstance = new SoftBodyCreationSettings(
    inSettingsCpp,
    *inPositionCpp,
    *inRotationCpp,
    inObjectLayer
  );
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion

//region destructor

void JoltC_SoftBodyCreationSettings_destroy(
  JoltC_SoftBodyCreationSettings_t * self
){
  if (self == NULL) return;
  delete static_cast<SoftBodyCreationSettings *>(self->obj);
  free(self);
}

//endregion
//region properties

JoltC_RVec3_t * JoltC_SoftBodyCreationSettings_mPosition_Get(
  JoltC_SoftBodyCreationSettings_t * self
) {
  SoftBodyCreationSettings * selfCpp = static_cast<SoftBodyCreationSettings *>(self->obj);
  RVec3 * resultPtr = new RVec3();
  *resultPtr = selfCpp->mPosition;
  JoltC_RVec3_t * result = new JoltC_RVec3_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

void JoltC_SoftBodyCreationSettings_mPosition_Set(
  JoltC_SoftBodyCreationSettings_t * self,
  JoltC_RVec3_t * mPosition
) {
  SoftBodyCreationSettings * selfCpp = static_cast<SoftBodyCreationSettings *>(self->obj);
  selfCpp->mPosition = *static_cast<RVec3 *>(mPosition->obj);
}

JoltC_Quat_t * JoltC_SoftBodyCreationSettings_mRotation_Get(
  JoltC_SoftBodyCreationSettings_t * self
) {
  SoftBodyCreationSettings * selfCpp = static_cast<SoftBodyCreationSettings *>(self->obj);
  Quat * resultPtr = new Quat();
  *resultPtr = selfCpp->mRotation;
  JoltC_Quat_t * result = new JoltC_Quat_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

void JoltC_SoftBodyCreationSettings_mRotation_Set(
  JoltC_SoftBodyCreationSettings_t * self,
  JoltC_Quat_t * mRotation
) {
  SoftBodyCreationSettings * selfCpp = static_cast<SoftBodyCreationSettings *>(self->obj);
  selfCpp->mRotation = *static_cast<Quat *>(mRotation->obj);
}

unsigned long long int JoltC_SoftBodyCreationSettings_mUserData_Get(
  JoltC_SoftBodyCreationSettings_t * self
) {
  SoftBodyCreationSettings * selfCpp = static_cast<SoftBodyCreationSettings *>(self->obj);
  return selfCpp->mUserData;
}

void JoltC_SoftBodyCreationSettings_mUserData_Set(
  JoltC_SoftBodyCreationSettings_t * self,
  unsigned long long int mUserData
) {
  SoftBodyCreationSettings * selfCpp = static_cast<SoftBodyCreationSettings *>(self->obj);
  selfCpp->mUserData = mUserData;
}

unsigned long JoltC_SoftBodyCreationSettings_mObjectLayer_Get(
  JoltC_SoftBodyCreationSettings_t * self
) {
  SoftBodyCreationSettings * selfCpp = static_cast<SoftBodyCreationSettings *>(self->obj);
  return selfCpp->mObjectLayer;
}

void JoltC_SoftBodyCreationSettings_mObjectLayer_Set(
  JoltC_SoftBodyCreationSettings_t * self,
  unsigned long mObjectLayer
) {
  SoftBodyCreationSettings * selfCpp = static_cast<SoftBodyCreationSettings *>(self->obj);
  selfCpp->mObjectLayer = mObjectLayer;
}

JoltC_CollisionGroup_t * JoltC_SoftBodyCreationSettings_mCollisionGroup_Get(
  JoltC_SoftBodyCreationSettings_t * self
) {
  SoftBodyCreationSettings * selfCpp = static_cast<SoftBodyCreationSettings *>(self->obj);
  CollisionGroup * resultPtr = new CollisionGroup();
  *resultPtr = selfCpp->mCollisionGroup;
  JoltC_CollisionGroup_t * result = new JoltC_CollisionGroup_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

void JoltC_SoftBodyCreationSettings_mCollisionGroup_Set(
  JoltC_SoftBodyCreationSettings_t * self,
  JoltC_CollisionGroup_t * mCollisionGroup
) {
  SoftBodyCreationSettings * selfCpp = static_cast<SoftBodyCreationSettings *>(self->obj);
  selfCpp->mCollisionGroup = *static_cast<CollisionGroup *>(mCollisionGroup->obj);
}

unsigned long JoltC_SoftBodyCreationSettings_mNumIterations_Get(
  JoltC_SoftBodyCreationSettings_t * self
) {
  SoftBodyCreationSettings * selfCpp = static_cast<SoftBodyCreationSettings *>(self->obj);
  return selfCpp->mNumIterations;
}

void JoltC_SoftBodyCreationSettings_mNumIterations_Set(
  JoltC_SoftBodyCreationSettings_t * self,
  unsigned long mNumIterations
) {
  SoftBodyCreationSettings * selfCpp = static_cast<SoftBodyCreationSettings *>(self->obj);
  selfCpp->mNumIterations = mNumIterations;
}

float JoltC_SoftBodyCreationSettings_mLinearDamping_Get(
  JoltC_SoftBodyCreationSettings_t * self
) {
  SoftBodyCreationSettings * selfCpp = static_cast<SoftBodyCreationSettings *>(self->obj);
  return selfCpp->mLinearDamping;
}

void JoltC_SoftBodyCreationSettings_mLinearDamping_Set(
  JoltC_SoftBodyCreationSettings_t * self,
  float mLinearDamping
) {
  SoftBodyCreationSettings * selfCpp = static_cast<SoftBodyCreationSettings *>(self->obj);
  selfCpp->mLinearDamping = mLinearDamping;
}

float JoltC_SoftBodyCreationSettings_mMaxLinearVelocity_Get(
  JoltC_SoftBodyCreationSettings_t * self
) {
  SoftBodyCreationSettings * selfCpp = static_cast<SoftBodyCreationSettings *>(self->obj);
  return selfCpp->mMaxLinearVelocity;
}

void JoltC_SoftBodyCreationSettings_mMaxLinearVelocity_Set(
  JoltC_SoftBodyCreationSettings_t * self,
  float mMaxLinearVelocity
) {
  SoftBodyCreationSettings * selfCpp = static_cast<SoftBodyCreationSettings *>(self->obj);
  selfCpp->mMaxLinearVelocity = mMaxLinearVelocity;
}

float JoltC_SoftBodyCreationSettings_mRestitution_Get(
  JoltC_SoftBodyCreationSettings_t * self
) {
  SoftBodyCreationSettings * selfCpp = static_cast<SoftBodyCreationSettings *>(self->obj);
  return selfCpp->mRestitution;
}

void JoltC_SoftBodyCreationSettings_mRestitution_Set(
  JoltC_SoftBodyCreationSettings_t * self,
  float mRestitution
) {
  SoftBodyCreationSettings * selfCpp = static_cast<SoftBodyCreationSettings *>(self->obj);
  selfCpp->mRestitution = mRestitution;
}

float JoltC_SoftBodyCreationSettings_mFriction_Get(
  JoltC_SoftBodyCreationSettings_t * self
) {
  SoftBodyCreationSettings * selfCpp = static_cast<SoftBodyCreationSettings *>(self->obj);
  return selfCpp->mFriction;
}

void JoltC_SoftBodyCreationSettings_mFriction_Set(
  JoltC_SoftBodyCreationSettings_t * self,
  float mFriction
) {
  SoftBodyCreationSettings * selfCpp = static_cast<SoftBodyCreationSettings *>(self->obj);
  selfCpp->mFriction = mFriction;
}

float JoltC_SoftBodyCreationSettings_mPressure_Get(
  JoltC_SoftBodyCreationSettings_t * self
) {
  SoftBodyCreationSettings * selfCpp = static_cast<SoftBodyCreationSettings *>(self->obj);
  return selfCpp->mPressure;
}

void JoltC_SoftBodyCreationSettings_mPressure_Set(
  JoltC_SoftBodyCreationSettings_t * self,
  float mPressure
) {
  SoftBodyCreationSettings * selfCpp = static_cast<SoftBodyCreationSettings *>(self->obj);
  selfCpp->mPressure = mPressure;
}

float JoltC_SoftBodyCreationSettings_mGravityFactor_Get(
  JoltC_SoftBodyCreationSettings_t * self
) {
  SoftBodyCreationSettings * selfCpp = static_cast<SoftBodyCreationSettings *>(self->obj);
  return selfCpp->mGravityFactor;
}

void JoltC_SoftBodyCreationSettings_mGravityFactor_Set(
  JoltC_SoftBodyCreationSettings_t * self,
  float mGravityFactor
) {
  SoftBodyCreationSettings * selfCpp = static_cast<SoftBodyCreationSettings *>(self->obj);
  selfCpp->mGravityFactor = mGravityFactor;
}

bool JoltC_SoftBodyCreationSettings_mUpdatePosition_Get(
  JoltC_SoftBodyCreationSettings_t * self
) {
  SoftBodyCreationSettings * selfCpp = static_cast<SoftBodyCreationSettings *>(self->obj);
  return selfCpp->mUpdatePosition;
}

void JoltC_SoftBodyCreationSettings_mUpdatePosition_Set(
  JoltC_SoftBodyCreationSettings_t * self,
  bool mUpdatePosition
) {
  SoftBodyCreationSettings * selfCpp = static_cast<SoftBodyCreationSettings *>(self->obj);
  selfCpp->mUpdatePosition = mUpdatePosition;
}

bool JoltC_SoftBodyCreationSettings_mMakeRotationIdentity_Get(
  JoltC_SoftBodyCreationSettings_t * self
) {
  SoftBodyCreationSettings * selfCpp = static_cast<SoftBodyCreationSettings *>(self->obj);
  return selfCpp->mMakeRotationIdentity;
}

void JoltC_SoftBodyCreationSettings_mMakeRotationIdentity_Set(
  JoltC_SoftBodyCreationSettings_t * self,
  bool mMakeRotationIdentity
) {
  SoftBodyCreationSettings * selfCpp = static_cast<SoftBodyCreationSettings *>(self->obj);
  selfCpp->mMakeRotationIdentity = mMakeRotationIdentity;
}

bool JoltC_SoftBodyCreationSettings_mAllowSleeping_Get(
  JoltC_SoftBodyCreationSettings_t * self
) {
  SoftBodyCreationSettings * selfCpp = static_cast<SoftBodyCreationSettings *>(self->obj);
  return selfCpp->mAllowSleeping;
}

void JoltC_SoftBodyCreationSettings_mAllowSleeping_Set(
  JoltC_SoftBodyCreationSettings_t * self,
  bool mAllowSleeping
) {
  SoftBodyCreationSettings * selfCpp = static_cast<SoftBodyCreationSettings *>(self->obj);
  selfCpp->mAllowSleeping = mAllowSleeping;
}

//endregion


#ifdef __cplusplus
}
#endif
