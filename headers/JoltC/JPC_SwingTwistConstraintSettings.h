#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JPC_SwingTwistConstraintSettings_t * JPC_SwingTwistConstraintSettings_new();

//endregion constructors

//region functions

JPC_Constraint_t * JPC_SwingTwistConstraintSettings_Create(
  JPC_SwingTwistConstraintSettings_t * self,
  JPC_Body_t * inBody1,
  JPC_Body_t * inBody2
);

unsigned long JPC_SwingTwistConstraintSettings_GetRefCount(
  JPC_SwingTwistConstraintSettings_t * self
);

void JPC_SwingTwistConstraintSettings_AddRef(
  JPC_SwingTwistConstraintSettings_t * self
);

void JPC_SwingTwistConstraintSettings_Release(
  JPC_SwingTwistConstraintSettings_t * self
);

//endregion functions

//region properties

JPC_EConstraintSpace JPC_SwingTwistConstraintSettings_mSpace_Get(
  JPC_SwingTwistConstraintSettings_t * self
);

void JPC_SwingTwistConstraintSettings_mSpace_Set(
  JPC_SwingTwistConstraintSettings_t * self,
  JPC_EConstraintSpace mSpace
);

JPC_RVec3_t * JPC_SwingTwistConstraintSettings_mPosition1_Get(
  JPC_SwingTwistConstraintSettings_t * self
);

void JPC_SwingTwistConstraintSettings_mPosition1_Set(
  JPC_SwingTwistConstraintSettings_t * self,
  JPC_RVec3_t * mPosition1
);

JPC_Vec3_t * JPC_SwingTwistConstraintSettings_mTwistAxis1_Get(
  JPC_SwingTwistConstraintSettings_t * self
);

void JPC_SwingTwistConstraintSettings_mTwistAxis1_Set(
  JPC_SwingTwistConstraintSettings_t * self,
  JPC_Vec3_t * mTwistAxis1
);

JPC_Vec3_t * JPC_SwingTwistConstraintSettings_mPlaneAxis1_Get(
  JPC_SwingTwistConstraintSettings_t * self
);

void JPC_SwingTwistConstraintSettings_mPlaneAxis1_Set(
  JPC_SwingTwistConstraintSettings_t * self,
  JPC_Vec3_t * mPlaneAxis1
);

JPC_RVec3_t * JPC_SwingTwistConstraintSettings_mPosition2_Get(
  JPC_SwingTwistConstraintSettings_t * self
);

void JPC_SwingTwistConstraintSettings_mPosition2_Set(
  JPC_SwingTwistConstraintSettings_t * self,
  JPC_RVec3_t * mPosition2
);

JPC_Vec3_t * JPC_SwingTwistConstraintSettings_mTwistAxis2_Get(
  JPC_SwingTwistConstraintSettings_t * self
);

void JPC_SwingTwistConstraintSettings_mTwistAxis2_Set(
  JPC_SwingTwistConstraintSettings_t * self,
  JPC_Vec3_t * mTwistAxis2
);

JPC_Vec3_t * JPC_SwingTwistConstraintSettings_mPlaneAxis2_Get(
  JPC_SwingTwistConstraintSettings_t * self
);

void JPC_SwingTwistConstraintSettings_mPlaneAxis2_Set(
  JPC_SwingTwistConstraintSettings_t * self,
  JPC_Vec3_t * mPlaneAxis2
);

JPC_ESwingType JPC_SwingTwistConstraintSettings_mSwingType_Get(
  JPC_SwingTwistConstraintSettings_t * self
);

void JPC_SwingTwistConstraintSettings_mSwingType_Set(
  JPC_SwingTwistConstraintSettings_t * self,
  JPC_ESwingType mSwingType
);

float JPC_SwingTwistConstraintSettings_mNormalHalfConeAngle_Get(
  JPC_SwingTwistConstraintSettings_t * self
);

void JPC_SwingTwistConstraintSettings_mNormalHalfConeAngle_Set(
  JPC_SwingTwistConstraintSettings_t * self,
  float mNormalHalfConeAngle
);

float JPC_SwingTwistConstraintSettings_mPlaneHalfConeAngle_Get(
  JPC_SwingTwistConstraintSettings_t * self
);

void JPC_SwingTwistConstraintSettings_mPlaneHalfConeAngle_Set(
  JPC_SwingTwistConstraintSettings_t * self,
  float mPlaneHalfConeAngle
);

float JPC_SwingTwistConstraintSettings_mTwistMinAngle_Get(
  JPC_SwingTwistConstraintSettings_t * self
);

void JPC_SwingTwistConstraintSettings_mTwistMinAngle_Set(
  JPC_SwingTwistConstraintSettings_t * self,
  float mTwistMinAngle
);

float JPC_SwingTwistConstraintSettings_mTwistMaxAngle_Get(
  JPC_SwingTwistConstraintSettings_t * self
);

void JPC_SwingTwistConstraintSettings_mTwistMaxAngle_Set(
  JPC_SwingTwistConstraintSettings_t * self,
  float mTwistMaxAngle
);

float JPC_SwingTwistConstraintSettings_mMaxFrictionTorque_Get(
  JPC_SwingTwistConstraintSettings_t * self
);

void JPC_SwingTwistConstraintSettings_mMaxFrictionTorque_Set(
  JPC_SwingTwistConstraintSettings_t * self,
  float mMaxFrictionTorque
);

JPC_MotorSettings_t * JPC_SwingTwistConstraintSettings_mSwingMotorSettings_Get(
  JPC_SwingTwistConstraintSettings_t * self
);

void JPC_SwingTwistConstraintSettings_mSwingMotorSettings_Set(
  JPC_SwingTwistConstraintSettings_t * self,
  JPC_MotorSettings_t * mSwingMotorSettings
);

JPC_MotorSettings_t * JPC_SwingTwistConstraintSettings_mTwistMotorSettings_Get(
  JPC_SwingTwistConstraintSettings_t * self
);

void JPC_SwingTwistConstraintSettings_mTwistMotorSettings_Set(
  JPC_SwingTwistConstraintSettings_t * self,
  JPC_MotorSettings_t * mTwistMotorSettings
);

bool JPC_SwingTwistConstraintSettings_mEnabled_Get(
  JPC_SwingTwistConstraintSettings_t * self
);

void JPC_SwingTwistConstraintSettings_mEnabled_Set(
  JPC_SwingTwistConstraintSettings_t * self,
  bool mEnabled
);

long JPC_SwingTwistConstraintSettings_mNumVelocityStepsOverride_Get(
  JPC_SwingTwistConstraintSettings_t * self
);

void JPC_SwingTwistConstraintSettings_mNumVelocityStepsOverride_Set(
  JPC_SwingTwistConstraintSettings_t * self,
  long mNumVelocityStepsOverride
);

long JPC_SwingTwistConstraintSettings_mNumPositionStepsOverride_Get(
  JPC_SwingTwistConstraintSettings_t * self
);

void JPC_SwingTwistConstraintSettings_mNumPositionStepsOverride_Set(
  JPC_SwingTwistConstraintSettings_t * self,
  long mNumPositionStepsOverride
);

//endregion properties


#ifdef __cplusplus
}
#endif

