#include "JoltC/JPC_SoftBodyCreationSettings.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JPC_SoftBodyCreationSettings_t * JPC_SoftBodyCreationSettings_new(
  const JPC_SoftBodySharedSettings_t * inSettings,
  JPC_RVec3_t * inPosition,
  JPC_Quat_t * inRotation,
  unsigned long inObjectLayer
) {
  JPC_SoftBodyCreationSettings_t * cInstance = new JPC_SoftBodyCreationSettings_t();
  SoftBodyCreationSettings * cppInstance = new SoftBodyCreationSettings(
    reinterpret_cast<SoftBodySharedSettings *>(inSettings->obj),
    *reinterpret_cast<RVec3 *>(inPosition->obj),
    *reinterpret_cast<Quat *>(inRotation->obj),
    inObjectLayer
  );
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion constructors

//region properties

JPC_RVec3_t * JPC_SoftBodyCreationSettings_mPosition_Get(
  JPC_SoftBodyCreationSettings_t * self
) {
  SoftBodyCreationSettings * selfCpp = static_cast<SoftBodyCreationSettings *>(self->obj);
  RVec3 resultValue = selfCpp->mPosition;
  RVec3* result = new RVec3(resultValue);
  return reinterpret_cast<JPC_RVec3_t *>(result);
};

void JPC_SoftBodyCreationSettings_mPosition_Set(
  JPC_SoftBodyCreationSettings_t * self,
  JPC_RVec3_t * mPosition
) {
  SoftBodyCreationSettings * selfCpp = static_cast<SoftBodyCreationSettings *>(self->obj);
  selfCpp->mPosition = *reinterpret_cast<RVec3 *>(mPosition->obj);
};

JPC_Quat_t * JPC_SoftBodyCreationSettings_mRotation_Get(
  JPC_SoftBodyCreationSettings_t * self
) {
  SoftBodyCreationSettings * selfCpp = static_cast<SoftBodyCreationSettings *>(self->obj);
  Quat resultValue = selfCpp->mRotation;
  Quat* result = new Quat(resultValue);
  return reinterpret_cast<JPC_Quat_t *>(result);
};

void JPC_SoftBodyCreationSettings_mRotation_Set(
  JPC_SoftBodyCreationSettings_t * self,
  JPC_Quat_t * mRotation
) {
  SoftBodyCreationSettings * selfCpp = static_cast<SoftBodyCreationSettings *>(self->obj);
  selfCpp->mRotation = *reinterpret_cast<Quat *>(mRotation->obj);
};

unsigned long long int JPC_SoftBodyCreationSettings_mUserData_Get(
  JPC_SoftBodyCreationSettings_t * self
) {
  SoftBodyCreationSettings * selfCpp = static_cast<SoftBodyCreationSettings *>(self->obj);
  unsigned long long int result = selfCpp->mUserData;
  return result;
};

void JPC_SoftBodyCreationSettings_mUserData_Set(
  JPC_SoftBodyCreationSettings_t * self,
  unsigned long long int mUserData
) {
  SoftBodyCreationSettings * selfCpp = static_cast<SoftBodyCreationSettings *>(self->obj);
  selfCpp->mUserData = mUserData;
};

unsigned long JPC_SoftBodyCreationSettings_mObjectLayer_Get(
  JPC_SoftBodyCreationSettings_t * self
) {
  SoftBodyCreationSettings * selfCpp = static_cast<SoftBodyCreationSettings *>(self->obj);
  unsigned long result = selfCpp->mObjectLayer;
  return result;
};

void JPC_SoftBodyCreationSettings_mObjectLayer_Set(
  JPC_SoftBodyCreationSettings_t * self,
  unsigned long mObjectLayer
) {
  SoftBodyCreationSettings * selfCpp = static_cast<SoftBodyCreationSettings *>(self->obj);
  selfCpp->mObjectLayer = mObjectLayer;
};

JPC_CollisionGroup_t * JPC_SoftBodyCreationSettings_mCollisionGroup_Get(
  JPC_SoftBodyCreationSettings_t * self
) {
  SoftBodyCreationSettings * selfCpp = static_cast<SoftBodyCreationSettings *>(self->obj);
  CollisionGroup resultValue = selfCpp->mCollisionGroup;
  CollisionGroup* result = new CollisionGroup(resultValue);
  return reinterpret_cast<JPC_CollisionGroup_t *>(result);
};

void JPC_SoftBodyCreationSettings_mCollisionGroup_Set(
  JPC_SoftBodyCreationSettings_t * self,
  JPC_CollisionGroup_t * mCollisionGroup
) {
  SoftBodyCreationSettings * selfCpp = static_cast<SoftBodyCreationSettings *>(self->obj);
  selfCpp->mCollisionGroup = *reinterpret_cast<CollisionGroup *>(mCollisionGroup->obj);
};

unsigned long JPC_SoftBodyCreationSettings_mNumIterations_Get(
  JPC_SoftBodyCreationSettings_t * self
) {
  SoftBodyCreationSettings * selfCpp = static_cast<SoftBodyCreationSettings *>(self->obj);
  unsigned long result = selfCpp->mNumIterations;
  return result;
};

void JPC_SoftBodyCreationSettings_mNumIterations_Set(
  JPC_SoftBodyCreationSettings_t * self,
  unsigned long mNumIterations
) {
  SoftBodyCreationSettings * selfCpp = static_cast<SoftBodyCreationSettings *>(self->obj);
  selfCpp->mNumIterations = mNumIterations;
};

float JPC_SoftBodyCreationSettings_mLinearDamping_Get(
  JPC_SoftBodyCreationSettings_t * self
) {
  SoftBodyCreationSettings * selfCpp = static_cast<SoftBodyCreationSettings *>(self->obj);
  float result = selfCpp->mLinearDamping;
  return result;
};

void JPC_SoftBodyCreationSettings_mLinearDamping_Set(
  JPC_SoftBodyCreationSettings_t * self,
  float mLinearDamping
) {
  SoftBodyCreationSettings * selfCpp = static_cast<SoftBodyCreationSettings *>(self->obj);
  selfCpp->mLinearDamping = mLinearDamping;
};

float JPC_SoftBodyCreationSettings_mMaxLinearVelocity_Get(
  JPC_SoftBodyCreationSettings_t * self
) {
  SoftBodyCreationSettings * selfCpp = static_cast<SoftBodyCreationSettings *>(self->obj);
  float result = selfCpp->mMaxLinearVelocity;
  return result;
};

void JPC_SoftBodyCreationSettings_mMaxLinearVelocity_Set(
  JPC_SoftBodyCreationSettings_t * self,
  float mMaxLinearVelocity
) {
  SoftBodyCreationSettings * selfCpp = static_cast<SoftBodyCreationSettings *>(self->obj);
  selfCpp->mMaxLinearVelocity = mMaxLinearVelocity;
};

float JPC_SoftBodyCreationSettings_mRestitution_Get(
  JPC_SoftBodyCreationSettings_t * self
) {
  SoftBodyCreationSettings * selfCpp = static_cast<SoftBodyCreationSettings *>(self->obj);
  float result = selfCpp->mRestitution;
  return result;
};

void JPC_SoftBodyCreationSettings_mRestitution_Set(
  JPC_SoftBodyCreationSettings_t * self,
  float mRestitution
) {
  SoftBodyCreationSettings * selfCpp = static_cast<SoftBodyCreationSettings *>(self->obj);
  selfCpp->mRestitution = mRestitution;
};

float JPC_SoftBodyCreationSettings_mFriction_Get(
  JPC_SoftBodyCreationSettings_t * self
) {
  SoftBodyCreationSettings * selfCpp = static_cast<SoftBodyCreationSettings *>(self->obj);
  float result = selfCpp->mFriction;
  return result;
};

void JPC_SoftBodyCreationSettings_mFriction_Set(
  JPC_SoftBodyCreationSettings_t * self,
  float mFriction
) {
  SoftBodyCreationSettings * selfCpp = static_cast<SoftBodyCreationSettings *>(self->obj);
  selfCpp->mFriction = mFriction;
};

float JPC_SoftBodyCreationSettings_mPressure_Get(
  JPC_SoftBodyCreationSettings_t * self
) {
  SoftBodyCreationSettings * selfCpp = static_cast<SoftBodyCreationSettings *>(self->obj);
  float result = selfCpp->mPressure;
  return result;
};

void JPC_SoftBodyCreationSettings_mPressure_Set(
  JPC_SoftBodyCreationSettings_t * self,
  float mPressure
) {
  SoftBodyCreationSettings * selfCpp = static_cast<SoftBodyCreationSettings *>(self->obj);
  selfCpp->mPressure = mPressure;
};

float JPC_SoftBodyCreationSettings_mGravityFactor_Get(
  JPC_SoftBodyCreationSettings_t * self
) {
  SoftBodyCreationSettings * selfCpp = static_cast<SoftBodyCreationSettings *>(self->obj);
  float result = selfCpp->mGravityFactor;
  return result;
};

void JPC_SoftBodyCreationSettings_mGravityFactor_Set(
  JPC_SoftBodyCreationSettings_t * self,
  float mGravityFactor
) {
  SoftBodyCreationSettings * selfCpp = static_cast<SoftBodyCreationSettings *>(self->obj);
  selfCpp->mGravityFactor = mGravityFactor;
};

bool JPC_SoftBodyCreationSettings_mUpdatePosition_Get(
  JPC_SoftBodyCreationSettings_t * self
) {
  SoftBodyCreationSettings * selfCpp = static_cast<SoftBodyCreationSettings *>(self->obj);
  bool result = selfCpp->mUpdatePosition;
  return result;
};

void JPC_SoftBodyCreationSettings_mUpdatePosition_Set(
  JPC_SoftBodyCreationSettings_t * self,
  bool mUpdatePosition
) {
  SoftBodyCreationSettings * selfCpp = static_cast<SoftBodyCreationSettings *>(self->obj);
  selfCpp->mUpdatePosition = mUpdatePosition;
};

bool JPC_SoftBodyCreationSettings_mMakeRotationIdentity_Get(
  JPC_SoftBodyCreationSettings_t * self
) {
  SoftBodyCreationSettings * selfCpp = static_cast<SoftBodyCreationSettings *>(self->obj);
  bool result = selfCpp->mMakeRotationIdentity;
  return result;
};

void JPC_SoftBodyCreationSettings_mMakeRotationIdentity_Set(
  JPC_SoftBodyCreationSettings_t * self,
  bool mMakeRotationIdentity
) {
  SoftBodyCreationSettings * selfCpp = static_cast<SoftBodyCreationSettings *>(self->obj);
  selfCpp->mMakeRotationIdentity = mMakeRotationIdentity;
};

bool JPC_SoftBodyCreationSettings_mAllowSleeping_Get(
  JPC_SoftBodyCreationSettings_t * self
) {
  SoftBodyCreationSettings * selfCpp = static_cast<SoftBodyCreationSettings *>(self->obj);
  bool result = selfCpp->mAllowSleeping;
  return result;
};

void JPC_SoftBodyCreationSettings_mAllowSleeping_Set(
  JPC_SoftBodyCreationSettings_t * self,
  bool mAllowSleeping
) {
  SoftBodyCreationSettings * selfCpp = static_cast<SoftBodyCreationSettings *>(self->obj);
  selfCpp->mAllowSleeping = mAllowSleeping;
};

//endregion properties

#ifdef __cplusplus
}
#endif

