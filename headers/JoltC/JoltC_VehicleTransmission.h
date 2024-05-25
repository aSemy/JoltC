#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region functions

void JPC_VehicleTransmission_Set(
  JPC_VehicleTransmission_t * self,
  long inCurrentGear,
  float inClutchFriction
);

long JPC_VehicleTransmission_GetCurrentGear(
  JPC_VehicleTransmission_t * self
);

float JPC_VehicleTransmission_GetClutchFriction(
  JPC_VehicleTransmission_t * self
);

bool JPC_VehicleTransmission_IsSwitchingGear(
  JPC_VehicleTransmission_t * self
);

float JPC_VehicleTransmission_GetCurrentRatio(
  JPC_VehicleTransmission_t * self
);

//endregion functions

//region properties

JPC_ETransmissionMode JPC_VehicleTransmission_mMode_Get(
  JPC_VehicleTransmission_t * self
);

void JPC_VehicleTransmission_mMode_Set(
  JPC_VehicleTransmission_t * self,
  JPC_ETransmissionMode mMode
);

JPC_ArrayFloat_t * JPC_VehicleTransmission_mGearRatios_Get(
  JPC_VehicleTransmission_t * self
);

void JPC_VehicleTransmission_mGearRatios_Set(
  JPC_VehicleTransmission_t * self,
  JPC_ArrayFloat_t * mGearRatios
);

JPC_ArrayFloat_t * JPC_VehicleTransmission_mReverseGearRatios_Get(
  JPC_VehicleTransmission_t * self
);

void JPC_VehicleTransmission_mReverseGearRatios_Set(
  JPC_VehicleTransmission_t * self,
  JPC_ArrayFloat_t * mReverseGearRatios
);

float JPC_VehicleTransmission_mSwitchTime_Get(
  JPC_VehicleTransmission_t * self
);

void JPC_VehicleTransmission_mSwitchTime_Set(
  JPC_VehicleTransmission_t * self,
  float mSwitchTime
);

float JPC_VehicleTransmission_mClutchReleaseTime_Get(
  JPC_VehicleTransmission_t * self
);

void JPC_VehicleTransmission_mClutchReleaseTime_Set(
  JPC_VehicleTransmission_t * self,
  float mClutchReleaseTime
);

float JPC_VehicleTransmission_mSwitchLatency_Get(
  JPC_VehicleTransmission_t * self
);

void JPC_VehicleTransmission_mSwitchLatency_Set(
  JPC_VehicleTransmission_t * self,
  float mSwitchLatency
);

float JPC_VehicleTransmission_mShiftUpRPM_Get(
  JPC_VehicleTransmission_t * self
);

void JPC_VehicleTransmission_mShiftUpRPM_Set(
  JPC_VehicleTransmission_t * self,
  float mShiftUpRPM
);

float JPC_VehicleTransmission_mShiftDownRPM_Get(
  JPC_VehicleTransmission_t * self
);

void JPC_VehicleTransmission_mShiftDownRPM_Set(
  JPC_VehicleTransmission_t * self,
  float mShiftDownRPM
);

float JPC_VehicleTransmission_mClutchStrength_Get(
  JPC_VehicleTransmission_t * self
);

void JPC_VehicleTransmission_mClutchStrength_Set(
  JPC_VehicleTransmission_t * self,
  float mClutchStrength
);

//endregion properties


#ifdef __cplusplus
}
#endif

