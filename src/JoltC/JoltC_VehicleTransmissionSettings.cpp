#include "JoltC/JPC_VehicleTransmissionSettings.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region properties

JPC_ETransmissionMode JPC_VehicleTransmissionSettings_mMode_Get(
  JPC_VehicleTransmissionSettings_t * self
) {
  VehicleTransmissionSettings * selfCpp = static_cast<VehicleTransmissionSettings *>(self->obj);
  ETransmissionMode result = selfCpp->mMode;
  return static_cast<JPC_ETransmissionMode>(static_cast<int>(result));
};

void JPC_VehicleTransmissionSettings_mMode_Set(
  JPC_VehicleTransmissionSettings_t * self,
  JPC_ETransmissionMode mMode
) {
  VehicleTransmissionSettings * selfCpp = static_cast<VehicleTransmissionSettings *>(self->obj);
  selfCpp->mMode = static_cast<ETransmissionMode>(static_cast<int>(mMode));
};

JPC_ArrayFloat_t * JPC_VehicleTransmissionSettings_mGearRatios_Get(
  JPC_VehicleTransmissionSettings_t * self
) {
  VehicleTransmissionSettings * selfCpp = static_cast<VehicleTransmissionSettings *>(self->obj);
  ArrayFloat resultValue = selfCpp->mGearRatios;
  ArrayFloat* result = new ArrayFloat(resultValue);
  return reinterpret_cast<JPC_ArrayFloat_t *>(result);
};

void JPC_VehicleTransmissionSettings_mGearRatios_Set(
  JPC_VehicleTransmissionSettings_t * self,
  JPC_ArrayFloat_t * mGearRatios
) {
  VehicleTransmissionSettings * selfCpp = static_cast<VehicleTransmissionSettings *>(self->obj);
  selfCpp->mGearRatios = *reinterpret_cast<ArrayFloat *>(mGearRatios->obj);
};

JPC_ArrayFloat_t * JPC_VehicleTransmissionSettings_mReverseGearRatios_Get(
  JPC_VehicleTransmissionSettings_t * self
) {
  VehicleTransmissionSettings * selfCpp = static_cast<VehicleTransmissionSettings *>(self->obj);
  ArrayFloat resultValue = selfCpp->mReverseGearRatios;
  ArrayFloat* result = new ArrayFloat(resultValue);
  return reinterpret_cast<JPC_ArrayFloat_t *>(result);
};

void JPC_VehicleTransmissionSettings_mReverseGearRatios_Set(
  JPC_VehicleTransmissionSettings_t * self,
  JPC_ArrayFloat_t * mReverseGearRatios
) {
  VehicleTransmissionSettings * selfCpp = static_cast<VehicleTransmissionSettings *>(self->obj);
  selfCpp->mReverseGearRatios = *reinterpret_cast<ArrayFloat *>(mReverseGearRatios->obj);
};

float JPC_VehicleTransmissionSettings_mSwitchTime_Get(
  JPC_VehicleTransmissionSettings_t * self
) {
  VehicleTransmissionSettings * selfCpp = static_cast<VehicleTransmissionSettings *>(self->obj);
  float result = selfCpp->mSwitchTime;
  return result;
};

void JPC_VehicleTransmissionSettings_mSwitchTime_Set(
  JPC_VehicleTransmissionSettings_t * self,
  float mSwitchTime
) {
  VehicleTransmissionSettings * selfCpp = static_cast<VehicleTransmissionSettings *>(self->obj);
  selfCpp->mSwitchTime = mSwitchTime;
};

float JPC_VehicleTransmissionSettings_mClutchReleaseTime_Get(
  JPC_VehicleTransmissionSettings_t * self
) {
  VehicleTransmissionSettings * selfCpp = static_cast<VehicleTransmissionSettings *>(self->obj);
  float result = selfCpp->mClutchReleaseTime;
  return result;
};

void JPC_VehicleTransmissionSettings_mClutchReleaseTime_Set(
  JPC_VehicleTransmissionSettings_t * self,
  float mClutchReleaseTime
) {
  VehicleTransmissionSettings * selfCpp = static_cast<VehicleTransmissionSettings *>(self->obj);
  selfCpp->mClutchReleaseTime = mClutchReleaseTime;
};

float JPC_VehicleTransmissionSettings_mSwitchLatency_Get(
  JPC_VehicleTransmissionSettings_t * self
) {
  VehicleTransmissionSettings * selfCpp = static_cast<VehicleTransmissionSettings *>(self->obj);
  float result = selfCpp->mSwitchLatency;
  return result;
};

void JPC_VehicleTransmissionSettings_mSwitchLatency_Set(
  JPC_VehicleTransmissionSettings_t * self,
  float mSwitchLatency
) {
  VehicleTransmissionSettings * selfCpp = static_cast<VehicleTransmissionSettings *>(self->obj);
  selfCpp->mSwitchLatency = mSwitchLatency;
};

float JPC_VehicleTransmissionSettings_mShiftUpRPM_Get(
  JPC_VehicleTransmissionSettings_t * self
) {
  VehicleTransmissionSettings * selfCpp = static_cast<VehicleTransmissionSettings *>(self->obj);
  float result = selfCpp->mShiftUpRPM;
  return result;
};

void JPC_VehicleTransmissionSettings_mShiftUpRPM_Set(
  JPC_VehicleTransmissionSettings_t * self,
  float mShiftUpRPM
) {
  VehicleTransmissionSettings * selfCpp = static_cast<VehicleTransmissionSettings *>(self->obj);
  selfCpp->mShiftUpRPM = mShiftUpRPM;
};

float JPC_VehicleTransmissionSettings_mShiftDownRPM_Get(
  JPC_VehicleTransmissionSettings_t * self
) {
  VehicleTransmissionSettings * selfCpp = static_cast<VehicleTransmissionSettings *>(self->obj);
  float result = selfCpp->mShiftDownRPM;
  return result;
};

void JPC_VehicleTransmissionSettings_mShiftDownRPM_Set(
  JPC_VehicleTransmissionSettings_t * self,
  float mShiftDownRPM
) {
  VehicleTransmissionSettings * selfCpp = static_cast<VehicleTransmissionSettings *>(self->obj);
  selfCpp->mShiftDownRPM = mShiftDownRPM;
};

float JPC_VehicleTransmissionSettings_mClutchStrength_Get(
  JPC_VehicleTransmissionSettings_t * self
) {
  VehicleTransmissionSettings * selfCpp = static_cast<VehicleTransmissionSettings *>(self->obj);
  float result = selfCpp->mClutchStrength;
  return result;
};

void JPC_VehicleTransmissionSettings_mClutchStrength_Set(
  JPC_VehicleTransmissionSettings_t * self,
  float mClutchStrength
) {
  VehicleTransmissionSettings * selfCpp = static_cast<VehicleTransmissionSettings *>(self->obj);
  selfCpp->mClutchStrength = mClutchStrength;
};

//endregion properties

#ifdef __cplusplus
}
#endif

