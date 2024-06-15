#pragma once
#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region destructor

void JoltC_VehicleTransmission_destroy(
  JoltC_VehicleTransmission_t * self
);

//endregion
//region functions

void JoltC_VehicleTransmission_Set(
  JoltC_VehicleTransmission_t * self,
  long inCurrentGear,
  float inClutchFriction
);

long JoltC_VehicleTransmission_GetCurrentGear(
  JoltC_VehicleTransmission_t * self
);

float JoltC_VehicleTransmission_GetClutchFriction(
  JoltC_VehicleTransmission_t * self
);

bool JoltC_VehicleTransmission_IsSwitchingGear(
  JoltC_VehicleTransmission_t * self
);

float JoltC_VehicleTransmission_GetCurrentRatio(
  JoltC_VehicleTransmission_t * self
);

//endregion

//region properties

JoltC_ETransmissionMode JoltC_VehicleTransmission_mMode_Get(
  JoltC_VehicleTransmission_t * self
);

void JoltC_VehicleTransmission_mMode_Set(
  JoltC_VehicleTransmission_t * self,
  JoltC_ETransmissionMode mMode
);

JoltC_ArrayFloat_t * JoltC_VehicleTransmission_mGearRatios_Get(
  JoltC_VehicleTransmission_t * self
);

void JoltC_VehicleTransmission_mGearRatios_Set(
  JoltC_VehicleTransmission_t * self,
  JoltC_ArrayFloat_t * mGearRatios
);

JoltC_ArrayFloat_t * JoltC_VehicleTransmission_mReverseGearRatios_Get(
  JoltC_VehicleTransmission_t * self
);

void JoltC_VehicleTransmission_mReverseGearRatios_Set(
  JoltC_VehicleTransmission_t * self,
  JoltC_ArrayFloat_t * mReverseGearRatios
);

float JoltC_VehicleTransmission_mSwitchTime_Get(
  JoltC_VehicleTransmission_t * self
);

void JoltC_VehicleTransmission_mSwitchTime_Set(
  JoltC_VehicleTransmission_t * self,
  float mSwitchTime
);

float JoltC_VehicleTransmission_mClutchReleaseTime_Get(
  JoltC_VehicleTransmission_t * self
);

void JoltC_VehicleTransmission_mClutchReleaseTime_Set(
  JoltC_VehicleTransmission_t * self,
  float mClutchReleaseTime
);

float JoltC_VehicleTransmission_mSwitchLatency_Get(
  JoltC_VehicleTransmission_t * self
);

void JoltC_VehicleTransmission_mSwitchLatency_Set(
  JoltC_VehicleTransmission_t * self,
  float mSwitchLatency
);

float JoltC_VehicleTransmission_mShiftUpRPM_Get(
  JoltC_VehicleTransmission_t * self
);

void JoltC_VehicleTransmission_mShiftUpRPM_Set(
  JoltC_VehicleTransmission_t * self,
  float mShiftUpRPM
);

float JoltC_VehicleTransmission_mShiftDownRPM_Get(
  JoltC_VehicleTransmission_t * self
);

void JoltC_VehicleTransmission_mShiftDownRPM_Set(
  JoltC_VehicleTransmission_t * self,
  float mShiftDownRPM
);

float JoltC_VehicleTransmission_mClutchStrength_Get(
  JoltC_VehicleTransmission_t * self
);

void JoltC_VehicleTransmission_mClutchStrength_Set(
  JoltC_VehicleTransmission_t * self,
  float mClutchStrength
);

//endregion


#ifdef __cplusplus
}
#endif
