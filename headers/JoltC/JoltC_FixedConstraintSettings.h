#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JPC_FixedConstraintSettings_t * JPC_FixedConstraintSettings_new();

//endregion constructors

//region functions

JPC_Constraint_t * JPC_FixedConstraintSettings_Create(
  JPC_FixedConstraintSettings_t * self,
  JPC_Body_t * inBody1,
  JPC_Body_t * inBody2
);

unsigned long JPC_FixedConstraintSettings_GetRefCount(
  JPC_FixedConstraintSettings_t * self
);

void JPC_FixedConstraintSettings_AddRef(
  JPC_FixedConstraintSettings_t * self
);

void JPC_FixedConstraintSettings_Release(
  JPC_FixedConstraintSettings_t * self
);

//endregion functions

//region properties

JPC_EConstraintSpace JPC_FixedConstraintSettings_mSpace_Get(
  JPC_FixedConstraintSettings_t * self
);

void JPC_FixedConstraintSettings_mSpace_Set(
  JPC_FixedConstraintSettings_t * self,
  JPC_EConstraintSpace mSpace
);

bool JPC_FixedConstraintSettings_mAutoDetectPoint_Get(
  JPC_FixedConstraintSettings_t * self
);

void JPC_FixedConstraintSettings_mAutoDetectPoint_Set(
  JPC_FixedConstraintSettings_t * self,
  bool mAutoDetectPoint
);

JPC_RVec3_t * JPC_FixedConstraintSettings_mPoint1_Get(
  JPC_FixedConstraintSettings_t * self
);

void JPC_FixedConstraintSettings_mPoint1_Set(
  JPC_FixedConstraintSettings_t * self,
  JPC_RVec3_t * mPoint1
);

JPC_Vec3_t * JPC_FixedConstraintSettings_mAxisX1_Get(
  JPC_FixedConstraintSettings_t * self
);

void JPC_FixedConstraintSettings_mAxisX1_Set(
  JPC_FixedConstraintSettings_t * self,
  JPC_Vec3_t * mAxisX1
);

JPC_Vec3_t * JPC_FixedConstraintSettings_mAxisY1_Get(
  JPC_FixedConstraintSettings_t * self
);

void JPC_FixedConstraintSettings_mAxisY1_Set(
  JPC_FixedConstraintSettings_t * self,
  JPC_Vec3_t * mAxisY1
);

JPC_RVec3_t * JPC_FixedConstraintSettings_mPoint2_Get(
  JPC_FixedConstraintSettings_t * self
);

void JPC_FixedConstraintSettings_mPoint2_Set(
  JPC_FixedConstraintSettings_t * self,
  JPC_RVec3_t * mPoint2
);

JPC_Vec3_t * JPC_FixedConstraintSettings_mAxisX2_Get(
  JPC_FixedConstraintSettings_t * self
);

void JPC_FixedConstraintSettings_mAxisX2_Set(
  JPC_FixedConstraintSettings_t * self,
  JPC_Vec3_t * mAxisX2
);

JPC_Vec3_t * JPC_FixedConstraintSettings_mAxisY2_Get(
  JPC_FixedConstraintSettings_t * self
);

void JPC_FixedConstraintSettings_mAxisY2_Set(
  JPC_FixedConstraintSettings_t * self,
  JPC_Vec3_t * mAxisY2
);

bool JPC_FixedConstraintSettings_mEnabled_Get(
  JPC_FixedConstraintSettings_t * self
);

void JPC_FixedConstraintSettings_mEnabled_Set(
  JPC_FixedConstraintSettings_t * self,
  bool mEnabled
);

long JPC_FixedConstraintSettings_mNumVelocityStepsOverride_Get(
  JPC_FixedConstraintSettings_t * self
);

void JPC_FixedConstraintSettings_mNumVelocityStepsOverride_Set(
  JPC_FixedConstraintSettings_t * self,
  long mNumVelocityStepsOverride
);

long JPC_FixedConstraintSettings_mNumPositionStepsOverride_Get(
  JPC_FixedConstraintSettings_t * self
);

void JPC_FixedConstraintSettings_mNumPositionStepsOverride_Set(
  JPC_FixedConstraintSettings_t * self,
  long mNumPositionStepsOverride
);

//endregion properties


#ifdef __cplusplus
}
#endif

