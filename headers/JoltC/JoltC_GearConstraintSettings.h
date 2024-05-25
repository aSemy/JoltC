#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JPC_GearConstraintSettings_t * JPC_GearConstraintSettings_new();

//endregion constructors

//region functions

void JPC_GearConstraintSettings_SetRatio(
  JPC_GearConstraintSettings_t * self,
  long inNumTeethGear1,
  long inNumTeethGear2
);

JPC_Constraint_t * JPC_GearConstraintSettings_Create(
  JPC_GearConstraintSettings_t * self,
  JPC_Body_t * inBody1,
  JPC_Body_t * inBody2
);

unsigned long JPC_GearConstraintSettings_GetRefCount(
  JPC_GearConstraintSettings_t * self
);

void JPC_GearConstraintSettings_AddRef(
  JPC_GearConstraintSettings_t * self
);

void JPC_GearConstraintSettings_Release(
  JPC_GearConstraintSettings_t * self
);

//endregion functions

//region properties

JPC_EConstraintSpace JPC_GearConstraintSettings_mSpace_Get(
  JPC_GearConstraintSettings_t * self
);

void JPC_GearConstraintSettings_mSpace_Set(
  JPC_GearConstraintSettings_t * self,
  JPC_EConstraintSpace mSpace
);

JPC_Vec3_t * JPC_GearConstraintSettings_mHingeAxis1_Get(
  JPC_GearConstraintSettings_t * self
);

void JPC_GearConstraintSettings_mHingeAxis1_Set(
  JPC_GearConstraintSettings_t * self,
  JPC_Vec3_t * mHingeAxis1
);

JPC_Vec3_t * JPC_GearConstraintSettings_mHingeAxis2_Get(
  JPC_GearConstraintSettings_t * self
);

void JPC_GearConstraintSettings_mHingeAxis2_Set(
  JPC_GearConstraintSettings_t * self,
  JPC_Vec3_t * mHingeAxis2
);

float JPC_GearConstraintSettings_mRatio_Get(
  JPC_GearConstraintSettings_t * self
);

void JPC_GearConstraintSettings_mRatio_Set(
  JPC_GearConstraintSettings_t * self,
  float mRatio
);

bool JPC_GearConstraintSettings_mEnabled_Get(
  JPC_GearConstraintSettings_t * self
);

void JPC_GearConstraintSettings_mEnabled_Set(
  JPC_GearConstraintSettings_t * self,
  bool mEnabled
);

long JPC_GearConstraintSettings_mNumVelocityStepsOverride_Get(
  JPC_GearConstraintSettings_t * self
);

void JPC_GearConstraintSettings_mNumVelocityStepsOverride_Set(
  JPC_GearConstraintSettings_t * self,
  long mNumVelocityStepsOverride
);

long JPC_GearConstraintSettings_mNumPositionStepsOverride_Get(
  JPC_GearConstraintSettings_t * self
);

void JPC_GearConstraintSettings_mNumPositionStepsOverride_Set(
  JPC_GearConstraintSettings_t * self,
  long mNumPositionStepsOverride
);

//endregion properties


#ifdef __cplusplus
}
#endif

