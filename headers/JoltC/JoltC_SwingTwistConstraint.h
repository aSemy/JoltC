#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region functions

JPC_Vec3_t * JPC_SwingTwistConstraint_GetLocalSpacePosition1(
  JPC_SwingTwistConstraint_t * self
);

JPC_Vec3_t * JPC_SwingTwistConstraint_GetLocalSpacePosition2(
  JPC_SwingTwistConstraint_t * self
);

JPC_Quat_t * JPC_SwingTwistConstraint_GetConstraintToBody1(
  JPC_SwingTwistConstraint_t * self
);

JPC_Quat_t * JPC_SwingTwistConstraint_GetConstraintToBody2(
  JPC_SwingTwistConstraint_t * self
);

float JPC_SwingTwistConstraint_GetNormalHalfConeAngle(
  JPC_SwingTwistConstraint_t * self
);

void JPC_SwingTwistConstraint_SetNormalHalfConeAngle(
  JPC_SwingTwistConstraint_t * self,
  float inAngle
);

float JPC_SwingTwistConstraint_GetPlaneHalfConeAngle(
  JPC_SwingTwistConstraint_t * self
);

void JPC_SwingTwistConstraint_SetPlaneHalfConeAngle(
  JPC_SwingTwistConstraint_t * self,
  float inAngle
);

float JPC_SwingTwistConstraint_GetTwistMinAngle(
  JPC_SwingTwistConstraint_t * self
);

void JPC_SwingTwistConstraint_SetTwistMinAngle(
  JPC_SwingTwistConstraint_t * self,
  float inAngle
);

float JPC_SwingTwistConstraint_GetTwistMaxAngle(
  JPC_SwingTwistConstraint_t * self
);

void JPC_SwingTwistConstraint_SetTwistMaxAngle(
  JPC_SwingTwistConstraint_t * self,
  float inAngle
);

JPC_MotorSettings_t * JPC_SwingTwistConstraint_GetSwingMotorSettings(
  JPC_SwingTwistConstraint_t * self
);

JPC_MotorSettings_t * JPC_SwingTwistConstraint_GetTwistMotorSettings(
  JPC_SwingTwistConstraint_t * self
);

void JPC_SwingTwistConstraint_SetMaxFrictionTorque(
  JPC_SwingTwistConstraint_t * self,
  float inFrictionTorque
);

float JPC_SwingTwistConstraint_GetMaxFrictionTorque(
  JPC_SwingTwistConstraint_t * self
);

void JPC_SwingTwistConstraint_SetSwingMotorState(
  JPC_SwingTwistConstraint_t * self,
  JPC_EMotorState inState
);

JPC_EMotorState JPC_SwingTwistConstraint_GetSwingMotorState(
  JPC_SwingTwistConstraint_t * self
);

void JPC_SwingTwistConstraint_SetTwistMotorState(
  JPC_SwingTwistConstraint_t * self,
  JPC_EMotorState inState
);

JPC_EMotorState JPC_SwingTwistConstraint_GetTwistMotorState(
  JPC_SwingTwistConstraint_t * self
);

void JPC_SwingTwistConstraint_SetTargetAngularVelocityCS(
  JPC_SwingTwistConstraint_t * self,
  const JPC_Vec3_t * inAngularVelocity
);

JPC_Vec3_t * JPC_SwingTwistConstraint_GetTargetAngularVelocityCS(
  JPC_SwingTwistConstraint_t * self
);

void JPC_SwingTwistConstraint_SetTargetOrientationCS(
  JPC_SwingTwistConstraint_t * self,
  const JPC_Quat_t * inOrientation
);

JPC_Quat_t * JPC_SwingTwistConstraint_GetTargetOrientationCS(
  JPC_SwingTwistConstraint_t * self
);

void JPC_SwingTwistConstraint_SetTargetOrientationBS(
  JPC_SwingTwistConstraint_t * self,
  const JPC_Quat_t * inOrientation
);

JPC_Quat_t * JPC_SwingTwistConstraint_GetRotationInConstraintSpace(
  JPC_SwingTwistConstraint_t * self
);

JPC_Vec3_t * JPC_SwingTwistConstraint_GetTotalLambdaPosition(
  JPC_SwingTwistConstraint_t * self
);

float JPC_SwingTwistConstraint_GetTotalLambdaTwist(
  JPC_SwingTwistConstraint_t * self
);

float JPC_SwingTwistConstraint_GetTotalLambdaSwingY(
  JPC_SwingTwistConstraint_t * self
);

float JPC_SwingTwistConstraint_GetTotalLambdaSwingZ(
  JPC_SwingTwistConstraint_t * self
);

JPC_Vec3_t * JPC_SwingTwistConstraint_GetTotalLambdaMotor(
  JPC_SwingTwistConstraint_t * self
);

JPC_Body_t * JPC_SwingTwistConstraint_GetBody1(
  JPC_SwingTwistConstraint_t * self
);

JPC_Body_t * JPC_SwingTwistConstraint_GetBody2(
  JPC_SwingTwistConstraint_t * self
);

JPC_Mat44_t * JPC_SwingTwistConstraint_GetConstraintToBody1Matrix(
  JPC_SwingTwistConstraint_t * self
);

JPC_Mat44_t * JPC_SwingTwistConstraint_GetConstraintToBody2Matrix(
  JPC_SwingTwistConstraint_t * self
);

unsigned long JPC_SwingTwistConstraint_GetRefCount(
  JPC_SwingTwistConstraint_t * self
);

void JPC_SwingTwistConstraint_AddRef(
  JPC_SwingTwistConstraint_t * self
);

void JPC_SwingTwistConstraint_Release(
  JPC_SwingTwistConstraint_t * self
);

JPC_EConstraintType JPC_SwingTwistConstraint_GetType(
  JPC_SwingTwistConstraint_t * self
);

JPC_EConstraintSubType JPC_SwingTwistConstraint_GetSubType(
  JPC_SwingTwistConstraint_t * self
);

unsigned long JPC_SwingTwistConstraint_GetConstraintPriority(
  JPC_SwingTwistConstraint_t * self
);

void JPC_SwingTwistConstraint_SetConstraintPriority(
  JPC_SwingTwistConstraint_t * self,
  unsigned long inPriority
);

void JPC_SwingTwistConstraint_SetNumVelocityStepsOverride(
  JPC_SwingTwistConstraint_t * self,
  long inN
);

long JPC_SwingTwistConstraint_GetNumVelocityStepsOverride(
  JPC_SwingTwistConstraint_t * self
);

void JPC_SwingTwistConstraint_SetNumPositionStepsOverride(
  JPC_SwingTwistConstraint_t * self,
  long inN
);

long JPC_SwingTwistConstraint_GetNumPositionStepsOverride(
  JPC_SwingTwistConstraint_t * self
);

void JPC_SwingTwistConstraint_SetEnabled(
  JPC_SwingTwistConstraint_t * self,
  bool inEnabled
);

bool JPC_SwingTwistConstraint_GetEnabled(
  JPC_SwingTwistConstraint_t * self
);

bool JPC_SwingTwistConstraint_IsActive(
  JPC_SwingTwistConstraint_t * self
);

unsigned long long int JPC_SwingTwistConstraint_GetUserData(
  JPC_SwingTwistConstraint_t * self
);

void JPC_SwingTwistConstraint_SetUserData(
  JPC_SwingTwistConstraint_t * self,
  unsigned long long int inUserData
);

void JPC_SwingTwistConstraint_ResetWarmStart(
  JPC_SwingTwistConstraint_t * self
);

//endregion functions


#ifdef __cplusplus
}
#endif

