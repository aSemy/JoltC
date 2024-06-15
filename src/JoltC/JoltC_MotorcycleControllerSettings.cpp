#include "JoltC/JoltC_MotorcycleControllerSettings.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

/**
  Construct a new `MotorcycleControllerSettings` instance.
 */
JoltC_MotorcycleControllerSettings_t * JoltC_MotorcycleControllerSettings_new() {
  JoltC_MotorcycleControllerSettings_t * cInstance = new JoltC_MotorcycleControllerSettings_t();
  MotorcycleControllerSettings * cppInstance = new MotorcycleControllerSettings();
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion

//region destructor

void JoltC_MotorcycleControllerSettings_destroy(
  JoltC_MotorcycleControllerSettings_t * self
){
  if (self == NULL) return;
  delete static_cast<MotorcycleControllerSettings *>(self->obj);
  free(self);
}

//endregion
//region properties

float JoltC_MotorcycleControllerSettings_mMaxLeanAngle_Get(
  JoltC_MotorcycleControllerSettings_t * self
) {
  MotorcycleControllerSettings * selfCpp = static_cast<MotorcycleControllerSettings *>(self->obj);
  return selfCpp->mMaxLeanAngle;
}

void JoltC_MotorcycleControllerSettings_mMaxLeanAngle_Set(
  JoltC_MotorcycleControllerSettings_t * self,
  float mMaxLeanAngle
) {
  MotorcycleControllerSettings * selfCpp = static_cast<MotorcycleControllerSettings *>(self->obj);
  selfCpp->mMaxLeanAngle = mMaxLeanAngle;
}

float JoltC_MotorcycleControllerSettings_mLeanSpringConstant_Get(
  JoltC_MotorcycleControllerSettings_t * self
) {
  MotorcycleControllerSettings * selfCpp = static_cast<MotorcycleControllerSettings *>(self->obj);
  return selfCpp->mLeanSpringConstant;
}

void JoltC_MotorcycleControllerSettings_mLeanSpringConstant_Set(
  JoltC_MotorcycleControllerSettings_t * self,
  float mLeanSpringConstant
) {
  MotorcycleControllerSettings * selfCpp = static_cast<MotorcycleControllerSettings *>(self->obj);
  selfCpp->mLeanSpringConstant = mLeanSpringConstant;
}

float JoltC_MotorcycleControllerSettings_mLeanSpringDamping_Get(
  JoltC_MotorcycleControllerSettings_t * self
) {
  MotorcycleControllerSettings * selfCpp = static_cast<MotorcycleControllerSettings *>(self->obj);
  return selfCpp->mLeanSpringDamping;
}

void JoltC_MotorcycleControllerSettings_mLeanSpringDamping_Set(
  JoltC_MotorcycleControllerSettings_t * self,
  float mLeanSpringDamping
) {
  MotorcycleControllerSettings * selfCpp = static_cast<MotorcycleControllerSettings *>(self->obj);
  selfCpp->mLeanSpringDamping = mLeanSpringDamping;
}

float JoltC_MotorcycleControllerSettings_mLeanSpringIntegrationCoefficient_Get(
  JoltC_MotorcycleControllerSettings_t * self
) {
  MotorcycleControllerSettings * selfCpp = static_cast<MotorcycleControllerSettings *>(self->obj);
  return selfCpp->mLeanSpringIntegrationCoefficient;
}

void JoltC_MotorcycleControllerSettings_mLeanSpringIntegrationCoefficient_Set(
  JoltC_MotorcycleControllerSettings_t * self,
  float mLeanSpringIntegrationCoefficient
) {
  MotorcycleControllerSettings * selfCpp = static_cast<MotorcycleControllerSettings *>(self->obj);
  selfCpp->mLeanSpringIntegrationCoefficient = mLeanSpringIntegrationCoefficient;
}

float JoltC_MotorcycleControllerSettings_mLeanSpringIntegrationCoefficientDecay_Get(
  JoltC_MotorcycleControllerSettings_t * self
) {
  MotorcycleControllerSettings * selfCpp = static_cast<MotorcycleControllerSettings *>(self->obj);
  return selfCpp->mLeanSpringIntegrationCoefficientDecay;
}

void JoltC_MotorcycleControllerSettings_mLeanSpringIntegrationCoefficientDecay_Set(
  JoltC_MotorcycleControllerSettings_t * self,
  float mLeanSpringIntegrationCoefficientDecay
) {
  MotorcycleControllerSettings * selfCpp = static_cast<MotorcycleControllerSettings *>(self->obj);
  selfCpp->mLeanSpringIntegrationCoefficientDecay = mLeanSpringIntegrationCoefficientDecay;
}

float JoltC_MotorcycleControllerSettings_mLeanSmoothingFactor_Get(
  JoltC_MotorcycleControllerSettings_t * self
) {
  MotorcycleControllerSettings * selfCpp = static_cast<MotorcycleControllerSettings *>(self->obj);
  return selfCpp->mLeanSmoothingFactor;
}

void JoltC_MotorcycleControllerSettings_mLeanSmoothingFactor_Set(
  JoltC_MotorcycleControllerSettings_t * self,
  float mLeanSmoothingFactor
) {
  MotorcycleControllerSettings * selfCpp = static_cast<MotorcycleControllerSettings *>(self->obj);
  selfCpp->mLeanSmoothingFactor = mLeanSmoothingFactor;
}

JoltC_VehicleEngineSettings_t * JoltC_MotorcycleControllerSettings_mEngine_Get(
  JoltC_MotorcycleControllerSettings_t * self
) {
  MotorcycleControllerSettings * selfCpp = static_cast<MotorcycleControllerSettings *>(self->obj);
  VehicleEngineSettings * resultPtr = new VehicleEngineSettings();
  *resultPtr = selfCpp->mEngine;
  JoltC_VehicleEngineSettings_t * result = new JoltC_VehicleEngineSettings_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

void JoltC_MotorcycleControllerSettings_mEngine_Set(
  JoltC_MotorcycleControllerSettings_t * self,
  JoltC_VehicleEngineSettings_t * mEngine
) {
  MotorcycleControllerSettings * selfCpp = static_cast<MotorcycleControllerSettings *>(self->obj);
  selfCpp->mEngine = *static_cast<VehicleEngineSettings *>(mEngine->obj);
}

JoltC_VehicleTransmissionSettings_t * JoltC_MotorcycleControllerSettings_mTransmission_Get(
  JoltC_MotorcycleControllerSettings_t * self
) {
  MotorcycleControllerSettings * selfCpp = static_cast<MotorcycleControllerSettings *>(self->obj);
  VehicleTransmissionSettings * resultPtr = new VehicleTransmissionSettings();
  *resultPtr = selfCpp->mTransmission;
  JoltC_VehicleTransmissionSettings_t * result = new JoltC_VehicleTransmissionSettings_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

void JoltC_MotorcycleControllerSettings_mTransmission_Set(
  JoltC_MotorcycleControllerSettings_t * self,
  JoltC_VehicleTransmissionSettings_t * mTransmission
) {
  MotorcycleControllerSettings * selfCpp = static_cast<MotorcycleControllerSettings *>(self->obj);
  selfCpp->mTransmission = *static_cast<VehicleTransmissionSettings *>(mTransmission->obj);
}

JoltC_ArrayVehicleDifferentialSettings_t * JoltC_MotorcycleControllerSettings_mDifferentials_Get(
  JoltC_MotorcycleControllerSettings_t * self
) {
  MotorcycleControllerSettings * selfCpp = static_cast<MotorcycleControllerSettings *>(self->obj);
  ArrayVehicleDifferentialSettings * resultPtr = new ArrayVehicleDifferentialSettings();
  *resultPtr = selfCpp->mDifferentials;
  JoltC_ArrayVehicleDifferentialSettings_t * result = new JoltC_ArrayVehicleDifferentialSettings_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

void JoltC_MotorcycleControllerSettings_mDifferentials_Set(
  JoltC_MotorcycleControllerSettings_t * self,
  JoltC_ArrayVehicleDifferentialSettings_t * mDifferentials
) {
  MotorcycleControllerSettings * selfCpp = static_cast<MotorcycleControllerSettings *>(self->obj);
  selfCpp->mDifferentials = *static_cast<ArrayVehicleDifferentialSettings *>(mDifferentials->obj);
}

float JoltC_MotorcycleControllerSettings_mDifferentialLimitedSlipRatio_Get(
  JoltC_MotorcycleControllerSettings_t * self
) {
  MotorcycleControllerSettings * selfCpp = static_cast<MotorcycleControllerSettings *>(self->obj);
  return selfCpp->mDifferentialLimitedSlipRatio;
}

void JoltC_MotorcycleControllerSettings_mDifferentialLimitedSlipRatio_Set(
  JoltC_MotorcycleControllerSettings_t * self,
  float mDifferentialLimitedSlipRatio
) {
  MotorcycleControllerSettings * selfCpp = static_cast<MotorcycleControllerSettings *>(self->obj);
  selfCpp->mDifferentialLimitedSlipRatio = mDifferentialLimitedSlipRatio;
}

//endregion


#ifdef __cplusplus
}
#endif
