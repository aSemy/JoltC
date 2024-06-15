#pragma once
#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_SwingTwistConstraintSettings_t * JoltC_SwingTwistConstraintSettings_new();

//endregion

//region destructor

void JoltC_SwingTwistConstraintSettings_destroy(
  JoltC_SwingTwistConstraintSettings_t * self
);

//endregion
//region functions

JoltC_Constraint_t * JoltC_SwingTwistConstraintSettings_Create(
  JoltC_SwingTwistConstraintSettings_t * self,
  JoltC_Body_t * inBody1,
  JoltC_Body_t * inBody2
);

unsigned long JoltC_SwingTwistConstraintSettings_GetRefCount(
  JoltC_SwingTwistConstraintSettings_t * self
);

void JoltC_SwingTwistConstraintSettings_AddRef(
  JoltC_SwingTwistConstraintSettings_t * self
);

void JoltC_SwingTwistConstraintSettings_Release(
  JoltC_SwingTwistConstraintSettings_t * self
);

//endregion

//region properties

JoltC_EConstraintSpace JoltC_SwingTwistConstraintSettings_mSpace_Get(
  JoltC_SwingTwistConstraintSettings_t * self
);

void JoltC_SwingTwistConstraintSettings_mSpace_Set(
  JoltC_SwingTwistConstraintSettings_t * self,
  JoltC_EConstraintSpace mSpace
);

JoltC_RVec3_t * JoltC_SwingTwistConstraintSettings_mPosition1_Get(
  JoltC_SwingTwistConstraintSettings_t * self
);

void JoltC_SwingTwistConstraintSettings_mPosition1_Set(
  JoltC_SwingTwistConstraintSettings_t * self,
  JoltC_RVec3_t * mPosition1
);

JoltC_Vec3_t * JoltC_SwingTwistConstraintSettings_mTwistAxis1_Get(
  JoltC_SwingTwistConstraintSettings_t * self
);

void JoltC_SwingTwistConstraintSettings_mTwistAxis1_Set(
  JoltC_SwingTwistConstraintSettings_t * self,
  JoltC_Vec3_t * mTwistAxis1
);

JoltC_Vec3_t * JoltC_SwingTwistConstraintSettings_mPlaneAxis1_Get(
  JoltC_SwingTwistConstraintSettings_t * self
);

void JoltC_SwingTwistConstraintSettings_mPlaneAxis1_Set(
  JoltC_SwingTwistConstraintSettings_t * self,
  JoltC_Vec3_t * mPlaneAxis1
);

JoltC_RVec3_t * JoltC_SwingTwistConstraintSettings_mPosition2_Get(
  JoltC_SwingTwistConstraintSettings_t * self
);

void JoltC_SwingTwistConstraintSettings_mPosition2_Set(
  JoltC_SwingTwistConstraintSettings_t * self,
  JoltC_RVec3_t * mPosition2
);

JoltC_Vec3_t * JoltC_SwingTwistConstraintSettings_mTwistAxis2_Get(
  JoltC_SwingTwistConstraintSettings_t * self
);

void JoltC_SwingTwistConstraintSettings_mTwistAxis2_Set(
  JoltC_SwingTwistConstraintSettings_t * self,
  JoltC_Vec3_t * mTwistAxis2
);

JoltC_Vec3_t * JoltC_SwingTwistConstraintSettings_mPlaneAxis2_Get(
  JoltC_SwingTwistConstraintSettings_t * self
);

void JoltC_SwingTwistConstraintSettings_mPlaneAxis2_Set(
  JoltC_SwingTwistConstraintSettings_t * self,
  JoltC_Vec3_t * mPlaneAxis2
);

JoltC_ESwingType JoltC_SwingTwistConstraintSettings_mSwingType_Get(
  JoltC_SwingTwistConstraintSettings_t * self
);

void JoltC_SwingTwistConstraintSettings_mSwingType_Set(
  JoltC_SwingTwistConstraintSettings_t * self,
  JoltC_ESwingType mSwingType
);

float JoltC_SwingTwistConstraintSettings_mNormalHalfConeAngle_Get(
  JoltC_SwingTwistConstraintSettings_t * self
);

void JoltC_SwingTwistConstraintSettings_mNormalHalfConeAngle_Set(
  JoltC_SwingTwistConstraintSettings_t * self,
  float mNormalHalfConeAngle
);

float JoltC_SwingTwistConstraintSettings_mPlaneHalfConeAngle_Get(
  JoltC_SwingTwistConstraintSettings_t * self
);

void JoltC_SwingTwistConstraintSettings_mPlaneHalfConeAngle_Set(
  JoltC_SwingTwistConstraintSettings_t * self,
  float mPlaneHalfConeAngle
);

float JoltC_SwingTwistConstraintSettings_mTwistMinAngle_Get(
  JoltC_SwingTwistConstraintSettings_t * self
);

void JoltC_SwingTwistConstraintSettings_mTwistMinAngle_Set(
  JoltC_SwingTwistConstraintSettings_t * self,
  float mTwistMinAngle
);

float JoltC_SwingTwistConstraintSettings_mTwistMaxAngle_Get(
  JoltC_SwingTwistConstraintSettings_t * self
);

void JoltC_SwingTwistConstraintSettings_mTwistMaxAngle_Set(
  JoltC_SwingTwistConstraintSettings_t * self,
  float mTwistMaxAngle
);

float JoltC_SwingTwistConstraintSettings_mMaxFrictionTorque_Get(
  JoltC_SwingTwistConstraintSettings_t * self
);

void JoltC_SwingTwistConstraintSettings_mMaxFrictionTorque_Set(
  JoltC_SwingTwistConstraintSettings_t * self,
  float mMaxFrictionTorque
);

JoltC_MotorSettings_t * JoltC_SwingTwistConstraintSettings_mSwingMotorSettings_Get(
  JoltC_SwingTwistConstraintSettings_t * self
);

void JoltC_SwingTwistConstraintSettings_mSwingMotorSettings_Set(
  JoltC_SwingTwistConstraintSettings_t * self,
  JoltC_MotorSettings_t * mSwingMotorSettings
);

JoltC_MotorSettings_t * JoltC_SwingTwistConstraintSettings_mTwistMotorSettings_Get(
  JoltC_SwingTwistConstraintSettings_t * self
);

void JoltC_SwingTwistConstraintSettings_mTwistMotorSettings_Set(
  JoltC_SwingTwistConstraintSettings_t * self,
  JoltC_MotorSettings_t * mTwistMotorSettings
);

bool JoltC_SwingTwistConstraintSettings_mEnabled_Get(
  JoltC_SwingTwistConstraintSettings_t * self
);

void JoltC_SwingTwistConstraintSettings_mEnabled_Set(
  JoltC_SwingTwistConstraintSettings_t * self,
  bool mEnabled
);

long JoltC_SwingTwistConstraintSettings_mNumVelocityStepsOverride_Get(
  JoltC_SwingTwistConstraintSettings_t * self
);

void JoltC_SwingTwistConstraintSettings_mNumVelocityStepsOverride_Set(
  JoltC_SwingTwistConstraintSettings_t * self,
  long mNumVelocityStepsOverride
);

long JoltC_SwingTwistConstraintSettings_mNumPositionStepsOverride_Get(
  JoltC_SwingTwistConstraintSettings_t * self
);

void JoltC_SwingTwistConstraintSettings_mNumPositionStepsOverride_Set(
  JoltC_SwingTwistConstraintSettings_t * self,
  long mNumPositionStepsOverride
);

//endregion


#ifdef __cplusplus
}
#endif
