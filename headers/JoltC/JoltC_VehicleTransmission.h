#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region functions

void JoltC_VehicleTransmission_Set(
  JoltC_VehicleTransmission_t * self,
  long inCurrentGear,
  float inClutchFriction,
  char** outErrMsg
);

long JoltC_VehicleTransmission_GetCurrentGear(
  JoltC_VehicleTransmission_t * self,
  char** outErrMsg
);

float JoltC_VehicleTransmission_GetClutchFriction(
  JoltC_VehicleTransmission_t * self,
  char** outErrMsg
);

bool JoltC_VehicleTransmission_IsSwitchingGear(
  JoltC_VehicleTransmission_t * self,
  char** outErrMsg
);

float JoltC_VehicleTransmission_GetCurrentRatio(
  JoltC_VehicleTransmission_t * self,
  char** outErrMsg
);

//endregion functions

//region properties

JoltC_ETransmissionMode JoltC_VehicleTransmission_mMode_Get(
  JoltC_VehicleTransmission_t * self,
  char** outErrMsg
);

void JoltC_VehicleTransmission_mMode_Set(
  JoltC_VehicleTransmission_t * self,
  JoltC_ETransmissionMode mMode,
  char** outErrMsg
);

JoltC_ArrayFloat_t * JoltC_VehicleTransmission_mGearRatios_Get(
  JoltC_VehicleTransmission_t * self,
  char** outErrMsg
);

void JoltC_VehicleTransmission_mGearRatios_Set(
  JoltC_VehicleTransmission_t * self,
  JoltC_ArrayFloat_t * mGearRatios,
  char** outErrMsg
);

JoltC_ArrayFloat_t * JoltC_VehicleTransmission_mReverseGearRatios_Get(
  JoltC_VehicleTransmission_t * self,
  char** outErrMsg
);

void JoltC_VehicleTransmission_mReverseGearRatios_Set(
  JoltC_VehicleTransmission_t * self,
  JoltC_ArrayFloat_t * mReverseGearRatios,
  char** outErrMsg
);

float JoltC_VehicleTransmission_mSwitchTime_Get(
  JoltC_VehicleTransmission_t * self,
  char** outErrMsg
);

void JoltC_VehicleTransmission_mSwitchTime_Set(
  JoltC_VehicleTransmission_t * self,
  float mSwitchTime,
  char** outErrMsg
);

float JoltC_VehicleTransmission_mClutchReleaseTime_Get(
  JoltC_VehicleTransmission_t * self,
  char** outErrMsg
);

void JoltC_VehicleTransmission_mClutchReleaseTime_Set(
  JoltC_VehicleTransmission_t * self,
  float mClutchReleaseTime,
  char** outErrMsg
);

float JoltC_VehicleTransmission_mSwitchLatency_Get(
  JoltC_VehicleTransmission_t * self,
  char** outErrMsg
);

void JoltC_VehicleTransmission_mSwitchLatency_Set(
  JoltC_VehicleTransmission_t * self,
  float mSwitchLatency,
  char** outErrMsg
);

float JoltC_VehicleTransmission_mShiftUpRPM_Get(
  JoltC_VehicleTransmission_t * self,
  char** outErrMsg
);

void JoltC_VehicleTransmission_mShiftUpRPM_Set(
  JoltC_VehicleTransmission_t * self,
  float mShiftUpRPM,
  char** outErrMsg
);

float JoltC_VehicleTransmission_mShiftDownRPM_Get(
  JoltC_VehicleTransmission_t * self,
  char** outErrMsg
);

void JoltC_VehicleTransmission_mShiftDownRPM_Set(
  JoltC_VehicleTransmission_t * self,
  float mShiftDownRPM,
  char** outErrMsg
);

float JoltC_VehicleTransmission_mClutchStrength_Get(
  JoltC_VehicleTransmission_t * self,
  char** outErrMsg
);

void JoltC_VehicleTransmission_mClutchStrength_Set(
  JoltC_VehicleTransmission_t * self,
  float mClutchStrength,
  char** outErrMsg
);

//endregion properties


#ifdef __cplusplus
}
#endif

