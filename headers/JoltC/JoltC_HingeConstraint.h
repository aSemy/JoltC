#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region functions

float JoltC_HingeConstraint_GetCurrentAngle(
  JoltC_HingeConstraint_t * self
);

void JoltC_HingeConstraint_SetMaxFrictionTorque(
  JoltC_HingeConstraint_t * self,
  float inFrictionTorque
);

float JoltC_HingeConstraint_GetMaxFrictionTorque(
  JoltC_HingeConstraint_t * self
);

JoltC_MotorSettings_t * JoltC_HingeConstraint_GetMotorSettings(
  JoltC_HingeConstraint_t * self
);

void JoltC_HingeConstraint_SetMotorState(
  JoltC_HingeConstraint_t * self,
  JoltC_EMotorState inState
);

JoltC_EMotorState JoltC_HingeConstraint_GetMotorState(
  JoltC_HingeConstraint_t * self
);

void JoltC_HingeConstraint_SetTargetAngularVelocity(
  JoltC_HingeConstraint_t * self,
  float inAngularVelocity
);

float JoltC_HingeConstraint_GetTargetAngularVelocity(
  JoltC_HingeConstraint_t * self
);

void JoltC_HingeConstraint_SetTargetAngle(
  JoltC_HingeConstraint_t * self,
  float inAngle
);

float JoltC_HingeConstraint_GetTargetAngle(
  JoltC_HingeConstraint_t * self
);

void JoltC_HingeConstraint_SetLimits(
  JoltC_HingeConstraint_t * self,
  float inLimitsMin,
  float inLimitsMax
);

float JoltC_HingeConstraint_GetLimitsMin(
  JoltC_HingeConstraint_t * self
);

float JoltC_HingeConstraint_GetLimitsMax(
  JoltC_HingeConstraint_t * self
);

bool JoltC_HingeConstraint_HasLimits(
  JoltC_HingeConstraint_t * self
);

JoltC_SpringSettings_t * JoltC_HingeConstraint_GetLimitsSpringSettings(
  JoltC_HingeConstraint_t * self
);

void JoltC_HingeConstraint_SetLimitsSpringSettings(
  JoltC_HingeConstraint_t * self,
  JoltC_SpringSettings_t * inLimitsSpringSettings
);

JoltC_Vec3_t * JoltC_HingeConstraint_GetTotalLambdaPosition(
  JoltC_HingeConstraint_t * self
);

JoltC_Vector2_t * JoltC_HingeConstraint_GetTotalLambdaRotation(
  JoltC_HingeConstraint_t * self
);

float JoltC_HingeConstraint_GetTotalLambdaRotationLimits(
  JoltC_HingeConstraint_t * self
);

float JoltC_HingeConstraint_GetTotalLambdaMotor(
  JoltC_HingeConstraint_t * self
);

JoltC_Body_t * JoltC_HingeConstraint_GetBody1(
  JoltC_HingeConstraint_t * self
);

JoltC_Body_t * JoltC_HingeConstraint_GetBody2(
  JoltC_HingeConstraint_t * self
);

JoltC_Mat44_t * JoltC_HingeConstraint_GetConstraintToBody1Matrix(
  JoltC_HingeConstraint_t * self
);

JoltC_Mat44_t * JoltC_HingeConstraint_GetConstraintToBody2Matrix(
  JoltC_HingeConstraint_t * self
);

unsigned long JoltC_HingeConstraint_GetRefCount(
  JoltC_HingeConstraint_t * self
);

void JoltC_HingeConstraint_AddRef(
  JoltC_HingeConstraint_t * self
);

void JoltC_HingeConstraint_Release(
  JoltC_HingeConstraint_t * self
);

JoltC_EConstraintType JoltC_HingeConstraint_GetType(
  JoltC_HingeConstraint_t * self
);

JoltC_EConstraintSubType JoltC_HingeConstraint_GetSubType(
  JoltC_HingeConstraint_t * self
);

unsigned long JoltC_HingeConstraint_GetConstraintPriority(
  JoltC_HingeConstraint_t * self
);

void JoltC_HingeConstraint_SetConstraintPriority(
  JoltC_HingeConstraint_t * self,
  unsigned long inPriority
);

void JoltC_HingeConstraint_SetNumVelocityStepsOverride(
  JoltC_HingeConstraint_t * self,
  long inN
);

long JoltC_HingeConstraint_GetNumVelocityStepsOverride(
  JoltC_HingeConstraint_t * self
);

void JoltC_HingeConstraint_SetNumPositionStepsOverride(
  JoltC_HingeConstraint_t * self,
  long inN
);

long JoltC_HingeConstraint_GetNumPositionStepsOverride(
  JoltC_HingeConstraint_t * self
);

void JoltC_HingeConstraint_SetEnabled(
  JoltC_HingeConstraint_t * self,
  bool inEnabled
);

bool JoltC_HingeConstraint_GetEnabled(
  JoltC_HingeConstraint_t * self
);

bool JoltC_HingeConstraint_IsActive(
  JoltC_HingeConstraint_t * self
);

unsigned long long int JoltC_HingeConstraint_GetUserData(
  JoltC_HingeConstraint_t * self
);

void JoltC_HingeConstraint_SetUserData(
  JoltC_HingeConstraint_t * self,
  unsigned long long int inUserData
);

void JoltC_HingeConstraint_ResetWarmStart(
  JoltC_HingeConstraint_t * self
);

//endregion


#ifdef __cplusplus
}
#endif

