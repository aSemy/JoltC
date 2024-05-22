#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region functions

JPC_Body_t * JPC_TwoBodyConstraint_GetBody1(
  JPC_TwoBodyConstraint_t * self
);

JPC_Body_t * JPC_TwoBodyConstraint_GetBody2(
  JPC_TwoBodyConstraint_t * self
);

JPC_Mat44_t * JPC_TwoBodyConstraint_GetConstraintToBody1Matrix(
  JPC_TwoBodyConstraint_t * self
);

JPC_Mat44_t * JPC_TwoBodyConstraint_GetConstraintToBody2Matrix(
  JPC_TwoBodyConstraint_t * self
);

unsigned long JPC_TwoBodyConstraint_GetRefCount(
  JPC_TwoBodyConstraint_t * self
);

void JPC_TwoBodyConstraint_AddRef(
  JPC_TwoBodyConstraint_t * self
);

void JPC_TwoBodyConstraint_Release(
  JPC_TwoBodyConstraint_t * self
);

JPC_EConstraintType JPC_TwoBodyConstraint_GetType(
  JPC_TwoBodyConstraint_t * self
);

JPC_EConstraintSubType JPC_TwoBodyConstraint_GetSubType(
  JPC_TwoBodyConstraint_t * self
);

unsigned long JPC_TwoBodyConstraint_GetConstraintPriority(
  JPC_TwoBodyConstraint_t * self
);

void JPC_TwoBodyConstraint_SetConstraintPriority(
  JPC_TwoBodyConstraint_t * self,
  unsigned long inPriority
);

void JPC_TwoBodyConstraint_SetNumVelocityStepsOverride(
  JPC_TwoBodyConstraint_t * self,
  long inN
);

long JPC_TwoBodyConstraint_GetNumVelocityStepsOverride(
  JPC_TwoBodyConstraint_t * self
);

void JPC_TwoBodyConstraint_SetNumPositionStepsOverride(
  JPC_TwoBodyConstraint_t * self,
  long inN
);

long JPC_TwoBodyConstraint_GetNumPositionStepsOverride(
  JPC_TwoBodyConstraint_t * self
);

void JPC_TwoBodyConstraint_SetEnabled(
  JPC_TwoBodyConstraint_t * self,
  bool inEnabled
);

bool JPC_TwoBodyConstraint_GetEnabled(
  JPC_TwoBodyConstraint_t * self
);

bool JPC_TwoBodyConstraint_IsActive(
  JPC_TwoBodyConstraint_t * self
);

unsigned long long int JPC_TwoBodyConstraint_GetUserData(
  JPC_TwoBodyConstraint_t * self
);

void JPC_TwoBodyConstraint_SetUserData(
  JPC_TwoBodyConstraint_t * self,
  unsigned long long int inUserData
);

void JPC_TwoBodyConstraint_ResetWarmStart(
  JPC_TwoBodyConstraint_t * self
);

//endregion functions


#ifdef __cplusplus
}
#endif

