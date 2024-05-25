#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JPC_WheelSettingsWV_t * JPC_WheelSettingsWV_new();

//endregion constructors

//region functions

unsigned long JPC_WheelSettingsWV_GetRefCount(
  JPC_WheelSettingsWV_t * self
);

void JPC_WheelSettingsWV_AddRef(
  JPC_WheelSettingsWV_t * self
);

void JPC_WheelSettingsWV_Release(
  JPC_WheelSettingsWV_t * self
);

//endregion functions

//region properties

float JPC_WheelSettingsWV_mInertia_Get(
  JPC_WheelSettingsWV_t * self
);

void JPC_WheelSettingsWV_mInertia_Set(
  JPC_WheelSettingsWV_t * self,
  float mInertia
);

float JPC_WheelSettingsWV_mAngularDamping_Get(
  JPC_WheelSettingsWV_t * self
);

void JPC_WheelSettingsWV_mAngularDamping_Set(
  JPC_WheelSettingsWV_t * self,
  float mAngularDamping
);

float JPC_WheelSettingsWV_mMaxSteerAngle_Get(
  JPC_WheelSettingsWV_t * self
);

void JPC_WheelSettingsWV_mMaxSteerAngle_Set(
  JPC_WheelSettingsWV_t * self,
  float mMaxSteerAngle
);

JPC_LinearCurve_t * JPC_WheelSettingsWV_mLongitudinalFriction_Get(
  JPC_WheelSettingsWV_t * self
);

void JPC_WheelSettingsWV_mLongitudinalFriction_Set(
  JPC_WheelSettingsWV_t * self,
  JPC_LinearCurve_t * mLongitudinalFriction
);

JPC_LinearCurve_t * JPC_WheelSettingsWV_mLateralFriction_Get(
  JPC_WheelSettingsWV_t * self
);

void JPC_WheelSettingsWV_mLateralFriction_Set(
  JPC_WheelSettingsWV_t * self,
  JPC_LinearCurve_t * mLateralFriction
);

float JPC_WheelSettingsWV_mMaxBrakeTorque_Get(
  JPC_WheelSettingsWV_t * self
);

void JPC_WheelSettingsWV_mMaxBrakeTorque_Set(
  JPC_WheelSettingsWV_t * self,
  float mMaxBrakeTorque
);

float JPC_WheelSettingsWV_mMaxHandBrakeTorque_Get(
  JPC_WheelSettingsWV_t * self
);

void JPC_WheelSettingsWV_mMaxHandBrakeTorque_Set(
  JPC_WheelSettingsWV_t * self,
  float mMaxHandBrakeTorque
);

JPC_Vec3_t * JPC_WheelSettingsWV_mPosition_Get(
  JPC_WheelSettingsWV_t * self
);

void JPC_WheelSettingsWV_mPosition_Set(
  JPC_WheelSettingsWV_t * self,
  JPC_Vec3_t * mPosition
);

JPC_Vec3_t * JPC_WheelSettingsWV_mSuspensionForcePoint_Get(
  JPC_WheelSettingsWV_t * self
);

void JPC_WheelSettingsWV_mSuspensionForcePoint_Set(
  JPC_WheelSettingsWV_t * self,
  JPC_Vec3_t * mSuspensionForcePoint
);

JPC_Vec3_t * JPC_WheelSettingsWV_mSuspensionDirection_Get(
  JPC_WheelSettingsWV_t * self
);

void JPC_WheelSettingsWV_mSuspensionDirection_Set(
  JPC_WheelSettingsWV_t * self,
  JPC_Vec3_t * mSuspensionDirection
);

JPC_Vec3_t * JPC_WheelSettingsWV_mSteeringAxis_Get(
  JPC_WheelSettingsWV_t * self
);

void JPC_WheelSettingsWV_mSteeringAxis_Set(
  JPC_WheelSettingsWV_t * self,
  JPC_Vec3_t * mSteeringAxis
);

JPC_Vec3_t * JPC_WheelSettingsWV_mWheelUp_Get(
  JPC_WheelSettingsWV_t * self
);

void JPC_WheelSettingsWV_mWheelUp_Set(
  JPC_WheelSettingsWV_t * self,
  JPC_Vec3_t * mWheelUp
);

JPC_Vec3_t * JPC_WheelSettingsWV_mWheelForward_Get(
  JPC_WheelSettingsWV_t * self
);

void JPC_WheelSettingsWV_mWheelForward_Set(
  JPC_WheelSettingsWV_t * self,
  JPC_Vec3_t * mWheelForward
);

JPC_SpringSettings_t * JPC_WheelSettingsWV_mSuspensionSpring_Get(
  JPC_WheelSettingsWV_t * self
);

void JPC_WheelSettingsWV_mSuspensionSpring_Set(
  JPC_WheelSettingsWV_t * self,
  JPC_SpringSettings_t * mSuspensionSpring
);

float JPC_WheelSettingsWV_mSuspensionMinLength_Get(
  JPC_WheelSettingsWV_t * self
);

void JPC_WheelSettingsWV_mSuspensionMinLength_Set(
  JPC_WheelSettingsWV_t * self,
  float mSuspensionMinLength
);

float JPC_WheelSettingsWV_mSuspensionMaxLength_Get(
  JPC_WheelSettingsWV_t * self
);

void JPC_WheelSettingsWV_mSuspensionMaxLength_Set(
  JPC_WheelSettingsWV_t * self,
  float mSuspensionMaxLength
);

float JPC_WheelSettingsWV_mSuspensionPreloadLength_Get(
  JPC_WheelSettingsWV_t * self
);

void JPC_WheelSettingsWV_mSuspensionPreloadLength_Set(
  JPC_WheelSettingsWV_t * self,
  float mSuspensionPreloadLength
);

float JPC_WheelSettingsWV_mRadius_Get(
  JPC_WheelSettingsWV_t * self
);

void JPC_WheelSettingsWV_mRadius_Set(
  JPC_WheelSettingsWV_t * self,
  float mRadius
);

float JPC_WheelSettingsWV_mWidth_Get(
  JPC_WheelSettingsWV_t * self
);

void JPC_WheelSettingsWV_mWidth_Set(
  JPC_WheelSettingsWV_t * self,
  float mWidth
);

bool JPC_WheelSettingsWV_mEnableSuspensionForcePoint_Get(
  JPC_WheelSettingsWV_t * self
);

void JPC_WheelSettingsWV_mEnableSuspensionForcePoint_Set(
  JPC_WheelSettingsWV_t * self,
  bool mEnableSuspensionForcePoint
);

//endregion properties


#ifdef __cplusplus
}
#endif

