#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region functions

void JPC_ConeConstraint_SetHalfConeAngle(
  JPC_ConeConstraint_t * self,
  float inHalfConeAngle
);

float JPC_ConeConstraint_GetCosHalfConeAngle(
  JPC_ConeConstraint_t * self
);

JPC_Vec3_t * JPC_ConeConstraint_GetTotalLambdaPosition(
  JPC_ConeConstraint_t * self
);

float JPC_ConeConstraint_GetTotalLambdaRotation(
  JPC_ConeConstraint_t * self
);

JPC_Body_t * JPC_ConeConstraint_GetBody1(
  JPC_ConeConstraint_t * self
);

JPC_Body_t * JPC_ConeConstraint_GetBody2(
  JPC_ConeConstraint_t * self
);

JPC_Mat44_t * JPC_ConeConstraint_GetConstraintToBody1Matrix(
  JPC_ConeConstraint_t * self
);

JPC_Mat44_t * JPC_ConeConstraint_GetConstraintToBody2Matrix(
  JPC_ConeConstraint_t * self
);

unsigned long JPC_ConeConstraint_GetRefCount(
  JPC_ConeConstraint_t * self
);

void JPC_ConeConstraint_AddRef(
  JPC_ConeConstraint_t * self
);

void JPC_ConeConstraint_Release(
  JPC_ConeConstraint_t * self
);

JPC_EConstraintType JPC_ConeConstraint_GetType(
  JPC_ConeConstraint_t * self
);

JPC_EConstraintSubType JPC_ConeConstraint_GetSubType(
  JPC_ConeConstraint_t * self
);

unsigned long JPC_ConeConstraint_GetConstraintPriority(
  JPC_ConeConstraint_t * self
);

void JPC_ConeConstraint_SetConstraintPriority(
  JPC_ConeConstraint_t * self,
  unsigned long inPriority
);

void JPC_ConeConstraint_SetNumVelocityStepsOverride(
  JPC_ConeConstraint_t * self,
  long inN
);

long JPC_ConeConstraint_GetNumVelocityStepsOverride(
  JPC_ConeConstraint_t * self
);

void JPC_ConeConstraint_SetNumPositionStepsOverride(
  JPC_ConeConstraint_t * self,
  long inN
);

long JPC_ConeConstraint_GetNumPositionStepsOverride(
  JPC_ConeConstraint_t * self
);

void JPC_ConeConstraint_SetEnabled(
  JPC_ConeConstraint_t * self,
  bool inEnabled
);

bool JPC_ConeConstraint_GetEnabled(
  JPC_ConeConstraint_t * self
);

bool JPC_ConeConstraint_IsActive(
  JPC_ConeConstraint_t * self
);

unsigned long long int JPC_ConeConstraint_GetUserData(
  JPC_ConeConstraint_t * self
);

void JPC_ConeConstraint_SetUserData(
  JPC_ConeConstraint_t * self,
  unsigned long long int inUserData
);

void JPC_ConeConstraint_ResetWarmStart(
  JPC_ConeConstraint_t * self
);

//endregion functions


#ifdef __cplusplus
}
#endif

