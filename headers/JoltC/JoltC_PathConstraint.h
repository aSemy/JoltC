#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region functions

void JoltC_PathConstraint_SetPath(
  JoltC_PathConstraint_t * self,
  JoltC_PathConstraintPath_t * inPath,
  float inPathFraction
);

JoltC_PathConstraintPath_t * JoltC_PathConstraint_GetPath(
  JoltC_PathConstraint_t * self
);

float JoltC_PathConstraint_GetPathFraction(
  JoltC_PathConstraint_t * self
);

void JoltC_PathConstraint_SetMaxFrictionForce(
  JoltC_PathConstraint_t * self,
  float inFrictionForce
);

float JoltC_PathConstraint_GetMaxFrictionForce(
  JoltC_PathConstraint_t * self
);

JoltC_MotorSettings_t * JoltC_PathConstraint_GetPositionMotorSettings(
  JoltC_PathConstraint_t * self
);

void JoltC_PathConstraint_SetPositionMotorState(
  JoltC_PathConstraint_t * self,
  JoltC_EMotorState inState
);

JoltC_EMotorState JoltC_PathConstraint_GetPositionMotorState(
  JoltC_PathConstraint_t * self
);

void JoltC_PathConstraint_SetTargetVelocity(
  JoltC_PathConstraint_t * self,
  float inVelocity
);

float JoltC_PathConstraint_GetTargetVelocity(
  JoltC_PathConstraint_t * self
);

void JoltC_PathConstraint_SetTargetPathFraction(
  JoltC_PathConstraint_t * self,
  float inFraction
);

float JoltC_PathConstraint_GetTargetPathFraction(
  JoltC_PathConstraint_t * self
);

JoltC_Body_t * JoltC_PathConstraint_GetBody1(
  JoltC_PathConstraint_t * self
);

JoltC_Body_t * JoltC_PathConstraint_GetBody2(
  JoltC_PathConstraint_t * self
);

JoltC_Mat44_t * JoltC_PathConstraint_GetConstraintToBody1Matrix(
  JoltC_PathConstraint_t * self
);

JoltC_Mat44_t * JoltC_PathConstraint_GetConstraintToBody2Matrix(
  JoltC_PathConstraint_t * self
);

unsigned long JoltC_PathConstraint_GetRefCount(
  JoltC_PathConstraint_t * self
);

void JoltC_PathConstraint_AddRef(
  JoltC_PathConstraint_t * self
);

void JoltC_PathConstraint_Release(
  JoltC_PathConstraint_t * self
);

JoltC_EConstraintType JoltC_PathConstraint_GetType(
  JoltC_PathConstraint_t * self
);

JoltC_EConstraintSubType JoltC_PathConstraint_GetSubType(
  JoltC_PathConstraint_t * self
);

unsigned long JoltC_PathConstraint_GetConstraintPriority(
  JoltC_PathConstraint_t * self
);

void JoltC_PathConstraint_SetConstraintPriority(
  JoltC_PathConstraint_t * self,
  unsigned long inPriority
);

void JoltC_PathConstraint_SetNumVelocityStepsOverride(
  JoltC_PathConstraint_t * self,
  long inN
);

long JoltC_PathConstraint_GetNumVelocityStepsOverride(
  JoltC_PathConstraint_t * self
);

void JoltC_PathConstraint_SetNumPositionStepsOverride(
  JoltC_PathConstraint_t * self,
  long inN
);

long JoltC_PathConstraint_GetNumPositionStepsOverride(
  JoltC_PathConstraint_t * self
);

void JoltC_PathConstraint_SetEnabled(
  JoltC_PathConstraint_t * self,
  bool inEnabled
);

bool JoltC_PathConstraint_GetEnabled(
  JoltC_PathConstraint_t * self
);

bool JoltC_PathConstraint_IsActive(
  JoltC_PathConstraint_t * self
);

unsigned long long int JoltC_PathConstraint_GetUserData(
  JoltC_PathConstraint_t * self
);

void JoltC_PathConstraint_SetUserData(
  JoltC_PathConstraint_t * self,
  unsigned long long int inUserData
);

void JoltC_PathConstraint_ResetWarmStart(
  JoltC_PathConstraint_t * self
);

//endregion


#ifdef __cplusplus
}
#endif

