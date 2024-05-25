#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JPC_MotorSettings_t * JPC_MotorSettings_new();

//endregion constructors

//region properties

JPC_SpringSettings_t * JPC_MotorSettings_mSpringSettings_Get(
  JPC_MotorSettings_t * self
);

void JPC_MotorSettings_mSpringSettings_Set(
  JPC_MotorSettings_t * self,
  JPC_SpringSettings_t * mSpringSettings
);

float JPC_MotorSettings_mMinForceLimit_Get(
  JPC_MotorSettings_t * self
);

void JPC_MotorSettings_mMinForceLimit_Set(
  JPC_MotorSettings_t * self,
  float mMinForceLimit
);

float JPC_MotorSettings_mMaxForceLimit_Get(
  JPC_MotorSettings_t * self
);

void JPC_MotorSettings_mMaxForceLimit_Set(
  JPC_MotorSettings_t * self,
  float mMaxForceLimit
);

float JPC_MotorSettings_mMinTorqueLimit_Get(
  JPC_MotorSettings_t * self
);

void JPC_MotorSettings_mMinTorqueLimit_Set(
  JPC_MotorSettings_t * self,
  float mMinTorqueLimit
);

float JPC_MotorSettings_mMaxTorqueLimit_Get(
  JPC_MotorSettings_t * self
);

void JPC_MotorSettings_mMaxTorqueLimit_Set(
  JPC_MotorSettings_t * self,
  float mMaxTorqueLimit
);

//endregion properties


#ifdef __cplusplus
}
#endif

