#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_WheelSettingsTV_t * JoltC_WheelSettingsTV_new();

//endregion

//region functions

unsigned long JoltC_WheelSettingsTV_GetRefCount(
  JoltC_WheelSettingsTV_t * self
);

void JoltC_WheelSettingsTV_AddRef(
  JoltC_WheelSettingsTV_t * self
);

void JoltC_WheelSettingsTV_Release(
  JoltC_WheelSettingsTV_t * self
);

//endregion

//region properties

float JoltC_WheelSettingsTV_mLongitudinalFriction_Get(
  JoltC_WheelSettingsTV_t * self
);

void JoltC_WheelSettingsTV_mLongitudinalFriction_Set(
  JoltC_WheelSettingsTV_t * self,
  float mLongitudinalFriction
);

float JoltC_WheelSettingsTV_mLateralFriction_Get(
  JoltC_WheelSettingsTV_t * self
);

void JoltC_WheelSettingsTV_mLateralFriction_Set(
  JoltC_WheelSettingsTV_t * self,
  float mLateralFriction
);

JoltC_Vec3_t * JoltC_WheelSettingsTV_mPosition_Get(
  JoltC_WheelSettingsTV_t * self
);

void JoltC_WheelSettingsTV_mPosition_Set(
  JoltC_WheelSettingsTV_t * self,
  JoltC_Vec3_t * mPosition
);

JoltC_Vec3_t * JoltC_WheelSettingsTV_mSuspensionForcePoint_Get(
  JoltC_WheelSettingsTV_t * self
);

void JoltC_WheelSettingsTV_mSuspensionForcePoint_Set(
  JoltC_WheelSettingsTV_t * self,
  JoltC_Vec3_t * mSuspensionForcePoint
);

JoltC_Vec3_t * JoltC_WheelSettingsTV_mSuspensionDirection_Get(
  JoltC_WheelSettingsTV_t * self
);

void JoltC_WheelSettingsTV_mSuspensionDirection_Set(
  JoltC_WheelSettingsTV_t * self,
  JoltC_Vec3_t * mSuspensionDirection
);

JoltC_Vec3_t * JoltC_WheelSettingsTV_mSteeringAxis_Get(
  JoltC_WheelSettingsTV_t * self
);

void JoltC_WheelSettingsTV_mSteeringAxis_Set(
  JoltC_WheelSettingsTV_t * self,
  JoltC_Vec3_t * mSteeringAxis
);

JoltC_Vec3_t * JoltC_WheelSettingsTV_mWheelUp_Get(
  JoltC_WheelSettingsTV_t * self
);

void JoltC_WheelSettingsTV_mWheelUp_Set(
  JoltC_WheelSettingsTV_t * self,
  JoltC_Vec3_t * mWheelUp
);

JoltC_Vec3_t * JoltC_WheelSettingsTV_mWheelForward_Get(
  JoltC_WheelSettingsTV_t * self
);

void JoltC_WheelSettingsTV_mWheelForward_Set(
  JoltC_WheelSettingsTV_t * self,
  JoltC_Vec3_t * mWheelForward
);

JoltC_SpringSettings_t * JoltC_WheelSettingsTV_mSuspensionSpring_Get(
  JoltC_WheelSettingsTV_t * self
);

void JoltC_WheelSettingsTV_mSuspensionSpring_Set(
  JoltC_WheelSettingsTV_t * self,
  JoltC_SpringSettings_t * mSuspensionSpring
);

float JoltC_WheelSettingsTV_mSuspensionMinLength_Get(
  JoltC_WheelSettingsTV_t * self
);

void JoltC_WheelSettingsTV_mSuspensionMinLength_Set(
  JoltC_WheelSettingsTV_t * self,
  float mSuspensionMinLength
);

float JoltC_WheelSettingsTV_mSuspensionMaxLength_Get(
  JoltC_WheelSettingsTV_t * self
);

void JoltC_WheelSettingsTV_mSuspensionMaxLength_Set(
  JoltC_WheelSettingsTV_t * self,
  float mSuspensionMaxLength
);

float JoltC_WheelSettingsTV_mSuspensionPreloadLength_Get(
  JoltC_WheelSettingsTV_t * self
);

void JoltC_WheelSettingsTV_mSuspensionPreloadLength_Set(
  JoltC_WheelSettingsTV_t * self,
  float mSuspensionPreloadLength
);

float JoltC_WheelSettingsTV_mRadius_Get(
  JoltC_WheelSettingsTV_t * self
);

void JoltC_WheelSettingsTV_mRadius_Set(
  JoltC_WheelSettingsTV_t * self,
  float mRadius
);

float JoltC_WheelSettingsTV_mWidth_Get(
  JoltC_WheelSettingsTV_t * self
);

void JoltC_WheelSettingsTV_mWidth_Set(
  JoltC_WheelSettingsTV_t * self,
  float mWidth
);

bool JoltC_WheelSettingsTV_mEnableSuspensionForcePoint_Get(
  JoltC_WheelSettingsTV_t * self
);

void JoltC_WheelSettingsTV_mEnableSuspensionForcePoint_Set(
  JoltC_WheelSettingsTV_t * self,
  bool mEnableSuspensionForcePoint
);

//endregion


#ifdef __cplusplus
}
#endif

