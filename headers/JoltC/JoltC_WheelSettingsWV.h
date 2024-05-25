#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_WheelSettingsWV_t * JoltC_WheelSettingsWV_new(
  char** outErrMsg
);

//endregion constructors

//region functions

unsigned long JoltC_WheelSettingsWV_GetRefCount(
  JoltC_WheelSettingsWV_t * self,
  char** outErrMsg
);

void JoltC_WheelSettingsWV_AddRef(
  JoltC_WheelSettingsWV_t * self,
  char** outErrMsg
);

void JoltC_WheelSettingsWV_Release(
  JoltC_WheelSettingsWV_t * self,
  char** outErrMsg
);

//endregion functions

//region properties

float JoltC_WheelSettingsWV_mInertia_Get(
  JoltC_WheelSettingsWV_t * self,
  char** outErrMsg
);

void JoltC_WheelSettingsWV_mInertia_Set(
  JoltC_WheelSettingsWV_t * self,
  float mInertia,
  char** outErrMsg
);

float JoltC_WheelSettingsWV_mAngularDamping_Get(
  JoltC_WheelSettingsWV_t * self,
  char** outErrMsg
);

void JoltC_WheelSettingsWV_mAngularDamping_Set(
  JoltC_WheelSettingsWV_t * self,
  float mAngularDamping,
  char** outErrMsg
);

float JoltC_WheelSettingsWV_mMaxSteerAngle_Get(
  JoltC_WheelSettingsWV_t * self,
  char** outErrMsg
);

void JoltC_WheelSettingsWV_mMaxSteerAngle_Set(
  JoltC_WheelSettingsWV_t * self,
  float mMaxSteerAngle,
  char** outErrMsg
);

JoltC_LinearCurve_t * JoltC_WheelSettingsWV_mLongitudinalFriction_Get(
  JoltC_WheelSettingsWV_t * self,
  char** outErrMsg
);

void JoltC_WheelSettingsWV_mLongitudinalFriction_Set(
  JoltC_WheelSettingsWV_t * self,
  JoltC_LinearCurve_t * mLongitudinalFriction,
  char** outErrMsg
);

JoltC_LinearCurve_t * JoltC_WheelSettingsWV_mLateralFriction_Get(
  JoltC_WheelSettingsWV_t * self,
  char** outErrMsg
);

void JoltC_WheelSettingsWV_mLateralFriction_Set(
  JoltC_WheelSettingsWV_t * self,
  JoltC_LinearCurve_t * mLateralFriction,
  char** outErrMsg
);

float JoltC_WheelSettingsWV_mMaxBrakeTorque_Get(
  JoltC_WheelSettingsWV_t * self,
  char** outErrMsg
);

void JoltC_WheelSettingsWV_mMaxBrakeTorque_Set(
  JoltC_WheelSettingsWV_t * self,
  float mMaxBrakeTorque,
  char** outErrMsg
);

float JoltC_WheelSettingsWV_mMaxHandBrakeTorque_Get(
  JoltC_WheelSettingsWV_t * self,
  char** outErrMsg
);

void JoltC_WheelSettingsWV_mMaxHandBrakeTorque_Set(
  JoltC_WheelSettingsWV_t * self,
  float mMaxHandBrakeTorque,
  char** outErrMsg
);

JoltC_Vec3_t * JoltC_WheelSettingsWV_mPosition_Get(
  JoltC_WheelSettingsWV_t * self,
  char** outErrMsg
);

void JoltC_WheelSettingsWV_mPosition_Set(
  JoltC_WheelSettingsWV_t * self,
  JoltC_Vec3_t * mPosition,
  char** outErrMsg
);

JoltC_Vec3_t * JoltC_WheelSettingsWV_mSuspensionForcePoint_Get(
  JoltC_WheelSettingsWV_t * self,
  char** outErrMsg
);

void JoltC_WheelSettingsWV_mSuspensionForcePoint_Set(
  JoltC_WheelSettingsWV_t * self,
  JoltC_Vec3_t * mSuspensionForcePoint,
  char** outErrMsg
);

JoltC_Vec3_t * JoltC_WheelSettingsWV_mSuspensionDirection_Get(
  JoltC_WheelSettingsWV_t * self,
  char** outErrMsg
);

void JoltC_WheelSettingsWV_mSuspensionDirection_Set(
  JoltC_WheelSettingsWV_t * self,
  JoltC_Vec3_t * mSuspensionDirection,
  char** outErrMsg
);

JoltC_Vec3_t * JoltC_WheelSettingsWV_mSteeringAxis_Get(
  JoltC_WheelSettingsWV_t * self,
  char** outErrMsg
);

void JoltC_WheelSettingsWV_mSteeringAxis_Set(
  JoltC_WheelSettingsWV_t * self,
  JoltC_Vec3_t * mSteeringAxis,
  char** outErrMsg
);

JoltC_Vec3_t * JoltC_WheelSettingsWV_mWheelUp_Get(
  JoltC_WheelSettingsWV_t * self,
  char** outErrMsg
);

void JoltC_WheelSettingsWV_mWheelUp_Set(
  JoltC_WheelSettingsWV_t * self,
  JoltC_Vec3_t * mWheelUp,
  char** outErrMsg
);

JoltC_Vec3_t * JoltC_WheelSettingsWV_mWheelForward_Get(
  JoltC_WheelSettingsWV_t * self,
  char** outErrMsg
);

void JoltC_WheelSettingsWV_mWheelForward_Set(
  JoltC_WheelSettingsWV_t * self,
  JoltC_Vec3_t * mWheelForward,
  char** outErrMsg
);

JoltC_SpringSettings_t * JoltC_WheelSettingsWV_mSuspensionSpring_Get(
  JoltC_WheelSettingsWV_t * self,
  char** outErrMsg
);

void JoltC_WheelSettingsWV_mSuspensionSpring_Set(
  JoltC_WheelSettingsWV_t * self,
  JoltC_SpringSettings_t * mSuspensionSpring,
  char** outErrMsg
);

float JoltC_WheelSettingsWV_mSuspensionMinLength_Get(
  JoltC_WheelSettingsWV_t * self,
  char** outErrMsg
);

void JoltC_WheelSettingsWV_mSuspensionMinLength_Set(
  JoltC_WheelSettingsWV_t * self,
  float mSuspensionMinLength,
  char** outErrMsg
);

float JoltC_WheelSettingsWV_mSuspensionMaxLength_Get(
  JoltC_WheelSettingsWV_t * self,
  char** outErrMsg
);

void JoltC_WheelSettingsWV_mSuspensionMaxLength_Set(
  JoltC_WheelSettingsWV_t * self,
  float mSuspensionMaxLength,
  char** outErrMsg
);

float JoltC_WheelSettingsWV_mSuspensionPreloadLength_Get(
  JoltC_WheelSettingsWV_t * self,
  char** outErrMsg
);

void JoltC_WheelSettingsWV_mSuspensionPreloadLength_Set(
  JoltC_WheelSettingsWV_t * self,
  float mSuspensionPreloadLength,
  char** outErrMsg
);

float JoltC_WheelSettingsWV_mRadius_Get(
  JoltC_WheelSettingsWV_t * self,
  char** outErrMsg
);

void JoltC_WheelSettingsWV_mRadius_Set(
  JoltC_WheelSettingsWV_t * self,
  float mRadius,
  char** outErrMsg
);

float JoltC_WheelSettingsWV_mWidth_Get(
  JoltC_WheelSettingsWV_t * self,
  char** outErrMsg
);

void JoltC_WheelSettingsWV_mWidth_Set(
  JoltC_WheelSettingsWV_t * self,
  float mWidth,
  char** outErrMsg
);

bool JoltC_WheelSettingsWV_mEnableSuspensionForcePoint_Get(
  JoltC_WheelSettingsWV_t * self,
  char** outErrMsg
);

void JoltC_WheelSettingsWV_mEnableSuspensionForcePoint_Set(
  JoltC_WheelSettingsWV_t * self,
  bool mEnableSuspensionForcePoint,
  char** outErrMsg
);

//endregion properties


#ifdef __cplusplus
}
#endif

