#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region functions

JoltC_Vec3_t * JoltC_SwingTwistConstraint_GetLocalSpacePosition1(
  JoltC_SwingTwistConstraint_t * self,
  char** outErrMsg
);

JoltC_Vec3_t * JoltC_SwingTwistConstraint_GetLocalSpacePosition2(
  JoltC_SwingTwistConstraint_t * self,
  char** outErrMsg
);

JoltC_Quat_t * JoltC_SwingTwistConstraint_GetConstraintToBody1(
  JoltC_SwingTwistConstraint_t * self,
  char** outErrMsg
);

JoltC_Quat_t * JoltC_SwingTwistConstraint_GetConstraintToBody2(
  JoltC_SwingTwistConstraint_t * self,
  char** outErrMsg
);

float JoltC_SwingTwistConstraint_GetNormalHalfConeAngle(
  JoltC_SwingTwistConstraint_t * self,
  char** outErrMsg
);

void JoltC_SwingTwistConstraint_SetNormalHalfConeAngle(
  JoltC_SwingTwistConstraint_t * self,
  float inAngle,
  char** outErrMsg
);

float JoltC_SwingTwistConstraint_GetPlaneHalfConeAngle(
  JoltC_SwingTwistConstraint_t * self,
  char** outErrMsg
);

void JoltC_SwingTwistConstraint_SetPlaneHalfConeAngle(
  JoltC_SwingTwistConstraint_t * self,
  float inAngle,
  char** outErrMsg
);

float JoltC_SwingTwistConstraint_GetTwistMinAngle(
  JoltC_SwingTwistConstraint_t * self,
  char** outErrMsg
);

void JoltC_SwingTwistConstraint_SetTwistMinAngle(
  JoltC_SwingTwistConstraint_t * self,
  float inAngle,
  char** outErrMsg
);

float JoltC_SwingTwistConstraint_GetTwistMaxAngle(
  JoltC_SwingTwistConstraint_t * self,
  char** outErrMsg
);

void JoltC_SwingTwistConstraint_SetTwistMaxAngle(
  JoltC_SwingTwistConstraint_t * self,
  float inAngle,
  char** outErrMsg
);

JoltC_MotorSettings_t * JoltC_SwingTwistConstraint_GetSwingMotorSettings(
  JoltC_SwingTwistConstraint_t * self,
  char** outErrMsg
);

JoltC_MotorSettings_t * JoltC_SwingTwistConstraint_GetTwistMotorSettings(
  JoltC_SwingTwistConstraint_t * self,
  char** outErrMsg
);

void JoltC_SwingTwistConstraint_SetMaxFrictionTorque(
  JoltC_SwingTwistConstraint_t * self,
  float inFrictionTorque,
  char** outErrMsg
);

float JoltC_SwingTwistConstraint_GetMaxFrictionTorque(
  JoltC_SwingTwistConstraint_t * self,
  char** outErrMsg
);

void JoltC_SwingTwistConstraint_SetSwingMotorState(
  JoltC_SwingTwistConstraint_t * self,
  JoltC_EMotorState inState,
  char** outErrMsg
);

JoltC_EMotorState JoltC_SwingTwistConstraint_GetSwingMotorState(
  JoltC_SwingTwistConstraint_t * self,
  char** outErrMsg
);

void JoltC_SwingTwistConstraint_SetTwistMotorState(
  JoltC_SwingTwistConstraint_t * self,
  JoltC_EMotorState inState,
  char** outErrMsg
);

JoltC_EMotorState JoltC_SwingTwistConstraint_GetTwistMotorState(
  JoltC_SwingTwistConstraint_t * self,
  char** outErrMsg
);

void JoltC_SwingTwistConstraint_SetTargetAngularVelocityCS(
  JoltC_SwingTwistConstraint_t * self,
  const JoltC_Vec3_t * inAngularVelocity,
  char** outErrMsg
);

JoltC_Vec3_t * JoltC_SwingTwistConstraint_GetTargetAngularVelocityCS(
  JoltC_SwingTwistConstraint_t * self,
  char** outErrMsg
);

void JoltC_SwingTwistConstraint_SetTargetOrientationCS(
  JoltC_SwingTwistConstraint_t * self,
  const JoltC_Quat_t * inOrientation,
  char** outErrMsg
);

JoltC_Quat_t * JoltC_SwingTwistConstraint_GetTargetOrientationCS(
  JoltC_SwingTwistConstraint_t * self,
  char** outErrMsg
);

void JoltC_SwingTwistConstraint_SetTargetOrientationBS(
  JoltC_SwingTwistConstraint_t * self,
  const JoltC_Quat_t * inOrientation,
  char** outErrMsg
);

JoltC_Quat_t * JoltC_SwingTwistConstraint_GetRotationInConstraintSpace(
  JoltC_SwingTwistConstraint_t * self,
  char** outErrMsg
);

JoltC_Vec3_t * JoltC_SwingTwistConstraint_GetTotalLambdaPosition(
  JoltC_SwingTwistConstraint_t * self,
  char** outErrMsg
);

float JoltC_SwingTwistConstraint_GetTotalLambdaTwist(
  JoltC_SwingTwistConstraint_t * self,
  char** outErrMsg
);

float JoltC_SwingTwistConstraint_GetTotalLambdaSwingY(
  JoltC_SwingTwistConstraint_t * self,
  char** outErrMsg
);

float JoltC_SwingTwistConstraint_GetTotalLambdaSwingZ(
  JoltC_SwingTwistConstraint_t * self,
  char** outErrMsg
);

JoltC_Vec3_t * JoltC_SwingTwistConstraint_GetTotalLambdaMotor(
  JoltC_SwingTwistConstraint_t * self,
  char** outErrMsg
);

JoltC_Body_t * JoltC_SwingTwistConstraint_GetBody1(
  JoltC_SwingTwistConstraint_t * self,
  char** outErrMsg
);

JoltC_Body_t * JoltC_SwingTwistConstraint_GetBody2(
  JoltC_SwingTwistConstraint_t * self,
  char** outErrMsg
);

JoltC_Mat44_t * JoltC_SwingTwistConstraint_GetConstraintToBody1Matrix(
  JoltC_SwingTwistConstraint_t * self,
  char** outErrMsg
);

JoltC_Mat44_t * JoltC_SwingTwistConstraint_GetConstraintToBody2Matrix(
  JoltC_SwingTwistConstraint_t * self,
  char** outErrMsg
);

unsigned long JoltC_SwingTwistConstraint_GetRefCount(
  JoltC_SwingTwistConstraint_t * self,
  char** outErrMsg
);

void JoltC_SwingTwistConstraint_AddRef(
  JoltC_SwingTwistConstraint_t * self,
  char** outErrMsg
);

void JoltC_SwingTwistConstraint_Release(
  JoltC_SwingTwistConstraint_t * self,
  char** outErrMsg
);

JoltC_EConstraintType JoltC_SwingTwistConstraint_GetType(
  JoltC_SwingTwistConstraint_t * self,
  char** outErrMsg
);

JoltC_EConstraintSubType JoltC_SwingTwistConstraint_GetSubType(
  JoltC_SwingTwistConstraint_t * self,
  char** outErrMsg
);

unsigned long JoltC_SwingTwistConstraint_GetConstraintPriority(
  JoltC_SwingTwistConstraint_t * self,
  char** outErrMsg
);

void JoltC_SwingTwistConstraint_SetConstraintPriority(
  JoltC_SwingTwistConstraint_t * self,
  unsigned long inPriority,
  char** outErrMsg
);

void JoltC_SwingTwistConstraint_SetNumVelocityStepsOverride(
  JoltC_SwingTwistConstraint_t * self,
  long inN,
  char** outErrMsg
);

long JoltC_SwingTwistConstraint_GetNumVelocityStepsOverride(
  JoltC_SwingTwistConstraint_t * self,
  char** outErrMsg
);

void JoltC_SwingTwistConstraint_SetNumPositionStepsOverride(
  JoltC_SwingTwistConstraint_t * self,
  long inN,
  char** outErrMsg
);

long JoltC_SwingTwistConstraint_GetNumPositionStepsOverride(
  JoltC_SwingTwistConstraint_t * self,
  char** outErrMsg
);

void JoltC_SwingTwistConstraint_SetEnabled(
  JoltC_SwingTwistConstraint_t * self,
  bool inEnabled,
  char** outErrMsg
);

bool JoltC_SwingTwistConstraint_GetEnabled(
  JoltC_SwingTwistConstraint_t * self,
  char** outErrMsg
);

bool JoltC_SwingTwistConstraint_IsActive(
  JoltC_SwingTwistConstraint_t * self,
  char** outErrMsg
);

unsigned long long int JoltC_SwingTwistConstraint_GetUserData(
  JoltC_SwingTwistConstraint_t * self,
  char** outErrMsg
);

void JoltC_SwingTwistConstraint_SetUserData(
  JoltC_SwingTwistConstraint_t * self,
  unsigned long long int inUserData,
  char** outErrMsg
);

void JoltC_SwingTwistConstraint_ResetWarmStart(
  JoltC_SwingTwistConstraint_t * self,
  char** outErrMsg
);

//endregion functions


#ifdef __cplusplus
}
#endif

