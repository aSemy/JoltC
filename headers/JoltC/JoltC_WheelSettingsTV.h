#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JPC_WheelSettingsTV_t * JPC_WheelSettingsTV_new();

//endregion constructors

//region functions

unsigned long JPC_WheelSettingsTV_GetRefCount(
  JPC_WheelSettingsTV_t * self
);

void JPC_WheelSettingsTV_AddRef(
  JPC_WheelSettingsTV_t * self
);

void JPC_WheelSettingsTV_Release(
  JPC_WheelSettingsTV_t * self
);

//endregion functions

//region properties

float JPC_WheelSettingsTV_mLongitudinalFriction_Get(
  JPC_WheelSettingsTV_t * self
);

void JPC_WheelSettingsTV_mLongitudinalFriction_Set(
  JPC_WheelSettingsTV_t * self,
  float mLongitudinalFriction
);

float JPC_WheelSettingsTV_mLateralFriction_Get(
  JPC_WheelSettingsTV_t * self
);

void JPC_WheelSettingsTV_mLateralFriction_Set(
  JPC_WheelSettingsTV_t * self,
  float mLateralFriction
);

JPC_Vec3_t * JPC_WheelSettingsTV_mPosition_Get(
  JPC_WheelSettingsTV_t * self
);

void JPC_WheelSettingsTV_mPosition_Set(
  JPC_WheelSettingsTV_t * self,
  JPC_Vec3_t * mPosition
);

JPC_Vec3_t * JPC_WheelSettingsTV_mSuspensionForcePoint_Get(
  JPC_WheelSettingsTV_t * self
);

void JPC_WheelSettingsTV_mSuspensionForcePoint_Set(
  JPC_WheelSettingsTV_t * self,
  JPC_Vec3_t * mSuspensionForcePoint
);

JPC_Vec3_t * JPC_WheelSettingsTV_mSuspensionDirection_Get(
  JPC_WheelSettingsTV_t * self
);

void JPC_WheelSettingsTV_mSuspensionDirection_Set(
  JPC_WheelSettingsTV_t * self,
  JPC_Vec3_t * mSuspensionDirection
);

JPC_Vec3_t * JPC_WheelSettingsTV_mSteeringAxis_Get(
  JPC_WheelSettingsTV_t * self
);

void JPC_WheelSettingsTV_mSteeringAxis_Set(
  JPC_WheelSettingsTV_t * self,
  JPC_Vec3_t * mSteeringAxis
);

JPC_Vec3_t * JPC_WheelSettingsTV_mWheelUp_Get(
  JPC_WheelSettingsTV_t * self
);

void JPC_WheelSettingsTV_mWheelUp_Set(
  JPC_WheelSettingsTV_t * self,
  JPC_Vec3_t * mWheelUp
);

JPC_Vec3_t * JPC_WheelSettingsTV_mWheelForward_Get(
  JPC_WheelSettingsTV_t * self
);

void JPC_WheelSettingsTV_mWheelForward_Set(
  JPC_WheelSettingsTV_t * self,
  JPC_Vec3_t * mWheelForward
);

JPC_SpringSettings_t * JPC_WheelSettingsTV_mSuspensionSpring_Get(
  JPC_WheelSettingsTV_t * self
);

void JPC_WheelSettingsTV_mSuspensionSpring_Set(
  JPC_WheelSettingsTV_t * self,
  JPC_SpringSettings_t * mSuspensionSpring
);

float JPC_WheelSettingsTV_mSuspensionMinLength_Get(
  JPC_WheelSettingsTV_t * self
);

void JPC_WheelSettingsTV_mSuspensionMinLength_Set(
  JPC_WheelSettingsTV_t * self,
  float mSuspensionMinLength
);

float JPC_WheelSettingsTV_mSuspensionMaxLength_Get(
  JPC_WheelSettingsTV_t * self
);

void JPC_WheelSettingsTV_mSuspensionMaxLength_Set(
  JPC_WheelSettingsTV_t * self,
  float mSuspensionMaxLength
);

float JPC_WheelSettingsTV_mSuspensionPreloadLength_Get(
  JPC_WheelSettingsTV_t * self
);

void JPC_WheelSettingsTV_mSuspensionPreloadLength_Set(
  JPC_WheelSettingsTV_t * self,
  float mSuspensionPreloadLength
);

float JPC_WheelSettingsTV_mRadius_Get(
  JPC_WheelSettingsTV_t * self
);

void JPC_WheelSettingsTV_mRadius_Set(
  JPC_WheelSettingsTV_t * self,
  float mRadius
);

float JPC_WheelSettingsTV_mWidth_Get(
  JPC_WheelSettingsTV_t * self
);

void JPC_WheelSettingsTV_mWidth_Set(
  JPC_WheelSettingsTV_t * self,
  float mWidth
);

bool JPC_WheelSettingsTV_mEnableSuspensionForcePoint_Get(
  JPC_WheelSettingsTV_t * self
);

void JPC_WheelSettingsTV_mEnableSuspensionForcePoint_Set(
  JPC_WheelSettingsTV_t * self,
  bool mEnableSuspensionForcePoint
);

//endregion properties


#ifdef __cplusplus
}
#endif

