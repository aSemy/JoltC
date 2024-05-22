#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JPC_ConeConstraintSettings_t * JPC_ConeConstraintSettings_new();

//endregion constructors

//region functions

JPC_Constraint_t * JPC_ConeConstraintSettings_Create(
  JPC_ConeConstraintSettings_t * self,
  JPC_Body_t * inBody1,
  JPC_Body_t * inBody2
);

unsigned long JPC_ConeConstraintSettings_GetRefCount(
  JPC_ConeConstraintSettings_t * self
);

void JPC_ConeConstraintSettings_AddRef(
  JPC_ConeConstraintSettings_t * self
);

void JPC_ConeConstraintSettings_Release(
  JPC_ConeConstraintSettings_t * self
);

//endregion functions

//region properties

JPC_EConstraintSpace JPC_ConeConstraintSettings_mSpace_Get(
  JPC_ConeConstraintSettings_t * self
);

void JPC_ConeConstraintSettings_mSpace_Set(
  JPC_ConeConstraintSettings_t * self,
  JPC_EConstraintSpace mSpace
);

JPC_RVec3_t * JPC_ConeConstraintSettings_mPoint1_Get(
  JPC_ConeConstraintSettings_t * self
);

void JPC_ConeConstraintSettings_mPoint1_Set(
  JPC_ConeConstraintSettings_t * self,
  JPC_RVec3_t * mPoint1
);

JPC_Vec3_t * JPC_ConeConstraintSettings_mTwistAxis1_Get(
  JPC_ConeConstraintSettings_t * self
);

void JPC_ConeConstraintSettings_mTwistAxis1_Set(
  JPC_ConeConstraintSettings_t * self,
  JPC_Vec3_t * mTwistAxis1
);

JPC_RVec3_t * JPC_ConeConstraintSettings_mPoint2_Get(
  JPC_ConeConstraintSettings_t * self
);

void JPC_ConeConstraintSettings_mPoint2_Set(
  JPC_ConeConstraintSettings_t * self,
  JPC_RVec3_t * mPoint2
);

JPC_Vec3_t * JPC_ConeConstraintSettings_mTwistAxis2_Get(
  JPC_ConeConstraintSettings_t * self
);

void JPC_ConeConstraintSettings_mTwistAxis2_Set(
  JPC_ConeConstraintSettings_t * self,
  JPC_Vec3_t * mTwistAxis2
);

float JPC_ConeConstraintSettings_mHalfConeAngle_Get(
  JPC_ConeConstraintSettings_t * self
);

void JPC_ConeConstraintSettings_mHalfConeAngle_Set(
  JPC_ConeConstraintSettings_t * self,
  float mHalfConeAngle
);

bool JPC_ConeConstraintSettings_mEnabled_Get(
  JPC_ConeConstraintSettings_t * self
);

void JPC_ConeConstraintSettings_mEnabled_Set(
  JPC_ConeConstraintSettings_t * self,
  bool mEnabled
);

long JPC_ConeConstraintSettings_mNumVelocityStepsOverride_Get(
  JPC_ConeConstraintSettings_t * self
);

void JPC_ConeConstraintSettings_mNumVelocityStepsOverride_Set(
  JPC_ConeConstraintSettings_t * self,
  long mNumVelocityStepsOverride
);

long JPC_ConeConstraintSettings_mNumPositionStepsOverride_Get(
  JPC_ConeConstraintSettings_t * self
);

void JPC_ConeConstraintSettings_mNumPositionStepsOverride_Set(
  JPC_ConeConstraintSettings_t * self,
  long mNumPositionStepsOverride
);

//endregion properties


#ifdef __cplusplus
}
#endif

