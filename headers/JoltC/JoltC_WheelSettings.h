#pragma once
#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_WheelSettings_t * JoltC_WheelSettings_new();

//endregion

//region destructor

void JoltC_WheelSettings_destroy(
  JoltC_WheelSettings_t * self
);

//endregion
//region converters

/**
 * Convert an instance of JoltC_WheelSettingsWV_t into JoltC_WheelSettings_t.
 */
JoltC_WheelSettings_t * JoltC_WheelSettings_From_WheelSettingsWV(
  JoltC_WheelSettingsWV_t * subtype
);

/**
 * Convert an instance of JoltC_WheelSettingsTV_t into JoltC_WheelSettings_t.
 */
JoltC_WheelSettings_t * JoltC_WheelSettings_From_WheelSettingsTV(
  JoltC_WheelSettingsTV_t * subtype
);

//endregion

//region functions

unsigned long JoltC_WheelSettings_GetRefCount(
  JoltC_WheelSettings_t * self
);

void JoltC_WheelSettings_AddRef(
  JoltC_WheelSettings_t * self
);

void JoltC_WheelSettings_Release(
  JoltC_WheelSettings_t * self
);

//endregion

//region properties

JoltC_Vec3_t * JoltC_WheelSettings_mPosition_Get(
  JoltC_WheelSettings_t * self
);

void JoltC_WheelSettings_mPosition_Set(
  JoltC_WheelSettings_t * self,
  JoltC_Vec3_t * mPosition
);

JoltC_Vec3_t * JoltC_WheelSettings_mSuspensionForcePoint_Get(
  JoltC_WheelSettings_t * self
);

void JoltC_WheelSettings_mSuspensionForcePoint_Set(
  JoltC_WheelSettings_t * self,
  JoltC_Vec3_t * mSuspensionForcePoint
);

JoltC_Vec3_t * JoltC_WheelSettings_mSuspensionDirection_Get(
  JoltC_WheelSettings_t * self
);

void JoltC_WheelSettings_mSuspensionDirection_Set(
  JoltC_WheelSettings_t * self,
  JoltC_Vec3_t * mSuspensionDirection
);

JoltC_Vec3_t * JoltC_WheelSettings_mSteeringAxis_Get(
  JoltC_WheelSettings_t * self
);

void JoltC_WheelSettings_mSteeringAxis_Set(
  JoltC_WheelSettings_t * self,
  JoltC_Vec3_t * mSteeringAxis
);

JoltC_Vec3_t * JoltC_WheelSettings_mWheelUp_Get(
  JoltC_WheelSettings_t * self
);

void JoltC_WheelSettings_mWheelUp_Set(
  JoltC_WheelSettings_t * self,
  JoltC_Vec3_t * mWheelUp
);

JoltC_Vec3_t * JoltC_WheelSettings_mWheelForward_Get(
  JoltC_WheelSettings_t * self
);

void JoltC_WheelSettings_mWheelForward_Set(
  JoltC_WheelSettings_t * self,
  JoltC_Vec3_t * mWheelForward
);

JoltC_SpringSettings_t * JoltC_WheelSettings_mSuspensionSpring_Get(
  JoltC_WheelSettings_t * self
);

void JoltC_WheelSettings_mSuspensionSpring_Set(
  JoltC_WheelSettings_t * self,
  JoltC_SpringSettings_t * mSuspensionSpring
);

float JoltC_WheelSettings_mSuspensionMinLength_Get(
  JoltC_WheelSettings_t * self
);

void JoltC_WheelSettings_mSuspensionMinLength_Set(
  JoltC_WheelSettings_t * self,
  float mSuspensionMinLength
);

float JoltC_WheelSettings_mSuspensionMaxLength_Get(
  JoltC_WheelSettings_t * self
);

void JoltC_WheelSettings_mSuspensionMaxLength_Set(
  JoltC_WheelSettings_t * self,
  float mSuspensionMaxLength
);

float JoltC_WheelSettings_mSuspensionPreloadLength_Get(
  JoltC_WheelSettings_t * self
);

void JoltC_WheelSettings_mSuspensionPreloadLength_Set(
  JoltC_WheelSettings_t * self,
  float mSuspensionPreloadLength
);

float JoltC_WheelSettings_mRadius_Get(
  JoltC_WheelSettings_t * self
);

void JoltC_WheelSettings_mRadius_Set(
  JoltC_WheelSettings_t * self,
  float mRadius
);

float JoltC_WheelSettings_mWidth_Get(
  JoltC_WheelSettings_t * self
);

void JoltC_WheelSettings_mWidth_Set(
  JoltC_WheelSettings_t * self,
  float mWidth
);

bool JoltC_WheelSettings_mEnableSuspensionForcePoint_Get(
  JoltC_WheelSettings_t * self
);

void JoltC_WheelSettings_mEnableSuspensionForcePoint_Set(
  JoltC_WheelSettings_t * self,
  bool mEnableSuspensionForcePoint
);

//endregion


#ifdef __cplusplus
}
#endif
