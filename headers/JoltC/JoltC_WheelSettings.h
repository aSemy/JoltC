#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_WheelSettings_t * JoltC_WheelSettings_new(
  char** outErrMsg
);

//endregion constructors

//region functions

unsigned long JoltC_WheelSettings_GetRefCount(
  JoltC_WheelSettings_t * self,
  char** outErrMsg
);

void JoltC_WheelSettings_AddRef(
  JoltC_WheelSettings_t * self,
  char** outErrMsg
);

void JoltC_WheelSettings_Release(
  JoltC_WheelSettings_t * self,
  char** outErrMsg
);

//endregion functions

//region properties

JoltC_Vec3_t * JoltC_WheelSettings_mPosition_Get(
  JoltC_WheelSettings_t * self,
  char** outErrMsg
);

void JoltC_WheelSettings_mPosition_Set(
  JoltC_WheelSettings_t * self,
  JoltC_Vec3_t * mPosition,
  char** outErrMsg
);

JoltC_Vec3_t * JoltC_WheelSettings_mSuspensionForcePoint_Get(
  JoltC_WheelSettings_t * self,
  char** outErrMsg
);

void JoltC_WheelSettings_mSuspensionForcePoint_Set(
  JoltC_WheelSettings_t * self,
  JoltC_Vec3_t * mSuspensionForcePoint,
  char** outErrMsg
);

JoltC_Vec3_t * JoltC_WheelSettings_mSuspensionDirection_Get(
  JoltC_WheelSettings_t * self,
  char** outErrMsg
);

void JoltC_WheelSettings_mSuspensionDirection_Set(
  JoltC_WheelSettings_t * self,
  JoltC_Vec3_t * mSuspensionDirection,
  char** outErrMsg
);

JoltC_Vec3_t * JoltC_WheelSettings_mSteeringAxis_Get(
  JoltC_WheelSettings_t * self,
  char** outErrMsg
);

void JoltC_WheelSettings_mSteeringAxis_Set(
  JoltC_WheelSettings_t * self,
  JoltC_Vec3_t * mSteeringAxis,
  char** outErrMsg
);

JoltC_Vec3_t * JoltC_WheelSettings_mWheelUp_Get(
  JoltC_WheelSettings_t * self,
  char** outErrMsg
);

void JoltC_WheelSettings_mWheelUp_Set(
  JoltC_WheelSettings_t * self,
  JoltC_Vec3_t * mWheelUp,
  char** outErrMsg
);

JoltC_Vec3_t * JoltC_WheelSettings_mWheelForward_Get(
  JoltC_WheelSettings_t * self,
  char** outErrMsg
);

void JoltC_WheelSettings_mWheelForward_Set(
  JoltC_WheelSettings_t * self,
  JoltC_Vec3_t * mWheelForward,
  char** outErrMsg
);

JoltC_SpringSettings_t * JoltC_WheelSettings_mSuspensionSpring_Get(
  JoltC_WheelSettings_t * self,
  char** outErrMsg
);

void JoltC_WheelSettings_mSuspensionSpring_Set(
  JoltC_WheelSettings_t * self,
  JoltC_SpringSettings_t * mSuspensionSpring,
  char** outErrMsg
);

float JoltC_WheelSettings_mSuspensionMinLength_Get(
  JoltC_WheelSettings_t * self,
  char** outErrMsg
);

void JoltC_WheelSettings_mSuspensionMinLength_Set(
  JoltC_WheelSettings_t * self,
  float mSuspensionMinLength,
  char** outErrMsg
);

float JoltC_WheelSettings_mSuspensionMaxLength_Get(
  JoltC_WheelSettings_t * self,
  char** outErrMsg
);

void JoltC_WheelSettings_mSuspensionMaxLength_Set(
  JoltC_WheelSettings_t * self,
  float mSuspensionMaxLength,
  char** outErrMsg
);

float JoltC_WheelSettings_mSuspensionPreloadLength_Get(
  JoltC_WheelSettings_t * self,
  char** outErrMsg
);

void JoltC_WheelSettings_mSuspensionPreloadLength_Set(
  JoltC_WheelSettings_t * self,
  float mSuspensionPreloadLength,
  char** outErrMsg
);

float JoltC_WheelSettings_mRadius_Get(
  JoltC_WheelSettings_t * self,
  char** outErrMsg
);

void JoltC_WheelSettings_mRadius_Set(
  JoltC_WheelSettings_t * self,
  float mRadius,
  char** outErrMsg
);

float JoltC_WheelSettings_mWidth_Get(
  JoltC_WheelSettings_t * self,
  char** outErrMsg
);

void JoltC_WheelSettings_mWidth_Set(
  JoltC_WheelSettings_t * self,
  float mWidth,
  char** outErrMsg
);

bool JoltC_WheelSettings_mEnableSuspensionForcePoint_Get(
  JoltC_WheelSettings_t * self,
  char** outErrMsg
);

void JoltC_WheelSettings_mEnableSuspensionForcePoint_Set(
  JoltC_WheelSettings_t * self,
  bool mEnableSuspensionForcePoint,
  char** outErrMsg
);

//endregion properties


#ifdef __cplusplus
}
#endif

