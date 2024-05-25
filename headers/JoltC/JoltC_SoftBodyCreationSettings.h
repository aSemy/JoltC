#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_SoftBodyCreationSettings_t * JoltC_SoftBodyCreationSettings_new(
  const JoltC_SoftBodySharedSettings_t * inSettings,
  JoltC_RVec3_t * inPosition,
  JoltC_Quat_t * inRotation,
  unsigned long inObjectLayer,
  char** outErrMsg
);

//endregion constructors

//region properties

JoltC_RVec3_t * JoltC_SoftBodyCreationSettings_mPosition_Get(
  JoltC_SoftBodyCreationSettings_t * self,
  char** outErrMsg
);

void JoltC_SoftBodyCreationSettings_mPosition_Set(
  JoltC_SoftBodyCreationSettings_t * self,
  JoltC_RVec3_t * mPosition,
  char** outErrMsg
);

JoltC_Quat_t * JoltC_SoftBodyCreationSettings_mRotation_Get(
  JoltC_SoftBodyCreationSettings_t * self,
  char** outErrMsg
);

void JoltC_SoftBodyCreationSettings_mRotation_Set(
  JoltC_SoftBodyCreationSettings_t * self,
  JoltC_Quat_t * mRotation,
  char** outErrMsg
);

unsigned long long int JoltC_SoftBodyCreationSettings_mUserData_Get(
  JoltC_SoftBodyCreationSettings_t * self,
  char** outErrMsg
);

void JoltC_SoftBodyCreationSettings_mUserData_Set(
  JoltC_SoftBodyCreationSettings_t * self,
  unsigned long long int mUserData,
  char** outErrMsg
);

unsigned long JoltC_SoftBodyCreationSettings_mObjectLayer_Get(
  JoltC_SoftBodyCreationSettings_t * self,
  char** outErrMsg
);

void JoltC_SoftBodyCreationSettings_mObjectLayer_Set(
  JoltC_SoftBodyCreationSettings_t * self,
  unsigned long mObjectLayer,
  char** outErrMsg
);

JoltC_CollisionGroup_t * JoltC_SoftBodyCreationSettings_mCollisionGroup_Get(
  JoltC_SoftBodyCreationSettings_t * self,
  char** outErrMsg
);

void JoltC_SoftBodyCreationSettings_mCollisionGroup_Set(
  JoltC_SoftBodyCreationSettings_t * self,
  JoltC_CollisionGroup_t * mCollisionGroup,
  char** outErrMsg
);

unsigned long JoltC_SoftBodyCreationSettings_mNumIterations_Get(
  JoltC_SoftBodyCreationSettings_t * self,
  char** outErrMsg
);

void JoltC_SoftBodyCreationSettings_mNumIterations_Set(
  JoltC_SoftBodyCreationSettings_t * self,
  unsigned long mNumIterations,
  char** outErrMsg
);

float JoltC_SoftBodyCreationSettings_mLinearDamping_Get(
  JoltC_SoftBodyCreationSettings_t * self,
  char** outErrMsg
);

void JoltC_SoftBodyCreationSettings_mLinearDamping_Set(
  JoltC_SoftBodyCreationSettings_t * self,
  float mLinearDamping,
  char** outErrMsg
);

float JoltC_SoftBodyCreationSettings_mMaxLinearVelocity_Get(
  JoltC_SoftBodyCreationSettings_t * self,
  char** outErrMsg
);

void JoltC_SoftBodyCreationSettings_mMaxLinearVelocity_Set(
  JoltC_SoftBodyCreationSettings_t * self,
  float mMaxLinearVelocity,
  char** outErrMsg
);

float JoltC_SoftBodyCreationSettings_mRestitution_Get(
  JoltC_SoftBodyCreationSettings_t * self,
  char** outErrMsg
);

void JoltC_SoftBodyCreationSettings_mRestitution_Set(
  JoltC_SoftBodyCreationSettings_t * self,
  float mRestitution,
  char** outErrMsg
);

float JoltC_SoftBodyCreationSettings_mFriction_Get(
  JoltC_SoftBodyCreationSettings_t * self,
  char** outErrMsg
);

void JoltC_SoftBodyCreationSettings_mFriction_Set(
  JoltC_SoftBodyCreationSettings_t * self,
  float mFriction,
  char** outErrMsg
);

float JoltC_SoftBodyCreationSettings_mPressure_Get(
  JoltC_SoftBodyCreationSettings_t * self,
  char** outErrMsg
);

void JoltC_SoftBodyCreationSettings_mPressure_Set(
  JoltC_SoftBodyCreationSettings_t * self,
  float mPressure,
  char** outErrMsg
);

float JoltC_SoftBodyCreationSettings_mGravityFactor_Get(
  JoltC_SoftBodyCreationSettings_t * self,
  char** outErrMsg
);

void JoltC_SoftBodyCreationSettings_mGravityFactor_Set(
  JoltC_SoftBodyCreationSettings_t * self,
  float mGravityFactor,
  char** outErrMsg
);

bool JoltC_SoftBodyCreationSettings_mUpdatePosition_Get(
  JoltC_SoftBodyCreationSettings_t * self,
  char** outErrMsg
);

void JoltC_SoftBodyCreationSettings_mUpdatePosition_Set(
  JoltC_SoftBodyCreationSettings_t * self,
  bool mUpdatePosition,
  char** outErrMsg
);

bool JoltC_SoftBodyCreationSettings_mMakeRotationIdentity_Get(
  JoltC_SoftBodyCreationSettings_t * self,
  char** outErrMsg
);

void JoltC_SoftBodyCreationSettings_mMakeRotationIdentity_Set(
  JoltC_SoftBodyCreationSettings_t * self,
  bool mMakeRotationIdentity,
  char** outErrMsg
);

bool JoltC_SoftBodyCreationSettings_mAllowSleeping_Get(
  JoltC_SoftBodyCreationSettings_t * self,
  char** outErrMsg
);

void JoltC_SoftBodyCreationSettings_mAllowSleeping_Set(
  JoltC_SoftBodyCreationSettings_t * self,
  bool mAllowSleeping,
  char** outErrMsg
);

//endregion properties


#ifdef __cplusplus
}
#endif

