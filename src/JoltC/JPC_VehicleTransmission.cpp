#include "JoltC/JPC_VehicleTransmission.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region functions

void JPC_VehicleTransmission_Set(
  JPC_VehicleTransmission_t * self,
  long inCurrentGear,
  float inClutchFriction
) {
  VehicleTransmission * selfCpp = static_cast<VehicleTransmission *>(self->obj);
  
  selfCpp->Set(
  inCurrentGear,
  inClutchFriction
  );
};

long JPC_VehicleTransmission_GetCurrentGear(
  JPC_VehicleTransmission_t * self
) {
  VehicleTransmission * selfCpp = static_cast<VehicleTransmission *>(self->obj);
  long result = selfCpp->GetCurrentGear();
  return result;
};

float JPC_VehicleTransmission_GetClutchFriction(
  JPC_VehicleTransmission_t * self
) {
  VehicleTransmission * selfCpp = static_cast<VehicleTransmission *>(self->obj);
  float result = selfCpp->GetClutchFriction();
  return result;
};

bool JPC_VehicleTransmission_IsSwitchingGear(
  JPC_VehicleTransmission_t * self
) {
  VehicleTransmission * selfCpp = static_cast<VehicleTransmission *>(self->obj);
  bool result = selfCpp->IsSwitchingGear();
  return result;
};

float JPC_VehicleTransmission_GetCurrentRatio(
  JPC_VehicleTransmission_t * self
) {
  VehicleTransmission * selfCpp = static_cast<VehicleTransmission *>(self->obj);
  float result = selfCpp->GetCurrentRatio();
  return result;
};

//endregion functions

//region properties

JPC_ETransmissionMode JPC_VehicleTransmission_mMode_Get(
  JPC_VehicleTransmission_t * self
) {
  VehicleTransmission * selfCpp = static_cast<VehicleTransmission *>(self->obj);
  ETransmissionMode result = selfCpp->mMode;
  return static_cast<JPC_ETransmissionMode>(static_cast<int>(result));
};

void JPC_VehicleTransmission_mMode_Set(
  JPC_VehicleTransmission_t * self,
  JPC_ETransmissionMode mMode
) {
  VehicleTransmission * selfCpp = static_cast<VehicleTransmission *>(self->obj);
  selfCpp->mMode = static_cast<ETransmissionMode>(static_cast<int>(mMode));
};

JPC_ArrayFloat_t * JPC_VehicleTransmission_mGearRatios_Get(
  JPC_VehicleTransmission_t * self
) {
  VehicleTransmission * selfCpp = static_cast<VehicleTransmission *>(self->obj);
  ArrayFloat resultValue = selfCpp->mGearRatios;
  ArrayFloat* result = new ArrayFloat(resultValue);
  return reinterpret_cast<JPC_ArrayFloat_t *>(result);
};

void JPC_VehicleTransmission_mGearRatios_Set(
  JPC_VehicleTransmission_t * self,
  JPC_ArrayFloat_t * mGearRatios
) {
  VehicleTransmission * selfCpp = static_cast<VehicleTransmission *>(self->obj);
  selfCpp->mGearRatios = *reinterpret_cast<ArrayFloat *>(mGearRatios->obj);
};

JPC_ArrayFloat_t * JPC_VehicleTransmission_mReverseGearRatios_Get(
  JPC_VehicleTransmission_t * self
) {
  VehicleTransmission * selfCpp = static_cast<VehicleTransmission *>(self->obj);
  ArrayFloat resultValue = selfCpp->mReverseGearRatios;
  ArrayFloat* result = new ArrayFloat(resultValue);
  return reinterpret_cast<JPC_ArrayFloat_t *>(result);
};

void JPC_VehicleTransmission_mReverseGearRatios_Set(
  JPC_VehicleTransmission_t * self,
  JPC_ArrayFloat_t * mReverseGearRatios
) {
  VehicleTransmission * selfCpp = static_cast<VehicleTransmission *>(self->obj);
  selfCpp->mReverseGearRatios = *reinterpret_cast<ArrayFloat *>(mReverseGearRatios->obj);
};

float JPC_VehicleTransmission_mSwitchTime_Get(
  JPC_VehicleTransmission_t * self
) {
  VehicleTransmission * selfCpp = static_cast<VehicleTransmission *>(self->obj);
  float result = selfCpp->mSwitchTime;
  return result;
};

void JPC_VehicleTransmission_mSwitchTime_Set(
  JPC_VehicleTransmission_t * self,
  float mSwitchTime
) {
  VehicleTransmission * selfCpp = static_cast<VehicleTransmission *>(self->obj);
  selfCpp->mSwitchTime = mSwitchTime;
};

float JPC_VehicleTransmission_mClutchReleaseTime_Get(
  JPC_VehicleTransmission_t * self
) {
  VehicleTransmission * selfCpp = static_cast<VehicleTransmission *>(self->obj);
  float result = selfCpp->mClutchReleaseTime;
  return result;
};

void JPC_VehicleTransmission_mClutchReleaseTime_Set(
  JPC_VehicleTransmission_t * self,
  float mClutchReleaseTime
) {
  VehicleTransmission * selfCpp = static_cast<VehicleTransmission *>(self->obj);
  selfCpp->mClutchReleaseTime = mClutchReleaseTime;
};

float JPC_VehicleTransmission_mSwitchLatency_Get(
  JPC_VehicleTransmission_t * self
) {
  VehicleTransmission * selfCpp = static_cast<VehicleTransmission *>(self->obj);
  float result = selfCpp->mSwitchLatency;
  return result;
};

void JPC_VehicleTransmission_mSwitchLatency_Set(
  JPC_VehicleTransmission_t * self,
  float mSwitchLatency
) {
  VehicleTransmission * selfCpp = static_cast<VehicleTransmission *>(self->obj);
  selfCpp->mSwitchLatency = mSwitchLatency;
};

float JPC_VehicleTransmission_mShiftUpRPM_Get(
  JPC_VehicleTransmission_t * self
) {
  VehicleTransmission * selfCpp = static_cast<VehicleTransmission *>(self->obj);
  float result = selfCpp->mShiftUpRPM;
  return result;
};

void JPC_VehicleTransmission_mShiftUpRPM_Set(
  JPC_VehicleTransmission_t * self,
  float mShiftUpRPM
) {
  VehicleTransmission * selfCpp = static_cast<VehicleTransmission *>(self->obj);
  selfCpp->mShiftUpRPM = mShiftUpRPM;
};

float JPC_VehicleTransmission_mShiftDownRPM_Get(
  JPC_VehicleTransmission_t * self
) {
  VehicleTransmission * selfCpp = static_cast<VehicleTransmission *>(self->obj);
  float result = selfCpp->mShiftDownRPM;
  return result;
};

void JPC_VehicleTransmission_mShiftDownRPM_Set(
  JPC_VehicleTransmission_t * self,
  float mShiftDownRPM
) {
  VehicleTransmission * selfCpp = static_cast<VehicleTransmission *>(self->obj);
  selfCpp->mShiftDownRPM = mShiftDownRPM;
};

float JPC_VehicleTransmission_mClutchStrength_Get(
  JPC_VehicleTransmission_t * self
) {
  VehicleTransmission * selfCpp = static_cast<VehicleTransmission *>(self->obj);
  float result = selfCpp->mClutchStrength;
  return result;
};

void JPC_VehicleTransmission_mClutchStrength_Set(
  JPC_VehicleTransmission_t * self,
  float mClutchStrength
) {
  VehicleTransmission * selfCpp = static_cast<VehicleTransmission *>(self->obj);
  selfCpp->mClutchStrength = mClutchStrength;
};

//endregion properties

#ifdef __cplusplus
}
#endif

