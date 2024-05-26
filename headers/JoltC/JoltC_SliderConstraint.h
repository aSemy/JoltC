#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region functions

float JoltC_SliderConstraint_GetCurrentPosition(
  JoltC_SliderConstraint_t * self
);

void JoltC_SliderConstraint_SetMaxFrictionForce(
  JoltC_SliderConstraint_t * self,
  float inFrictionForce
);

float JoltC_SliderConstraint_GetMaxFrictionForce(
  JoltC_SliderConstraint_t * self
);

JoltC_MotorSettings_t * JoltC_SliderConstraint_GetMotorSettings(
  JoltC_SliderConstraint_t * self
);

void JoltC_SliderConstraint_SetMotorState(
  JoltC_SliderConstraint_t * self,
  JoltC_EMotorState inState
);

JoltC_EMotorState JoltC_SliderConstraint_GetMotorState(
  JoltC_SliderConstraint_t * self
);

void JoltC_SliderConstraint_SetTargetVelocity(
  JoltC_SliderConstraint_t * self,
  float inVelocity
);

float JoltC_SliderConstraint_GetTargetVelocity(
  JoltC_SliderConstraint_t * self
);

void JoltC_SliderConstraint_SetTargetPosition(
  JoltC_SliderConstraint_t * self,
  float inPosition
);

float JoltC_SliderConstraint_GetTargetPosition(
  JoltC_SliderConstraint_t * self
);

void JoltC_SliderConstraint_SetLimits(
  JoltC_SliderConstraint_t * self,
  float inLimitsMin,
  float inLimitsMax
);

float JoltC_SliderConstraint_GetLimitsMin(
  JoltC_SliderConstraint_t * self
);

float JoltC_SliderConstraint_GetLimitsMax(
  JoltC_SliderConstraint_t * self
);

bool JoltC_SliderConstraint_HasLimits(
  JoltC_SliderConstraint_t * self
);

JoltC_SpringSettings_t * JoltC_SliderConstraint_GetLimitsSpringSettings(
  JoltC_SliderConstraint_t * self
);

void JoltC_SliderConstraint_SetLimitsSpringSettings(
  JoltC_SliderConstraint_t * self,
  const JoltC_SpringSettings_t * inLimitsSpringSettings
);

JoltC_Vector2_t * JoltC_SliderConstraint_GetTotalLambdaPosition(
  JoltC_SliderConstraint_t * self
);

float JoltC_SliderConstraint_GetTotalLambdaPositionLimits(
  JoltC_SliderConstraint_t * self
);

JoltC_Vec3_t * JoltC_SliderConstraint_GetTotalLambdaRotation(
  JoltC_SliderConstraint_t * self
);

float JoltC_SliderConstraint_GetTotalLambdaMotor(
  JoltC_SliderConstraint_t * self
);

JoltC_Body_t * JoltC_SliderConstraint_GetBody1(
  JoltC_SliderConstraint_t * self
);

JoltC_Body_t * JoltC_SliderConstraint_GetBody2(
  JoltC_SliderConstraint_t * self
);

JoltC_Mat44_t * JoltC_SliderConstraint_GetConstraintToBody1Matrix(
  JoltC_SliderConstraint_t * self
);

JoltC_Mat44_t * JoltC_SliderConstraint_GetConstraintToBody2Matrix(
  JoltC_SliderConstraint_t * self
);

unsigned long JoltC_SliderConstraint_GetRefCount(
  JoltC_SliderConstraint_t * self
);

void JoltC_SliderConstraint_AddRef(
  JoltC_SliderConstraint_t * self
);

void JoltC_SliderConstraint_Release(
  JoltC_SliderConstraint_t * self
);

JoltC_EConstraintType JoltC_SliderConstraint_GetType(
  JoltC_SliderConstraint_t * self
);

JoltC_EConstraintSubType JoltC_SliderConstraint_GetSubType(
  JoltC_SliderConstraint_t * self
);

unsigned long JoltC_SliderConstraint_GetConstraintPriority(
  JoltC_SliderConstraint_t * self
);

void JoltC_SliderConstraint_SetConstraintPriority(
  JoltC_SliderConstraint_t * self,
  unsigned long inPriority
);

void JoltC_SliderConstraint_SetNumVelocityStepsOverride(
  JoltC_SliderConstraint_t * self,
  long inN
);

long JoltC_SliderConstraint_GetNumVelocityStepsOverride(
  JoltC_SliderConstraint_t * self
);

void JoltC_SliderConstraint_SetNumPositionStepsOverride(
  JoltC_SliderConstraint_t * self,
  long inN
);

long JoltC_SliderConstraint_GetNumPositionStepsOverride(
  JoltC_SliderConstraint_t * self
);

void JoltC_SliderConstraint_SetEnabled(
  JoltC_SliderConstraint_t * self,
  bool inEnabled
);

bool JoltC_SliderConstraint_GetEnabled(
  JoltC_SliderConstraint_t * self
);

bool JoltC_SliderConstraint_IsActive(
  JoltC_SliderConstraint_t * self
);

unsigned long long int JoltC_SliderConstraint_GetUserData(
  JoltC_SliderConstraint_t * self
);

void JoltC_SliderConstraint_SetUserData(
  JoltC_SliderConstraint_t * self,
  unsigned long long int inUserData
);

void JoltC_SliderConstraint_ResetWarmStart(
  JoltC_SliderConstraint_t * self
);

//endregion


#ifdef __cplusplus
}
#endif

