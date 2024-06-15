#pragma once
#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_PulleyConstraintSettings_t * JoltC_PulleyConstraintSettings_new();

//endregion

//region destructor

void JoltC_PulleyConstraintSettings_destroy(
  JoltC_PulleyConstraintSettings_t * self
);

//endregion
//region functions

JoltC_Constraint_t * JoltC_PulleyConstraintSettings_Create(
  JoltC_PulleyConstraintSettings_t * self,
  JoltC_Body_t * inBody1,
  JoltC_Body_t * inBody2
);

unsigned long JoltC_PulleyConstraintSettings_GetRefCount(
  JoltC_PulleyConstraintSettings_t * self
);

void JoltC_PulleyConstraintSettings_AddRef(
  JoltC_PulleyConstraintSettings_t * self
);

void JoltC_PulleyConstraintSettings_Release(
  JoltC_PulleyConstraintSettings_t * self
);

//endregion

//region properties

JoltC_EConstraintSpace JoltC_PulleyConstraintSettings_mSpace_Get(
  JoltC_PulleyConstraintSettings_t * self
);

void JoltC_PulleyConstraintSettings_mSpace_Set(
  JoltC_PulleyConstraintSettings_t * self,
  JoltC_EConstraintSpace mSpace
);

JoltC_RVec3_t * JoltC_PulleyConstraintSettings_mBodyPoint1_Get(
  JoltC_PulleyConstraintSettings_t * self
);

void JoltC_PulleyConstraintSettings_mBodyPoint1_Set(
  JoltC_PulleyConstraintSettings_t * self,
  JoltC_RVec3_t * mBodyPoint1
);

JoltC_RVec3_t * JoltC_PulleyConstraintSettings_mFixedPoint1_Get(
  JoltC_PulleyConstraintSettings_t * self
);

void JoltC_PulleyConstraintSettings_mFixedPoint1_Set(
  JoltC_PulleyConstraintSettings_t * self,
  JoltC_RVec3_t * mFixedPoint1
);

JoltC_RVec3_t * JoltC_PulleyConstraintSettings_mBodyPoint2_Get(
  JoltC_PulleyConstraintSettings_t * self
);

void JoltC_PulleyConstraintSettings_mBodyPoint2_Set(
  JoltC_PulleyConstraintSettings_t * self,
  JoltC_RVec3_t * mBodyPoint2
);

JoltC_RVec3_t * JoltC_PulleyConstraintSettings_mFixedPoint2_Get(
  JoltC_PulleyConstraintSettings_t * self
);

void JoltC_PulleyConstraintSettings_mFixedPoint2_Set(
  JoltC_PulleyConstraintSettings_t * self,
  JoltC_RVec3_t * mFixedPoint2
);

float JoltC_PulleyConstraintSettings_mRatio_Get(
  JoltC_PulleyConstraintSettings_t * self
);

void JoltC_PulleyConstraintSettings_mRatio_Set(
  JoltC_PulleyConstraintSettings_t * self,
  float mRatio
);

float JoltC_PulleyConstraintSettings_mMinLength_Get(
  JoltC_PulleyConstraintSettings_t * self
);

void JoltC_PulleyConstraintSettings_mMinLength_Set(
  JoltC_PulleyConstraintSettings_t * self,
  float mMinLength
);

float JoltC_PulleyConstraintSettings_mMaxLength_Get(
  JoltC_PulleyConstraintSettings_t * self
);

void JoltC_PulleyConstraintSettings_mMaxLength_Set(
  JoltC_PulleyConstraintSettings_t * self,
  float mMaxLength
);

bool JoltC_PulleyConstraintSettings_mEnabled_Get(
  JoltC_PulleyConstraintSettings_t * self
);

void JoltC_PulleyConstraintSettings_mEnabled_Set(
  JoltC_PulleyConstraintSettings_t * self,
  bool mEnabled
);

long JoltC_PulleyConstraintSettings_mNumVelocityStepsOverride_Get(
  JoltC_PulleyConstraintSettings_t * self
);

void JoltC_PulleyConstraintSettings_mNumVelocityStepsOverride_Set(
  JoltC_PulleyConstraintSettings_t * self,
  long mNumVelocityStepsOverride
);

long JoltC_PulleyConstraintSettings_mNumPositionStepsOverride_Get(
  JoltC_PulleyConstraintSettings_t * self
);

void JoltC_PulleyConstraintSettings_mNumPositionStepsOverride_Set(
  JoltC_PulleyConstraintSettings_t * self,
  long mNumPositionStepsOverride
);

//endregion


#ifdef __cplusplus
}
#endif
