#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region functions

void JPC_DistanceConstraint_SetDistance(
  JPC_DistanceConstraint_t * self,
  float inMinDistance,
  float inMaxDistance
);

float JPC_DistanceConstraint_GetMinDistance(
  JPC_DistanceConstraint_t * self
);

float JPC_DistanceConstraint_GetMaxDistance(
  JPC_DistanceConstraint_t * self
);

JPC_SpringSettings_t * JPC_DistanceConstraint_GetLimitsSpringSettings(
  JPC_DistanceConstraint_t * self
);

void JPC_DistanceConstraint_SetLimitsSpringSettings(
  JPC_DistanceConstraint_t * self,
  const JPC_SpringSettings_t * inSettings
);

float JPC_DistanceConstraint_GetTotalLambdaPosition(
  JPC_DistanceConstraint_t * self
);

JPC_Body_t * JPC_DistanceConstraint_GetBody1(
  JPC_DistanceConstraint_t * self
);

JPC_Body_t * JPC_DistanceConstraint_GetBody2(
  JPC_DistanceConstraint_t * self
);

JPC_Mat44_t * JPC_DistanceConstraint_GetConstraintToBody1Matrix(
  JPC_DistanceConstraint_t * self
);

JPC_Mat44_t * JPC_DistanceConstraint_GetConstraintToBody2Matrix(
  JPC_DistanceConstraint_t * self
);

unsigned long JPC_DistanceConstraint_GetRefCount(
  JPC_DistanceConstraint_t * self
);

void JPC_DistanceConstraint_AddRef(
  JPC_DistanceConstraint_t * self
);

void JPC_DistanceConstraint_Release(
  JPC_DistanceConstraint_t * self
);

JPC_EConstraintType JPC_DistanceConstraint_GetType(
  JPC_DistanceConstraint_t * self
);

JPC_EConstraintSubType JPC_DistanceConstraint_GetSubType(
  JPC_DistanceConstraint_t * self
);

unsigned long JPC_DistanceConstraint_GetConstraintPriority(
  JPC_DistanceConstraint_t * self
);

void JPC_DistanceConstraint_SetConstraintPriority(
  JPC_DistanceConstraint_t * self,
  unsigned long inPriority
);

void JPC_DistanceConstraint_SetNumVelocityStepsOverride(
  JPC_DistanceConstraint_t * self,
  long inN
);

long JPC_DistanceConstraint_GetNumVelocityStepsOverride(
  JPC_DistanceConstraint_t * self
);

void JPC_DistanceConstraint_SetNumPositionStepsOverride(
  JPC_DistanceConstraint_t * self,
  long inN
);

long JPC_DistanceConstraint_GetNumPositionStepsOverride(
  JPC_DistanceConstraint_t * self
);

void JPC_DistanceConstraint_SetEnabled(
  JPC_DistanceConstraint_t * self,
  bool inEnabled
);

bool JPC_DistanceConstraint_GetEnabled(
  JPC_DistanceConstraint_t * self
);

bool JPC_DistanceConstraint_IsActive(
  JPC_DistanceConstraint_t * self
);

unsigned long long int JPC_DistanceConstraint_GetUserData(
  JPC_DistanceConstraint_t * self
);

void JPC_DistanceConstraint_SetUserData(
  JPC_DistanceConstraint_t * self,
  unsigned long long int inUserData
);

void JPC_DistanceConstraint_ResetWarmStart(
  JPC_DistanceConstraint_t * self
);

//endregion functions


#ifdef __cplusplus
}
#endif

