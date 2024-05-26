#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region functions

void JoltC_DistanceConstraint_SetDistance(
  JoltC_DistanceConstraint_t * self,
  float inMinDistance,
  float inMaxDistance
);

float JoltC_DistanceConstraint_GetMinDistance(
  JoltC_DistanceConstraint_t * self
);

float JoltC_DistanceConstraint_GetMaxDistance(
  JoltC_DistanceConstraint_t * self
);

JoltC_SpringSettings_t * JoltC_DistanceConstraint_GetLimitsSpringSettings(
  JoltC_DistanceConstraint_t * self
);

void JoltC_DistanceConstraint_SetLimitsSpringSettings(
  JoltC_DistanceConstraint_t * self,
  const JoltC_SpringSettings_t * inSettings
);

float JoltC_DistanceConstraint_GetTotalLambdaPosition(
  JoltC_DistanceConstraint_t * self
);

JoltC_Body_t * JoltC_DistanceConstraint_GetBody1(
  JoltC_DistanceConstraint_t * self
);

JoltC_Body_t * JoltC_DistanceConstraint_GetBody2(
  JoltC_DistanceConstraint_t * self
);

JoltC_Mat44_t * JoltC_DistanceConstraint_GetConstraintToBody1Matrix(
  JoltC_DistanceConstraint_t * self
);

JoltC_Mat44_t * JoltC_DistanceConstraint_GetConstraintToBody2Matrix(
  JoltC_DistanceConstraint_t * self
);

unsigned long JoltC_DistanceConstraint_GetRefCount(
  JoltC_DistanceConstraint_t * self
);

void JoltC_DistanceConstraint_AddRef(
  JoltC_DistanceConstraint_t * self
);

void JoltC_DistanceConstraint_Release(
  JoltC_DistanceConstraint_t * self
);

JoltC_EConstraintType JoltC_DistanceConstraint_GetType(
  JoltC_DistanceConstraint_t * self
);

JoltC_EConstraintSubType JoltC_DistanceConstraint_GetSubType(
  JoltC_DistanceConstraint_t * self
);

unsigned long JoltC_DistanceConstraint_GetConstraintPriority(
  JoltC_DistanceConstraint_t * self
);

void JoltC_DistanceConstraint_SetConstraintPriority(
  JoltC_DistanceConstraint_t * self,
  unsigned long inPriority
);

void JoltC_DistanceConstraint_SetNumVelocityStepsOverride(
  JoltC_DistanceConstraint_t * self,
  long inN
);

long JoltC_DistanceConstraint_GetNumVelocityStepsOverride(
  JoltC_DistanceConstraint_t * self
);

void JoltC_DistanceConstraint_SetNumPositionStepsOverride(
  JoltC_DistanceConstraint_t * self,
  long inN
);

long JoltC_DistanceConstraint_GetNumPositionStepsOverride(
  JoltC_DistanceConstraint_t * self
);

void JoltC_DistanceConstraint_SetEnabled(
  JoltC_DistanceConstraint_t * self,
  bool inEnabled
);

bool JoltC_DistanceConstraint_GetEnabled(
  JoltC_DistanceConstraint_t * self
);

bool JoltC_DistanceConstraint_IsActive(
  JoltC_DistanceConstraint_t * self
);

unsigned long long int JoltC_DistanceConstraint_GetUserData(
  JoltC_DistanceConstraint_t * self
);

void JoltC_DistanceConstraint_SetUserData(
  JoltC_DistanceConstraint_t * self,
  unsigned long long int inUserData
);

void JoltC_DistanceConstraint_ResetWarmStart(
  JoltC_DistanceConstraint_t * self
);

//endregion


#ifdef __cplusplus
}
#endif

