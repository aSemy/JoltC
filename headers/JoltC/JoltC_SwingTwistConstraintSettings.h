#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_SwingTwistConstraintSettings_t * JoltC_SwingTwistConstraintSettings_new(
  char** outErrMsg
);

//endregion constructors

//region functions

JoltC_Constraint_t * JoltC_SwingTwistConstraintSettings_Create(
  JoltC_SwingTwistConstraintSettings_t * self,
  JoltC_Body_t * inBody1,
  JoltC_Body_t * inBody2,
  char** outErrMsg
);

unsigned long JoltC_SwingTwistConstraintSettings_GetRefCount(
  JoltC_SwingTwistConstraintSettings_t * self,
  char** outErrMsg
);

void JoltC_SwingTwistConstraintSettings_AddRef(
  JoltC_SwingTwistConstraintSettings_t * self,
  char** outErrMsg
);

void JoltC_SwingTwistConstraintSettings_Release(
  JoltC_SwingTwistConstraintSettings_t * self,
  char** outErrMsg
);

//endregion functions

//region properties

JoltC_EConstraintSpace JoltC_SwingTwistConstraintSettings_mSpace_Get(
  JoltC_SwingTwistConstraintSettings_t * self,
  char** outErrMsg
);

void JoltC_SwingTwistConstraintSettings_mSpace_Set(
  JoltC_SwingTwistConstraintSettings_t * self,
  JoltC_EConstraintSpace mSpace,
  char** outErrMsg
);

JoltC_RVec3_t * JoltC_SwingTwistConstraintSettings_mPosition1_Get(
  JoltC_SwingTwistConstraintSettings_t * self,
  char** outErrMsg
);

void JoltC_SwingTwistConstraintSettings_mPosition1_Set(
  JoltC_SwingTwistConstraintSettings_t * self,
  JoltC_RVec3_t * mPosition1,
  char** outErrMsg
);

JoltC_Vec3_t * JoltC_SwingTwistConstraintSettings_mTwistAxis1_Get(
  JoltC_SwingTwistConstraintSettings_t * self,
  char** outErrMsg
);

void JoltC_SwingTwistConstraintSettings_mTwistAxis1_Set(
  JoltC_SwingTwistConstraintSettings_t * self,
  JoltC_Vec3_t * mTwistAxis1,
  char** outErrMsg
);

JoltC_Vec3_t * JoltC_SwingTwistConstraintSettings_mPlaneAxis1_Get(
  JoltC_SwingTwistConstraintSettings_t * self,
  char** outErrMsg
);

void JoltC_SwingTwistConstraintSettings_mPlaneAxis1_Set(
  JoltC_SwingTwistConstraintSettings_t * self,
  JoltC_Vec3_t * mPlaneAxis1,
  char** outErrMsg
);

JoltC_RVec3_t * JoltC_SwingTwistConstraintSettings_mPosition2_Get(
  JoltC_SwingTwistConstraintSettings_t * self,
  char** outErrMsg
);

void JoltC_SwingTwistConstraintSettings_mPosition2_Set(
  JoltC_SwingTwistConstraintSettings_t * self,
  JoltC_RVec3_t * mPosition2,
  char** outErrMsg
);

JoltC_Vec3_t * JoltC_SwingTwistConstraintSettings_mTwistAxis2_Get(
  JoltC_SwingTwistConstraintSettings_t * self,
  char** outErrMsg
);

void JoltC_SwingTwistConstraintSettings_mTwistAxis2_Set(
  JoltC_SwingTwistConstraintSettings_t * self,
  JoltC_Vec3_t * mTwistAxis2,
  char** outErrMsg
);

JoltC_Vec3_t * JoltC_SwingTwistConstraintSettings_mPlaneAxis2_Get(
  JoltC_SwingTwistConstraintSettings_t * self,
  char** outErrMsg
);

void JoltC_SwingTwistConstraintSettings_mPlaneAxis2_Set(
  JoltC_SwingTwistConstraintSettings_t * self,
  JoltC_Vec3_t * mPlaneAxis2,
  char** outErrMsg
);

JoltC_ESwingType JoltC_SwingTwistConstraintSettings_mSwingType_Get(
  JoltC_SwingTwistConstraintSettings_t * self,
  char** outErrMsg
);

void JoltC_SwingTwistConstraintSettings_mSwingType_Set(
  JoltC_SwingTwistConstraintSettings_t * self,
  JoltC_ESwingType mSwingType,
  char** outErrMsg
);

float JoltC_SwingTwistConstraintSettings_mNormalHalfConeAngle_Get(
  JoltC_SwingTwistConstraintSettings_t * self,
  char** outErrMsg
);

void JoltC_SwingTwistConstraintSettings_mNormalHalfConeAngle_Set(
  JoltC_SwingTwistConstraintSettings_t * self,
  float mNormalHalfConeAngle,
  char** outErrMsg
);

float JoltC_SwingTwistConstraintSettings_mPlaneHalfConeAngle_Get(
  JoltC_SwingTwistConstraintSettings_t * self,
  char** outErrMsg
);

void JoltC_SwingTwistConstraintSettings_mPlaneHalfConeAngle_Set(
  JoltC_SwingTwistConstraintSettings_t * self,
  float mPlaneHalfConeAngle,
  char** outErrMsg
);

float JoltC_SwingTwistConstraintSettings_mTwistMinAngle_Get(
  JoltC_SwingTwistConstraintSettings_t * self,
  char** outErrMsg
);

void JoltC_SwingTwistConstraintSettings_mTwistMinAngle_Set(
  JoltC_SwingTwistConstraintSettings_t * self,
  float mTwistMinAngle,
  char** outErrMsg
);

float JoltC_SwingTwistConstraintSettings_mTwistMaxAngle_Get(
  JoltC_SwingTwistConstraintSettings_t * self,
  char** outErrMsg
);

void JoltC_SwingTwistConstraintSettings_mTwistMaxAngle_Set(
  JoltC_SwingTwistConstraintSettings_t * self,
  float mTwistMaxAngle,
  char** outErrMsg
);

float JoltC_SwingTwistConstraintSettings_mMaxFrictionTorque_Get(
  JoltC_SwingTwistConstraintSettings_t * self,
  char** outErrMsg
);

void JoltC_SwingTwistConstraintSettings_mMaxFrictionTorque_Set(
  JoltC_SwingTwistConstraintSettings_t * self,
  float mMaxFrictionTorque,
  char** outErrMsg
);

JoltC_MotorSettings_t * JoltC_SwingTwistConstraintSettings_mSwingMotorSettings_Get(
  JoltC_SwingTwistConstraintSettings_t * self,
  char** outErrMsg
);

void JoltC_SwingTwistConstraintSettings_mSwingMotorSettings_Set(
  JoltC_SwingTwistConstraintSettings_t * self,
  JoltC_MotorSettings_t * mSwingMotorSettings,
  char** outErrMsg
);

JoltC_MotorSettings_t * JoltC_SwingTwistConstraintSettings_mTwistMotorSettings_Get(
  JoltC_SwingTwistConstraintSettings_t * self,
  char** outErrMsg
);

void JoltC_SwingTwistConstraintSettings_mTwistMotorSettings_Set(
  JoltC_SwingTwistConstraintSettings_t * self,
  JoltC_MotorSettings_t * mTwistMotorSettings,
  char** outErrMsg
);

bool JoltC_SwingTwistConstraintSettings_mEnabled_Get(
  JoltC_SwingTwistConstraintSettings_t * self,
  char** outErrMsg
);

void JoltC_SwingTwistConstraintSettings_mEnabled_Set(
  JoltC_SwingTwistConstraintSettings_t * self,
  bool mEnabled,
  char** outErrMsg
);

long JoltC_SwingTwistConstraintSettings_mNumVelocityStepsOverride_Get(
  JoltC_SwingTwistConstraintSettings_t * self,
  char** outErrMsg
);

void JoltC_SwingTwistConstraintSettings_mNumVelocityStepsOverride_Set(
  JoltC_SwingTwistConstraintSettings_t * self,
  long mNumVelocityStepsOverride,
  char** outErrMsg
);

long JoltC_SwingTwistConstraintSettings_mNumPositionStepsOverride_Get(
  JoltC_SwingTwistConstraintSettings_t * self,
  char** outErrMsg
);

void JoltC_SwingTwistConstraintSettings_mNumPositionStepsOverride_Set(
  JoltC_SwingTwistConstraintSettings_t * self,
  long mNumPositionStepsOverride,
  char** outErrMsg
);

//endregion properties


#ifdef __cplusplus
}
#endif

