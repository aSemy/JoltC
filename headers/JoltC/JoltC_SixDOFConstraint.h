#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region functions

void JPC_SixDOFConstraint_SetTranslationLimits(
  JPC_SixDOFConstraint_t * self,
  const JPC_Vec3_t * inLimitMin,
  const JPC_Vec3_t * inLimitMax
);

void JPC_SixDOFConstraint_SetRotationLimits(
  JPC_SixDOFConstraint_t * self,
  const JPC_Vec3_t * inLimitMin,
  const JPC_Vec3_t * inLimitMax
);

float JPC_SixDOFConstraint_GetLimitsMin(
  JPC_SixDOFConstraint_t * self,
  JPC_SixDOFConstraintSettings_EAxis inAxis
);

float JPC_SixDOFConstraint_GetLimitsMax(
  JPC_SixDOFConstraint_t * self,
  JPC_SixDOFConstraintSettings_EAxis inAxis
);

const JPC_Vec3_t * JPC_SixDOFConstraint_GetTranslationLimitsMin(
  JPC_SixDOFConstraint_t * self
);

const JPC_Vec3_t * JPC_SixDOFConstraint_GetTranslationLimitsMax(
  JPC_SixDOFConstraint_t * self
);

const JPC_Vec3_t * JPC_SixDOFConstraint_GetRotationLimitsMin(
  JPC_SixDOFConstraint_t * self
);

const JPC_Vec3_t * JPC_SixDOFConstraint_GetRotationLimitsMax(
  JPC_SixDOFConstraint_t * self
);

bool JPC_SixDOFConstraint_IsFixedAxis(
  JPC_SixDOFConstraint_t * self,
  JPC_SixDOFConstraintSettings_EAxis inAxis
);

bool JPC_SixDOFConstraint_IsFreeAxis(
  JPC_SixDOFConstraint_t * self,
  JPC_SixDOFConstraintSettings_EAxis inAxis
);

const JPC_SpringSettings_t * JPC_SixDOFConstraint_GetLimitsSpringSettings(
  JPC_SixDOFConstraint_t * self,
  JPC_SixDOFConstraintSettings_EAxis inAxis
);

void JPC_SixDOFConstraint_SetLimitsSpringSettings(
  JPC_SixDOFConstraint_t * self,
  JPC_SixDOFConstraintSettings_EAxis inAxis,
  const JPC_SpringSettings_t * inLimitsSpringSettings
);

void JPC_SixDOFConstraint_SetMaxFriction(
  JPC_SixDOFConstraint_t * self,
  JPC_SixDOFConstraintSettings_EAxis inAxis,
  float inFriction
);

float JPC_SixDOFConstraint_GetMaxFriction(
  JPC_SixDOFConstraint_t * self,
  JPC_SixDOFConstraintSettings_EAxis inAxis
);

JPC_Quat_t * JPC_SixDOFConstraint_GetRotationInConstraintSpace(
  JPC_SixDOFConstraint_t * self
);

JPC_MotorSettings_t * JPC_SixDOFConstraint_GetMotorSettings(
  JPC_SixDOFConstraint_t * self,
  JPC_SixDOFConstraintSettings_EAxis inAxis
);

void JPC_SixDOFConstraint_SetMotorState(
  JPC_SixDOFConstraint_t * self,
  JPC_SixDOFConstraintSettings_EAxis inAxis,
  JPC_EMotorState inState
);

JPC_EMotorState JPC_SixDOFConstraint_GetMotorState(
  JPC_SixDOFConstraint_t * self,
  JPC_SixDOFConstraintSettings_EAxis inAxis
);

JPC_Vec3_t * JPC_SixDOFConstraint_GetTargetVelocityCS(
  JPC_SixDOFConstraint_t * self
);

void JPC_SixDOFConstraint_SetTargetVelocityCS(
  JPC_SixDOFConstraint_t * self,
  const JPC_Vec3_t * inVelocity
);

void JPC_SixDOFConstraint_SetTargetAngularVelocityCS(
  JPC_SixDOFConstraint_t * self,
  const JPC_Vec3_t * inAngularVelocity
);

JPC_Vec3_t * JPC_SixDOFConstraint_GetTargetAngularVelocityCS(
  JPC_SixDOFConstraint_t * self
);

JPC_Vec3_t * JPC_SixDOFConstraint_GetTargetPositionCS(
  JPC_SixDOFConstraint_t * self
);

void JPC_SixDOFConstraint_SetTargetPositionCS(
  JPC_SixDOFConstraint_t * self,
  const JPC_Vec3_t * inPosition
);

void JPC_SixDOFConstraint_SetTargetOrientationCS(
  JPC_SixDOFConstraint_t * self,
  const JPC_Quat_t * inOrientation
);

JPC_Quat_t * JPC_SixDOFConstraint_GetTargetOrientationCS(
  JPC_SixDOFConstraint_t * self
);

void JPC_SixDOFConstraint_SetTargetOrientationBS(
  JPC_SixDOFConstraint_t * self,
  const JPC_Quat_t * inOrientation
);

JPC_Vec3_t * JPC_SixDOFConstraint_GetTotalLambdaPosition(
  JPC_SixDOFConstraint_t * self
);

JPC_Vec3_t * JPC_SixDOFConstraint_GetTotalLambdaRotation(
  JPC_SixDOFConstraint_t * self
);

JPC_Vec3_t * JPC_SixDOFConstraint_GetTotalLambdaMotorTranslation(
  JPC_SixDOFConstraint_t * self
);

JPC_Vec3_t * JPC_SixDOFConstraint_GetTotalLambdaMotorRotation(
  JPC_SixDOFConstraint_t * self
);

JPC_Body_t * JPC_SixDOFConstraint_GetBody1(
  JPC_SixDOFConstraint_t * self
);

JPC_Body_t * JPC_SixDOFConstraint_GetBody2(
  JPC_SixDOFConstraint_t * self
);

JPC_Mat44_t * JPC_SixDOFConstraint_GetConstraintToBody1Matrix(
  JPC_SixDOFConstraint_t * self
);

JPC_Mat44_t * JPC_SixDOFConstraint_GetConstraintToBody2Matrix(
  JPC_SixDOFConstraint_t * self
);

unsigned long JPC_SixDOFConstraint_GetRefCount(
  JPC_SixDOFConstraint_t * self
);

void JPC_SixDOFConstraint_AddRef(
  JPC_SixDOFConstraint_t * self
);

void JPC_SixDOFConstraint_Release(
  JPC_SixDOFConstraint_t * self
);

JPC_EConstraintType JPC_SixDOFConstraint_GetType(
  JPC_SixDOFConstraint_t * self
);

JPC_EConstraintSubType JPC_SixDOFConstraint_GetSubType(
  JPC_SixDOFConstraint_t * self
);

unsigned long JPC_SixDOFConstraint_GetConstraintPriority(
  JPC_SixDOFConstraint_t * self
);

void JPC_SixDOFConstraint_SetConstraintPriority(
  JPC_SixDOFConstraint_t * self,
  unsigned long inPriority
);

void JPC_SixDOFConstraint_SetNumVelocityStepsOverride(
  JPC_SixDOFConstraint_t * self,
  long inN
);

long JPC_SixDOFConstraint_GetNumVelocityStepsOverride(
  JPC_SixDOFConstraint_t * self
);

void JPC_SixDOFConstraint_SetNumPositionStepsOverride(
  JPC_SixDOFConstraint_t * self,
  long inN
);

long JPC_SixDOFConstraint_GetNumPositionStepsOverride(
  JPC_SixDOFConstraint_t * self
);

void JPC_SixDOFConstraint_SetEnabled(
  JPC_SixDOFConstraint_t * self,
  bool inEnabled
);

bool JPC_SixDOFConstraint_GetEnabled(
  JPC_SixDOFConstraint_t * self
);

bool JPC_SixDOFConstraint_IsActive(
  JPC_SixDOFConstraint_t * self
);

unsigned long long int JPC_SixDOFConstraint_GetUserData(
  JPC_SixDOFConstraint_t * self
);

void JPC_SixDOFConstraint_SetUserData(
  JPC_SixDOFConstraint_t * self,
  unsigned long long int inUserData
);

void JPC_SixDOFConstraint_ResetWarmStart(
  JPC_SixDOFConstraint_t * self
);

//endregion functions


#ifdef __cplusplus
}
#endif

