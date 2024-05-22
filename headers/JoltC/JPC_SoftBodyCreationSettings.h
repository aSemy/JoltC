#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JPC_SoftBodyCreationSettings_t * JPC_SoftBodyCreationSettings_new(
  const JPC_SoftBodySharedSettings_t * inSettings,
  JPC_RVec3_t * inPosition,
  JPC_Quat_t * inRotation,
  unsigned long inObjectLayer
);

//endregion constructors

//region properties

JPC_RVec3_t * JPC_SoftBodyCreationSettings_mPosition_Get(
  JPC_SoftBodyCreationSettings_t * self
);

void JPC_SoftBodyCreationSettings_mPosition_Set(
  JPC_SoftBodyCreationSettings_t * self,
  JPC_RVec3_t * mPosition
);

JPC_Quat_t * JPC_SoftBodyCreationSettings_mRotation_Get(
  JPC_SoftBodyCreationSettings_t * self
);

void JPC_SoftBodyCreationSettings_mRotation_Set(
  JPC_SoftBodyCreationSettings_t * self,
  JPC_Quat_t * mRotation
);

unsigned long long int JPC_SoftBodyCreationSettings_mUserData_Get(
  JPC_SoftBodyCreationSettings_t * self
);

void JPC_SoftBodyCreationSettings_mUserData_Set(
  JPC_SoftBodyCreationSettings_t * self,
  unsigned long long int mUserData
);

unsigned long JPC_SoftBodyCreationSettings_mObjectLayer_Get(
  JPC_SoftBodyCreationSettings_t * self
);

void JPC_SoftBodyCreationSettings_mObjectLayer_Set(
  JPC_SoftBodyCreationSettings_t * self,
  unsigned long mObjectLayer
);

JPC_CollisionGroup_t * JPC_SoftBodyCreationSettings_mCollisionGroup_Get(
  JPC_SoftBodyCreationSettings_t * self
);

void JPC_SoftBodyCreationSettings_mCollisionGroup_Set(
  JPC_SoftBodyCreationSettings_t * self,
  JPC_CollisionGroup_t * mCollisionGroup
);

unsigned long JPC_SoftBodyCreationSettings_mNumIterations_Get(
  JPC_SoftBodyCreationSettings_t * self
);

void JPC_SoftBodyCreationSettings_mNumIterations_Set(
  JPC_SoftBodyCreationSettings_t * self,
  unsigned long mNumIterations
);

float JPC_SoftBodyCreationSettings_mLinearDamping_Get(
  JPC_SoftBodyCreationSettings_t * self
);

void JPC_SoftBodyCreationSettings_mLinearDamping_Set(
  JPC_SoftBodyCreationSettings_t * self,
  float mLinearDamping
);

float JPC_SoftBodyCreationSettings_mMaxLinearVelocity_Get(
  JPC_SoftBodyCreationSettings_t * self
);

void JPC_SoftBodyCreationSettings_mMaxLinearVelocity_Set(
  JPC_SoftBodyCreationSettings_t * self,
  float mMaxLinearVelocity
);

float JPC_SoftBodyCreationSettings_mRestitution_Get(
  JPC_SoftBodyCreationSettings_t * self
);

void JPC_SoftBodyCreationSettings_mRestitution_Set(
  JPC_SoftBodyCreationSettings_t * self,
  float mRestitution
);

float JPC_SoftBodyCreationSettings_mFriction_Get(
  JPC_SoftBodyCreationSettings_t * self
);

void JPC_SoftBodyCreationSettings_mFriction_Set(
  JPC_SoftBodyCreationSettings_t * self,
  float mFriction
);

float JPC_SoftBodyCreationSettings_mPressure_Get(
  JPC_SoftBodyCreationSettings_t * self
);

void JPC_SoftBodyCreationSettings_mPressure_Set(
  JPC_SoftBodyCreationSettings_t * self,
  float mPressure
);

float JPC_SoftBodyCreationSettings_mGravityFactor_Get(
  JPC_SoftBodyCreationSettings_t * self
);

void JPC_SoftBodyCreationSettings_mGravityFactor_Set(
  JPC_SoftBodyCreationSettings_t * self,
  float mGravityFactor
);

bool JPC_SoftBodyCreationSettings_mUpdatePosition_Get(
  JPC_SoftBodyCreationSettings_t * self
);

void JPC_SoftBodyCreationSettings_mUpdatePosition_Set(
  JPC_SoftBodyCreationSettings_t * self,
  bool mUpdatePosition
);

bool JPC_SoftBodyCreationSettings_mMakeRotationIdentity_Get(
  JPC_SoftBodyCreationSettings_t * self
);

void JPC_SoftBodyCreationSettings_mMakeRotationIdentity_Set(
  JPC_SoftBodyCreationSettings_t * self,
  bool mMakeRotationIdentity
);

bool JPC_SoftBodyCreationSettings_mAllowSleeping_Get(
  JPC_SoftBodyCreationSettings_t * self
);

void JPC_SoftBodyCreationSettings_mAllowSleeping_Set(
  JPC_SoftBodyCreationSettings_t * self,
  bool mAllowSleeping
);

//endregion properties


#ifdef __cplusplus
}
#endif

