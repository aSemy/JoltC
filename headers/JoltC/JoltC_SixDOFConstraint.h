#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region functions

void JoltC_SixDOFConstraint_SetTranslationLimits(
  JoltC_SixDOFConstraint_t * self,
  const JoltC_Vec3_t * inLimitMin,
  const JoltC_Vec3_t * inLimitMax,
  char** outErrMsg
);

void JoltC_SixDOFConstraint_SetRotationLimits(
  JoltC_SixDOFConstraint_t * self,
  const JoltC_Vec3_t * inLimitMin,
  const JoltC_Vec3_t * inLimitMax,
  char** outErrMsg
);

float JoltC_SixDOFConstraint_GetLimitsMin(
  JoltC_SixDOFConstraint_t * self,
  JoltC_SixDOFConstraintSettings_EAxis inAxis,
  char** outErrMsg
);

float JoltC_SixDOFConstraint_GetLimitsMax(
  JoltC_SixDOFConstraint_t * self,
  JoltC_SixDOFConstraintSettings_EAxis inAxis,
  char** outErrMsg
);

const JoltC_Vec3_t * JoltC_SixDOFConstraint_GetTranslationLimitsMin(
  JoltC_SixDOFConstraint_t * self,
  char** outErrMsg
);

const JoltC_Vec3_t * JoltC_SixDOFConstraint_GetTranslationLimitsMax(
  JoltC_SixDOFConstraint_t * self,
  char** outErrMsg
);

const JoltC_Vec3_t * JoltC_SixDOFConstraint_GetRotationLimitsMin(
  JoltC_SixDOFConstraint_t * self,
  char** outErrMsg
);

const JoltC_Vec3_t * JoltC_SixDOFConstraint_GetRotationLimitsMax(
  JoltC_SixDOFConstraint_t * self,
  char** outErrMsg
);

bool JoltC_SixDOFConstraint_IsFixedAxis(
  JoltC_SixDOFConstraint_t * self,
  JoltC_SixDOFConstraintSettings_EAxis inAxis,
  char** outErrMsg
);

bool JoltC_SixDOFConstraint_IsFreeAxis(
  JoltC_SixDOFConstraint_t * self,
  JoltC_SixDOFConstraintSettings_EAxis inAxis,
  char** outErrMsg
);

const JoltC_SpringSettings_t * JoltC_SixDOFConstraint_GetLimitsSpringSettings(
  JoltC_SixDOFConstraint_t * self,
  JoltC_SixDOFConstraintSettings_EAxis inAxis,
  char** outErrMsg
);

void JoltC_SixDOFConstraint_SetLimitsSpringSettings(
  JoltC_SixDOFConstraint_t * self,
  JoltC_SixDOFConstraintSettings_EAxis inAxis,
  const JoltC_SpringSettings_t * inLimitsSpringSettings,
  char** outErrMsg
);

void JoltC_SixDOFConstraint_SetMaxFriction(
  JoltC_SixDOFConstraint_t * self,
  JoltC_SixDOFConstraintSettings_EAxis inAxis,
  float inFriction,
  char** outErrMsg
);

float JoltC_SixDOFConstraint_GetMaxFriction(
  JoltC_SixDOFConstraint_t * self,
  JoltC_SixDOFConstraintSettings_EAxis inAxis,
  char** outErrMsg
);

JoltC_Quat_t * JoltC_SixDOFConstraint_GetRotationInConstraintSpace(
  JoltC_SixDOFConstraint_t * self,
  char** outErrMsg
);

JoltC_MotorSettings_t * JoltC_SixDOFConstraint_GetMotorSettings(
  JoltC_SixDOFConstraint_t * self,
  JoltC_SixDOFConstraintSettings_EAxis inAxis,
  char** outErrMsg
);

void JoltC_SixDOFConstraint_SetMotorState(
  JoltC_SixDOFConstraint_t * self,
  JoltC_SixDOFConstraintSettings_EAxis inAxis,
  JoltC_EMotorState inState,
  char** outErrMsg
);

JoltC_EMotorState JoltC_SixDOFConstraint_GetMotorState(
  JoltC_SixDOFConstraint_t * self,
  JoltC_SixDOFConstraintSettings_EAxis inAxis,
  char** outErrMsg
);

JoltC_Vec3_t * JoltC_SixDOFConstraint_GetTargetVelocityCS(
  JoltC_SixDOFConstraint_t * self,
  char** outErrMsg
);

void JoltC_SixDOFConstraint_SetTargetVelocityCS(
  JoltC_SixDOFConstraint_t * self,
  const JoltC_Vec3_t * inVelocity,
  char** outErrMsg
);

void JoltC_SixDOFConstraint_SetTargetAngularVelocityCS(
  JoltC_SixDOFConstraint_t * self,
  const JoltC_Vec3_t * inAngularVelocity,
  char** outErrMsg
);

JoltC_Vec3_t * JoltC_SixDOFConstraint_GetTargetAngularVelocityCS(
  JoltC_SixDOFConstraint_t * self,
  char** outErrMsg
);

JoltC_Vec3_t * JoltC_SixDOFConstraint_GetTargetPositionCS(
  JoltC_SixDOFConstraint_t * self,
  char** outErrMsg
);

void JoltC_SixDOFConstraint_SetTargetPositionCS(
  JoltC_SixDOFConstraint_t * self,
  const JoltC_Vec3_t * inPosition,
  char** outErrMsg
);

void JoltC_SixDOFConstraint_SetTargetOrientationCS(
  JoltC_SixDOFConstraint_t * self,
  const JoltC_Quat_t * inOrientation,
  char** outErrMsg
);

JoltC_Quat_t * JoltC_SixDOFConstraint_GetTargetOrientationCS(
  JoltC_SixDOFConstraint_t * self,
  char** outErrMsg
);

void JoltC_SixDOFConstraint_SetTargetOrientationBS(
  JoltC_SixDOFConstraint_t * self,
  const JoltC_Quat_t * inOrientation,
  char** outErrMsg
);

JoltC_Vec3_t * JoltC_SixDOFConstraint_GetTotalLambdaPosition(
  JoltC_SixDOFConstraint_t * self,
  char** outErrMsg
);

JoltC_Vec3_t * JoltC_SixDOFConstraint_GetTotalLambdaRotation(
  JoltC_SixDOFConstraint_t * self,
  char** outErrMsg
);

JoltC_Vec3_t * JoltC_SixDOFConstraint_GetTotalLambdaMotorTranslation(
  JoltC_SixDOFConstraint_t * self,
  char** outErrMsg
);

JoltC_Vec3_t * JoltC_SixDOFConstraint_GetTotalLambdaMotorRotation(
  JoltC_SixDOFConstraint_t * self,
  char** outErrMsg
);

JoltC_Body_t * JoltC_SixDOFConstraint_GetBody1(
  JoltC_SixDOFConstraint_t * self,
  char** outErrMsg
);

JoltC_Body_t * JoltC_SixDOFConstraint_GetBody2(
  JoltC_SixDOFConstraint_t * self,
  char** outErrMsg
);

JoltC_Mat44_t * JoltC_SixDOFConstraint_GetConstraintToBody1Matrix(
  JoltC_SixDOFConstraint_t * self,
  char** outErrMsg
);

JoltC_Mat44_t * JoltC_SixDOFConstraint_GetConstraintToBody2Matrix(
  JoltC_SixDOFConstraint_t * self,
  char** outErrMsg
);

unsigned long JoltC_SixDOFConstraint_GetRefCount(
  JoltC_SixDOFConstraint_t * self,
  char** outErrMsg
);

void JoltC_SixDOFConstraint_AddRef(
  JoltC_SixDOFConstraint_t * self,
  char** outErrMsg
);

void JoltC_SixDOFConstraint_Release(
  JoltC_SixDOFConstraint_t * self,
  char** outErrMsg
);

JoltC_EConstraintType JoltC_SixDOFConstraint_GetType(
  JoltC_SixDOFConstraint_t * self,
  char** outErrMsg
);

JoltC_EConstraintSubType JoltC_SixDOFConstraint_GetSubType(
  JoltC_SixDOFConstraint_t * self,
  char** outErrMsg
);

unsigned long JoltC_SixDOFConstraint_GetConstraintPriority(
  JoltC_SixDOFConstraint_t * self,
  char** outErrMsg
);

void JoltC_SixDOFConstraint_SetConstraintPriority(
  JoltC_SixDOFConstraint_t * self,
  unsigned long inPriority,
  char** outErrMsg
);

void JoltC_SixDOFConstraint_SetNumVelocityStepsOverride(
  JoltC_SixDOFConstraint_t * self,
  long inN,
  char** outErrMsg
);

long JoltC_SixDOFConstraint_GetNumVelocityStepsOverride(
  JoltC_SixDOFConstraint_t * self,
  char** outErrMsg
);

void JoltC_SixDOFConstraint_SetNumPositionStepsOverride(
  JoltC_SixDOFConstraint_t * self,
  long inN,
  char** outErrMsg
);

long JoltC_SixDOFConstraint_GetNumPositionStepsOverride(
  JoltC_SixDOFConstraint_t * self,
  char** outErrMsg
);

void JoltC_SixDOFConstraint_SetEnabled(
  JoltC_SixDOFConstraint_t * self,
  bool inEnabled,
  char** outErrMsg
);

bool JoltC_SixDOFConstraint_GetEnabled(
  JoltC_SixDOFConstraint_t * self,
  char** outErrMsg
);

bool JoltC_SixDOFConstraint_IsActive(
  JoltC_SixDOFConstraint_t * self,
  char** outErrMsg
);

unsigned long long int JoltC_SixDOFConstraint_GetUserData(
  JoltC_SixDOFConstraint_t * self,
  char** outErrMsg
);

void JoltC_SixDOFConstraint_SetUserData(
  JoltC_SixDOFConstraint_t * self,
  unsigned long long int inUserData,
  char** outErrMsg
);

void JoltC_SixDOFConstraint_ResetWarmStart(
  JoltC_SixDOFConstraint_t * self,
  char** outErrMsg
);

//endregion functions


#ifdef __cplusplus
}
#endif
