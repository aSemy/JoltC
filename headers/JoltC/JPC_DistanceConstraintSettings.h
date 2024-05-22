#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JPC_DistanceConstraintSettings_t * JPC_DistanceConstraintSettings_new();

//endregion constructors

//region functions

JPC_Constraint_t * JPC_DistanceConstraintSettings_Create(
  JPC_DistanceConstraintSettings_t * self,
  JPC_Body_t * inBody1,
  JPC_Body_t * inBody2
);

unsigned long JPC_DistanceConstraintSettings_GetRefCount(
  JPC_DistanceConstraintSettings_t * self
);

void JPC_DistanceConstraintSettings_AddRef(
  JPC_DistanceConstraintSettings_t * self
);

void JPC_DistanceConstraintSettings_Release(
  JPC_DistanceConstraintSettings_t * self
);

//endregion functions

//region properties

JPC_EConstraintSpace JPC_DistanceConstraintSettings_mSpace_Get(
  JPC_DistanceConstraintSettings_t * self
);

void JPC_DistanceConstraintSettings_mSpace_Set(
  JPC_DistanceConstraintSettings_t * self,
  JPC_EConstraintSpace mSpace
);

JPC_RVec3_t * JPC_DistanceConstraintSettings_mPoint1_Get(
  JPC_DistanceConstraintSettings_t * self
);

void JPC_DistanceConstraintSettings_mPoint1_Set(
  JPC_DistanceConstraintSettings_t * self,
  JPC_RVec3_t * mPoint1
);

JPC_RVec3_t * JPC_DistanceConstraintSettings_mPoint2_Get(
  JPC_DistanceConstraintSettings_t * self
);

void JPC_DistanceConstraintSettings_mPoint2_Set(
  JPC_DistanceConstraintSettings_t * self,
  JPC_RVec3_t * mPoint2
);

float JPC_DistanceConstraintSettings_mMinDistance_Get(
  JPC_DistanceConstraintSettings_t * self
);

void JPC_DistanceConstraintSettings_mMinDistance_Set(
  JPC_DistanceConstraintSettings_t * self,
  float mMinDistance
);

float JPC_DistanceConstraintSettings_mMaxDistance_Get(
  JPC_DistanceConstraintSettings_t * self
);

void JPC_DistanceConstraintSettings_mMaxDistance_Set(
  JPC_DistanceConstraintSettings_t * self,
  float mMaxDistance
);

JPC_SpringSettings_t * JPC_DistanceConstraintSettings_mLimitsSpringSettings_Get(
  JPC_DistanceConstraintSettings_t * self
);

void JPC_DistanceConstraintSettings_mLimitsSpringSettings_Set(
  JPC_DistanceConstraintSettings_t * self,
  JPC_SpringSettings_t * mLimitsSpringSettings
);

bool JPC_DistanceConstraintSettings_mEnabled_Get(
  JPC_DistanceConstraintSettings_t * self
);

void JPC_DistanceConstraintSettings_mEnabled_Set(
  JPC_DistanceConstraintSettings_t * self,
  bool mEnabled
);

long JPC_DistanceConstraintSettings_mNumVelocityStepsOverride_Get(
  JPC_DistanceConstraintSettings_t * self
);

void JPC_DistanceConstraintSettings_mNumVelocityStepsOverride_Set(
  JPC_DistanceConstraintSettings_t * self,
  long mNumVelocityStepsOverride
);

long JPC_DistanceConstraintSettings_mNumPositionStepsOverride_Get(
  JPC_DistanceConstraintSettings_t * self
);

void JPC_DistanceConstraintSettings_mNumPositionStepsOverride_Set(
  JPC_DistanceConstraintSettings_t * self,
  long mNumPositionStepsOverride
);

//endregion properties


#ifdef __cplusplus
}
#endif

