#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_SoftBodyCreationSettings_t * JoltC_SoftBodyCreationSettings_new(
  JoltC_SoftBodySharedSettings_t * inSettings,
  JoltC_RVec3_t * inPosition,
  JoltC_Quat_t * inRotation,
  unsigned long inObjectLayer
);

//endregion

//region properties

JoltC_RVec3_t * JoltC_SoftBodyCreationSettings_mPosition_Get(
  JoltC_SoftBodyCreationSettings_t * self
);

void JoltC_SoftBodyCreationSettings_mPosition_Set(
  JoltC_SoftBodyCreationSettings_t * self,
  JoltC_RVec3_t * mPosition
);

JoltC_Quat_t * JoltC_SoftBodyCreationSettings_mRotation_Get(
  JoltC_SoftBodyCreationSettings_t * self
);

void JoltC_SoftBodyCreationSettings_mRotation_Set(
  JoltC_SoftBodyCreationSettings_t * self,
  JoltC_Quat_t * mRotation
);

unsigned long long int JoltC_SoftBodyCreationSettings_mUserData_Get(
  JoltC_SoftBodyCreationSettings_t * self
);

void JoltC_SoftBodyCreationSettings_mUserData_Set(
  JoltC_SoftBodyCreationSettings_t * self,
  unsigned long long int mUserData
);

unsigned long JoltC_SoftBodyCreationSettings_mObjectLayer_Get(
  JoltC_SoftBodyCreationSettings_t * self
);

void JoltC_SoftBodyCreationSettings_mObjectLayer_Set(
  JoltC_SoftBodyCreationSettings_t * self,
  unsigned long mObjectLayer
);

JoltC_CollisionGroup_t * JoltC_SoftBodyCreationSettings_mCollisionGroup_Get(
  JoltC_SoftBodyCreationSettings_t * self
);

void JoltC_SoftBodyCreationSettings_mCollisionGroup_Set(
  JoltC_SoftBodyCreationSettings_t * self,
  JoltC_CollisionGroup_t * mCollisionGroup
);

unsigned long JoltC_SoftBodyCreationSettings_mNumIterations_Get(
  JoltC_SoftBodyCreationSettings_t * self
);

void JoltC_SoftBodyCreationSettings_mNumIterations_Set(
  JoltC_SoftBodyCreationSettings_t * self,
  unsigned long mNumIterations
);

float JoltC_SoftBodyCreationSettings_mLinearDamping_Get(
  JoltC_SoftBodyCreationSettings_t * self
);

void JoltC_SoftBodyCreationSettings_mLinearDamping_Set(
  JoltC_SoftBodyCreationSettings_t * self,
  float mLinearDamping
);

float JoltC_SoftBodyCreationSettings_mMaxLinearVelocity_Get(
  JoltC_SoftBodyCreationSettings_t * self
);

void JoltC_SoftBodyCreationSettings_mMaxLinearVelocity_Set(
  JoltC_SoftBodyCreationSettings_t * self,
  float mMaxLinearVelocity
);

float JoltC_SoftBodyCreationSettings_mRestitution_Get(
  JoltC_SoftBodyCreationSettings_t * self
);

void JoltC_SoftBodyCreationSettings_mRestitution_Set(
  JoltC_SoftBodyCreationSettings_t * self,
  float mRestitution
);

float JoltC_SoftBodyCreationSettings_mFriction_Get(
  JoltC_SoftBodyCreationSettings_t * self
);

void JoltC_SoftBodyCreationSettings_mFriction_Set(
  JoltC_SoftBodyCreationSettings_t * self,
  float mFriction
);

float JoltC_SoftBodyCreationSettings_mPressure_Get(
  JoltC_SoftBodyCreationSettings_t * self
);

void JoltC_SoftBodyCreationSettings_mPressure_Set(
  JoltC_SoftBodyCreationSettings_t * self,
  float mPressure
);

float JoltC_SoftBodyCreationSettings_mGravityFactor_Get(
  JoltC_SoftBodyCreationSettings_t * self
);

void JoltC_SoftBodyCreationSettings_mGravityFactor_Set(
  JoltC_SoftBodyCreationSettings_t * self,
  float mGravityFactor
);

bool JoltC_SoftBodyCreationSettings_mUpdatePosition_Get(
  JoltC_SoftBodyCreationSettings_t * self
);

void JoltC_SoftBodyCreationSettings_mUpdatePosition_Set(
  JoltC_SoftBodyCreationSettings_t * self,
  bool mUpdatePosition
);

bool JoltC_SoftBodyCreationSettings_mMakeRotationIdentity_Get(
  JoltC_SoftBodyCreationSettings_t * self
);

void JoltC_SoftBodyCreationSettings_mMakeRotationIdentity_Set(
  JoltC_SoftBodyCreationSettings_t * self,
  bool mMakeRotationIdentity
);

bool JoltC_SoftBodyCreationSettings_mAllowSleeping_Get(
  JoltC_SoftBodyCreationSettings_t * self
);

void JoltC_SoftBodyCreationSettings_mAllowSleeping_Set(
  JoltC_SoftBodyCreationSettings_t * self,
  bool mAllowSleeping
);

//endregion


#ifdef __cplusplus
}
#endif

