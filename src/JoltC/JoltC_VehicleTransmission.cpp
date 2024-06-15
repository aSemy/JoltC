#include "JoltC/JoltC_VehicleTransmission.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region destructor

void JoltC_VehicleTransmission_destroy(
  JoltC_VehicleTransmission_t * self
){
  if (self == NULL) return;
  delete static_cast<VehicleTransmission *>(self->obj);
  free(self);
}

//endregion
//region functions

void JoltC_VehicleTransmission_Set(
  JoltC_VehicleTransmission_t * self,
  long inCurrentGear,
  float inClutchFriction
) {
  VehicleTransmission * selfCpp = static_cast<VehicleTransmission *>(self->obj);
  selfCpp->Set(
    inCurrentGear,
    inClutchFriction
  );
}

long JoltC_VehicleTransmission_GetCurrentGear(
  JoltC_VehicleTransmission_t * self
) {
  VehicleTransmission * selfCpp = static_cast<VehicleTransmission *>(self->obj);
  return selfCpp->GetCurrentGear();
}

float JoltC_VehicleTransmission_GetClutchFriction(
  JoltC_VehicleTransmission_t * self
) {
  VehicleTransmission * selfCpp = static_cast<VehicleTransmission *>(self->obj);
  return selfCpp->GetClutchFriction();
}

bool JoltC_VehicleTransmission_IsSwitchingGear(
  JoltC_VehicleTransmission_t * self
) {
  VehicleTransmission * selfCpp = static_cast<VehicleTransmission *>(self->obj);
  return selfCpp->IsSwitchingGear();
}

float JoltC_VehicleTransmission_GetCurrentRatio(
  JoltC_VehicleTransmission_t * self
) {
  VehicleTransmission * selfCpp = static_cast<VehicleTransmission *>(self->obj);
  return selfCpp->GetCurrentRatio();
}

//endregion

//region properties

JoltC_ETransmissionMode JoltC_VehicleTransmission_mMode_Get(
  JoltC_VehicleTransmission_t * self
) {
  VehicleTransmission * selfCpp = static_cast<VehicleTransmission *>(self->obj);
  ETransmissionMode result = selfCpp->mMode;
  return static_cast<JoltC_ETransmissionMode>(static_cast<int>(result));
}

void JoltC_VehicleTransmission_mMode_Set(
  JoltC_VehicleTransmission_t * self,
  JoltC_ETransmissionMode mMode
) {
  VehicleTransmission * selfCpp = static_cast<VehicleTransmission *>(self->obj);
  selfCpp->mMode = static_cast<ETransmissionMode>(static_cast<int>(mMode));
}

JoltC_ArrayFloat_t * JoltC_VehicleTransmission_mGearRatios_Get(
  JoltC_VehicleTransmission_t * self
) {
  VehicleTransmission * selfCpp = static_cast<VehicleTransmission *>(self->obj);
  ArrayFloat * resultPtr = new ArrayFloat();
  *resultPtr = selfCpp->mGearRatios;
  JoltC_ArrayFloat_t * result = new JoltC_ArrayFloat_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

void JoltC_VehicleTransmission_mGearRatios_Set(
  JoltC_VehicleTransmission_t * self,
  JoltC_ArrayFloat_t * mGearRatios
) {
  VehicleTransmission * selfCpp = static_cast<VehicleTransmission *>(self->obj);
  selfCpp->mGearRatios = *static_cast<ArrayFloat *>(mGearRatios->obj);
}

JoltC_ArrayFloat_t * JoltC_VehicleTransmission_mReverseGearRatios_Get(
  JoltC_VehicleTransmission_t * self
) {
  VehicleTransmission * selfCpp = static_cast<VehicleTransmission *>(self->obj);
  ArrayFloat * resultPtr = new ArrayFloat();
  *resultPtr = selfCpp->mReverseGearRatios;
  JoltC_ArrayFloat_t * result = new JoltC_ArrayFloat_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

void JoltC_VehicleTransmission_mReverseGearRatios_Set(
  JoltC_VehicleTransmission_t * self,
  JoltC_ArrayFloat_t * mReverseGearRatios
) {
  VehicleTransmission * selfCpp = static_cast<VehicleTransmission *>(self->obj);
  selfCpp->mReverseGearRatios = *static_cast<ArrayFloat *>(mReverseGearRatios->obj);
}

float JoltC_VehicleTransmission_mSwitchTime_Get(
  JoltC_VehicleTransmission_t * self
) {
  VehicleTransmission * selfCpp = static_cast<VehicleTransmission *>(self->obj);
  return selfCpp->mSwitchTime;
}

void JoltC_VehicleTransmission_mSwitchTime_Set(
  JoltC_VehicleTransmission_t * self,
  float mSwitchTime
) {
  VehicleTransmission * selfCpp = static_cast<VehicleTransmission *>(self->obj);
  selfCpp->mSwitchTime = mSwitchTime;
}

float JoltC_VehicleTransmission_mClutchReleaseTime_Get(
  JoltC_VehicleTransmission_t * self
) {
  VehicleTransmission * selfCpp = static_cast<VehicleTransmission *>(self->obj);
  return selfCpp->mClutchReleaseTime;
}

void JoltC_VehicleTransmission_mClutchReleaseTime_Set(
  JoltC_VehicleTransmission_t * self,
  float mClutchReleaseTime
) {
  VehicleTransmission * selfCpp = static_cast<VehicleTransmission *>(self->obj);
  selfCpp->mClutchReleaseTime = mClutchReleaseTime;
}

float JoltC_VehicleTransmission_mSwitchLatency_Get(
  JoltC_VehicleTransmission_t * self
) {
  VehicleTransmission * selfCpp = static_cast<VehicleTransmission *>(self->obj);
  return selfCpp->mSwitchLatency;
}

void JoltC_VehicleTransmission_mSwitchLatency_Set(
  JoltC_VehicleTransmission_t * self,
  float mSwitchLatency
) {
  VehicleTransmission * selfCpp = static_cast<VehicleTransmission *>(self->obj);
  selfCpp->mSwitchLatency = mSwitchLatency;
}

float JoltC_VehicleTransmission_mShiftUpRPM_Get(
  JoltC_VehicleTransmission_t * self
) {
  VehicleTransmission * selfCpp = static_cast<VehicleTransmission *>(self->obj);
  return selfCpp->mShiftUpRPM;
}

void JoltC_VehicleTransmission_mShiftUpRPM_Set(
  JoltC_VehicleTransmission_t * self,
  float mShiftUpRPM
) {
  VehicleTransmission * selfCpp = static_cast<VehicleTransmission *>(self->obj);
  selfCpp->mShiftUpRPM = mShiftUpRPM;
}

float JoltC_VehicleTransmission_mShiftDownRPM_Get(
  JoltC_VehicleTransmission_t * self
) {
  VehicleTransmission * selfCpp = static_cast<VehicleTransmission *>(self->obj);
  return selfCpp->mShiftDownRPM;
}

void JoltC_VehicleTransmission_mShiftDownRPM_Set(
  JoltC_VehicleTransmission_t * self,
  float mShiftDownRPM
) {
  VehicleTransmission * selfCpp = static_cast<VehicleTransmission *>(self->obj);
  selfCpp->mShiftDownRPM = mShiftDownRPM;
}

float JoltC_VehicleTransmission_mClutchStrength_Get(
  JoltC_VehicleTransmission_t * self
) {
  VehicleTransmission * selfCpp = static_cast<VehicleTransmission *>(self->obj);
  return selfCpp->mClutchStrength;
}

void JoltC_VehicleTransmission_mClutchStrength_Set(
  JoltC_VehicleTransmission_t * self,
  float mClutchStrength
) {
  VehicleTransmission * selfCpp = static_cast<VehicleTransmission *>(self->obj);
  selfCpp->mClutchStrength = mClutchStrength;
}

//endregion


#ifdef __cplusplus
}
#endif
