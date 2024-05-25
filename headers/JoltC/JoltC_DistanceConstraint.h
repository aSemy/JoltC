#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region functions

void JoltC_DistanceConstraint_SetDistance(
  JoltC_DistanceConstraint_t * self,
  float inMinDistance,
  float inMaxDistance,
  char** outErrMsg
);

float JoltC_DistanceConstraint_GetMinDistance(
  JoltC_DistanceConstraint_t * self,
  char** outErrMsg
);

float JoltC_DistanceConstraint_GetMaxDistance(
  JoltC_DistanceConstraint_t * self,
  char** outErrMsg
);

JoltC_SpringSettings_t * JoltC_DistanceConstraint_GetLimitsSpringSettings(
  JoltC_DistanceConstraint_t * self,
  char** outErrMsg
);

void JoltC_DistanceConstraint_SetLimitsSpringSettings(
  JoltC_DistanceConstraint_t * self,
  const JoltC_SpringSettings_t * inSettings,
  char** outErrMsg
);

float JoltC_DistanceConstraint_GetTotalLambdaPosition(
  JoltC_DistanceConstraint_t * self,
  char** outErrMsg
);

JoltC_Body_t * JoltC_DistanceConstraint_GetBody1(
  JoltC_DistanceConstraint_t * self,
  char** outErrMsg
);

JoltC_Body_t * JoltC_DistanceConstraint_GetBody2(
  JoltC_DistanceConstraint_t * self,
  char** outErrMsg
);

JoltC_Mat44_t * JoltC_DistanceConstraint_GetConstraintToBody1Matrix(
  JoltC_DistanceConstraint_t * self,
  char** outErrMsg
);

JoltC_Mat44_t * JoltC_DistanceConstraint_GetConstraintToBody2Matrix(
  JoltC_DistanceConstraint_t * self,
  char** outErrMsg
);

unsigned long JoltC_DistanceConstraint_GetRefCount(
  JoltC_DistanceConstraint_t * self,
  char** outErrMsg
);

void JoltC_DistanceConstraint_AddRef(
  JoltC_DistanceConstraint_t * self,
  char** outErrMsg
);

void JoltC_DistanceConstraint_Release(
  JoltC_DistanceConstraint_t * self,
  char** outErrMsg
);

JoltC_EConstraintType JoltC_DistanceConstraint_GetType(
  JoltC_DistanceConstraint_t * self,
  char** outErrMsg
);

JoltC_EConstraintSubType JoltC_DistanceConstraint_GetSubType(
  JoltC_DistanceConstraint_t * self,
  char** outErrMsg
);

unsigned long JoltC_DistanceConstraint_GetConstraintPriority(
  JoltC_DistanceConstraint_t * self,
  char** outErrMsg
);

void JoltC_DistanceConstraint_SetConstraintPriority(
  JoltC_DistanceConstraint_t * self,
  unsigned long inPriority,
  char** outErrMsg
);

void JoltC_DistanceConstraint_SetNumVelocityStepsOverride(
  JoltC_DistanceConstraint_t * self,
  long inN,
  char** outErrMsg
);

long JoltC_DistanceConstraint_GetNumVelocityStepsOverride(
  JoltC_DistanceConstraint_t * self,
  char** outErrMsg
);

void JoltC_DistanceConstraint_SetNumPositionStepsOverride(
  JoltC_DistanceConstraint_t * self,
  long inN,
  char** outErrMsg
);

long JoltC_DistanceConstraint_GetNumPositionStepsOverride(
  JoltC_DistanceConstraint_t * self,
  char** outErrMsg
);

void JoltC_DistanceConstraint_SetEnabled(
  JoltC_DistanceConstraint_t * self,
  bool inEnabled,
  char** outErrMsg
);

bool JoltC_DistanceConstraint_GetEnabled(
  JoltC_DistanceConstraint_t * self,
  char** outErrMsg
);

bool JoltC_DistanceConstraint_IsActive(
  JoltC_DistanceConstraint_t * self,
  char** outErrMsg
);

unsigned long long int JoltC_DistanceConstraint_GetUserData(
  JoltC_DistanceConstraint_t * self,
  char** outErrMsg
);

void JoltC_DistanceConstraint_SetUserData(
  JoltC_DistanceConstraint_t * self,
  unsigned long long int inUserData,
  char** outErrMsg
);

void JoltC_DistanceConstraint_ResetWarmStart(
  JoltC_DistanceConstraint_t * self,
  char** outErrMsg
);

//endregion functions


#ifdef __cplusplus
}
#endif

