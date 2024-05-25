#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region functions

unsigned long JPC_Constraint_GetRefCount(
  JPC_Constraint_t * self
);

void JPC_Constraint_AddRef(
  JPC_Constraint_t * self
);

void JPC_Constraint_Release(
  JPC_Constraint_t * self
);

JPC_EConstraintType JPC_Constraint_GetType(
  JPC_Constraint_t * self
);

JPC_EConstraintSubType JPC_Constraint_GetSubType(
  JPC_Constraint_t * self
);

unsigned long JPC_Constraint_GetConstraintPriority(
  JPC_Constraint_t * self
);

void JPC_Constraint_SetConstraintPriority(
  JPC_Constraint_t * self,
  unsigned long inPriority
);

void JPC_Constraint_SetNumVelocityStepsOverride(
  JPC_Constraint_t * self,
  long inN
);

long JPC_Constraint_GetNumVelocityStepsOverride(
  JPC_Constraint_t * self
);

void JPC_Constraint_SetNumPositionStepsOverride(
  JPC_Constraint_t * self,
  long inN
);

long JPC_Constraint_GetNumPositionStepsOverride(
  JPC_Constraint_t * self
);

void JPC_Constraint_SetEnabled(
  JPC_Constraint_t * self,
  bool inEnabled
);

bool JPC_Constraint_GetEnabled(
  JPC_Constraint_t * self
);

bool JPC_Constraint_IsActive(
  JPC_Constraint_t * self
);

unsigned long long int JPC_Constraint_GetUserData(
  JPC_Constraint_t * self
);

void JPC_Constraint_SetUserData(
  JPC_Constraint_t * self,
  unsigned long long int inUserData
);

void JPC_Constraint_ResetWarmStart(
  JPC_Constraint_t * self
);

//endregion functions


#ifdef __cplusplus
}
#endif

