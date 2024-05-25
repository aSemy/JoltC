#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JPC_VehicleDifferentialSettings_t * JPC_VehicleDifferentialSettings_new();

//endregion constructors

//region properties

long JPC_VehicleDifferentialSettings_mLeftWheel_Get(
  JPC_VehicleDifferentialSettings_t * self
);

void JPC_VehicleDifferentialSettings_mLeftWheel_Set(
  JPC_VehicleDifferentialSettings_t * self,
  long mLeftWheel
);

long JPC_VehicleDifferentialSettings_mRightWheel_Get(
  JPC_VehicleDifferentialSettings_t * self
);

void JPC_VehicleDifferentialSettings_mRightWheel_Set(
  JPC_VehicleDifferentialSettings_t * self,
  long mRightWheel
);

float JPC_VehicleDifferentialSettings_mDifferentialRatio_Get(
  JPC_VehicleDifferentialSettings_t * self
);

void JPC_VehicleDifferentialSettings_mDifferentialRatio_Set(
  JPC_VehicleDifferentialSettings_t * self,
  float mDifferentialRatio
);

float JPC_VehicleDifferentialSettings_mLeftRightSplit_Get(
  JPC_VehicleDifferentialSettings_t * self
);

void JPC_VehicleDifferentialSettings_mLeftRightSplit_Set(
  JPC_VehicleDifferentialSettings_t * self,
  float mLeftRightSplit
);

float JPC_VehicleDifferentialSettings_mLimitedSlipRatio_Get(
  JPC_VehicleDifferentialSettings_t * self
);

void JPC_VehicleDifferentialSettings_mLimitedSlipRatio_Set(
  JPC_VehicleDifferentialSettings_t * self,
  float mLimitedSlipRatio
);

float JPC_VehicleDifferentialSettings_mEngineTorqueRatio_Get(
  JPC_VehicleDifferentialSettings_t * self
);

void JPC_VehicleDifferentialSettings_mEngineTorqueRatio_Set(
  JPC_VehicleDifferentialSettings_t * self,
  float mEngineTorqueRatio
);

//endregion properties


#ifdef __cplusplus
}
#endif

