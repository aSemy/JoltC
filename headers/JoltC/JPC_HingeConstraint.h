#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region functions

float JPC_HingeConstraint_GetCurrentAngle(
  JPC_HingeConstraint_t * self
);

void JPC_HingeConstraint_SetMaxFrictionTorque(
  JPC_HingeConstraint_t * self,
  float inFrictionTorque
);

float JPC_HingeConstraint_GetMaxFrictionTorque(
  JPC_HingeConstraint_t * self
);

JPC_MotorSettings_t * JPC_HingeConstraint_GetMotorSettings(
  JPC_HingeConstraint_t * self
);

void JPC_HingeConstraint_SetMotorState(
  JPC_HingeConstraint_t * self,
  JPC_EMotorState inState
);

JPC_EMotorState JPC_HingeConstraint_GetMotorState(
  JPC_HingeConstraint_t * self
);

void JPC_HingeConstraint_SetTargetAngularVelocity(
  JPC_HingeConstraint_t * self,
  float inAngularVelocity
);

float JPC_HingeConstraint_GetTargetAngularVelocity(
  JPC_HingeConstraint_t * self
);

void JPC_HingeConstraint_SetTargetAngle(
  JPC_HingeConstraint_t * self,
  float inAngle
);

float JPC_HingeConstraint_GetTargetAngle(
  JPC_HingeConstraint_t * self
);

void JPC_HingeConstraint_SetLimits(
  JPC_HingeConstraint_t * self,
  float inLimitsMin,
  float inLimitsMax
);

float JPC_HingeConstraint_GetLimitsMin(
  JPC_HingeConstraint_t * self
);

float JPC_HingeConstraint_GetLimitsMax(
  JPC_HingeConstraint_t * self
);

bool JPC_HingeConstraint_HasLimits(
  JPC_HingeConstraint_t * self
);

JPC_SpringSettings_t * JPC_HingeConstraint_GetLimitsSpringSettings(
  JPC_HingeConstraint_t * self
);

void JPC_HingeConstraint_SetLimitsSpringSettings(
  JPC_HingeConstraint_t * self,
  const JPC_SpringSettings_t * inLimitsSpringSettings
);

JPC_Vec3_t * JPC_HingeConstraint_GetTotalLambdaPosition(
  JPC_HingeConstraint_t * self
);

JPC_Vector2_t * JPC_HingeConstraint_GetTotalLambdaRotation(
  JPC_HingeConstraint_t * self
);

float JPC_HingeConstraint_GetTotalLambdaRotationLimits(
  JPC_HingeConstraint_t * self
);

float JPC_HingeConstraint_GetTotalLambdaMotor(
  JPC_HingeConstraint_t * self
);

JPC_Body_t * JPC_HingeConstraint_GetBody1(
  JPC_HingeConstraint_t * self
);

JPC_Body_t * JPC_HingeConstraint_GetBody2(
  JPC_HingeConstraint_t * self
);

JPC_Mat44_t * JPC_HingeConstraint_GetConstraintToBody1Matrix(
  JPC_HingeConstraint_t * self
);

JPC_Mat44_t * JPC_HingeConstraint_GetConstraintToBody2Matrix(
  JPC_HingeConstraint_t * self
);

unsigned long JPC_HingeConstraint_GetRefCount(
  JPC_HingeConstraint_t * self
);

void JPC_HingeConstraint_AddRef(
  JPC_HingeConstraint_t * self
);

void JPC_HingeConstraint_Release(
  JPC_HingeConstraint_t * self
);

JPC_EConstraintType JPC_HingeConstraint_GetType(
  JPC_HingeConstraint_t * self
);

JPC_EConstraintSubType JPC_HingeConstraint_GetSubType(
  JPC_HingeConstraint_t * self
);

unsigned long JPC_HingeConstraint_GetConstraintPriority(
  JPC_HingeConstraint_t * self
);

void JPC_HingeConstraint_SetConstraintPriority(
  JPC_HingeConstraint_t * self,
  unsigned long inPriority
);

void JPC_HingeConstraint_SetNumVelocityStepsOverride(
  JPC_HingeConstraint_t * self,
  long inN
);

long JPC_HingeConstraint_GetNumVelocityStepsOverride(
  JPC_HingeConstraint_t * self
);

void JPC_HingeConstraint_SetNumPositionStepsOverride(
  JPC_HingeConstraint_t * self,
  long inN
);

long JPC_HingeConstraint_GetNumPositionStepsOverride(
  JPC_HingeConstraint_t * self
);

void JPC_HingeConstraint_SetEnabled(
  JPC_HingeConstraint_t * self,
  bool inEnabled
);

bool JPC_HingeConstraint_GetEnabled(
  JPC_HingeConstraint_t * self
);

bool JPC_HingeConstraint_IsActive(
  JPC_HingeConstraint_t * self
);

unsigned long long int JPC_HingeConstraint_GetUserData(
  JPC_HingeConstraint_t * self
);

void JPC_HingeConstraint_SetUserData(
  JPC_HingeConstraint_t * self,
  unsigned long long int inUserData
);

void JPC_HingeConstraint_ResetWarmStart(
  JPC_HingeConstraint_t * self
);

//endregion functions


#ifdef __cplusplus
}
#endif

