#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region functions

unsigned long JoltC_Constraint_GetRefCount(
  JoltC_Constraint_t * self,
  char** outErrMsg
);

void JoltC_Constraint_AddRef(
  JoltC_Constraint_t * self,
  char** outErrMsg
);

void JoltC_Constraint_Release(
  JoltC_Constraint_t * self,
  char** outErrMsg
);

JoltC_EConstraintType JoltC_Constraint_GetType(
  JoltC_Constraint_t * self,
  char** outErrMsg
);

JoltC_EConstraintSubType JoltC_Constraint_GetSubType(
  JoltC_Constraint_t * self,
  char** outErrMsg
);

unsigned long JoltC_Constraint_GetConstraintPriority(
  JoltC_Constraint_t * self,
  char** outErrMsg
);

void JoltC_Constraint_SetConstraintPriority(
  JoltC_Constraint_t * self,
  unsigned long inPriority,
  char** outErrMsg
);

void JoltC_Constraint_SetNumVelocityStepsOverride(
  JoltC_Constraint_t * self,
  long inN,
  char** outErrMsg
);

long JoltC_Constraint_GetNumVelocityStepsOverride(
  JoltC_Constraint_t * self,
  char** outErrMsg
);

void JoltC_Constraint_SetNumPositionStepsOverride(
  JoltC_Constraint_t * self,
  long inN,
  char** outErrMsg
);

long JoltC_Constraint_GetNumPositionStepsOverride(
  JoltC_Constraint_t * self,
  char** outErrMsg
);

void JoltC_Constraint_SetEnabled(
  JoltC_Constraint_t * self,
  bool inEnabled,
  char** outErrMsg
);

bool JoltC_Constraint_GetEnabled(
  JoltC_Constraint_t * self,
  char** outErrMsg
);

bool JoltC_Constraint_IsActive(
  JoltC_Constraint_t * self,
  char** outErrMsg
);

unsigned long long int JoltC_Constraint_GetUserData(
  JoltC_Constraint_t * self,
  char** outErrMsg
);

void JoltC_Constraint_SetUserData(
  JoltC_Constraint_t * self,
  unsigned long long int inUserData,
  char** outErrMsg
);

void JoltC_Constraint_ResetWarmStart(
  JoltC_Constraint_t * self,
  char** outErrMsg
);

//endregion functions


#ifdef __cplusplus
}
#endif

