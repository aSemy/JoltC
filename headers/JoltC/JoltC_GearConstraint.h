#pragma once
#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region destructor

void JoltC_GearConstraint_destroy(
  JoltC_GearConstraint_t * self
);

//endregion
//region functions

void JoltC_GearConstraint_SetConstraints(
  JoltC_GearConstraint_t * self,
  JoltC_Constraint_t * inGear1,
  JoltC_Constraint_t * inGear2
);

float JoltC_GearConstraint_GetTotalLambda(
  JoltC_GearConstraint_t * self
);

JoltC_Body_t * JoltC_GearConstraint_GetBody1(
  JoltC_GearConstraint_t * self
);

JoltC_Body_t * JoltC_GearConstraint_GetBody2(
  JoltC_GearConstraint_t * self
);

JoltC_Mat44_t * JoltC_GearConstraint_GetConstraintToBody1Matrix(
  JoltC_GearConstraint_t * self
);

JoltC_Mat44_t * JoltC_GearConstraint_GetConstraintToBody2Matrix(
  JoltC_GearConstraint_t * self
);

unsigned long JoltC_GearConstraint_GetRefCount(
  JoltC_GearConstraint_t * self
);

void JoltC_GearConstraint_AddRef(
  JoltC_GearConstraint_t * self
);

void JoltC_GearConstraint_Release(
  JoltC_GearConstraint_t * self
);

JoltC_EConstraintType JoltC_GearConstraint_GetType(
  JoltC_GearConstraint_t * self
);

JoltC_EConstraintSubType JoltC_GearConstraint_GetSubType(
  JoltC_GearConstraint_t * self
);

unsigned long JoltC_GearConstraint_GetConstraintPriority(
  JoltC_GearConstraint_t * self
);

void JoltC_GearConstraint_SetConstraintPriority(
  JoltC_GearConstraint_t * self,
  unsigned long inPriority
);

void JoltC_GearConstraint_SetNumVelocityStepsOverride(
  JoltC_GearConstraint_t * self,
  long inN
);

long JoltC_GearConstraint_GetNumVelocityStepsOverride(
  JoltC_GearConstraint_t * self
);

void JoltC_GearConstraint_SetNumPositionStepsOverride(
  JoltC_GearConstraint_t * self,
  long inN
);

long JoltC_GearConstraint_GetNumPositionStepsOverride(
  JoltC_GearConstraint_t * self
);

void JoltC_GearConstraint_SetEnabled(
  JoltC_GearConstraint_t * self,
  bool inEnabled
);

bool JoltC_GearConstraint_GetEnabled(
  JoltC_GearConstraint_t * self
);

bool JoltC_GearConstraint_IsActive(
  JoltC_GearConstraint_t * self
);

unsigned long long int JoltC_GearConstraint_GetUserData(
  JoltC_GearConstraint_t * self
);

void JoltC_GearConstraint_SetUserData(
  JoltC_GearConstraint_t * self,
  unsigned long long int inUserData
);

void JoltC_GearConstraint_ResetWarmStart(
  JoltC_GearConstraint_t * self
);

//endregion


#ifdef __cplusplus
}
#endif
