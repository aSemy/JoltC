#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region functions

void JoltC_RackAndPinionConstraint_SetConstraints(
  JoltC_RackAndPinionConstraint_t * self,
  JoltC_Constraint_t * inPinion,
  JoltC_Constraint_t * inRack
);

float JoltC_RackAndPinionConstraint_GetTotalLambda(
  JoltC_RackAndPinionConstraint_t * self
);

JoltC_Body_t * JoltC_RackAndPinionConstraint_GetBody1(
  JoltC_RackAndPinionConstraint_t * self
);

JoltC_Body_t * JoltC_RackAndPinionConstraint_GetBody2(
  JoltC_RackAndPinionConstraint_t * self
);

JoltC_Mat44_t * JoltC_RackAndPinionConstraint_GetConstraintToBody1Matrix(
  JoltC_RackAndPinionConstraint_t * self
);

JoltC_Mat44_t * JoltC_RackAndPinionConstraint_GetConstraintToBody2Matrix(
  JoltC_RackAndPinionConstraint_t * self
);

unsigned long JoltC_RackAndPinionConstraint_GetRefCount(
  JoltC_RackAndPinionConstraint_t * self
);

void JoltC_RackAndPinionConstraint_AddRef(
  JoltC_RackAndPinionConstraint_t * self
);

void JoltC_RackAndPinionConstraint_Release(
  JoltC_RackAndPinionConstraint_t * self
);

JoltC_EConstraintType JoltC_RackAndPinionConstraint_GetType(
  JoltC_RackAndPinionConstraint_t * self
);

JoltC_EConstraintSubType JoltC_RackAndPinionConstraint_GetSubType(
  JoltC_RackAndPinionConstraint_t * self
);

unsigned long JoltC_RackAndPinionConstraint_GetConstraintPriority(
  JoltC_RackAndPinionConstraint_t * self
);

void JoltC_RackAndPinionConstraint_SetConstraintPriority(
  JoltC_RackAndPinionConstraint_t * self,
  unsigned long inPriority
);

void JoltC_RackAndPinionConstraint_SetNumVelocityStepsOverride(
  JoltC_RackAndPinionConstraint_t * self,
  long inN
);

long JoltC_RackAndPinionConstraint_GetNumVelocityStepsOverride(
  JoltC_RackAndPinionConstraint_t * self
);

void JoltC_RackAndPinionConstraint_SetNumPositionStepsOverride(
  JoltC_RackAndPinionConstraint_t * self,
  long inN
);

long JoltC_RackAndPinionConstraint_GetNumPositionStepsOverride(
  JoltC_RackAndPinionConstraint_t * self
);

void JoltC_RackAndPinionConstraint_SetEnabled(
  JoltC_RackAndPinionConstraint_t * self,
  bool inEnabled
);

bool JoltC_RackAndPinionConstraint_GetEnabled(
  JoltC_RackAndPinionConstraint_t * self
);

bool JoltC_RackAndPinionConstraint_IsActive(
  JoltC_RackAndPinionConstraint_t * self
);

unsigned long long int JoltC_RackAndPinionConstraint_GetUserData(
  JoltC_RackAndPinionConstraint_t * self
);

void JoltC_RackAndPinionConstraint_SetUserData(
  JoltC_RackAndPinionConstraint_t * self,
  unsigned long long int inUserData
);

void JoltC_RackAndPinionConstraint_ResetWarmStart(
  JoltC_RackAndPinionConstraint_t * self
);

//endregion


#ifdef __cplusplus
}
#endif

