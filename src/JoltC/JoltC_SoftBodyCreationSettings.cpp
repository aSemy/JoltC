#include "JoltC/JoltC_SoftBodyCreationSettings.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_SoftBodyCreationSettings_t * JoltC_SoftBodyCreationSettings_new(
  const JoltC_SoftBodySharedSettings_t * inSettings,
  JoltC_RVec3_t * inPosition,
  JoltC_Quat_t * inRotation,
  unsigned long inObjectLayer
) {
  JoltC_SoftBodyCreationSettings_t * cInstance = new JoltC_SoftBodyCreationSettings_t();
  SoftBodyCreationSettings * cppInstance = new SoftBodyCreationSettings(
    reinterpret_cast<SoftBodySharedSettings *>(inSettings->obj),
    *reinterpret_cast<RVec3 *>(inPosition->obj),
    *reinterpret_cast<Quat *>(inRotation->obj),
    inObjectLayer
  );
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion

//region properties

JoltC_RVec3_t * JoltC_SoftBodyCreationSettings_mPosition_Get(
  JoltC_SoftBodyCreationSettings_t * self
) {
  SoftBodyCreationSettings * selfCpp = static_cast<SoftBodyCreationSettings *>(self->obj);
  RVec3 resultValue = selfCpp->mPosition;
  RVec3* result = new RVec3(resultValue);
  return reinterpret_cast<JoltC_RVec3_t *>(result);
};

void JoltC_SoftBodyCreationSettings_mPosition_Set(
  JoltC_SoftBodyCreationSettings_t * self,
  JoltC_RVec3_t * mPosition
) {
  SoftBodyCreationSettings * selfCpp = static_cast<SoftBodyCreationSettings *>(self->obj);
  selfCpp->mPosition = *reinterpret_cast<RVec3 *>(mPosition->obj);
};

JoltC_Quat_t * JoltC_SoftBodyCreationSettings_mRotation_Get(
  JoltC_SoftBodyCreationSettings_t * self
) {
  SoftBodyCreationSettings * selfCpp = static_cast<SoftBodyCreationSettings *>(self->obj);
  Quat resultValue = selfCpp->mRotation;
  Quat* result = new Quat(resultValue);
  return reinterpret_cast<JoltC_Quat_t *>(result);
};

void JoltC_SoftBodyCreationSettings_mRotation_Set(
  JoltC_SoftBodyCreationSettings_t * self,
  JoltC_Quat_t * mRotation
) {
  SoftBodyCreationSettings * selfCpp = static_cast<SoftBodyCreationSettings *>(self->obj);
  selfCpp->mRotation = *reinterpret_cast<Quat *>(mRotation->obj);
};

unsigned long long int JoltC_SoftBodyCreationSettings_mUserData_Get(
  JoltC_SoftBodyCreationSettings_t * self
) {
  SoftBodyCreationSettings * selfCpp = static_cast<SoftBodyCreationSettings *>(self->obj);
  unsigned long long int result = selfCpp->mUserData;
  return result;
};

void JoltC_SoftBodyCreationSettings_mUserData_Set(
  JoltC_SoftBodyCreationSettings_t * self,
  unsigned long long int mUserData
) {
  SoftBodyCreationSettings * selfCpp = static_cast<SoftBodyCreationSettings *>(self->obj);
  selfCpp->mUserData = mUserData;
};

unsigned long JoltC_SoftBodyCreationSettings_mObjectLayer_Get(
  JoltC_SoftBodyCreationSettings_t * self
) {
  SoftBodyCreationSettings * selfCpp = static_cast<SoftBodyCreationSettings *>(self->obj);
  unsigned long result = selfCpp->mObjectLayer;
  return result;
};

void JoltC_SoftBodyCreationSettings_mObjectLayer_Set(
  JoltC_SoftBodyCreationSettings_t * self,
  unsigned long mObjectLayer
) {
  SoftBodyCreationSettings * selfCpp = static_cast<SoftBodyCreationSettings *>(self->obj);
  selfCpp->mObjectLayer = mObjectLayer;
};

JoltC_CollisionGroup_t * JoltC_SoftBodyCreationSettings_mCollisionGroup_Get(
  JoltC_SoftBodyCreationSettings_t * self
) {
  SoftBodyCreationSettings * selfCpp = static_cast<SoftBodyCreationSettings *>(self->obj);
  CollisionGroup resultValue = selfCpp->mCollisionGroup;
  CollisionGroup* result = new CollisionGroup(resultValue);
  return reinterpret_cast<JoltC_CollisionGroup_t *>(result);
};

void JoltC_SoftBodyCreationSettings_mCollisionGroup_Set(
  JoltC_SoftBodyCreationSettings_t * self,
  JoltC_CollisionGroup_t * mCollisionGroup
) {
  SoftBodyCreationSettings * selfCpp = static_cast<SoftBodyCreationSettings *>(self->obj);
  selfCpp->mCollisionGroup = *reinterpret_cast<CollisionGroup *>(mCollisionGroup->obj);
};

unsigned long JoltC_SoftBodyCreationSettings_mNumIterations_Get(
  JoltC_SoftBodyCreationSettings_t * self
) {
  SoftBodyCreationSettings * selfCpp = static_cast<SoftBodyCreationSettings *>(self->obj);
  unsigned long result = selfCpp->mNumIterations;
  return result;
};

void JoltC_SoftBodyCreationSettings_mNumIterations_Set(
  JoltC_SoftBodyCreationSettings_t * self,
  unsigned long mNumIterations
) {
  SoftBodyCreationSettings * selfCpp = static_cast<SoftBodyCreationSettings *>(self->obj);
  selfCpp->mNumIterations = mNumIterations;
};

float JoltC_SoftBodyCreationSettings_mLinearDamping_Get(
  JoltC_SoftBodyCreationSettings_t * self
) {
  SoftBodyCreationSettings * selfCpp = static_cast<SoftBodyCreationSettings *>(self->obj);
  float result = selfCpp->mLinearDamping;
  return result;
};

void JoltC_SoftBodyCreationSettings_mLinearDamping_Set(
  JoltC_SoftBodyCreationSettings_t * self,
  float mLinearDamping
) {
  SoftBodyCreationSettings * selfCpp = static_cast<SoftBodyCreationSettings *>(self->obj);
  selfCpp->mLinearDamping = mLinearDamping;
};

float JoltC_SoftBodyCreationSettings_mMaxLinearVelocity_Get(
  JoltC_SoftBodyCreationSettings_t * self
) {
  SoftBodyCreationSettings * selfCpp = static_cast<SoftBodyCreationSettings *>(self->obj);
  float result = selfCpp->mMaxLinearVelocity;
  return result;
};

void JoltC_SoftBodyCreationSettings_mMaxLinearVelocity_Set(
  JoltC_SoftBodyCreationSettings_t * self,
  float mMaxLinearVelocity
) {
  SoftBodyCreationSettings * selfCpp = static_cast<SoftBodyCreationSettings *>(self->obj);
  selfCpp->mMaxLinearVelocity = mMaxLinearVelocity;
};

float JoltC_SoftBodyCreationSettings_mRestitution_Get(
  JoltC_SoftBodyCreationSettings_t * self
) {
  SoftBodyCreationSettings * selfCpp = static_cast<SoftBodyCreationSettings *>(self->obj);
  float result = selfCpp->mRestitution;
  return result;
};

void JoltC_SoftBodyCreationSettings_mRestitution_Set(
  JoltC_SoftBodyCreationSettings_t * self,
  float mRestitution
) {
  SoftBodyCreationSettings * selfCpp = static_cast<SoftBodyCreationSettings *>(self->obj);
  selfCpp->mRestitution = mRestitution;
};

float JoltC_SoftBodyCreationSettings_mFriction_Get(
  JoltC_SoftBodyCreationSettings_t * self
) {
  SoftBodyCreationSettings * selfCpp = static_cast<SoftBodyCreationSettings *>(self->obj);
  float result = selfCpp->mFriction;
  return result;
};

void JoltC_SoftBodyCreationSettings_mFriction_Set(
  JoltC_SoftBodyCreationSettings_t * self,
  float mFriction
) {
  SoftBodyCreationSettings * selfCpp = static_cast<SoftBodyCreationSettings *>(self->obj);
  selfCpp->mFriction = mFriction;
};

float JoltC_SoftBodyCreationSettings_mPressure_Get(
  JoltC_SoftBodyCreationSettings_t * self
) {
  SoftBodyCreationSettings * selfCpp = static_cast<SoftBodyCreationSettings *>(self->obj);
  float result = selfCpp->mPressure;
  return result;
};

void JoltC_SoftBodyCreationSettings_mPressure_Set(
  JoltC_SoftBodyCreationSettings_t * self,
  float mPressure
) {
  SoftBodyCreationSettings * selfCpp = static_cast<SoftBodyCreationSettings *>(self->obj);
  selfCpp->mPressure = mPressure;
};

float JoltC_SoftBodyCreationSettings_mGravityFactor_Get(
  JoltC_SoftBodyCreationSettings_t * self
) {
  SoftBodyCreationSettings * selfCpp = static_cast<SoftBodyCreationSettings *>(self->obj);
  float result = selfCpp->mGravityFactor;
  return result;
};

void JoltC_SoftBodyCreationSettings_mGravityFactor_Set(
  JoltC_SoftBodyCreationSettings_t * self,
  float mGravityFactor
) {
  SoftBodyCreationSettings * selfCpp = static_cast<SoftBodyCreationSettings *>(self->obj);
  selfCpp->mGravityFactor = mGravityFactor;
};

bool JoltC_SoftBodyCreationSettings_mUpdatePosition_Get(
  JoltC_SoftBodyCreationSettings_t * self
) {
  SoftBodyCreationSettings * selfCpp = static_cast<SoftBodyCreationSettings *>(self->obj);
  bool result = selfCpp->mUpdatePosition;
  return result;
};

void JoltC_SoftBodyCreationSettings_mUpdatePosition_Set(
  JoltC_SoftBodyCreationSettings_t * self,
  bool mUpdatePosition
) {
  SoftBodyCreationSettings * selfCpp = static_cast<SoftBodyCreationSettings *>(self->obj);
  selfCpp->mUpdatePosition = mUpdatePosition;
};

bool JoltC_SoftBodyCreationSettings_mMakeRotationIdentity_Get(
  JoltC_SoftBodyCreationSettings_t * self
) {
  SoftBodyCreationSettings * selfCpp = static_cast<SoftBodyCreationSettings *>(self->obj);
  bool result = selfCpp->mMakeRotationIdentity;
  return result;
};

void JoltC_SoftBodyCreationSettings_mMakeRotationIdentity_Set(
  JoltC_SoftBodyCreationSettings_t * self,
  bool mMakeRotationIdentity
) {
  SoftBodyCreationSettings * selfCpp = static_cast<SoftBodyCreationSettings *>(self->obj);
  selfCpp->mMakeRotationIdentity = mMakeRotationIdentity;
};

bool JoltC_SoftBodyCreationSettings_mAllowSleeping_Get(
  JoltC_SoftBodyCreationSettings_t * self
) {
  SoftBodyCreationSettings * selfCpp = static_cast<SoftBodyCreationSettings *>(self->obj);
  bool result = selfCpp->mAllowSleeping;
  return result;
};

void JoltC_SoftBodyCreationSettings_mAllowSleeping_Set(
  JoltC_SoftBodyCreationSettings_t * self,
  bool mAllowSleeping
) {
  SoftBodyCreationSettings * selfCpp = static_cast<SoftBodyCreationSettings *>(self->obj);
  selfCpp->mAllowSleeping = mAllowSleeping;
};

//endregion

#ifdef __cplusplus
}
#endif

