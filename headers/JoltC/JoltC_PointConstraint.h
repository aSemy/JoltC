#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region functions

JPC_Vec3_t * JPC_PointConstraint_GetLocalSpacePoint1(
  JPC_PointConstraint_t * self
);

JPC_Vec3_t * JPC_PointConstraint_GetLocalSpacePoint2(
  JPC_PointConstraint_t * self
);

JPC_Vec3_t * JPC_PointConstraint_GetTotalLambdaPosition(
  JPC_PointConstraint_t * self
);

JPC_Body_t * JPC_PointConstraint_GetBody1(
  JPC_PointConstraint_t * self
);

JPC_Body_t * JPC_PointConstraint_GetBody2(
  JPC_PointConstraint_t * self
);

JPC_Mat44_t * JPC_PointConstraint_GetConstraintToBody1Matrix(
  JPC_PointConstraint_t * self
);

JPC_Mat44_t * JPC_PointConstraint_GetConstraintToBody2Matrix(
  JPC_PointConstraint_t * self
);

unsigned long JPC_PointConstraint_GetRefCount(
  JPC_PointConstraint_t * self
);

void JPC_PointConstraint_AddRef(
  JPC_PointConstraint_t * self
);

void JPC_PointConstraint_Release(
  JPC_PointConstraint_t * self
);

JPC_EConstraintType JPC_PointConstraint_GetType(
  JPC_PointConstraint_t * self
);

JPC_EConstraintSubType JPC_PointConstraint_GetSubType(
  JPC_PointConstraint_t * self
);

unsigned long JPC_PointConstraint_GetConstraintPriority(
  JPC_PointConstraint_t * self
);

void JPC_PointConstraint_SetConstraintPriority(
  JPC_PointConstraint_t * self,
  unsigned long inPriority
);

void JPC_PointConstraint_SetNumVelocityStepsOverride(
  JPC_PointConstraint_t * self,
  long inN
);

long JPC_PointConstraint_GetNumVelocityStepsOverride(
  JPC_PointConstraint_t * self
);

void JPC_PointConstraint_SetNumPositionStepsOverride(
  JPC_PointConstraint_t * self,
  long inN
);

long JPC_PointConstraint_GetNumPositionStepsOverride(
  JPC_PointConstraint_t * self
);

void JPC_PointConstraint_SetEnabled(
  JPC_PointConstraint_t * self,
  bool inEnabled
);

bool JPC_PointConstraint_GetEnabled(
  JPC_PointConstraint_t * self
);

bool JPC_PointConstraint_IsActive(
  JPC_PointConstraint_t * self
);

unsigned long long int JPC_PointConstraint_GetUserData(
  JPC_PointConstraint_t * self
);

void JPC_PointConstraint_SetUserData(
  JPC_PointConstraint_t * self,
  unsigned long long int inUserData
);

void JPC_PointConstraint_ResetWarmStart(
  JPC_PointConstraint_t * self
);

//endregion functions


#ifdef __cplusplus
}
#endif

