#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_GearConstraintSettings_t * JoltC_GearConstraintSettings_new(
  char** outErrMsg
);

//endregion constructors

//region functions

void JoltC_GearConstraintSettings_SetRatio(
  JoltC_GearConstraintSettings_t * self,
  long inNumTeethGear1,
  long inNumTeethGear2,
  char** outErrMsg
);

JoltC_Constraint_t * JoltC_GearConstraintSettings_Create(
  JoltC_GearConstraintSettings_t * self,
  JoltC_Body_t * inBody1,
  JoltC_Body_t * inBody2,
  char** outErrMsg
);

unsigned long JoltC_GearConstraintSettings_GetRefCount(
  JoltC_GearConstraintSettings_t * self,
  char** outErrMsg
);

void JoltC_GearConstraintSettings_AddRef(
  JoltC_GearConstraintSettings_t * self,
  char** outErrMsg
);

void JoltC_GearConstraintSettings_Release(
  JoltC_GearConstraintSettings_t * self,
  char** outErrMsg
);

//endregion functions

//region properties

JoltC_EConstraintSpace JoltC_GearConstraintSettings_mSpace_Get(
  JoltC_GearConstraintSettings_t * self,
  char** outErrMsg
);

void JoltC_GearConstraintSettings_mSpace_Set(
  JoltC_GearConstraintSettings_t * self,
  JoltC_EConstraintSpace mSpace,
  char** outErrMsg
);

JoltC_Vec3_t * JoltC_GearConstraintSettings_mHingeAxis1_Get(
  JoltC_GearConstraintSettings_t * self,
  char** outErrMsg
);

void JoltC_GearConstraintSettings_mHingeAxis1_Set(
  JoltC_GearConstraintSettings_t * self,
  JoltC_Vec3_t * mHingeAxis1,
  char** outErrMsg
);

JoltC_Vec3_t * JoltC_GearConstraintSettings_mHingeAxis2_Get(
  JoltC_GearConstraintSettings_t * self,
  char** outErrMsg
);

void JoltC_GearConstraintSettings_mHingeAxis2_Set(
  JoltC_GearConstraintSettings_t * self,
  JoltC_Vec3_t * mHingeAxis2,
  char** outErrMsg
);

float JoltC_GearConstraintSettings_mRatio_Get(
  JoltC_GearConstraintSettings_t * self,
  char** outErrMsg
);

void JoltC_GearConstraintSettings_mRatio_Set(
  JoltC_GearConstraintSettings_t * self,
  float mRatio,
  char** outErrMsg
);

bool JoltC_GearConstraintSettings_mEnabled_Get(
  JoltC_GearConstraintSettings_t * self,
  char** outErrMsg
);

void JoltC_GearConstraintSettings_mEnabled_Set(
  JoltC_GearConstraintSettings_t * self,
  bool mEnabled,
  char** outErrMsg
);

long JoltC_GearConstraintSettings_mNumVelocityStepsOverride_Get(
  JoltC_GearConstraintSettings_t * self,
  char** outErrMsg
);

void JoltC_GearConstraintSettings_mNumVelocityStepsOverride_Set(
  JoltC_GearConstraintSettings_t * self,
  long mNumVelocityStepsOverride,
  char** outErrMsg
);

long JoltC_GearConstraintSettings_mNumPositionStepsOverride_Get(
  JoltC_GearConstraintSettings_t * self,
  char** outErrMsg
);

void JoltC_GearConstraintSettings_mNumPositionStepsOverride_Set(
  JoltC_GearConstraintSettings_t * self,
  long mNumPositionStepsOverride,
  char** outErrMsg
);

//endregion properties


#ifdef __cplusplus
}
#endif

