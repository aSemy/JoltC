#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region functions

void JoltC_SixDOFConstraint_SetTranslationLimits(
  JoltC_SixDOFConstraint_t * self,
  JoltC_Vec3_t * inLimitMin,
  JoltC_Vec3_t * inLimitMax
);

void JoltC_SixDOFConstraint_SetRotationLimits(
  JoltC_SixDOFConstraint_t * self,
  JoltC_Vec3_t * inLimitMin,
  JoltC_Vec3_t * inLimitMax
);

float JoltC_SixDOFConstraint_GetLimitsMin(
  JoltC_SixDOFConstraint_t * self,
  JoltC_SixDOFConstraintSettings_EAxis inAxis
);

float JoltC_SixDOFConstraint_GetLimitsMax(
  JoltC_SixDOFConstraint_t * self,
  JoltC_SixDOFConstraintSettings_EAxis inAxis
);

JoltC_Vec3_t * JoltC_SixDOFConstraint_GetTranslationLimitsMin(
  JoltC_SixDOFConstraint_t * self
);

JoltC_Vec3_t * JoltC_SixDOFConstraint_GetTranslationLimitsMax(
  JoltC_SixDOFConstraint_t * self
);

JoltC_Vec3_t * JoltC_SixDOFConstraint_GetRotationLimitsMin(
  JoltC_SixDOFConstraint_t * self
);

JoltC_Vec3_t * JoltC_SixDOFConstraint_GetRotationLimitsMax(
  JoltC_SixDOFConstraint_t * self
);

bool JoltC_SixDOFConstraint_IsFixedAxis(
  JoltC_SixDOFConstraint_t * self,
  JoltC_SixDOFConstraintSettings_EAxis inAxis
);

bool JoltC_SixDOFConstraint_IsFreeAxis(
  JoltC_SixDOFConstraint_t * self,
  JoltC_SixDOFConstraintSettings_EAxis inAxis
);

JoltC_SpringSettings_t * JoltC_SixDOFConstraint_GetLimitsSpringSettings(
  JoltC_SixDOFConstraint_t * self,
  JoltC_SixDOFConstraintSettings_EAxis inAxis
);

void JoltC_SixDOFConstraint_SetLimitsSpringSettings(
  JoltC_SixDOFConstraint_t * self,
  JoltC_SixDOFConstraintSettings_EAxis inAxis,
  JoltC_SpringSettings_t * inLimitsSpringSettings
);

void JoltC_SixDOFConstraint_SetMaxFriction(
  JoltC_SixDOFConstraint_t * self,
  JoltC_SixDOFConstraintSettings_EAxis inAxis,
  float inFriction
);

float JoltC_SixDOFConstraint_GetMaxFriction(
  JoltC_SixDOFConstraint_t * self,
  JoltC_SixDOFConstraintSettings_EAxis inAxis
);

JoltC_Quat_t * JoltC_SixDOFConstraint_GetRotationInConstraintSpace(
  JoltC_SixDOFConstraint_t * self
);

JoltC_MotorSettings_t * JoltC_SixDOFConstraint_GetMotorSettings(
  JoltC_SixDOFConstraint_t * self,
  JoltC_SixDOFConstraintSettings_EAxis inAxis
);

void JoltC_SixDOFConstraint_SetMotorState(
  JoltC_SixDOFConstraint_t * self,
  JoltC_SixDOFConstraintSettings_EAxis inAxis,
  JoltC_EMotorState inState
);

JoltC_EMotorState JoltC_SixDOFConstraint_GetMotorState(
  JoltC_SixDOFConstraint_t * self,
  JoltC_SixDOFConstraintSettings_EAxis inAxis
);

JoltC_Vec3_t * JoltC_SixDOFConstraint_GetTargetVelocityCS(
  JoltC_SixDOFConstraint_t * self
);

void JoltC_SixDOFConstraint_SetTargetVelocityCS(
  JoltC_SixDOFConstraint_t * self,
  JoltC_Vec3_t * inVelocity
);

void JoltC_SixDOFConstraint_SetTargetAngularVelocityCS(
  JoltC_SixDOFConstraint_t * self,
  JoltC_Vec3_t * inAngularVelocity
);

JoltC_Vec3_t * JoltC_SixDOFConstraint_GetTargetAngularVelocityCS(
  JoltC_SixDOFConstraint_t * self
);

JoltC_Vec3_t * JoltC_SixDOFConstraint_GetTargetPositionCS(
  JoltC_SixDOFConstraint_t * self
);

void JoltC_SixDOFConstraint_SetTargetPositionCS(
  JoltC_SixDOFConstraint_t * self,
  JoltC_Vec3_t * inPosition
);

void JoltC_SixDOFConstraint_SetTargetOrientationCS(
  JoltC_SixDOFConstraint_t * self,
  JoltC_Quat_t * inOrientation
);

JoltC_Quat_t * JoltC_SixDOFConstraint_GetTargetOrientationCS(
  JoltC_SixDOFConstraint_t * self
);

void JoltC_SixDOFConstraint_SetTargetOrientationBS(
  JoltC_SixDOFConstraint_t * self,
  JoltC_Quat_t * inOrientation
);

JoltC_Vec3_t * JoltC_SixDOFConstraint_GetTotalLambdaPosition(
  JoltC_SixDOFConstraint_t * self
);

JoltC_Vec3_t * JoltC_SixDOFConstraint_GetTotalLambdaRotation(
  JoltC_SixDOFConstraint_t * self
);

JoltC_Vec3_t * JoltC_SixDOFConstraint_GetTotalLambdaMotorTranslation(
  JoltC_SixDOFConstraint_t * self
);

JoltC_Vec3_t * JoltC_SixDOFConstraint_GetTotalLambdaMotorRotation(
  JoltC_SixDOFConstraint_t * self
);

JoltC_Body_t * JoltC_SixDOFConstraint_GetBody1(
  JoltC_SixDOFConstraint_t * self
);

JoltC_Body_t * JoltC_SixDOFConstraint_GetBody2(
  JoltC_SixDOFConstraint_t * self
);

JoltC_Mat44_t * JoltC_SixDOFConstraint_GetConstraintToBody1Matrix(
  JoltC_SixDOFConstraint_t * self
);

JoltC_Mat44_t * JoltC_SixDOFConstraint_GetConstraintToBody2Matrix(
  JoltC_SixDOFConstraint_t * self
);

unsigned long JoltC_SixDOFConstraint_GetRefCount(
  JoltC_SixDOFConstraint_t * self
);

void JoltC_SixDOFConstraint_AddRef(
  JoltC_SixDOFConstraint_t * self
);

void JoltC_SixDOFConstraint_Release(
  JoltC_SixDOFConstraint_t * self
);

JoltC_EConstraintType JoltC_SixDOFConstraint_GetType(
  JoltC_SixDOFConstraint_t * self
);

JoltC_EConstraintSubType JoltC_SixDOFConstraint_GetSubType(
  JoltC_SixDOFConstraint_t * self
);

unsigned long JoltC_SixDOFConstraint_GetConstraintPriority(
  JoltC_SixDOFConstraint_t * self
);

void JoltC_SixDOFConstraint_SetConstraintPriority(
  JoltC_SixDOFConstraint_t * self,
  unsigned long inPriority
);

void JoltC_SixDOFConstraint_SetNumVelocityStepsOverride(
  JoltC_SixDOFConstraint_t * self,
  long inN
);

long JoltC_SixDOFConstraint_GetNumVelocityStepsOverride(
  JoltC_SixDOFConstraint_t * self
);

void JoltC_SixDOFConstraint_SetNumPositionStepsOverride(
  JoltC_SixDOFConstraint_t * self,
  long inN
);

long JoltC_SixDOFConstraint_GetNumPositionStepsOverride(
  JoltC_SixDOFConstraint_t * self
);

void JoltC_SixDOFConstraint_SetEnabled(
  JoltC_SixDOFConstraint_t * self,
  bool inEnabled
);

bool JoltC_SixDOFConstraint_GetEnabled(
  JoltC_SixDOFConstraint_t * self
);

bool JoltC_SixDOFConstraint_IsActive(
  JoltC_SixDOFConstraint_t * self
);

unsigned long long int JoltC_SixDOFConstraint_GetUserData(
  JoltC_SixDOFConstraint_t * self
);

void JoltC_SixDOFConstraint_SetUserData(
  JoltC_SixDOFConstraint_t * self,
  unsigned long long int inUserData
);

void JoltC_SixDOFConstraint_ResetWarmStart(
  JoltC_SixDOFConstraint_t * self
);

//endregion


#ifdef __cplusplus
}
#endif

