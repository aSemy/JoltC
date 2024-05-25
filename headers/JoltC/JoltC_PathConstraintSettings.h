#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_PathConstraintSettings_t * JoltC_PathConstraintSettings_new(
  char** outErrMsg
);

//endregion constructors

//region functions

JoltC_Constraint_t * JoltC_PathConstraintSettings_Create(
  JoltC_PathConstraintSettings_t * self,
  JoltC_Body_t * inBody1,
  JoltC_Body_t * inBody2,
  char** outErrMsg
);

unsigned long JoltC_PathConstraintSettings_GetRefCount(
  JoltC_PathConstraintSettings_t * self,
  char** outErrMsg
);

void JoltC_PathConstraintSettings_AddRef(
  JoltC_PathConstraintSettings_t * self,
  char** outErrMsg
);

void JoltC_PathConstraintSettings_Release(
  JoltC_PathConstraintSettings_t * self,
  char** outErrMsg
);

//endregion functions

//region properties

const JoltC_PathConstraintPath_t * JoltC_PathConstraintSettings_mPath_Get(
  JoltC_PathConstraintSettings_t * self,
  char** outErrMsg
);

const void JoltC_PathConstraintSettings_mPath_Set(
  JoltC_PathConstraintSettings_t * self,
  const JoltC_PathConstraintPath_t * mPath,
  char** outErrMsg
);

JoltC_Vec3_t * JoltC_PathConstraintSettings_mPathPosition_Get(
  JoltC_PathConstraintSettings_t * self,
  char** outErrMsg
);

void JoltC_PathConstraintSettings_mPathPosition_Set(
  JoltC_PathConstraintSettings_t * self,
  JoltC_Vec3_t * mPathPosition,
  char** outErrMsg
);

JoltC_Quat_t * JoltC_PathConstraintSettings_mPathRotation_Get(
  JoltC_PathConstraintSettings_t * self,
  char** outErrMsg
);

void JoltC_PathConstraintSettings_mPathRotation_Set(
  JoltC_PathConstraintSettings_t * self,
  JoltC_Quat_t * mPathRotation,
  char** outErrMsg
);

float JoltC_PathConstraintSettings_mPathFraction_Get(
  JoltC_PathConstraintSettings_t * self,
  char** outErrMsg
);

void JoltC_PathConstraintSettings_mPathFraction_Set(
  JoltC_PathConstraintSettings_t * self,
  float mPathFraction,
  char** outErrMsg
);

float JoltC_PathConstraintSettings_mMaxFrictionForce_Get(
  JoltC_PathConstraintSettings_t * self,
  char** outErrMsg
);

void JoltC_PathConstraintSettings_mMaxFrictionForce_Set(
  JoltC_PathConstraintSettings_t * self,
  float mMaxFrictionForce,
  char** outErrMsg
);

JoltC_EPathRotationConstraintType JoltC_PathConstraintSettings_mRotationConstraintType_Get(
  JoltC_PathConstraintSettings_t * self,
  char** outErrMsg
);

void JoltC_PathConstraintSettings_mRotationConstraintType_Set(
  JoltC_PathConstraintSettings_t * self,
  JoltC_EPathRotationConstraintType mRotationConstraintType,
  char** outErrMsg
);

JoltC_MotorSettings_t * JoltC_PathConstraintSettings_mPositionMotorSettings_Get(
  JoltC_PathConstraintSettings_t * self,
  char** outErrMsg
);

void JoltC_PathConstraintSettings_mPositionMotorSettings_Set(
  JoltC_PathConstraintSettings_t * self,
  JoltC_MotorSettings_t * mPositionMotorSettings,
  char** outErrMsg
);

bool JoltC_PathConstraintSettings_mEnabled_Get(
  JoltC_PathConstraintSettings_t * self,
  char** outErrMsg
);

void JoltC_PathConstraintSettings_mEnabled_Set(
  JoltC_PathConstraintSettings_t * self,
  bool mEnabled,
  char** outErrMsg
);

long JoltC_PathConstraintSettings_mNumVelocityStepsOverride_Get(
  JoltC_PathConstraintSettings_t * self,
  char** outErrMsg
);

void JoltC_PathConstraintSettings_mNumVelocityStepsOverride_Set(
  JoltC_PathConstraintSettings_t * self,
  long mNumVelocityStepsOverride,
  char** outErrMsg
);

long JoltC_PathConstraintSettings_mNumPositionStepsOverride_Get(
  JoltC_PathConstraintSettings_t * self,
  char** outErrMsg
);

void JoltC_PathConstraintSettings_mNumPositionStepsOverride_Set(
  JoltC_PathConstraintSettings_t * self,
  long mNumPositionStepsOverride,
  char** outErrMsg
);

//endregion properties


#ifdef __cplusplus
}
#endif

