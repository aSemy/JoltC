#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region functions

void JoltC_RackAndPinionConstraint_SetConstraints(
  JoltC_RackAndPinionConstraint_t * self,
  const JoltC_Constraint_t * inPinion,
  const JoltC_Constraint_t * inRack,
  char** outErrMsg
);

float JoltC_RackAndPinionConstraint_GetTotalLambda(
  JoltC_RackAndPinionConstraint_t * self,
  char** outErrMsg
);

JoltC_Body_t * JoltC_RackAndPinionConstraint_GetBody1(
  JoltC_RackAndPinionConstraint_t * self,
  char** outErrMsg
);

JoltC_Body_t * JoltC_RackAndPinionConstraint_GetBody2(
  JoltC_RackAndPinionConstraint_t * self,
  char** outErrMsg
);

JoltC_Mat44_t * JoltC_RackAndPinionConstraint_GetConstraintToBody1Matrix(
  JoltC_RackAndPinionConstraint_t * self,
  char** outErrMsg
);

JoltC_Mat44_t * JoltC_RackAndPinionConstraint_GetConstraintToBody2Matrix(
  JoltC_RackAndPinionConstraint_t * self,
  char** outErrMsg
);

unsigned long JoltC_RackAndPinionConstraint_GetRefCount(
  JoltC_RackAndPinionConstraint_t * self,
  char** outErrMsg
);

void JoltC_RackAndPinionConstraint_AddRef(
  JoltC_RackAndPinionConstraint_t * self,
  char** outErrMsg
);

void JoltC_RackAndPinionConstraint_Release(
  JoltC_RackAndPinionConstraint_t * self,
  char** outErrMsg
);

JoltC_EConstraintType JoltC_RackAndPinionConstraint_GetType(
  JoltC_RackAndPinionConstraint_t * self,
  char** outErrMsg
);

JoltC_EConstraintSubType JoltC_RackAndPinionConstraint_GetSubType(
  JoltC_RackAndPinionConstraint_t * self,
  char** outErrMsg
);

unsigned long JoltC_RackAndPinionConstraint_GetConstraintPriority(
  JoltC_RackAndPinionConstraint_t * self,
  char** outErrMsg
);

void JoltC_RackAndPinionConstraint_SetConstraintPriority(
  JoltC_RackAndPinionConstraint_t * self,
  unsigned long inPriority,
  char** outErrMsg
);

void JoltC_RackAndPinionConstraint_SetNumVelocityStepsOverride(
  JoltC_RackAndPinionConstraint_t * self,
  long inN,
  char** outErrMsg
);

long JoltC_RackAndPinionConstraint_GetNumVelocityStepsOverride(
  JoltC_RackAndPinionConstraint_t * self,
  char** outErrMsg
);

void JoltC_RackAndPinionConstraint_SetNumPositionStepsOverride(
  JoltC_RackAndPinionConstraint_t * self,
  long inN,
  char** outErrMsg
);

long JoltC_RackAndPinionConstraint_GetNumPositionStepsOverride(
  JoltC_RackAndPinionConstraint_t * self,
  char** outErrMsg
);

void JoltC_RackAndPinionConstraint_SetEnabled(
  JoltC_RackAndPinionConstraint_t * self,
  bool inEnabled,
  char** outErrMsg
);

bool JoltC_RackAndPinionConstraint_GetEnabled(
  JoltC_RackAndPinionConstraint_t * self,
  char** outErrMsg
);

bool JoltC_RackAndPinionConstraint_IsActive(
  JoltC_RackAndPinionConstraint_t * self,
  char** outErrMsg
);

unsigned long long int JoltC_RackAndPinionConstraint_GetUserData(
  JoltC_RackAndPinionConstraint_t * self,
  char** outErrMsg
);

void JoltC_RackAndPinionConstraint_SetUserData(
  JoltC_RackAndPinionConstraint_t * self,
  unsigned long long int inUserData,
  char** outErrMsg
);

void JoltC_RackAndPinionConstraint_ResetWarmStart(
  JoltC_RackAndPinionConstraint_t * self,
  char** outErrMsg
);

//endregion functions


#ifdef __cplusplus
}
#endif

