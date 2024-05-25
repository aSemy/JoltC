#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region functions

float JPC_SliderConstraint_GetCurrentPosition(
  JPC_SliderConstraint_t * self
);

void JPC_SliderConstraint_SetMaxFrictionForce(
  JPC_SliderConstraint_t * self,
  float inFrictionForce
);

float JPC_SliderConstraint_GetMaxFrictionForce(
  JPC_SliderConstraint_t * self
);

JPC_MotorSettings_t * JPC_SliderConstraint_GetMotorSettings(
  JPC_SliderConstraint_t * self
);

void JPC_SliderConstraint_SetMotorState(
  JPC_SliderConstraint_t * self,
  JPC_EMotorState inState
);

JPC_EMotorState JPC_SliderConstraint_GetMotorState(
  JPC_SliderConstraint_t * self
);

void JPC_SliderConstraint_SetTargetVelocity(
  JPC_SliderConstraint_t * self,
  float inVelocity
);

float JPC_SliderConstraint_GetTargetVelocity(
  JPC_SliderConstraint_t * self
);

void JPC_SliderConstraint_SetTargetPosition(
  JPC_SliderConstraint_t * self,
  float inPosition
);

float JPC_SliderConstraint_GetTargetPosition(
  JPC_SliderConstraint_t * self
);

void JPC_SliderConstraint_SetLimits(
  JPC_SliderConstraint_t * self,
  float inLimitsMin,
  float inLimitsMax
);

float JPC_SliderConstraint_GetLimitsMin(
  JPC_SliderConstraint_t * self
);

float JPC_SliderConstraint_GetLimitsMax(
  JPC_SliderConstraint_t * self
);

bool JPC_SliderConstraint_HasLimits(
  JPC_SliderConstraint_t * self
);

JPC_SpringSettings_t * JPC_SliderConstraint_GetLimitsSpringSettings(
  JPC_SliderConstraint_t * self
);

void JPC_SliderConstraint_SetLimitsSpringSettings(
  JPC_SliderConstraint_t * self,
  const JPC_SpringSettings_t * inLimitsSpringSettings
);

JPC_Vector2_t * JPC_SliderConstraint_GetTotalLambdaPosition(
  JPC_SliderConstraint_t * self
);

float JPC_SliderConstraint_GetTotalLambdaPositionLimits(
  JPC_SliderConstraint_t * self
);

JPC_Vec3_t * JPC_SliderConstraint_GetTotalLambdaRotation(
  JPC_SliderConstraint_t * self
);

float JPC_SliderConstraint_GetTotalLambdaMotor(
  JPC_SliderConstraint_t * self
);

JPC_Body_t * JPC_SliderConstraint_GetBody1(
  JPC_SliderConstraint_t * self
);

JPC_Body_t * JPC_SliderConstraint_GetBody2(
  JPC_SliderConstraint_t * self
);

JPC_Mat44_t * JPC_SliderConstraint_GetConstraintToBody1Matrix(
  JPC_SliderConstraint_t * self
);

JPC_Mat44_t * JPC_SliderConstraint_GetConstraintToBody2Matrix(
  JPC_SliderConstraint_t * self
);

unsigned long JPC_SliderConstraint_GetRefCount(
  JPC_SliderConstraint_t * self
);

void JPC_SliderConstraint_AddRef(
  JPC_SliderConstraint_t * self
);

void JPC_SliderConstraint_Release(
  JPC_SliderConstraint_t * self
);

JPC_EConstraintType JPC_SliderConstraint_GetType(
  JPC_SliderConstraint_t * self
);

JPC_EConstraintSubType JPC_SliderConstraint_GetSubType(
  JPC_SliderConstraint_t * self
);

unsigned long JPC_SliderConstraint_GetConstraintPriority(
  JPC_SliderConstraint_t * self
);

void JPC_SliderConstraint_SetConstraintPriority(
  JPC_SliderConstraint_t * self,
  unsigned long inPriority
);

void JPC_SliderConstraint_SetNumVelocityStepsOverride(
  JPC_SliderConstraint_t * self,
  long inN
);

long JPC_SliderConstraint_GetNumVelocityStepsOverride(
  JPC_SliderConstraint_t * self
);

void JPC_SliderConstraint_SetNumPositionStepsOverride(
  JPC_SliderConstraint_t * self,
  long inN
);

long JPC_SliderConstraint_GetNumPositionStepsOverride(
  JPC_SliderConstraint_t * self
);

void JPC_SliderConstraint_SetEnabled(
  JPC_SliderConstraint_t * self,
  bool inEnabled
);

bool JPC_SliderConstraint_GetEnabled(
  JPC_SliderConstraint_t * self
);

bool JPC_SliderConstraint_IsActive(
  JPC_SliderConstraint_t * self
);

unsigned long long int JPC_SliderConstraint_GetUserData(
  JPC_SliderConstraint_t * self
);

void JPC_SliderConstraint_SetUserData(
  JPC_SliderConstraint_t * self,
  unsigned long long int inUserData
);

void JPC_SliderConstraint_ResetWarmStart(
  JPC_SliderConstraint_t * self
);

//endregion functions


#ifdef __cplusplus
}
#endif

