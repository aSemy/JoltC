#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JPC_RackAndPinionConstraintSettings_t * JPC_RackAndPinionConstraintSettings_new();

//endregion constructors

//region functions

void JPC_RackAndPinionConstraintSettings_SetRatio(
  JPC_RackAndPinionConstraintSettings_t * self,
  long inNumTeethRack,
  float inRackLength,
  long inNumTeethPinion
);

JPC_Constraint_t * JPC_RackAndPinionConstraintSettings_Create(
  JPC_RackAndPinionConstraintSettings_t * self,
  JPC_Body_t * inBody1,
  JPC_Body_t * inBody2
);

unsigned long JPC_RackAndPinionConstraintSettings_GetRefCount(
  JPC_RackAndPinionConstraintSettings_t * self
);

void JPC_RackAndPinionConstraintSettings_AddRef(
  JPC_RackAndPinionConstraintSettings_t * self
);

void JPC_RackAndPinionConstraintSettings_Release(
  JPC_RackAndPinionConstraintSettings_t * self
);

//endregion functions

//region properties

JPC_EConstraintSpace JPC_RackAndPinionConstraintSettings_mSpace_Get(
  JPC_RackAndPinionConstraintSettings_t * self
);

void JPC_RackAndPinionConstraintSettings_mSpace_Set(
  JPC_RackAndPinionConstraintSettings_t * self,
  JPC_EConstraintSpace mSpace
);

JPC_Vec3_t * JPC_RackAndPinionConstraintSettings_mHingeAxis_Get(
  JPC_RackAndPinionConstraintSettings_t * self
);

void JPC_RackAndPinionConstraintSettings_mHingeAxis_Set(
  JPC_RackAndPinionConstraintSettings_t * self,
  JPC_Vec3_t * mHingeAxis
);

JPC_Vec3_t * JPC_RackAndPinionConstraintSettings_mSliderAxis_Get(
  JPC_RackAndPinionConstraintSettings_t * self
);

void JPC_RackAndPinionConstraintSettings_mSliderAxis_Set(
  JPC_RackAndPinionConstraintSettings_t * self,
  JPC_Vec3_t * mSliderAxis
);

float JPC_RackAndPinionConstraintSettings_mRatio_Get(
  JPC_RackAndPinionConstraintSettings_t * self
);

void JPC_RackAndPinionConstraintSettings_mRatio_Set(
  JPC_RackAndPinionConstraintSettings_t * self,
  float mRatio
);

bool JPC_RackAndPinionConstraintSettings_mEnabled_Get(
  JPC_RackAndPinionConstraintSettings_t * self
);

void JPC_RackAndPinionConstraintSettings_mEnabled_Set(
  JPC_RackAndPinionConstraintSettings_t * self,
  bool mEnabled
);

long JPC_RackAndPinionConstraintSettings_mNumVelocityStepsOverride_Get(
  JPC_RackAndPinionConstraintSettings_t * self
);

void JPC_RackAndPinionConstraintSettings_mNumVelocityStepsOverride_Set(
  JPC_RackAndPinionConstraintSettings_t * self,
  long mNumVelocityStepsOverride
);

long JPC_RackAndPinionConstraintSettings_mNumPositionStepsOverride_Get(
  JPC_RackAndPinionConstraintSettings_t * self
);

void JPC_RackAndPinionConstraintSettings_mNumPositionStepsOverride_Set(
  JPC_RackAndPinionConstraintSettings_t * self,
  long mNumPositionStepsOverride
);

//endregion properties


#ifdef __cplusplus
}
#endif

