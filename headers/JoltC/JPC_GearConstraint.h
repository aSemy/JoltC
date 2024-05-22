#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region functions

void JPC_GearConstraint_SetConstraints(
  JPC_GearConstraint_t * self,
  const JPC_Constraint_t * inGear1,
  const JPC_Constraint_t * inGear2
);

float JPC_GearConstraint_GetTotalLambda(
  JPC_GearConstraint_t * self
);

JPC_Body_t * JPC_GearConstraint_GetBody1(
  JPC_GearConstraint_t * self
);

JPC_Body_t * JPC_GearConstraint_GetBody2(
  JPC_GearConstraint_t * self
);

JPC_Mat44_t * JPC_GearConstraint_GetConstraintToBody1Matrix(
  JPC_GearConstraint_t * self
);

JPC_Mat44_t * JPC_GearConstraint_GetConstraintToBody2Matrix(
  JPC_GearConstraint_t * self
);

unsigned long JPC_GearConstraint_GetRefCount(
  JPC_GearConstraint_t * self
);

void JPC_GearConstraint_AddRef(
  JPC_GearConstraint_t * self
);

void JPC_GearConstraint_Release(
  JPC_GearConstraint_t * self
);

JPC_EConstraintType JPC_GearConstraint_GetType(
  JPC_GearConstraint_t * self
);

JPC_EConstraintSubType JPC_GearConstraint_GetSubType(
  JPC_GearConstraint_t * self
);

unsigned long JPC_GearConstraint_GetConstraintPriority(
  JPC_GearConstraint_t * self
);

void JPC_GearConstraint_SetConstraintPriority(
  JPC_GearConstraint_t * self,
  unsigned long inPriority
);

void JPC_GearConstraint_SetNumVelocityStepsOverride(
  JPC_GearConstraint_t * self,
  long inN
);

long JPC_GearConstraint_GetNumVelocityStepsOverride(
  JPC_GearConstraint_t * self
);

void JPC_GearConstraint_SetNumPositionStepsOverride(
  JPC_GearConstraint_t * self,
  long inN
);

long JPC_GearConstraint_GetNumPositionStepsOverride(
  JPC_GearConstraint_t * self
);

void JPC_GearConstraint_SetEnabled(
  JPC_GearConstraint_t * self,
  bool inEnabled
);

bool JPC_GearConstraint_GetEnabled(
  JPC_GearConstraint_t * self
);

bool JPC_GearConstraint_IsActive(
  JPC_GearConstraint_t * self
);

unsigned long long int JPC_GearConstraint_GetUserData(
  JPC_GearConstraint_t * self
);

void JPC_GearConstraint_SetUserData(
  JPC_GearConstraint_t * self,
  unsigned long long int inUserData
);

void JPC_GearConstraint_ResetWarmStart(
  JPC_GearConstraint_t * self
);

//endregion functions


#ifdef __cplusplus
}
#endif

