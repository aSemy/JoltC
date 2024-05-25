#include "JoltC/JPC_MotorcycleControllerSettings.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JPC_MotorcycleControllerSettings_t * JPC_MotorcycleControllerSettings_new() {
  JPC_MotorcycleControllerSettings_t * cInstance = new JPC_MotorcycleControllerSettings_t();
  MotorcycleControllerSettings * cppInstance = new MotorcycleControllerSettings();
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion constructors

//region properties

float JPC_MotorcycleControllerSettings_mMaxLeanAngle_Get(
  JPC_MotorcycleControllerSettings_t * self
) {
  MotorcycleControllerSettings * selfCpp = static_cast<MotorcycleControllerSettings *>(self->obj);
  float result = selfCpp->mMaxLeanAngle;
  return result;
};

void JPC_MotorcycleControllerSettings_mMaxLeanAngle_Set(
  JPC_MotorcycleControllerSettings_t * self,
  float mMaxLeanAngle
) {
  MotorcycleControllerSettings * selfCpp = static_cast<MotorcycleControllerSettings *>(self->obj);
  selfCpp->mMaxLeanAngle = mMaxLeanAngle;
};

float JPC_MotorcycleControllerSettings_mLeanSpringConstant_Get(
  JPC_MotorcycleControllerSettings_t * self
) {
  MotorcycleControllerSettings * selfCpp = static_cast<MotorcycleControllerSettings *>(self->obj);
  float result = selfCpp->mLeanSpringConstant;
  return result;
};

void JPC_MotorcycleControllerSettings_mLeanSpringConstant_Set(
  JPC_MotorcycleControllerSettings_t * self,
  float mLeanSpringConstant
) {
  MotorcycleControllerSettings * selfCpp = static_cast<MotorcycleControllerSettings *>(self->obj);
  selfCpp->mLeanSpringConstant = mLeanSpringConstant;
};

float JPC_MotorcycleControllerSettings_mLeanSpringDamping_Get(
  JPC_MotorcycleControllerSettings_t * self
) {
  MotorcycleControllerSettings * selfCpp = static_cast<MotorcycleControllerSettings *>(self->obj);
  float result = selfCpp->mLeanSpringDamping;
  return result;
};

void JPC_MotorcycleControllerSettings_mLeanSpringDamping_Set(
  JPC_MotorcycleControllerSettings_t * self,
  float mLeanSpringDamping
) {
  MotorcycleControllerSettings * selfCpp = static_cast<MotorcycleControllerSettings *>(self->obj);
  selfCpp->mLeanSpringDamping = mLeanSpringDamping;
};

float JPC_MotorcycleControllerSettings_mLeanSpringIntegrationCoefficient_Get(
  JPC_MotorcycleControllerSettings_t * self
) {
  MotorcycleControllerSettings * selfCpp = static_cast<MotorcycleControllerSettings *>(self->obj);
  float result = selfCpp->mLeanSpringIntegrationCoefficient;
  return result;
};

void JPC_MotorcycleControllerSettings_mLeanSpringIntegrationCoefficient_Set(
  JPC_MotorcycleControllerSettings_t * self,
  float mLeanSpringIntegrationCoefficient
) {
  MotorcycleControllerSettings * selfCpp = static_cast<MotorcycleControllerSettings *>(self->obj);
  selfCpp->mLeanSpringIntegrationCoefficient = mLeanSpringIntegrationCoefficient;
};

float JPC_MotorcycleControllerSettings_mLeanSpringIntegrationCoefficientDecay_Get(
  JPC_MotorcycleControllerSettings_t * self
) {
  MotorcycleControllerSettings * selfCpp = static_cast<MotorcycleControllerSettings *>(self->obj);
  float result = selfCpp->mLeanSpringIntegrationCoefficientDecay;
  return result;
};

void JPC_MotorcycleControllerSettings_mLeanSpringIntegrationCoefficientDecay_Set(
  JPC_MotorcycleControllerSettings_t * self,
  float mLeanSpringIntegrationCoefficientDecay
) {
  MotorcycleControllerSettings * selfCpp = static_cast<MotorcycleControllerSettings *>(self->obj);
  selfCpp->mLeanSpringIntegrationCoefficientDecay = mLeanSpringIntegrationCoefficientDecay;
};

float JPC_MotorcycleControllerSettings_mLeanSmoothingFactor_Get(
  JPC_MotorcycleControllerSettings_t * self
) {
  MotorcycleControllerSettings * selfCpp = static_cast<MotorcycleControllerSettings *>(self->obj);
  float result = selfCpp->mLeanSmoothingFactor;
  return result;
};

void JPC_MotorcycleControllerSettings_mLeanSmoothingFactor_Set(
  JPC_MotorcycleControllerSettings_t * self,
  float mLeanSmoothingFactor
) {
  MotorcycleControllerSettings * selfCpp = static_cast<MotorcycleControllerSettings *>(self->obj);
  selfCpp->mLeanSmoothingFactor = mLeanSmoothingFactor;
};

JPC_VehicleEngineSettings_t * JPC_MotorcycleControllerSettings_mEngine_Get(
  JPC_MotorcycleControllerSettings_t * self
) {
  MotorcycleControllerSettings * selfCpp = static_cast<MotorcycleControllerSettings *>(self->obj);
  VehicleEngineSettings resultValue = selfCpp->mEngine;
  VehicleEngineSettings* result = new VehicleEngineSettings(resultValue);
  return reinterpret_cast<JPC_VehicleEngineSettings_t *>(result);
};

void JPC_MotorcycleControllerSettings_mEngine_Set(
  JPC_MotorcycleControllerSettings_t * self,
  JPC_VehicleEngineSettings_t * mEngine
) {
  MotorcycleControllerSettings * selfCpp = static_cast<MotorcycleControllerSettings *>(self->obj);
  selfCpp->mEngine = *reinterpret_cast<VehicleEngineSettings *>(mEngine->obj);
};

JPC_VehicleTransmissionSettings_t * JPC_MotorcycleControllerSettings_mTransmission_Get(
  JPC_MotorcycleControllerSettings_t * self
) {
  MotorcycleControllerSettings * selfCpp = static_cast<MotorcycleControllerSettings *>(self->obj);
  VehicleTransmissionSettings resultValue = selfCpp->mTransmission;
  VehicleTransmissionSettings* result = new VehicleTransmissionSettings(resultValue);
  return reinterpret_cast<JPC_VehicleTransmissionSettings_t *>(result);
};

void JPC_MotorcycleControllerSettings_mTransmission_Set(
  JPC_MotorcycleControllerSettings_t * self,
  JPC_VehicleTransmissionSettings_t * mTransmission
) {
  MotorcycleControllerSettings * selfCpp = static_cast<MotorcycleControllerSettings *>(self->obj);
  selfCpp->mTransmission = *reinterpret_cast<VehicleTransmissionSettings *>(mTransmission->obj);
};

JPC_ArrayVehicleDifferentialSettings_t * JPC_MotorcycleControllerSettings_mDifferentials_Get(
  JPC_MotorcycleControllerSettings_t * self
) {
  MotorcycleControllerSettings * selfCpp = static_cast<MotorcycleControllerSettings *>(self->obj);
  ArrayVehicleDifferentialSettings resultValue = selfCpp->mDifferentials;
  ArrayVehicleDifferentialSettings* result = new ArrayVehicleDifferentialSettings(resultValue);
  return reinterpret_cast<JPC_ArrayVehicleDifferentialSettings_t *>(result);
};

void JPC_MotorcycleControllerSettings_mDifferentials_Set(
  JPC_MotorcycleControllerSettings_t * self,
  JPC_ArrayVehicleDifferentialSettings_t * mDifferentials
) {
  MotorcycleControllerSettings * selfCpp = static_cast<MotorcycleControllerSettings *>(self->obj);
  selfCpp->mDifferentials = *reinterpret_cast<ArrayVehicleDifferentialSettings *>(mDifferentials->obj);
};

float JPC_MotorcycleControllerSettings_mDifferentialLimitedSlipRatio_Get(
  JPC_MotorcycleControllerSettings_t * self
) {
  MotorcycleControllerSettings * selfCpp = static_cast<MotorcycleControllerSettings *>(self->obj);
  float result = selfCpp->mDifferentialLimitedSlipRatio;
  return result;
};

void JPC_MotorcycleControllerSettings_mDifferentialLimitedSlipRatio_Set(
  JPC_MotorcycleControllerSettings_t * self,
  float mDifferentialLimitedSlipRatio
) {
  MotorcycleControllerSettings * selfCpp = static_cast<MotorcycleControllerSettings *>(self->obj);
  selfCpp->mDifferentialLimitedSlipRatio = mDifferentialLimitedSlipRatio;
};

//endregion properties

#ifdef __cplusplus
}
#endif

