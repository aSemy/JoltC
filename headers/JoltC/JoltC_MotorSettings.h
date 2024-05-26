#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_MotorSettings_t * JoltC_MotorSettings_new();

//endregion

//region properties

JoltC_SpringSettings_t * JoltC_MotorSettings_mSpringSettings_Get(
  JoltC_MotorSettings_t * self
);

void JoltC_MotorSettings_mSpringSettings_Set(
  JoltC_MotorSettings_t * self,
  JoltC_SpringSettings_t * mSpringSettings
);

float JoltC_MotorSettings_mMinForceLimit_Get(
  JoltC_MotorSettings_t * self
);

void JoltC_MotorSettings_mMinForceLimit_Set(
  JoltC_MotorSettings_t * self,
  float mMinForceLimit
);

float JoltC_MotorSettings_mMaxForceLimit_Get(
  JoltC_MotorSettings_t * self
);

void JoltC_MotorSettings_mMaxForceLimit_Set(
  JoltC_MotorSettings_t * self,
  float mMaxForceLimit
);

float JoltC_MotorSettings_mMinTorqueLimit_Get(
  JoltC_MotorSettings_t * self
);

void JoltC_MotorSettings_mMinTorqueLimit_Set(
  JoltC_MotorSettings_t * self,
  float mMinTorqueLimit
);

float JoltC_MotorSettings_mMaxTorqueLimit_Get(
  JoltC_MotorSettings_t * self
);

void JoltC_MotorSettings_mMaxTorqueLimit_Set(
  JoltC_MotorSettings_t * self,
  float mMaxTorqueLimit
);

//endregion


#ifdef __cplusplus
}
#endif

