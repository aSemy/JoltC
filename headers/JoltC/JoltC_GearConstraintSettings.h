#pragma once
#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_GearConstraintSettings_t * JoltC_GearConstraintSettings_new();

//endregion

//region destructor

void JoltC_GearConstraintSettings_destroy(
  JoltC_GearConstraintSettings_t * self
);

//endregion
//region functions

void JoltC_GearConstraintSettings_SetRatio(
  JoltC_GearConstraintSettings_t * self,
  long inNumTeethGear1,
  long inNumTeethGear2
);

JoltC_Constraint_t * JoltC_GearConstraintSettings_Create(
  JoltC_GearConstraintSettings_t * self,
  JoltC_Body_t * inBody1,
  JoltC_Body_t * inBody2
);

unsigned long JoltC_GearConstraintSettings_GetRefCount(
  JoltC_GearConstraintSettings_t * self
);

void JoltC_GearConstraintSettings_AddRef(
  JoltC_GearConstraintSettings_t * self
);

void JoltC_GearConstraintSettings_Release(
  JoltC_GearConstraintSettings_t * self
);

//endregion

//region properties

JoltC_EConstraintSpace JoltC_GearConstraintSettings_mSpace_Get(
  JoltC_GearConstraintSettings_t * self
);

void JoltC_GearConstraintSettings_mSpace_Set(
  JoltC_GearConstraintSettings_t * self,
  JoltC_EConstraintSpace mSpace
);

JoltC_Vec3_t * JoltC_GearConstraintSettings_mHingeAxis1_Get(
  JoltC_GearConstraintSettings_t * self
);

void JoltC_GearConstraintSettings_mHingeAxis1_Set(
  JoltC_GearConstraintSettings_t * self,
  JoltC_Vec3_t * mHingeAxis1
);

JoltC_Vec3_t * JoltC_GearConstraintSettings_mHingeAxis2_Get(
  JoltC_GearConstraintSettings_t * self
);

void JoltC_GearConstraintSettings_mHingeAxis2_Set(
  JoltC_GearConstraintSettings_t * self,
  JoltC_Vec3_t * mHingeAxis2
);

float JoltC_GearConstraintSettings_mRatio_Get(
  JoltC_GearConstraintSettings_t * self
);

void JoltC_GearConstraintSettings_mRatio_Set(
  JoltC_GearConstraintSettings_t * self,
  float mRatio
);

bool JoltC_GearConstraintSettings_mEnabled_Get(
  JoltC_GearConstraintSettings_t * self
);

void JoltC_GearConstraintSettings_mEnabled_Set(
  JoltC_GearConstraintSettings_t * self,
  bool mEnabled
);

long JoltC_GearConstraintSettings_mNumVelocityStepsOverride_Get(
  JoltC_GearConstraintSettings_t * self
);

void JoltC_GearConstraintSettings_mNumVelocityStepsOverride_Set(
  JoltC_GearConstraintSettings_t * self,
  long mNumVelocityStepsOverride
);

long JoltC_GearConstraintSettings_mNumPositionStepsOverride_Get(
  JoltC_GearConstraintSettings_t * self
);

void JoltC_GearConstraintSettings_mNumPositionStepsOverride_Set(
  JoltC_GearConstraintSettings_t * self,
  long mNumPositionStepsOverride
);

//endregion


#ifdef __cplusplus
}
#endif
