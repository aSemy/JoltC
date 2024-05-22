#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JPC_PointConstraintSettings_t * JPC_PointConstraintSettings_new();

//endregion constructors

//region functions

JPC_Constraint_t * JPC_PointConstraintSettings_Create(
  JPC_PointConstraintSettings_t * self,
  JPC_Body_t * inBody1,
  JPC_Body_t * inBody2
);

unsigned long JPC_PointConstraintSettings_GetRefCount(
  JPC_PointConstraintSettings_t * self
);

void JPC_PointConstraintSettings_AddRef(
  JPC_PointConstraintSettings_t * self
);

void JPC_PointConstraintSettings_Release(
  JPC_PointConstraintSettings_t * self
);

//endregion functions

//region properties

JPC_EConstraintSpace JPC_PointConstraintSettings_mSpace_Get(
  JPC_PointConstraintSettings_t * self
);

void JPC_PointConstraintSettings_mSpace_Set(
  JPC_PointConstraintSettings_t * self,
  JPC_EConstraintSpace mSpace
);

JPC_RVec3_t * JPC_PointConstraintSettings_mPoint1_Get(
  JPC_PointConstraintSettings_t * self
);

void JPC_PointConstraintSettings_mPoint1_Set(
  JPC_PointConstraintSettings_t * self,
  JPC_RVec3_t * mPoint1
);

JPC_RVec3_t * JPC_PointConstraintSettings_mPoint2_Get(
  JPC_PointConstraintSettings_t * self
);

void JPC_PointConstraintSettings_mPoint2_Set(
  JPC_PointConstraintSettings_t * self,
  JPC_RVec3_t * mPoint2
);

bool JPC_PointConstraintSettings_mEnabled_Get(
  JPC_PointConstraintSettings_t * self
);

void JPC_PointConstraintSettings_mEnabled_Set(
  JPC_PointConstraintSettings_t * self,
  bool mEnabled
);

long JPC_PointConstraintSettings_mNumVelocityStepsOverride_Get(
  JPC_PointConstraintSettings_t * self
);

void JPC_PointConstraintSettings_mNumVelocityStepsOverride_Set(
  JPC_PointConstraintSettings_t * self,
  long mNumVelocityStepsOverride
);

long JPC_PointConstraintSettings_mNumPositionStepsOverride_Get(
  JPC_PointConstraintSettings_t * self
);

void JPC_PointConstraintSettings_mNumPositionStepsOverride_Set(
  JPC_PointConstraintSettings_t * self,
  long mNumPositionStepsOverride
);

//endregion properties


#ifdef __cplusplus
}
#endif

