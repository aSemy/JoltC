#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region properties

JoltC_ETransmissionMode JoltC_VehicleTransmissionSettings_mMode_Get(
  JoltC_VehicleTransmissionSettings_t * self,
  char** outErrMsg
);

void JoltC_VehicleTransmissionSettings_mMode_Set(
  JoltC_VehicleTransmissionSettings_t * self,
  JoltC_ETransmissionMode mMode,
  char** outErrMsg
);

JoltC_ArrayFloat_t * JoltC_VehicleTransmissionSettings_mGearRatios_Get(
  JoltC_VehicleTransmissionSettings_t * self,
  char** outErrMsg
);

void JoltC_VehicleTransmissionSettings_mGearRatios_Set(
  JoltC_VehicleTransmissionSettings_t * self,
  JoltC_ArrayFloat_t * mGearRatios,
  char** outErrMsg
);

JoltC_ArrayFloat_t * JoltC_VehicleTransmissionSettings_mReverseGearRatios_Get(
  JoltC_VehicleTransmissionSettings_t * self,
  char** outErrMsg
);

void JoltC_VehicleTransmissionSettings_mReverseGearRatios_Set(
  JoltC_VehicleTransmissionSettings_t * self,
  JoltC_ArrayFloat_t * mReverseGearRatios,
  char** outErrMsg
);

float JoltC_VehicleTransmissionSettings_mSwitchTime_Get(
  JoltC_VehicleTransmissionSettings_t * self,
  char** outErrMsg
);

void JoltC_VehicleTransmissionSettings_mSwitchTime_Set(
  JoltC_VehicleTransmissionSettings_t * self,
  float mSwitchTime,
  char** outErrMsg
);

float JoltC_VehicleTransmissionSettings_mClutchReleaseTime_Get(
  JoltC_VehicleTransmissionSettings_t * self,
  char** outErrMsg
);

void JoltC_VehicleTransmissionSettings_mClutchReleaseTime_Set(
  JoltC_VehicleTransmissionSettings_t * self,
  float mClutchReleaseTime,
  char** outErrMsg
);

float JoltC_VehicleTransmissionSettings_mSwitchLatency_Get(
  JoltC_VehicleTransmissionSettings_t * self,
  char** outErrMsg
);

void JoltC_VehicleTransmissionSettings_mSwitchLatency_Set(
  JoltC_VehicleTransmissionSettings_t * self,
  float mSwitchLatency,
  char** outErrMsg
);

float JoltC_VehicleTransmissionSettings_mShiftUpRPM_Get(
  JoltC_VehicleTransmissionSettings_t * self,
  char** outErrMsg
);

void JoltC_VehicleTransmissionSettings_mShiftUpRPM_Set(
  JoltC_VehicleTransmissionSettings_t * self,
  float mShiftUpRPM,
  char** outErrMsg
);

float JoltC_VehicleTransmissionSettings_mShiftDownRPM_Get(
  JoltC_VehicleTransmissionSettings_t * self,
  char** outErrMsg
);

void JoltC_VehicleTransmissionSettings_mShiftDownRPM_Set(
  JoltC_VehicleTransmissionSettings_t * self,
  float mShiftDownRPM,
  char** outErrMsg
);

float JoltC_VehicleTransmissionSettings_mClutchStrength_Get(
  JoltC_VehicleTransmissionSettings_t * self,
  char** outErrMsg
);

void JoltC_VehicleTransmissionSettings_mClutchStrength_Set(
  JoltC_VehicleTransmissionSettings_t * self,
  float mClutchStrength,
  char** outErrMsg
);

//endregion properties


#ifdef __cplusplus
}
#endif

