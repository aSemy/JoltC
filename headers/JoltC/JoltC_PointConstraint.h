#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region functions

JoltC_Vec3_t * JoltC_PointConstraint_GetLocalSpacePoint1(
  JoltC_PointConstraint_t * self,
  char** outErrMsg
);

JoltC_Vec3_t * JoltC_PointConstraint_GetLocalSpacePoint2(
  JoltC_PointConstraint_t * self,
  char** outErrMsg
);

JoltC_Vec3_t * JoltC_PointConstraint_GetTotalLambdaPosition(
  JoltC_PointConstraint_t * self,
  char** outErrMsg
);

JoltC_Body_t * JoltC_PointConstraint_GetBody1(
  JoltC_PointConstraint_t * self,
  char** outErrMsg
);

JoltC_Body_t * JoltC_PointConstraint_GetBody2(
  JoltC_PointConstraint_t * self,
  char** outErrMsg
);

JoltC_Mat44_t * JoltC_PointConstraint_GetConstraintToBody1Matrix(
  JoltC_PointConstraint_t * self,
  char** outErrMsg
);

JoltC_Mat44_t * JoltC_PointConstraint_GetConstraintToBody2Matrix(
  JoltC_PointConstraint_t * self,
  char** outErrMsg
);

unsigned long JoltC_PointConstraint_GetRefCount(
  JoltC_PointConstraint_t * self,
  char** outErrMsg
);

void JoltC_PointConstraint_AddRef(
  JoltC_PointConstraint_t * self,
  char** outErrMsg
);

void JoltC_PointConstraint_Release(
  JoltC_PointConstraint_t * self,
  char** outErrMsg
);

JoltC_EConstraintType JoltC_PointConstraint_GetType(
  JoltC_PointConstraint_t * self,
  char** outErrMsg
);

JoltC_EConstraintSubType JoltC_PointConstraint_GetSubType(
  JoltC_PointConstraint_t * self,
  char** outErrMsg
);

unsigned long JoltC_PointConstraint_GetConstraintPriority(
  JoltC_PointConstraint_t * self,
  char** outErrMsg
);

void JoltC_PointConstraint_SetConstraintPriority(
  JoltC_PointConstraint_t * self,
  unsigned long inPriority,
  char** outErrMsg
);

void JoltC_PointConstraint_SetNumVelocityStepsOverride(
  JoltC_PointConstraint_t * self,
  long inN,
  char** outErrMsg
);

long JoltC_PointConstraint_GetNumVelocityStepsOverride(
  JoltC_PointConstraint_t * self,
  char** outErrMsg
);

void JoltC_PointConstraint_SetNumPositionStepsOverride(
  JoltC_PointConstraint_t * self,
  long inN,
  char** outErrMsg
);

long JoltC_PointConstraint_GetNumPositionStepsOverride(
  JoltC_PointConstraint_t * self,
  char** outErrMsg
);

void JoltC_PointConstraint_SetEnabled(
  JoltC_PointConstraint_t * self,
  bool inEnabled,
  char** outErrMsg
);

bool JoltC_PointConstraint_GetEnabled(
  JoltC_PointConstraint_t * self,
  char** outErrMsg
);

bool JoltC_PointConstraint_IsActive(
  JoltC_PointConstraint_t * self,
  char** outErrMsg
);

unsigned long long int JoltC_PointConstraint_GetUserData(
  JoltC_PointConstraint_t * self,
  char** outErrMsg
);

void JoltC_PointConstraint_SetUserData(
  JoltC_PointConstraint_t * self,
  unsigned long long int inUserData,
  char** outErrMsg
);

void JoltC_PointConstraint_ResetWarmStart(
  JoltC_PointConstraint_t * self,
  char** outErrMsg
);

//endregion functions


#ifdef __cplusplus
}
#endif

