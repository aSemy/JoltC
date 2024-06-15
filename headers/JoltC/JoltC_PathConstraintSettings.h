#pragma once
#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_PathConstraintSettings_t * JoltC_PathConstraintSettings_new();

//endregion

//region destructor

void JoltC_PathConstraintSettings_destroy(
  JoltC_PathConstraintSettings_t * self
);

//endregion
//region functions

JoltC_Constraint_t * JoltC_PathConstraintSettings_Create(
  JoltC_PathConstraintSettings_t * self,
  JoltC_Body_t * inBody1,
  JoltC_Body_t * inBody2
);

unsigned long JoltC_PathConstraintSettings_GetRefCount(
  JoltC_PathConstraintSettings_t * self
);

void JoltC_PathConstraintSettings_AddRef(
  JoltC_PathConstraintSettings_t * self
);

void JoltC_PathConstraintSettings_Release(
  JoltC_PathConstraintSettings_t * self
);

//endregion

//region properties

JoltC_PathConstraintPath_t * JoltC_PathConstraintSettings_mPath_Get(
  JoltC_PathConstraintSettings_t * self
);

void JoltC_PathConstraintSettings_mPath_Set(
  JoltC_PathConstraintSettings_t * self,
  JoltC_PathConstraintPath_t * mPath
);

JoltC_Vec3_t * JoltC_PathConstraintSettings_mPathPosition_Get(
  JoltC_PathConstraintSettings_t * self
);

void JoltC_PathConstraintSettings_mPathPosition_Set(
  JoltC_PathConstraintSettings_t * self,
  JoltC_Vec3_t * mPathPosition
);

JoltC_Quat_t * JoltC_PathConstraintSettings_mPathRotation_Get(
  JoltC_PathConstraintSettings_t * self
);

void JoltC_PathConstraintSettings_mPathRotation_Set(
  JoltC_PathConstraintSettings_t * self,
  JoltC_Quat_t * mPathRotation
);

float JoltC_PathConstraintSettings_mPathFraction_Get(
  JoltC_PathConstraintSettings_t * self
);

void JoltC_PathConstraintSettings_mPathFraction_Set(
  JoltC_PathConstraintSettings_t * self,
  float mPathFraction
);

float JoltC_PathConstraintSettings_mMaxFrictionForce_Get(
  JoltC_PathConstraintSettings_t * self
);

void JoltC_PathConstraintSettings_mMaxFrictionForce_Set(
  JoltC_PathConstraintSettings_t * self,
  float mMaxFrictionForce
);

JoltC_EPathRotationConstraintType JoltC_PathConstraintSettings_mRotationConstraintType_Get(
  JoltC_PathConstraintSettings_t * self
);

void JoltC_PathConstraintSettings_mRotationConstraintType_Set(
  JoltC_PathConstraintSettings_t * self,
  JoltC_EPathRotationConstraintType mRotationConstraintType
);

JoltC_MotorSettings_t * JoltC_PathConstraintSettings_mPositionMotorSettings_Get(
  JoltC_PathConstraintSettings_t * self
);

void JoltC_PathConstraintSettings_mPositionMotorSettings_Set(
  JoltC_PathConstraintSettings_t * self,
  JoltC_MotorSettings_t * mPositionMotorSettings
);

bool JoltC_PathConstraintSettings_mEnabled_Get(
  JoltC_PathConstraintSettings_t * self
);

void JoltC_PathConstraintSettings_mEnabled_Set(
  JoltC_PathConstraintSettings_t * self,
  bool mEnabled
);

long JoltC_PathConstraintSettings_mNumVelocityStepsOverride_Get(
  JoltC_PathConstraintSettings_t * self
);

void JoltC_PathConstraintSettings_mNumVelocityStepsOverride_Set(
  JoltC_PathConstraintSettings_t * self,
  long mNumVelocityStepsOverride
);

long JoltC_PathConstraintSettings_mNumPositionStepsOverride_Get(
  JoltC_PathConstraintSettings_t * self
);

void JoltC_PathConstraintSettings_mNumPositionStepsOverride_Set(
  JoltC_PathConstraintSettings_t * self,
  long mNumPositionStepsOverride
);

//endregion


#ifdef __cplusplus
}
#endif
