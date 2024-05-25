#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_RackAndPinionConstraintSettings_t * JoltC_RackAndPinionConstraintSettings_new(
  char** outErrMsg
);

//endregion constructors

//region functions

void JoltC_RackAndPinionConstraintSettings_SetRatio(
  JoltC_RackAndPinionConstraintSettings_t * self,
  long inNumTeethRack,
  float inRackLength,
  long inNumTeethPinion,
  char** outErrMsg
);

JoltC_Constraint_t * JoltC_RackAndPinionConstraintSettings_Create(
  JoltC_RackAndPinionConstraintSettings_t * self,
  JoltC_Body_t * inBody1,
  JoltC_Body_t * inBody2,
  char** outErrMsg
);

unsigned long JoltC_RackAndPinionConstraintSettings_GetRefCount(
  JoltC_RackAndPinionConstraintSettings_t * self,
  char** outErrMsg
);

void JoltC_RackAndPinionConstraintSettings_AddRef(
  JoltC_RackAndPinionConstraintSettings_t * self,
  char** outErrMsg
);

void JoltC_RackAndPinionConstraintSettings_Release(
  JoltC_RackAndPinionConstraintSettings_t * self,
  char** outErrMsg
);

//endregion functions

//region properties

JoltC_EConstraintSpace JoltC_RackAndPinionConstraintSettings_mSpace_Get(
  JoltC_RackAndPinionConstraintSettings_t * self,
  char** outErrMsg
);

void JoltC_RackAndPinionConstraintSettings_mSpace_Set(
  JoltC_RackAndPinionConstraintSettings_t * self,
  JoltC_EConstraintSpace mSpace,
  char** outErrMsg
);

JoltC_Vec3_t * JoltC_RackAndPinionConstraintSettings_mHingeAxis_Get(
  JoltC_RackAndPinionConstraintSettings_t * self,
  char** outErrMsg
);

void JoltC_RackAndPinionConstraintSettings_mHingeAxis_Set(
  JoltC_RackAndPinionConstraintSettings_t * self,
  JoltC_Vec3_t * mHingeAxis,
  char** outErrMsg
);

JoltC_Vec3_t * JoltC_RackAndPinionConstraintSettings_mSliderAxis_Get(
  JoltC_RackAndPinionConstraintSettings_t * self,
  char** outErrMsg
);

void JoltC_RackAndPinionConstraintSettings_mSliderAxis_Set(
  JoltC_RackAndPinionConstraintSettings_t * self,
  JoltC_Vec3_t * mSliderAxis,
  char** outErrMsg
);

float JoltC_RackAndPinionConstraintSettings_mRatio_Get(
  JoltC_RackAndPinionConstraintSettings_t * self,
  char** outErrMsg
);

void JoltC_RackAndPinionConstraintSettings_mRatio_Set(
  JoltC_RackAndPinionConstraintSettings_t * self,
  float mRatio,
  char** outErrMsg
);

bool JoltC_RackAndPinionConstraintSettings_mEnabled_Get(
  JoltC_RackAndPinionConstraintSettings_t * self,
  char** outErrMsg
);

void JoltC_RackAndPinionConstraintSettings_mEnabled_Set(
  JoltC_RackAndPinionConstraintSettings_t * self,
  bool mEnabled,
  char** outErrMsg
);

long JoltC_RackAndPinionConstraintSettings_mNumVelocityStepsOverride_Get(
  JoltC_RackAndPinionConstraintSettings_t * self,
  char** outErrMsg
);

void JoltC_RackAndPinionConstraintSettings_mNumVelocityStepsOverride_Set(
  JoltC_RackAndPinionConstraintSettings_t * self,
  long mNumVelocityStepsOverride,
  char** outErrMsg
);

long JoltC_RackAndPinionConstraintSettings_mNumPositionStepsOverride_Get(
  JoltC_RackAndPinionConstraintSettings_t * self,
  char** outErrMsg
);

void JoltC_RackAndPinionConstraintSettings_mNumPositionStepsOverride_Set(
  JoltC_RackAndPinionConstraintSettings_t * self,
  long mNumPositionStepsOverride,
  char** outErrMsg
);

//endregion properties


#ifdef __cplusplus
}
#endif

