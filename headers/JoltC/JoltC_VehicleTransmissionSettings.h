#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region properties

JPC_ETransmissionMode JPC_VehicleTransmissionSettings_mMode_Get(
  JPC_VehicleTransmissionSettings_t * self
);

void JPC_VehicleTransmissionSettings_mMode_Set(
  JPC_VehicleTransmissionSettings_t * self,
  JPC_ETransmissionMode mMode
);

JPC_ArrayFloat_t * JPC_VehicleTransmissionSettings_mGearRatios_Get(
  JPC_VehicleTransmissionSettings_t * self
);

void JPC_VehicleTransmissionSettings_mGearRatios_Set(
  JPC_VehicleTransmissionSettings_t * self,
  JPC_ArrayFloat_t * mGearRatios
);

JPC_ArrayFloat_t * JPC_VehicleTransmissionSettings_mReverseGearRatios_Get(
  JPC_VehicleTransmissionSettings_t * self
);

void JPC_VehicleTransmissionSettings_mReverseGearRatios_Set(
  JPC_VehicleTransmissionSettings_t * self,
  JPC_ArrayFloat_t * mReverseGearRatios
);

float JPC_VehicleTransmissionSettings_mSwitchTime_Get(
  JPC_VehicleTransmissionSettings_t * self
);

void JPC_VehicleTransmissionSettings_mSwitchTime_Set(
  JPC_VehicleTransmissionSettings_t * self,
  float mSwitchTime
);

float JPC_VehicleTransmissionSettings_mClutchReleaseTime_Get(
  JPC_VehicleTransmissionSettings_t * self
);

void JPC_VehicleTransmissionSettings_mClutchReleaseTime_Set(
  JPC_VehicleTransmissionSettings_t * self,
  float mClutchReleaseTime
);

float JPC_VehicleTransmissionSettings_mSwitchLatency_Get(
  JPC_VehicleTransmissionSettings_t * self
);

void JPC_VehicleTransmissionSettings_mSwitchLatency_Set(
  JPC_VehicleTransmissionSettings_t * self,
  float mSwitchLatency
);

float JPC_VehicleTransmissionSettings_mShiftUpRPM_Get(
  JPC_VehicleTransmissionSettings_t * self
);

void JPC_VehicleTransmissionSettings_mShiftUpRPM_Set(
  JPC_VehicleTransmissionSettings_t * self,
  float mShiftUpRPM
);

float JPC_VehicleTransmissionSettings_mShiftDownRPM_Get(
  JPC_VehicleTransmissionSettings_t * self
);

void JPC_VehicleTransmissionSettings_mShiftDownRPM_Set(
  JPC_VehicleTransmissionSettings_t * self,
  float mShiftDownRPM
);

float JPC_VehicleTransmissionSettings_mClutchStrength_Get(
  JPC_VehicleTransmissionSettings_t * self
);

void JPC_VehicleTransmissionSettings_mClutchStrength_Set(
  JPC_VehicleTransmissionSettings_t * self,
  float mClutchStrength
);

//endregion properties


#ifdef __cplusplus
}
#endif

