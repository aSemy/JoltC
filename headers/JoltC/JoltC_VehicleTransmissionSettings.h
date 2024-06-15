#pragma once
#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region destructor

void JoltC_VehicleTransmissionSettings_destroy(
  JoltC_VehicleTransmissionSettings_t * self
);

//endregion
//region converters

/**
 * Convert an instance of JoltC_VehicleTransmission_t into JoltC_VehicleTransmissionSettings_t.
 */
JoltC_VehicleTransmissionSettings_t * JoltC_VehicleTransmissionSettings_From_VehicleTransmission(
  JoltC_VehicleTransmission_t * subtype
);

//endregion

//region properties

JoltC_ETransmissionMode JoltC_VehicleTransmissionSettings_mMode_Get(
  JoltC_VehicleTransmissionSettings_t * self
);

void JoltC_VehicleTransmissionSettings_mMode_Set(
  JoltC_VehicleTransmissionSettings_t * self,
  JoltC_ETransmissionMode mMode
);

JoltC_ArrayFloat_t * JoltC_VehicleTransmissionSettings_mGearRatios_Get(
  JoltC_VehicleTransmissionSettings_t * self
);

void JoltC_VehicleTransmissionSettings_mGearRatios_Set(
  JoltC_VehicleTransmissionSettings_t * self,
  JoltC_ArrayFloat_t * mGearRatios
);

JoltC_ArrayFloat_t * JoltC_VehicleTransmissionSettings_mReverseGearRatios_Get(
  JoltC_VehicleTransmissionSettings_t * self
);

void JoltC_VehicleTransmissionSettings_mReverseGearRatios_Set(
  JoltC_VehicleTransmissionSettings_t * self,
  JoltC_ArrayFloat_t * mReverseGearRatios
);

float JoltC_VehicleTransmissionSettings_mSwitchTime_Get(
  JoltC_VehicleTransmissionSettings_t * self
);

void JoltC_VehicleTransmissionSettings_mSwitchTime_Set(
  JoltC_VehicleTransmissionSettings_t * self,
  float mSwitchTime
);

float JoltC_VehicleTransmissionSettings_mClutchReleaseTime_Get(
  JoltC_VehicleTransmissionSettings_t * self
);

void JoltC_VehicleTransmissionSettings_mClutchReleaseTime_Set(
  JoltC_VehicleTransmissionSettings_t * self,
  float mClutchReleaseTime
);

float JoltC_VehicleTransmissionSettings_mSwitchLatency_Get(
  JoltC_VehicleTransmissionSettings_t * self
);

void JoltC_VehicleTransmissionSettings_mSwitchLatency_Set(
  JoltC_VehicleTransmissionSettings_t * self,
  float mSwitchLatency
);

float JoltC_VehicleTransmissionSettings_mShiftUpRPM_Get(
  JoltC_VehicleTransmissionSettings_t * self
);

void JoltC_VehicleTransmissionSettings_mShiftUpRPM_Set(
  JoltC_VehicleTransmissionSettings_t * self,
  float mShiftUpRPM
);

float JoltC_VehicleTransmissionSettings_mShiftDownRPM_Get(
  JoltC_VehicleTransmissionSettings_t * self
);

void JoltC_VehicleTransmissionSettings_mShiftDownRPM_Set(
  JoltC_VehicleTransmissionSettings_t * self,
  float mShiftDownRPM
);

float JoltC_VehicleTransmissionSettings_mClutchStrength_Get(
  JoltC_VehicleTransmissionSettings_t * self
);

void JoltC_VehicleTransmissionSettings_mClutchStrength_Set(
  JoltC_VehicleTransmissionSettings_t * self,
  float mClutchStrength
);

//endregion


#ifdef __cplusplus
}
#endif
