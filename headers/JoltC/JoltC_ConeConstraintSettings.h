#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_ConeConstraintSettings_t * JoltC_ConeConstraintSettings_new(
  char** outErrMsg
);

//endregion constructors

//region functions

JoltC_Constraint_t * JoltC_ConeConstraintSettings_Create(
  JoltC_ConeConstraintSettings_t * self,
  JoltC_Body_t * inBody1,
  JoltC_Body_t * inBody2,
  char** outErrMsg
);

unsigned long JoltC_ConeConstraintSettings_GetRefCount(
  JoltC_ConeConstraintSettings_t * self,
  char** outErrMsg
);

void JoltC_ConeConstraintSettings_AddRef(
  JoltC_ConeConstraintSettings_t * self,
  char** outErrMsg
);

void JoltC_ConeConstraintSettings_Release(
  JoltC_ConeConstraintSettings_t * self,
  char** outErrMsg
);

//endregion functions

//region properties

JoltC_EConstraintSpace JoltC_ConeConstraintSettings_mSpace_Get(
  JoltC_ConeConstraintSettings_t * self,
  char** outErrMsg
);

void JoltC_ConeConstraintSettings_mSpace_Set(
  JoltC_ConeConstraintSettings_t * self,
  JoltC_EConstraintSpace mSpace,
  char** outErrMsg
);

JoltC_RVec3_t * JoltC_ConeConstraintSettings_mPoint1_Get(
  JoltC_ConeConstraintSettings_t * self,
  char** outErrMsg
);

void JoltC_ConeConstraintSettings_mPoint1_Set(
  JoltC_ConeConstraintSettings_t * self,
  JoltC_RVec3_t * mPoint1,
  char** outErrMsg
);

JoltC_Vec3_t * JoltC_ConeConstraintSettings_mTwistAxis1_Get(
  JoltC_ConeConstraintSettings_t * self,
  char** outErrMsg
);

void JoltC_ConeConstraintSettings_mTwistAxis1_Set(
  JoltC_ConeConstraintSettings_t * self,
  JoltC_Vec3_t * mTwistAxis1,
  char** outErrMsg
);

JoltC_RVec3_t * JoltC_ConeConstraintSettings_mPoint2_Get(
  JoltC_ConeConstraintSettings_t * self,
  char** outErrMsg
);

void JoltC_ConeConstraintSettings_mPoint2_Set(
  JoltC_ConeConstraintSettings_t * self,
  JoltC_RVec3_t * mPoint2,
  char** outErrMsg
);

JoltC_Vec3_t * JoltC_ConeConstraintSettings_mTwistAxis2_Get(
  JoltC_ConeConstraintSettings_t * self,
  char** outErrMsg
);

void JoltC_ConeConstraintSettings_mTwistAxis2_Set(
  JoltC_ConeConstraintSettings_t * self,
  JoltC_Vec3_t * mTwistAxis2,
  char** outErrMsg
);

float JoltC_ConeConstraintSettings_mHalfConeAngle_Get(
  JoltC_ConeConstraintSettings_t * self,
  char** outErrMsg
);

void JoltC_ConeConstraintSettings_mHalfConeAngle_Set(
  JoltC_ConeConstraintSettings_t * self,
  float mHalfConeAngle,
  char** outErrMsg
);

bool JoltC_ConeConstraintSettings_mEnabled_Get(
  JoltC_ConeConstraintSettings_t * self,
  char** outErrMsg
);

void JoltC_ConeConstraintSettings_mEnabled_Set(
  JoltC_ConeConstraintSettings_t * self,
  bool mEnabled,
  char** outErrMsg
);

long JoltC_ConeConstraintSettings_mNumVelocityStepsOverride_Get(
  JoltC_ConeConstraintSettings_t * self,
  char** outErrMsg
);

void JoltC_ConeConstraintSettings_mNumVelocityStepsOverride_Set(
  JoltC_ConeConstraintSettings_t * self,
  long mNumVelocityStepsOverride,
  char** outErrMsg
);

long JoltC_ConeConstraintSettings_mNumPositionStepsOverride_Get(
  JoltC_ConeConstraintSettings_t * self,
  char** outErrMsg
);

void JoltC_ConeConstraintSettings_mNumPositionStepsOverride_Set(
  JoltC_ConeConstraintSettings_t * self,
  long mNumPositionStepsOverride,
  char** outErrMsg
);

//endregion properties


#ifdef __cplusplus
}
#endif

