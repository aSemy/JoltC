#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region functions

void JoltC_ConeConstraint_SetHalfConeAngle(
  JoltC_ConeConstraint_t * self,
  float inHalfConeAngle
);

float JoltC_ConeConstraint_GetCosHalfConeAngle(
  JoltC_ConeConstraint_t * self
);

JoltC_Vec3_t * JoltC_ConeConstraint_GetTotalLambdaPosition(
  JoltC_ConeConstraint_t * self
);

float JoltC_ConeConstraint_GetTotalLambdaRotation(
  JoltC_ConeConstraint_t * self
);

JoltC_Body_t * JoltC_ConeConstraint_GetBody1(
  JoltC_ConeConstraint_t * self
);

JoltC_Body_t * JoltC_ConeConstraint_GetBody2(
  JoltC_ConeConstraint_t * self
);

JoltC_Mat44_t * JoltC_ConeConstraint_GetConstraintToBody1Matrix(
  JoltC_ConeConstraint_t * self
);

JoltC_Mat44_t * JoltC_ConeConstraint_GetConstraintToBody2Matrix(
  JoltC_ConeConstraint_t * self
);

unsigned long JoltC_ConeConstraint_GetRefCount(
  JoltC_ConeConstraint_t * self
);

void JoltC_ConeConstraint_AddRef(
  JoltC_ConeConstraint_t * self
);

void JoltC_ConeConstraint_Release(
  JoltC_ConeConstraint_t * self
);

JoltC_EConstraintType JoltC_ConeConstraint_GetType(
  JoltC_ConeConstraint_t * self
);

JoltC_EConstraintSubType JoltC_ConeConstraint_GetSubType(
  JoltC_ConeConstraint_t * self
);

unsigned long JoltC_ConeConstraint_GetConstraintPriority(
  JoltC_ConeConstraint_t * self
);

void JoltC_ConeConstraint_SetConstraintPriority(
  JoltC_ConeConstraint_t * self,
  unsigned long inPriority
);

void JoltC_ConeConstraint_SetNumVelocityStepsOverride(
  JoltC_ConeConstraint_t * self,
  long inN
);

long JoltC_ConeConstraint_GetNumVelocityStepsOverride(
  JoltC_ConeConstraint_t * self
);

void JoltC_ConeConstraint_SetNumPositionStepsOverride(
  JoltC_ConeConstraint_t * self,
  long inN
);

long JoltC_ConeConstraint_GetNumPositionStepsOverride(
  JoltC_ConeConstraint_t * self
);

void JoltC_ConeConstraint_SetEnabled(
  JoltC_ConeConstraint_t * self,
  bool inEnabled
);

bool JoltC_ConeConstraint_GetEnabled(
  JoltC_ConeConstraint_t * self
);

bool JoltC_ConeConstraint_IsActive(
  JoltC_ConeConstraint_t * self
);

unsigned long long int JoltC_ConeConstraint_GetUserData(
  JoltC_ConeConstraint_t * self
);

void JoltC_ConeConstraint_SetUserData(
  JoltC_ConeConstraint_t * self,
  unsigned long long int inUserData
);

void JoltC_ConeConstraint_ResetWarmStart(
  JoltC_ConeConstraint_t * self
);

//endregion


#ifdef __cplusplus
}
#endif

