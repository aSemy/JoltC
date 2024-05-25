#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region functions

JoltC_Body_t * JoltC_TwoBodyConstraint_GetBody1(
  JoltC_TwoBodyConstraint_t * self,
  char** outErrMsg
);

JoltC_Body_t * JoltC_TwoBodyConstraint_GetBody2(
  JoltC_TwoBodyConstraint_t * self,
  char** outErrMsg
);

JoltC_Mat44_t * JoltC_TwoBodyConstraint_GetConstraintToBody1Matrix(
  JoltC_TwoBodyConstraint_t * self,
  char** outErrMsg
);

JoltC_Mat44_t * JoltC_TwoBodyConstraint_GetConstraintToBody2Matrix(
  JoltC_TwoBodyConstraint_t * self,
  char** outErrMsg
);

unsigned long JoltC_TwoBodyConstraint_GetRefCount(
  JoltC_TwoBodyConstraint_t * self,
  char** outErrMsg
);

void JoltC_TwoBodyConstraint_AddRef(
  JoltC_TwoBodyConstraint_t * self,
  char** outErrMsg
);

void JoltC_TwoBodyConstraint_Release(
  JoltC_TwoBodyConstraint_t * self,
  char** outErrMsg
);

JoltC_EConstraintType JoltC_TwoBodyConstraint_GetType(
  JoltC_TwoBodyConstraint_t * self,
  char** outErrMsg
);

JoltC_EConstraintSubType JoltC_TwoBodyConstraint_GetSubType(
  JoltC_TwoBodyConstraint_t * self,
  char** outErrMsg
);

unsigned long JoltC_TwoBodyConstraint_GetConstraintPriority(
  JoltC_TwoBodyConstraint_t * self,
  char** outErrMsg
);

void JoltC_TwoBodyConstraint_SetConstraintPriority(
  JoltC_TwoBodyConstraint_t * self,
  unsigned long inPriority,
  char** outErrMsg
);

void JoltC_TwoBodyConstraint_SetNumVelocityStepsOverride(
  JoltC_TwoBodyConstraint_t * self,
  long inN,
  char** outErrMsg
);

long JoltC_TwoBodyConstraint_GetNumVelocityStepsOverride(
  JoltC_TwoBodyConstraint_t * self,
  char** outErrMsg
);

void JoltC_TwoBodyConstraint_SetNumPositionStepsOverride(
  JoltC_TwoBodyConstraint_t * self,
  long inN,
  char** outErrMsg
);

long JoltC_TwoBodyConstraint_GetNumPositionStepsOverride(
  JoltC_TwoBodyConstraint_t * self,
  char** outErrMsg
);

void JoltC_TwoBodyConstraint_SetEnabled(
  JoltC_TwoBodyConstraint_t * self,
  bool inEnabled,
  char** outErrMsg
);

bool JoltC_TwoBodyConstraint_GetEnabled(
  JoltC_TwoBodyConstraint_t * self,
  char** outErrMsg
);

bool JoltC_TwoBodyConstraint_IsActive(
  JoltC_TwoBodyConstraint_t * self,
  char** outErrMsg
);

unsigned long long int JoltC_TwoBodyConstraint_GetUserData(
  JoltC_TwoBodyConstraint_t * self,
  char** outErrMsg
);

void JoltC_TwoBodyConstraint_SetUserData(
  JoltC_TwoBodyConstraint_t * self,
  unsigned long long int inUserData,
  char** outErrMsg
);

void JoltC_TwoBodyConstraint_ResetWarmStart(
  JoltC_TwoBodyConstraint_t * self,
  char** outErrMsg
);

//endregion functions


#ifdef __cplusplus
}
#endif

