#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region functions

void JPC_PathConstraint_SetPath(
  JPC_PathConstraint_t * self,
  const JPC_PathConstraintPath_t * inPath,
  float inPathFraction
);

const JPC_PathConstraintPath_t * JPC_PathConstraint_GetPath(
  JPC_PathConstraint_t * self
);

float JPC_PathConstraint_GetPathFraction(
  JPC_PathConstraint_t * self
);

void JPC_PathConstraint_SetMaxFrictionForce(
  JPC_PathConstraint_t * self,
  float inFrictionForce
);

float JPC_PathConstraint_GetMaxFrictionForce(
  JPC_PathConstraint_t * self
);

JPC_MotorSettings_t * JPC_PathConstraint_GetPositionMotorSettings(
  JPC_PathConstraint_t * self
);

void JPC_PathConstraint_SetPositionMotorState(
  JPC_PathConstraint_t * self,
  JPC_EMotorState inState
);

JPC_EMotorState JPC_PathConstraint_GetPositionMotorState(
  JPC_PathConstraint_t * self
);

void JPC_PathConstraint_SetTargetVelocity(
  JPC_PathConstraint_t * self,
  float inVelocity
);

float JPC_PathConstraint_GetTargetVelocity(
  JPC_PathConstraint_t * self
);

void JPC_PathConstraint_SetTargetPathFraction(
  JPC_PathConstraint_t * self,
  float inFraction
);

float JPC_PathConstraint_GetTargetPathFraction(
  JPC_PathConstraint_t * self
);

JPC_Body_t * JPC_PathConstraint_GetBody1(
  JPC_PathConstraint_t * self
);

JPC_Body_t * JPC_PathConstraint_GetBody2(
  JPC_PathConstraint_t * self
);

JPC_Mat44_t * JPC_PathConstraint_GetConstraintToBody1Matrix(
  JPC_PathConstraint_t * self
);

JPC_Mat44_t * JPC_PathConstraint_GetConstraintToBody2Matrix(
  JPC_PathConstraint_t * self
);

unsigned long JPC_PathConstraint_GetRefCount(
  JPC_PathConstraint_t * self
);

void JPC_PathConstraint_AddRef(
  JPC_PathConstraint_t * self
);

void JPC_PathConstraint_Release(
  JPC_PathConstraint_t * self
);

JPC_EConstraintType JPC_PathConstraint_GetType(
  JPC_PathConstraint_t * self
);

JPC_EConstraintSubType JPC_PathConstraint_GetSubType(
  JPC_PathConstraint_t * self
);

unsigned long JPC_PathConstraint_GetConstraintPriority(
  JPC_PathConstraint_t * self
);

void JPC_PathConstraint_SetConstraintPriority(
  JPC_PathConstraint_t * self,
  unsigned long inPriority
);

void JPC_PathConstraint_SetNumVelocityStepsOverride(
  JPC_PathConstraint_t * self,
  long inN
);

long JPC_PathConstraint_GetNumVelocityStepsOverride(
  JPC_PathConstraint_t * self
);

void JPC_PathConstraint_SetNumPositionStepsOverride(
  JPC_PathConstraint_t * self,
  long inN
);

long JPC_PathConstraint_GetNumPositionStepsOverride(
  JPC_PathConstraint_t * self
);

void JPC_PathConstraint_SetEnabled(
  JPC_PathConstraint_t * self,
  bool inEnabled
);

bool JPC_PathConstraint_GetEnabled(
  JPC_PathConstraint_t * self
);

bool JPC_PathConstraint_IsActive(
  JPC_PathConstraint_t * self
);

unsigned long long int JPC_PathConstraint_GetUserData(
  JPC_PathConstraint_t * self
);

void JPC_PathConstraint_SetUserData(
  JPC_PathConstraint_t * self,
  unsigned long long int inUserData
);

void JPC_PathConstraint_ResetWarmStart(
  JPC_PathConstraint_t * self
);

//endregion functions


#ifdef __cplusplus
}
#endif

