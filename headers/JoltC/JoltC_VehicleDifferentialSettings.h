#pragma once
#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_VehicleDifferentialSettings_t * JoltC_VehicleDifferentialSettings_new();

//endregion

//region destructor

void JoltC_VehicleDifferentialSettings_destroy(
  JoltC_VehicleDifferentialSettings_t * self
);

//endregion
//region properties

long JoltC_VehicleDifferentialSettings_mLeftWheel_Get(
  JoltC_VehicleDifferentialSettings_t * self
);

void JoltC_VehicleDifferentialSettings_mLeftWheel_Set(
  JoltC_VehicleDifferentialSettings_t * self,
  long mLeftWheel
);

long JoltC_VehicleDifferentialSettings_mRightWheel_Get(
  JoltC_VehicleDifferentialSettings_t * self
);

void JoltC_VehicleDifferentialSettings_mRightWheel_Set(
  JoltC_VehicleDifferentialSettings_t * self,
  long mRightWheel
);

float JoltC_VehicleDifferentialSettings_mDifferentialRatio_Get(
  JoltC_VehicleDifferentialSettings_t * self
);

void JoltC_VehicleDifferentialSettings_mDifferentialRatio_Set(
  JoltC_VehicleDifferentialSettings_t * self,
  float mDifferentialRatio
);

float JoltC_VehicleDifferentialSettings_mLeftRightSplit_Get(
  JoltC_VehicleDifferentialSettings_t * self
);

void JoltC_VehicleDifferentialSettings_mLeftRightSplit_Set(
  JoltC_VehicleDifferentialSettings_t * self,
  float mLeftRightSplit
);

float JoltC_VehicleDifferentialSettings_mLimitedSlipRatio_Get(
  JoltC_VehicleDifferentialSettings_t * self
);

void JoltC_VehicleDifferentialSettings_mLimitedSlipRatio_Set(
  JoltC_VehicleDifferentialSettings_t * self,
  float mLimitedSlipRatio
);

float JoltC_VehicleDifferentialSettings_mEngineTorqueRatio_Get(
  JoltC_VehicleDifferentialSettings_t * self
);

void JoltC_VehicleDifferentialSettings_mEngineTorqueRatio_Set(
  JoltC_VehicleDifferentialSettings_t * self,
  float mEngineTorqueRatio
);

//endregion


#ifdef __cplusplus
}
#endif
