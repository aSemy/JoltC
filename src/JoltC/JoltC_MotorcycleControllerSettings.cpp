#include "JoltC/JoltC_MotorcycleControllerSettings.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_MotorcycleControllerSettings_t * JoltC_MotorcycleControllerSettings_new() {
  JoltC_MotorcycleControllerSettings_t * cInstance = new JoltC_MotorcycleControllerSettings_t();
  MotorcycleControllerSettings * cppInstance = new MotorcycleControllerSettings();
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion

//region properties

float JoltC_MotorcycleControllerSettings_mMaxLeanAngle_Get(
  JoltC_MotorcycleControllerSettings_t * self
) {
  MotorcycleControllerSettings * selfCpp = static_cast<MotorcycleControllerSettings *>(self->obj);
  float result = selfCpp->mMaxLeanAngle;
  return result;
};

void JoltC_MotorcycleControllerSettings_mMaxLeanAngle_Set(
  JoltC_MotorcycleControllerSettings_t * self,
  float mMaxLeanAngle
) {
  MotorcycleControllerSettings * selfCpp = static_cast<MotorcycleControllerSettings *>(self->obj);
  selfCpp->mMaxLeanAngle = mMaxLeanAngle;
};

float JoltC_MotorcycleControllerSettings_mLeanSpringConstant_Get(
  JoltC_MotorcycleControllerSettings_t * self
) {
  MotorcycleControllerSettings * selfCpp = static_cast<MotorcycleControllerSettings *>(self->obj);
  float result = selfCpp->mLeanSpringConstant;
  return result;
};

void JoltC_MotorcycleControllerSettings_mLeanSpringConstant_Set(
  JoltC_MotorcycleControllerSettings_t * self,
  float mLeanSpringConstant
) {
  MotorcycleControllerSettings * selfCpp = static_cast<MotorcycleControllerSettings *>(self->obj);
  selfCpp->mLeanSpringConstant = mLeanSpringConstant;
};

float JoltC_MotorcycleControllerSettings_mLeanSpringDamping_Get(
  JoltC_MotorcycleControllerSettings_t * self
) {
  MotorcycleControllerSettings * selfCpp = static_cast<MotorcycleControllerSettings *>(self->obj);
  float result = selfCpp->mLeanSpringDamping;
  return result;
};

void JoltC_MotorcycleControllerSettings_mLeanSpringDamping_Set(
  JoltC_MotorcycleControllerSettings_t * self,
  float mLeanSpringDamping
) {
  MotorcycleControllerSettings * selfCpp = static_cast<MotorcycleControllerSettings *>(self->obj);
  selfCpp->mLeanSpringDamping = mLeanSpringDamping;
};

float JoltC_MotorcycleControllerSettings_mLeanSpringIntegrationCoefficient_Get(
  JoltC_MotorcycleControllerSettings_t * self
) {
  MotorcycleControllerSettings * selfCpp = static_cast<MotorcycleControllerSettings *>(self->obj);
  float result = selfCpp->mLeanSpringIntegrationCoefficient;
  return result;
};

void JoltC_MotorcycleControllerSettings_mLeanSpringIntegrationCoefficient_Set(
  JoltC_MotorcycleControllerSettings_t * self,
  float mLeanSpringIntegrationCoefficient
) {
  MotorcycleControllerSettings * selfCpp = static_cast<MotorcycleControllerSettings *>(self->obj);
  selfCpp->mLeanSpringIntegrationCoefficient = mLeanSpringIntegrationCoefficient;
};

float JoltC_MotorcycleControllerSettings_mLeanSpringIntegrationCoefficientDecay_Get(
  JoltC_MotorcycleControllerSettings_t * self
) {
  MotorcycleControllerSettings * selfCpp = static_cast<MotorcycleControllerSettings *>(self->obj);
  float result = selfCpp->mLeanSpringIntegrationCoefficientDecay;
  return result;
};

void JoltC_MotorcycleControllerSettings_mLeanSpringIntegrationCoefficientDecay_Set(
  JoltC_MotorcycleControllerSettings_t * self,
  float mLeanSpringIntegrationCoefficientDecay
) {
  MotorcycleControllerSettings * selfCpp = static_cast<MotorcycleControllerSettings *>(self->obj);
  selfCpp->mLeanSpringIntegrationCoefficientDecay = mLeanSpringIntegrationCoefficientDecay;
};

float JoltC_MotorcycleControllerSettings_mLeanSmoothingFactor_Get(
  JoltC_MotorcycleControllerSettings_t * self
) {
  MotorcycleControllerSettings * selfCpp = static_cast<MotorcycleControllerSettings *>(self->obj);
  float result = selfCpp->mLeanSmoothingFactor;
  return result;
};

void JoltC_MotorcycleControllerSettings_mLeanSmoothingFactor_Set(
  JoltC_MotorcycleControllerSettings_t * self,
  float mLeanSmoothingFactor
) {
  MotorcycleControllerSettings * selfCpp = static_cast<MotorcycleControllerSettings *>(self->obj);
  selfCpp->mLeanSmoothingFactor = mLeanSmoothingFactor;
};

JoltC_VehicleEngineSettings_t * JoltC_MotorcycleControllerSettings_mEngine_Get(
  JoltC_MotorcycleControllerSettings_t * self
) {
  MotorcycleControllerSettings * selfCpp = static_cast<MotorcycleControllerSettings *>(self->obj);
  VehicleEngineSettings resultValue = selfCpp->mEngine;
  VehicleEngineSettings* result = new VehicleEngineSettings(resultValue);
  return reinterpret_cast<JoltC_VehicleEngineSettings_t *>(result);
};

void JoltC_MotorcycleControllerSettings_mEngine_Set(
  JoltC_MotorcycleControllerSettings_t * self,
  JoltC_VehicleEngineSettings_t * mEngine
) {
  MotorcycleControllerSettings * selfCpp = static_cast<MotorcycleControllerSettings *>(self->obj);
  selfCpp->mEngine = *reinterpret_cast<VehicleEngineSettings *>(mEngine->obj);
};

JoltC_VehicleTransmissionSettings_t * JoltC_MotorcycleControllerSettings_mTransmission_Get(
  JoltC_MotorcycleControllerSettings_t * self
) {
  MotorcycleControllerSettings * selfCpp = static_cast<MotorcycleControllerSettings *>(self->obj);
  VehicleTransmissionSettings resultValue = selfCpp->mTransmission;
  VehicleTransmissionSettings* result = new VehicleTransmissionSettings(resultValue);
  return reinterpret_cast<JoltC_VehicleTransmissionSettings_t *>(result);
};

void JoltC_MotorcycleControllerSettings_mTransmission_Set(
  JoltC_MotorcycleControllerSettings_t * self,
  JoltC_VehicleTransmissionSettings_t * mTransmission
) {
  MotorcycleControllerSettings * selfCpp = static_cast<MotorcycleControllerSettings *>(self->obj);
  selfCpp->mTransmission = *reinterpret_cast<VehicleTransmissionSettings *>(mTransmission->obj);
};

JoltC_ArrayVehicleDifferentialSettings_t * JoltC_MotorcycleControllerSettings_mDifferentials_Get(
  JoltC_MotorcycleControllerSettings_t * self
) {
  MotorcycleControllerSettings * selfCpp = static_cast<MotorcycleControllerSettings *>(self->obj);
  ArrayVehicleDifferentialSettings resultValue = selfCpp->mDifferentials;
  ArrayVehicleDifferentialSettings* result = new ArrayVehicleDifferentialSettings(resultValue);
  return reinterpret_cast<JoltC_ArrayVehicleDifferentialSettings_t *>(result);
};

void JoltC_MotorcycleControllerSettings_mDifferentials_Set(
  JoltC_MotorcycleControllerSettings_t * self,
  JoltC_ArrayVehicleDifferentialSettings_t * mDifferentials
) {
  MotorcycleControllerSettings * selfCpp = static_cast<MotorcycleControllerSettings *>(self->obj);
  selfCpp->mDifferentials = *reinterpret_cast<ArrayVehicleDifferentialSettings *>(mDifferentials->obj);
};

float JoltC_MotorcycleControllerSettings_mDifferentialLimitedSlipRatio_Get(
  JoltC_MotorcycleControllerSettings_t * self
) {
  MotorcycleControllerSettings * selfCpp = static_cast<MotorcycleControllerSettings *>(self->obj);
  float result = selfCpp->mDifferentialLimitedSlipRatio;
  return result;
};

void JoltC_MotorcycleControllerSettings_mDifferentialLimitedSlipRatio_Set(
  JoltC_MotorcycleControllerSettings_t * self,
  float mDifferentialLimitedSlipRatio
) {
  MotorcycleControllerSettings * selfCpp = static_cast<MotorcycleControllerSettings *>(self->obj);
  selfCpp->mDifferentialLimitedSlipRatio = mDifferentialLimitedSlipRatio;
};

//endregion

#ifdef __cplusplus
}
#endif

