#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JPC_WheelSettings_t * JPC_WheelSettings_new();

//endregion constructors

//region functions

unsigned long JPC_WheelSettings_GetRefCount(
  JPC_WheelSettings_t * self
);

void JPC_WheelSettings_AddRef(
  JPC_WheelSettings_t * self
);

void JPC_WheelSettings_Release(
  JPC_WheelSettings_t * self
);

//endregion functions

//region properties

JPC_Vec3_t * JPC_WheelSettings_mPosition_Get(
  JPC_WheelSettings_t * self
);

void JPC_WheelSettings_mPosition_Set(
  JPC_WheelSettings_t * self,
  JPC_Vec3_t * mPosition
);

JPC_Vec3_t * JPC_WheelSettings_mSuspensionForcePoint_Get(
  JPC_WheelSettings_t * self
);

void JPC_WheelSettings_mSuspensionForcePoint_Set(
  JPC_WheelSettings_t * self,
  JPC_Vec3_t * mSuspensionForcePoint
);

JPC_Vec3_t * JPC_WheelSettings_mSuspensionDirection_Get(
  JPC_WheelSettings_t * self
);

void JPC_WheelSettings_mSuspensionDirection_Set(
  JPC_WheelSettings_t * self,
  JPC_Vec3_t * mSuspensionDirection
);

JPC_Vec3_t * JPC_WheelSettings_mSteeringAxis_Get(
  JPC_WheelSettings_t * self
);

void JPC_WheelSettings_mSteeringAxis_Set(
  JPC_WheelSettings_t * self,
  JPC_Vec3_t * mSteeringAxis
);

JPC_Vec3_t * JPC_WheelSettings_mWheelUp_Get(
  JPC_WheelSettings_t * self
);

void JPC_WheelSettings_mWheelUp_Set(
  JPC_WheelSettings_t * self,
  JPC_Vec3_t * mWheelUp
);

JPC_Vec3_t * JPC_WheelSettings_mWheelForward_Get(
  JPC_WheelSettings_t * self
);

void JPC_WheelSettings_mWheelForward_Set(
  JPC_WheelSettings_t * self,
  JPC_Vec3_t * mWheelForward
);

JPC_SpringSettings_t * JPC_WheelSettings_mSuspensionSpring_Get(
  JPC_WheelSettings_t * self
);

void JPC_WheelSettings_mSuspensionSpring_Set(
  JPC_WheelSettings_t * self,
  JPC_SpringSettings_t * mSuspensionSpring
);

float JPC_WheelSettings_mSuspensionMinLength_Get(
  JPC_WheelSettings_t * self
);

void JPC_WheelSettings_mSuspensionMinLength_Set(
  JPC_WheelSettings_t * self,
  float mSuspensionMinLength
);

float JPC_WheelSettings_mSuspensionMaxLength_Get(
  JPC_WheelSettings_t * self
);

void JPC_WheelSettings_mSuspensionMaxLength_Set(
  JPC_WheelSettings_t * self,
  float mSuspensionMaxLength
);

float JPC_WheelSettings_mSuspensionPreloadLength_Get(
  JPC_WheelSettings_t * self
);

void JPC_WheelSettings_mSuspensionPreloadLength_Set(
  JPC_WheelSettings_t * self,
  float mSuspensionPreloadLength
);

float JPC_WheelSettings_mRadius_Get(
  JPC_WheelSettings_t * self
);

void JPC_WheelSettings_mRadius_Set(
  JPC_WheelSettings_t * self,
  float mRadius
);

float JPC_WheelSettings_mWidth_Get(
  JPC_WheelSettings_t * self
);

void JPC_WheelSettings_mWidth_Set(
  JPC_WheelSettings_t * self,
  float mWidth
);

bool JPC_WheelSettings_mEnableSuspensionForcePoint_Get(
  JPC_WheelSettings_t * self
);

void JPC_WheelSettings_mEnableSuspensionForcePoint_Set(
  JPC_WheelSettings_t * self,
  bool mEnableSuspensionForcePoint
);

//endregion properties


#ifdef __cplusplus
}
#endif

