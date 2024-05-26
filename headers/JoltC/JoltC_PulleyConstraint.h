#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region functions

void JoltC_PulleyConstraint_SetLength(
  JoltC_PulleyConstraint_t * self,
  float inMinLength,
  float inMaxLength
);

float JoltC_PulleyConstraint_GetMinLength(
  JoltC_PulleyConstraint_t * self
);

float JoltC_PulleyConstraint_GetMaxLength(
  JoltC_PulleyConstraint_t * self
);

float JoltC_PulleyConstraint_GetCurrentLength(
  JoltC_PulleyConstraint_t * self
);

JoltC_Body_t * JoltC_PulleyConstraint_GetBody1(
  JoltC_PulleyConstraint_t * self
);

JoltC_Body_t * JoltC_PulleyConstraint_GetBody2(
  JoltC_PulleyConstraint_t * self
);

JoltC_Mat44_t * JoltC_PulleyConstraint_GetConstraintToBody1Matrix(
  JoltC_PulleyConstraint_t * self
);

JoltC_Mat44_t * JoltC_PulleyConstraint_GetConstraintToBody2Matrix(
  JoltC_PulleyConstraint_t * self
);

unsigned long JoltC_PulleyConstraint_GetRefCount(
  JoltC_PulleyConstraint_t * self
);

void JoltC_PulleyConstraint_AddRef(
  JoltC_PulleyConstraint_t * self
);

void JoltC_PulleyConstraint_Release(
  JoltC_PulleyConstraint_t * self
);

JoltC_EConstraintType JoltC_PulleyConstraint_GetType(
  JoltC_PulleyConstraint_t * self
);

JoltC_EConstraintSubType JoltC_PulleyConstraint_GetSubType(
  JoltC_PulleyConstraint_t * self
);

unsigned long JoltC_PulleyConstraint_GetConstraintPriority(
  JoltC_PulleyConstraint_t * self
);

void JoltC_PulleyConstraint_SetConstraintPriority(
  JoltC_PulleyConstraint_t * self,
  unsigned long inPriority
);

void JoltC_PulleyConstraint_SetNumVelocityStepsOverride(
  JoltC_PulleyConstraint_t * self,
  long inN
);

long JoltC_PulleyConstraint_GetNumVelocityStepsOverride(
  JoltC_PulleyConstraint_t * self
);

void JoltC_PulleyConstraint_SetNumPositionStepsOverride(
  JoltC_PulleyConstraint_t * self,
  long inN
);

long JoltC_PulleyConstraint_GetNumPositionStepsOverride(
  JoltC_PulleyConstraint_t * self
);

void JoltC_PulleyConstraint_SetEnabled(
  JoltC_PulleyConstraint_t * self,
  bool inEnabled
);

bool JoltC_PulleyConstraint_GetEnabled(
  JoltC_PulleyConstraint_t * self
);

bool JoltC_PulleyConstraint_IsActive(
  JoltC_PulleyConstraint_t * self
);

unsigned long long int JoltC_PulleyConstraint_GetUserData(
  JoltC_PulleyConstraint_t * self
);

void JoltC_PulleyConstraint_SetUserData(
  JoltC_PulleyConstraint_t * self,
  unsigned long long int inUserData
);

void JoltC_PulleyConstraint_ResetWarmStart(
  JoltC_PulleyConstraint_t * self
);

//endregion


#ifdef __cplusplus
}
#endif

