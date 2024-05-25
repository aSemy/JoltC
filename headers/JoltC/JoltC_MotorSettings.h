#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_MotorSettings_t * JoltC_MotorSettings_new(
  char** outErrMsg
);

//endregion constructors

//region properties

JoltC_SpringSettings_t * JoltC_MotorSettings_mSpringSettings_Get(
  JoltC_MotorSettings_t * self,
  char** outErrMsg
);

void JoltC_MotorSettings_mSpringSettings_Set(
  JoltC_MotorSettings_t * self,
  JoltC_SpringSettings_t * mSpringSettings,
  char** outErrMsg
);

float JoltC_MotorSettings_mMinForceLimit_Get(
  JoltC_MotorSettings_t * self,
  char** outErrMsg
);

void JoltC_MotorSettings_mMinForceLimit_Set(
  JoltC_MotorSettings_t * self,
  float mMinForceLimit,
  char** outErrMsg
);

float JoltC_MotorSettings_mMaxForceLimit_Get(
  JoltC_MotorSettings_t * self,
  char** outErrMsg
);

void JoltC_MotorSettings_mMaxForceLimit_Set(
  JoltC_MotorSettings_t * self,
  float mMaxForceLimit,
  char** outErrMsg
);

float JoltC_MotorSettings_mMinTorqueLimit_Get(
  JoltC_MotorSettings_t * self,
  char** outErrMsg
);

void JoltC_MotorSettings_mMinTorqueLimit_Set(
  JoltC_MotorSettings_t * self,
  float mMinTorqueLimit,
  char** outErrMsg
);

float JoltC_MotorSettings_mMaxTorqueLimit_Get(
  JoltC_MotorSettings_t * self,
  char** outErrMsg
);

void JoltC_MotorSettings_mMaxTorqueLimit_Set(
  JoltC_MotorSettings_t * self,
  float mMaxTorqueLimit,
  char** outErrMsg
);

//endregion properties


#ifdef __cplusplus
}
#endif

