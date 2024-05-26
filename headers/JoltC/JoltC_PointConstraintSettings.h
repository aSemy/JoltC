#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_PointConstraintSettings_t * JoltC_PointConstraintSettings_new();

//endregion

//region functions

JoltC_Constraint_t * JoltC_PointConstraintSettings_Create(
  JoltC_PointConstraintSettings_t * self,
  JoltC_Body_t * inBody1,
  JoltC_Body_t * inBody2
);

unsigned long JoltC_PointConstraintSettings_GetRefCount(
  JoltC_PointConstraintSettings_t * self
);

void JoltC_PointConstraintSettings_AddRef(
  JoltC_PointConstraintSettings_t * self
);

void JoltC_PointConstraintSettings_Release(
  JoltC_PointConstraintSettings_t * self
);

//endregion

//region properties

JoltC_EConstraintSpace JoltC_PointConstraintSettings_mSpace_Get(
  JoltC_PointConstraintSettings_t * self
);

void JoltC_PointConstraintSettings_mSpace_Set(
  JoltC_PointConstraintSettings_t * self,
  JoltC_EConstraintSpace mSpace
);

JoltC_RVec3_t * JoltC_PointConstraintSettings_mPoint1_Get(
  JoltC_PointConstraintSettings_t * self
);

void JoltC_PointConstraintSettings_mPoint1_Set(
  JoltC_PointConstraintSettings_t * self,
  JoltC_RVec3_t * mPoint1
);

JoltC_RVec3_t * JoltC_PointConstraintSettings_mPoint2_Get(
  JoltC_PointConstraintSettings_t * self
);

void JoltC_PointConstraintSettings_mPoint2_Set(
  JoltC_PointConstraintSettings_t * self,
  JoltC_RVec3_t * mPoint2
);

bool JoltC_PointConstraintSettings_mEnabled_Get(
  JoltC_PointConstraintSettings_t * self
);

void JoltC_PointConstraintSettings_mEnabled_Set(
  JoltC_PointConstraintSettings_t * self,
  bool mEnabled
);

long JoltC_PointConstraintSettings_mNumVelocityStepsOverride_Get(
  JoltC_PointConstraintSettings_t * self
);

void JoltC_PointConstraintSettings_mNumVelocityStepsOverride_Set(
  JoltC_PointConstraintSettings_t * self,
  long mNumVelocityStepsOverride
);

long JoltC_PointConstraintSettings_mNumPositionStepsOverride_Get(
  JoltC_PointConstraintSettings_t * self
);

void JoltC_PointConstraintSettings_mNumPositionStepsOverride_Set(
  JoltC_PointConstraintSettings_t * self,
  long mNumPositionStepsOverride
);

//endregion


#ifdef __cplusplus
}
#endif

