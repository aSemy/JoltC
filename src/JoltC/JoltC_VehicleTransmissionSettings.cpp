#include "JoltC/JoltC_VehicleTransmissionSettings.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region properties

JoltC_ETransmissionMode JoltC_VehicleTransmissionSettings_mMode_Get(
  JoltC_VehicleTransmissionSettings_t * self,
  char** outErrMsg
) {
  VehicleTransmissionSettings * selfCpp = static_cast<VehicleTransmissionSettings *>(self->obj);
  ETransmissionMode result = selfCpp->mMode;
  return static_cast<JoltC_ETransmissionMode>(static_cast<int>(result));
};

void JoltC_VehicleTransmissionSettings_mMode_Set(
  JoltC_VehicleTransmissionSettings_t * self,
  JoltC_ETransmissionMode mMode,
  char** outErrMsg
) {
  VehicleTransmissionSettings * selfCpp = static_cast<VehicleTransmissionSettings *>(self->obj);
  selfCpp->mMode = static_cast<ETransmissionMode>(static_cast<int>(mMode));
};

JoltC_ArrayFloat_t * JoltC_VehicleTransmissionSettings_mGearRatios_Get(
  JoltC_VehicleTransmissionSettings_t * self,
  char** outErrMsg
) {
  VehicleTransmissionSettings * selfCpp = static_cast<VehicleTransmissionSettings *>(self->obj);
  ArrayFloat resultValue = selfCpp->mGearRatios;
  ArrayFloat* result = new ArrayFloat(resultValue);
  return reinterpret_cast<JoltC_ArrayFloat_t *>(result);
};

void JoltC_VehicleTransmissionSettings_mGearRatios_Set(
  JoltC_VehicleTransmissionSettings_t * self,
  JoltC_ArrayFloat_t * mGearRatios,
  char** outErrMsg
) {
  VehicleTransmissionSettings * selfCpp = static_cast<VehicleTransmissionSettings *>(self->obj);
  selfCpp->mGearRatios = *reinterpret_cast<ArrayFloat *>(mGearRatios->obj);
};

JoltC_ArrayFloat_t * JoltC_VehicleTransmissionSettings_mReverseGearRatios_Get(
  JoltC_VehicleTransmissionSettings_t * self,
  char** outErrMsg
) {
  VehicleTransmissionSettings * selfCpp = static_cast<VehicleTransmissionSettings *>(self->obj);
  ArrayFloat resultValue = selfCpp->mReverseGearRatios;
  ArrayFloat* result = new ArrayFloat(resultValue);
  return reinterpret_cast<JoltC_ArrayFloat_t *>(result);
};

void JoltC_VehicleTransmissionSettings_mReverseGearRatios_Set(
  JoltC_VehicleTransmissionSettings_t * self,
  JoltC_ArrayFloat_t * mReverseGearRatios,
  char** outErrMsg
) {
  VehicleTransmissionSettings * selfCpp = static_cast<VehicleTransmissionSettings *>(self->obj);
  selfCpp->mReverseGearRatios = *reinterpret_cast<ArrayFloat *>(mReverseGearRatios->obj);
};

float JoltC_VehicleTransmissionSettings_mSwitchTime_Get(
  JoltC_VehicleTransmissionSettings_t * self,
  char** outErrMsg
) {
  VehicleTransmissionSettings * selfCpp = static_cast<VehicleTransmissionSettings *>(self->obj);
  float result = selfCpp->mSwitchTime;
  return result;
};

void JoltC_VehicleTransmissionSettings_mSwitchTime_Set(
  JoltC_VehicleTransmissionSettings_t * self,
  float mSwitchTime,
  char** outErrMsg
) {
  VehicleTransmissionSettings * selfCpp = static_cast<VehicleTransmissionSettings *>(self->obj);
  selfCpp->mSwitchTime = mSwitchTime;
};

float JoltC_VehicleTransmissionSettings_mClutchReleaseTime_Get(
  JoltC_VehicleTransmissionSettings_t * self,
  char** outErrMsg
) {
  VehicleTransmissionSettings * selfCpp = static_cast<VehicleTransmissionSettings *>(self->obj);
  float result = selfCpp->mClutchReleaseTime;
  return result;
};

void JoltC_VehicleTransmissionSettings_mClutchReleaseTime_Set(
  JoltC_VehicleTransmissionSettings_t * self,
  float mClutchReleaseTime,
  char** outErrMsg
) {
  VehicleTransmissionSettings * selfCpp = static_cast<VehicleTransmissionSettings *>(self->obj);
  selfCpp->mClutchReleaseTime = mClutchReleaseTime;
};

float JoltC_VehicleTransmissionSettings_mSwitchLatency_Get(
  JoltC_VehicleTransmissionSettings_t * self,
  char** outErrMsg
) {
  VehicleTransmissionSettings * selfCpp = static_cast<VehicleTransmissionSettings *>(self->obj);
  float result = selfCpp->mSwitchLatency;
  return result;
};

void JoltC_VehicleTransmissionSettings_mSwitchLatency_Set(
  JoltC_VehicleTransmissionSettings_t * self,
  float mSwitchLatency,
  char** outErrMsg
) {
  VehicleTransmissionSettings * selfCpp = static_cast<VehicleTransmissionSettings *>(self->obj);
  selfCpp->mSwitchLatency = mSwitchLatency;
};

float JoltC_VehicleTransmissionSettings_mShiftUpRPM_Get(
  JoltC_VehicleTransmissionSettings_t * self,
  char** outErrMsg
) {
  VehicleTransmissionSettings * selfCpp = static_cast<VehicleTransmissionSettings *>(self->obj);
  float result = selfCpp->mShiftUpRPM;
  return result;
};

void JoltC_VehicleTransmissionSettings_mShiftUpRPM_Set(
  JoltC_VehicleTransmissionSettings_t * self,
  float mShiftUpRPM,
  char** outErrMsg
) {
  VehicleTransmissionSettings * selfCpp = static_cast<VehicleTransmissionSettings *>(self->obj);
  selfCpp->mShiftUpRPM = mShiftUpRPM;
};

float JoltC_VehicleTransmissionSettings_mShiftDownRPM_Get(
  JoltC_VehicleTransmissionSettings_t * self,
  char** outErrMsg
) {
  VehicleTransmissionSettings * selfCpp = static_cast<VehicleTransmissionSettings *>(self->obj);
  float result = selfCpp->mShiftDownRPM;
  return result;
};

void JoltC_VehicleTransmissionSettings_mShiftDownRPM_Set(
  JoltC_VehicleTransmissionSettings_t * self,
  float mShiftDownRPM,
  char** outErrMsg
) {
  VehicleTransmissionSettings * selfCpp = static_cast<VehicleTransmissionSettings *>(self->obj);
  selfCpp->mShiftDownRPM = mShiftDownRPM;
};

float JoltC_VehicleTransmissionSettings_mClutchStrength_Get(
  JoltC_VehicleTransmissionSettings_t * self,
  char** outErrMsg
) {
  VehicleTransmissionSettings * selfCpp = static_cast<VehicleTransmissionSettings *>(self->obj);
  float result = selfCpp->mClutchStrength;
  return result;
};

void JoltC_VehicleTransmissionSettings_mClutchStrength_Set(
  JoltC_VehicleTransmissionSettings_t * self,
  float mClutchStrength,
  char** outErrMsg
) {
  VehicleTransmissionSettings * selfCpp = static_cast<VehicleTransmissionSettings *>(self->obj);
  selfCpp->mClutchStrength = mClutchStrength;
};

//endregion properties

#ifdef __cplusplus
}
#endif

