#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JPC_PulleyConstraintSettings_t * JPC_PulleyConstraintSettings_new();

//endregion constructors

//region functions

JPC_Constraint_t * JPC_PulleyConstraintSettings_Create(
  JPC_PulleyConstraintSettings_t * self,
  JPC_Body_t * inBody1,
  JPC_Body_t * inBody2
);

unsigned long JPC_PulleyConstraintSettings_GetRefCount(
  JPC_PulleyConstraintSettings_t * self
);

void JPC_PulleyConstraintSettings_AddRef(
  JPC_PulleyConstraintSettings_t * self
);

void JPC_PulleyConstraintSettings_Release(
  JPC_PulleyConstraintSettings_t * self
);

//endregion functions

//region properties

JPC_EConstraintSpace JPC_PulleyConstraintSettings_mSpace_Get(
  JPC_PulleyConstraintSettings_t * self
);

void JPC_PulleyConstraintSettings_mSpace_Set(
  JPC_PulleyConstraintSettings_t * self,
  JPC_EConstraintSpace mSpace
);

JPC_RVec3_t * JPC_PulleyConstraintSettings_mBodyPoint1_Get(
  JPC_PulleyConstraintSettings_t * self
);

void JPC_PulleyConstraintSettings_mBodyPoint1_Set(
  JPC_PulleyConstraintSettings_t * self,
  JPC_RVec3_t * mBodyPoint1
);

JPC_RVec3_t * JPC_PulleyConstraintSettings_mFixedPoint1_Get(
  JPC_PulleyConstraintSettings_t * self
);

void JPC_PulleyConstraintSettings_mFixedPoint1_Set(
  JPC_PulleyConstraintSettings_t * self,
  JPC_RVec3_t * mFixedPoint1
);

JPC_RVec3_t * JPC_PulleyConstraintSettings_mBodyPoint2_Get(
  JPC_PulleyConstraintSettings_t * self
);

void JPC_PulleyConstraintSettings_mBodyPoint2_Set(
  JPC_PulleyConstraintSettings_t * self,
  JPC_RVec3_t * mBodyPoint2
);

JPC_RVec3_t * JPC_PulleyConstraintSettings_mFixedPoint2_Get(
  JPC_PulleyConstraintSettings_t * self
);

void JPC_PulleyConstraintSettings_mFixedPoint2_Set(
  JPC_PulleyConstraintSettings_t * self,
  JPC_RVec3_t * mFixedPoint2
);

float JPC_PulleyConstraintSettings_mRatio_Get(
  JPC_PulleyConstraintSettings_t * self
);

void JPC_PulleyConstraintSettings_mRatio_Set(
  JPC_PulleyConstraintSettings_t * self,
  float mRatio
);

float JPC_PulleyConstraintSettings_mMinLength_Get(
  JPC_PulleyConstraintSettings_t * self
);

void JPC_PulleyConstraintSettings_mMinLength_Set(
  JPC_PulleyConstraintSettings_t * self,
  float mMinLength
);

float JPC_PulleyConstraintSettings_mMaxLength_Get(
  JPC_PulleyConstraintSettings_t * self
);

void JPC_PulleyConstraintSettings_mMaxLength_Set(
  JPC_PulleyConstraintSettings_t * self,
  float mMaxLength
);

bool JPC_PulleyConstraintSettings_mEnabled_Get(
  JPC_PulleyConstraintSettings_t * self
);

void JPC_PulleyConstraintSettings_mEnabled_Set(
  JPC_PulleyConstraintSettings_t * self,
  bool mEnabled
);

long JPC_PulleyConstraintSettings_mNumVelocityStepsOverride_Get(
  JPC_PulleyConstraintSettings_t * self
);

void JPC_PulleyConstraintSettings_mNumVelocityStepsOverride_Set(
  JPC_PulleyConstraintSettings_t * self,
  long mNumVelocityStepsOverride
);

long JPC_PulleyConstraintSettings_mNumPositionStepsOverride_Get(
  JPC_PulleyConstraintSettings_t * self
);

void JPC_PulleyConstraintSettings_mNumPositionStepsOverride_Set(
  JPC_PulleyConstraintSettings_t * self,
  long mNumPositionStepsOverride
);

//endregion properties


#ifdef __cplusplus
}
#endif

