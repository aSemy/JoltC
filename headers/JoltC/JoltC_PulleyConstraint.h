#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region functions

void JPC_PulleyConstraint_SetLength(
  JPC_PulleyConstraint_t * self,
  float inMinLength,
  float inMaxLength
);

float JPC_PulleyConstraint_GetMinLength(
  JPC_PulleyConstraint_t * self
);

float JPC_PulleyConstraint_GetMaxLength(
  JPC_PulleyConstraint_t * self
);

float JPC_PulleyConstraint_GetCurrentLength(
  JPC_PulleyConstraint_t * self
);

JPC_Body_t * JPC_PulleyConstraint_GetBody1(
  JPC_PulleyConstraint_t * self
);

JPC_Body_t * JPC_PulleyConstraint_GetBody2(
  JPC_PulleyConstraint_t * self
);

JPC_Mat44_t * JPC_PulleyConstraint_GetConstraintToBody1Matrix(
  JPC_PulleyConstraint_t * self
);

JPC_Mat44_t * JPC_PulleyConstraint_GetConstraintToBody2Matrix(
  JPC_PulleyConstraint_t * self
);

unsigned long JPC_PulleyConstraint_GetRefCount(
  JPC_PulleyConstraint_t * self
);

void JPC_PulleyConstraint_AddRef(
  JPC_PulleyConstraint_t * self
);

void JPC_PulleyConstraint_Release(
  JPC_PulleyConstraint_t * self
);

JPC_EConstraintType JPC_PulleyConstraint_GetType(
  JPC_PulleyConstraint_t * self
);

JPC_EConstraintSubType JPC_PulleyConstraint_GetSubType(
  JPC_PulleyConstraint_t * self
);

unsigned long JPC_PulleyConstraint_GetConstraintPriority(
  JPC_PulleyConstraint_t * self
);

void JPC_PulleyConstraint_SetConstraintPriority(
  JPC_PulleyConstraint_t * self,
  unsigned long inPriority
);

void JPC_PulleyConstraint_SetNumVelocityStepsOverride(
  JPC_PulleyConstraint_t * self,
  long inN
);

long JPC_PulleyConstraint_GetNumVelocityStepsOverride(
  JPC_PulleyConstraint_t * self
);

void JPC_PulleyConstraint_SetNumPositionStepsOverride(
  JPC_PulleyConstraint_t * self,
  long inN
);

long JPC_PulleyConstraint_GetNumPositionStepsOverride(
  JPC_PulleyConstraint_t * self
);

void JPC_PulleyConstraint_SetEnabled(
  JPC_PulleyConstraint_t * self,
  bool inEnabled
);

bool JPC_PulleyConstraint_GetEnabled(
  JPC_PulleyConstraint_t * self
);

bool JPC_PulleyConstraint_IsActive(
  JPC_PulleyConstraint_t * self
);

unsigned long long int JPC_PulleyConstraint_GetUserData(
  JPC_PulleyConstraint_t * self
);

void JPC_PulleyConstraint_SetUserData(
  JPC_PulleyConstraint_t * self,
  unsigned long long int inUserData
);

void JPC_PulleyConstraint_ResetWarmStart(
  JPC_PulleyConstraint_t * self
);

//endregion functions


#ifdef __cplusplus
}
#endif

