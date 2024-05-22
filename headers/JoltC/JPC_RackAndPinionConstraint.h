#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region functions

void JPC_RackAndPinionConstraint_SetConstraints(
  JPC_RackAndPinionConstraint_t * self,
  const JPC_Constraint_t * inPinion,
  const JPC_Constraint_t * inRack
);

float JPC_RackAndPinionConstraint_GetTotalLambda(
  JPC_RackAndPinionConstraint_t * self
);

JPC_Body_t * JPC_RackAndPinionConstraint_GetBody1(
  JPC_RackAndPinionConstraint_t * self
);

JPC_Body_t * JPC_RackAndPinionConstraint_GetBody2(
  JPC_RackAndPinionConstraint_t * self
);

JPC_Mat44_t * JPC_RackAndPinionConstraint_GetConstraintToBody1Matrix(
  JPC_RackAndPinionConstraint_t * self
);

JPC_Mat44_t * JPC_RackAndPinionConstraint_GetConstraintToBody2Matrix(
  JPC_RackAndPinionConstraint_t * self
);

unsigned long JPC_RackAndPinionConstraint_GetRefCount(
  JPC_RackAndPinionConstraint_t * self
);

void JPC_RackAndPinionConstraint_AddRef(
  JPC_RackAndPinionConstraint_t * self
);

void JPC_RackAndPinionConstraint_Release(
  JPC_RackAndPinionConstraint_t * self
);

JPC_EConstraintType JPC_RackAndPinionConstraint_GetType(
  JPC_RackAndPinionConstraint_t * self
);

JPC_EConstraintSubType JPC_RackAndPinionConstraint_GetSubType(
  JPC_RackAndPinionConstraint_t * self
);

unsigned long JPC_RackAndPinionConstraint_GetConstraintPriority(
  JPC_RackAndPinionConstraint_t * self
);

void JPC_RackAndPinionConstraint_SetConstraintPriority(
  JPC_RackAndPinionConstraint_t * self,
  unsigned long inPriority
);

void JPC_RackAndPinionConstraint_SetNumVelocityStepsOverride(
  JPC_RackAndPinionConstraint_t * self,
  long inN
);

long JPC_RackAndPinionConstraint_GetNumVelocityStepsOverride(
  JPC_RackAndPinionConstraint_t * self
);

void JPC_RackAndPinionConstraint_SetNumPositionStepsOverride(
  JPC_RackAndPinionConstraint_t * self,
  long inN
);

long JPC_RackAndPinionConstraint_GetNumPositionStepsOverride(
  JPC_RackAndPinionConstraint_t * self
);

void JPC_RackAndPinionConstraint_SetEnabled(
  JPC_RackAndPinionConstraint_t * self,
  bool inEnabled
);

bool JPC_RackAndPinionConstraint_GetEnabled(
  JPC_RackAndPinionConstraint_t * self
);

bool JPC_RackAndPinionConstraint_IsActive(
  JPC_RackAndPinionConstraint_t * self
);

unsigned long long int JPC_RackAndPinionConstraint_GetUserData(
  JPC_RackAndPinionConstraint_t * self
);

void JPC_RackAndPinionConstraint_SetUserData(
  JPC_RackAndPinionConstraint_t * self,
  unsigned long long int inUserData
);

void JPC_RackAndPinionConstraint_ResetWarmStart(
  JPC_RackAndPinionConstraint_t * self
);

//endregion functions


#ifdef __cplusplus
}
#endif

