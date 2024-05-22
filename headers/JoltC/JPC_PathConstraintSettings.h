#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JPC_PathConstraintSettings_t * JPC_PathConstraintSettings_new();

//endregion constructors

//region functions

JPC_Constraint_t * JPC_PathConstraintSettings_Create(
  JPC_PathConstraintSettings_t * self,
  JPC_Body_t * inBody1,
  JPC_Body_t * inBody2
);

unsigned long JPC_PathConstraintSettings_GetRefCount(
  JPC_PathConstraintSettings_t * self
);

void JPC_PathConstraintSettings_AddRef(
  JPC_PathConstraintSettings_t * self
);

void JPC_PathConstraintSettings_Release(
  JPC_PathConstraintSettings_t * self
);

//endregion functions

//region properties

const JPC_PathConstraintPath_t * JPC_PathConstraintSettings_mPath_Get(
  JPC_PathConstraintSettings_t * self
);

const void JPC_PathConstraintSettings_mPath_Set(
  JPC_PathConstraintSettings_t * self,
  const JPC_PathConstraintPath_t * mPath
);

JPC_Vec3_t * JPC_PathConstraintSettings_mPathPosition_Get(
  JPC_PathConstraintSettings_t * self
);

void JPC_PathConstraintSettings_mPathPosition_Set(
  JPC_PathConstraintSettings_t * self,
  JPC_Vec3_t * mPathPosition
);

JPC_Quat_t * JPC_PathConstraintSettings_mPathRotation_Get(
  JPC_PathConstraintSettings_t * self
);

void JPC_PathConstraintSettings_mPathRotation_Set(
  JPC_PathConstraintSettings_t * self,
  JPC_Quat_t * mPathRotation
);

float JPC_PathConstraintSettings_mPathFraction_Get(
  JPC_PathConstraintSettings_t * self
);

void JPC_PathConstraintSettings_mPathFraction_Set(
  JPC_PathConstraintSettings_t * self,
  float mPathFraction
);

float JPC_PathConstraintSettings_mMaxFrictionForce_Get(
  JPC_PathConstraintSettings_t * self
);

void JPC_PathConstraintSettings_mMaxFrictionForce_Set(
  JPC_PathConstraintSettings_t * self,
  float mMaxFrictionForce
);

JPC_EPathRotationConstraintType JPC_PathConstraintSettings_mRotationConstraintType_Get(
  JPC_PathConstraintSettings_t * self
);

void JPC_PathConstraintSettings_mRotationConstraintType_Set(
  JPC_PathConstraintSettings_t * self,
  JPC_EPathRotationConstraintType mRotationConstraintType
);

JPC_MotorSettings_t * JPC_PathConstraintSettings_mPositionMotorSettings_Get(
  JPC_PathConstraintSettings_t * self
);

void JPC_PathConstraintSettings_mPositionMotorSettings_Set(
  JPC_PathConstraintSettings_t * self,
  JPC_MotorSettings_t * mPositionMotorSettings
);

bool JPC_PathConstraintSettings_mEnabled_Get(
  JPC_PathConstraintSettings_t * self
);

void JPC_PathConstraintSettings_mEnabled_Set(
  JPC_PathConstraintSettings_t * self,
  bool mEnabled
);

long JPC_PathConstraintSettings_mNumVelocityStepsOverride_Get(
  JPC_PathConstraintSettings_t * self
);

void JPC_PathConstraintSettings_mNumVelocityStepsOverride_Set(
  JPC_PathConstraintSettings_t * self,
  long mNumVelocityStepsOverride
);

long JPC_PathConstraintSettings_mNumPositionStepsOverride_Get(
  JPC_PathConstraintSettings_t * self
);

void JPC_PathConstraintSettings_mNumPositionStepsOverride_Set(
  JPC_PathConstraintSettings_t * self,
  long mNumPositionStepsOverride
);

//endregion properties


#ifdef __cplusplus
}
#endif

