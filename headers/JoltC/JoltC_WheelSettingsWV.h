#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_WheelSettingsWV_t * JoltC_WheelSettingsWV_new();

//endregion

//region functions

unsigned long JoltC_WheelSettingsWV_GetRefCount(
  JoltC_WheelSettingsWV_t * self
);

void JoltC_WheelSettingsWV_AddRef(
  JoltC_WheelSettingsWV_t * self
);

void JoltC_WheelSettingsWV_Release(
  JoltC_WheelSettingsWV_t * self
);

//endregion

//region properties

float JoltC_WheelSettingsWV_mInertia_Get(
  JoltC_WheelSettingsWV_t * self
);

void JoltC_WheelSettingsWV_mInertia_Set(
  JoltC_WheelSettingsWV_t * self,
  float mInertia
);

float JoltC_WheelSettingsWV_mAngularDamping_Get(
  JoltC_WheelSettingsWV_t * self
);

void JoltC_WheelSettingsWV_mAngularDamping_Set(
  JoltC_WheelSettingsWV_t * self,
  float mAngularDamping
);

float JoltC_WheelSettingsWV_mMaxSteerAngle_Get(
  JoltC_WheelSettingsWV_t * self
);

void JoltC_WheelSettingsWV_mMaxSteerAngle_Set(
  JoltC_WheelSettingsWV_t * self,
  float mMaxSteerAngle
);

JoltC_LinearCurve_t * JoltC_WheelSettingsWV_mLongitudinalFriction_Get(
  JoltC_WheelSettingsWV_t * self
);

void JoltC_WheelSettingsWV_mLongitudinalFriction_Set(
  JoltC_WheelSettingsWV_t * self,
  JoltC_LinearCurve_t * mLongitudinalFriction
);

JoltC_LinearCurve_t * JoltC_WheelSettingsWV_mLateralFriction_Get(
  JoltC_WheelSettingsWV_t * self
);

void JoltC_WheelSettingsWV_mLateralFriction_Set(
  JoltC_WheelSettingsWV_t * self,
  JoltC_LinearCurve_t * mLateralFriction
);

float JoltC_WheelSettingsWV_mMaxBrakeTorque_Get(
  JoltC_WheelSettingsWV_t * self
);

void JoltC_WheelSettingsWV_mMaxBrakeTorque_Set(
  JoltC_WheelSettingsWV_t * self,
  float mMaxBrakeTorque
);

float JoltC_WheelSettingsWV_mMaxHandBrakeTorque_Get(
  JoltC_WheelSettingsWV_t * self
);

void JoltC_WheelSettingsWV_mMaxHandBrakeTorque_Set(
  JoltC_WheelSettingsWV_t * self,
  float mMaxHandBrakeTorque
);

JoltC_Vec3_t * JoltC_WheelSettingsWV_mPosition_Get(
  JoltC_WheelSettingsWV_t * self
);

void JoltC_WheelSettingsWV_mPosition_Set(
  JoltC_WheelSettingsWV_t * self,
  JoltC_Vec3_t * mPosition
);

JoltC_Vec3_t * JoltC_WheelSettingsWV_mSuspensionForcePoint_Get(
  JoltC_WheelSettingsWV_t * self
);

void JoltC_WheelSettingsWV_mSuspensionForcePoint_Set(
  JoltC_WheelSettingsWV_t * self,
  JoltC_Vec3_t * mSuspensionForcePoint
);

JoltC_Vec3_t * JoltC_WheelSettingsWV_mSuspensionDirection_Get(
  JoltC_WheelSettingsWV_t * self
);

void JoltC_WheelSettingsWV_mSuspensionDirection_Set(
  JoltC_WheelSettingsWV_t * self,
  JoltC_Vec3_t * mSuspensionDirection
);

JoltC_Vec3_t * JoltC_WheelSettingsWV_mSteeringAxis_Get(
  JoltC_WheelSettingsWV_t * self
);

void JoltC_WheelSettingsWV_mSteeringAxis_Set(
  JoltC_WheelSettingsWV_t * self,
  JoltC_Vec3_t * mSteeringAxis
);

JoltC_Vec3_t * JoltC_WheelSettingsWV_mWheelUp_Get(
  JoltC_WheelSettingsWV_t * self
);

void JoltC_WheelSettingsWV_mWheelUp_Set(
  JoltC_WheelSettingsWV_t * self,
  JoltC_Vec3_t * mWheelUp
);

JoltC_Vec3_t * JoltC_WheelSettingsWV_mWheelForward_Get(
  JoltC_WheelSettingsWV_t * self
);

void JoltC_WheelSettingsWV_mWheelForward_Set(
  JoltC_WheelSettingsWV_t * self,
  JoltC_Vec3_t * mWheelForward
);

JoltC_SpringSettings_t * JoltC_WheelSettingsWV_mSuspensionSpring_Get(
  JoltC_WheelSettingsWV_t * self
);

void JoltC_WheelSettingsWV_mSuspensionSpring_Set(
  JoltC_WheelSettingsWV_t * self,
  JoltC_SpringSettings_t * mSuspensionSpring
);

float JoltC_WheelSettingsWV_mSuspensionMinLength_Get(
  JoltC_WheelSettingsWV_t * self
);

void JoltC_WheelSettingsWV_mSuspensionMinLength_Set(
  JoltC_WheelSettingsWV_t * self,
  float mSuspensionMinLength
);

float JoltC_WheelSettingsWV_mSuspensionMaxLength_Get(
  JoltC_WheelSettingsWV_t * self
);

void JoltC_WheelSettingsWV_mSuspensionMaxLength_Set(
  JoltC_WheelSettingsWV_t * self,
  float mSuspensionMaxLength
);

float JoltC_WheelSettingsWV_mSuspensionPreloadLength_Get(
  JoltC_WheelSettingsWV_t * self
);

void JoltC_WheelSettingsWV_mSuspensionPreloadLength_Set(
  JoltC_WheelSettingsWV_t * self,
  float mSuspensionPreloadLength
);

float JoltC_WheelSettingsWV_mRadius_Get(
  JoltC_WheelSettingsWV_t * self
);

void JoltC_WheelSettingsWV_mRadius_Set(
  JoltC_WheelSettingsWV_t * self,
  float mRadius
);

float JoltC_WheelSettingsWV_mWidth_Get(
  JoltC_WheelSettingsWV_t * self
);

void JoltC_WheelSettingsWV_mWidth_Set(
  JoltC_WheelSettingsWV_t * self,
  float mWidth
);

bool JoltC_WheelSettingsWV_mEnableSuspensionForcePoint_Get(
  JoltC_WheelSettingsWV_t * self
);

void JoltC_WheelSettingsWV_mEnableSuspensionForcePoint_Set(
  JoltC_WheelSettingsWV_t * self,
  bool mEnableSuspensionForcePoint
);

//endregion


#ifdef __cplusplus
}
#endif

