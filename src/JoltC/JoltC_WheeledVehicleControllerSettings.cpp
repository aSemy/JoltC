#include "JoltC/JPC_WheeledVehicleControllerSettings.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JPC_WheeledVehicleControllerSettings_t * JPC_WheeledVehicleControllerSettings_new() {
  JPC_WheeledVehicleControllerSettings_t * cInstance = new JPC_WheeledVehicleControllerSettings_t();
  WheeledVehicleControllerSettings * cppInstance = new WheeledVehicleControllerSettings();
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion constructors

//region properties

JPC_VehicleEngineSettings_t * JPC_WheeledVehicleControllerSettings_mEngine_Get(
  JPC_WheeledVehicleControllerSettings_t * self
) {
  WheeledVehicleControllerSettings * selfCpp = static_cast<WheeledVehicleControllerSettings *>(self->obj);
  VehicleEngineSettings resultValue = selfCpp->mEngine;
  VehicleEngineSettings* result = new VehicleEngineSettings(resultValue);
  return reinterpret_cast<JPC_VehicleEngineSettings_t *>(result);
};

void JPC_WheeledVehicleControllerSettings_mEngine_Set(
  JPC_WheeledVehicleControllerSettings_t * self,
  JPC_VehicleEngineSettings_t * mEngine
) {
  WheeledVehicleControllerSettings * selfCpp = static_cast<WheeledVehicleControllerSettings *>(self->obj);
  selfCpp->mEngine = *reinterpret_cast<VehicleEngineSettings *>(mEngine->obj);
};

JPC_VehicleTransmissionSettings_t * JPC_WheeledVehicleControllerSettings_mTransmission_Get(
  JPC_WheeledVehicleControllerSettings_t * self
) {
  WheeledVehicleControllerSettings * selfCpp = static_cast<WheeledVehicleControllerSettings *>(self->obj);
  VehicleTransmissionSettings resultValue = selfCpp->mTransmission;
  VehicleTransmissionSettings* result = new VehicleTransmissionSettings(resultValue);
  return reinterpret_cast<JPC_VehicleTransmissionSettings_t *>(result);
};

void JPC_WheeledVehicleControllerSettings_mTransmission_Set(
  JPC_WheeledVehicleControllerSettings_t * self,
  JPC_VehicleTransmissionSettings_t * mTransmission
) {
  WheeledVehicleControllerSettings * selfCpp = static_cast<WheeledVehicleControllerSettings *>(self->obj);
  selfCpp->mTransmission = *reinterpret_cast<VehicleTransmissionSettings *>(mTransmission->obj);
};

JPC_ArrayVehicleDifferentialSettings_t * JPC_WheeledVehicleControllerSettings_mDifferentials_Get(
  JPC_WheeledVehicleControllerSettings_t * self
) {
  WheeledVehicleControllerSettings * selfCpp = static_cast<WheeledVehicleControllerSettings *>(self->obj);
  ArrayVehicleDifferentialSettings resultValue = selfCpp->mDifferentials;
  ArrayVehicleDifferentialSettings* result = new ArrayVehicleDifferentialSettings(resultValue);
  return reinterpret_cast<JPC_ArrayVehicleDifferentialSettings_t *>(result);
};

void JPC_WheeledVehicleControllerSettings_mDifferentials_Set(
  JPC_WheeledVehicleControllerSettings_t * self,
  JPC_ArrayVehicleDifferentialSettings_t * mDifferentials
) {
  WheeledVehicleControllerSettings * selfCpp = static_cast<WheeledVehicleControllerSettings *>(self->obj);
  selfCpp->mDifferentials = *reinterpret_cast<ArrayVehicleDifferentialSettings *>(mDifferentials->obj);
};

float JPC_WheeledVehicleControllerSettings_mDifferentialLimitedSlipRatio_Get(
  JPC_WheeledVehicleControllerSettings_t * self
) {
  WheeledVehicleControllerSettings * selfCpp = static_cast<WheeledVehicleControllerSettings *>(self->obj);
  float result = selfCpp->mDifferentialLimitedSlipRatio;
  return result;
};

void JPC_WheeledVehicleControllerSettings_mDifferentialLimitedSlipRatio_Set(
  JPC_WheeledVehicleControllerSettings_t * self,
  float mDifferentialLimitedSlipRatio
) {
  WheeledVehicleControllerSettings * selfCpp = static_cast<WheeledVehicleControllerSettings *>(self->obj);
  selfCpp->mDifferentialLimitedSlipRatio = mDifferentialLimitedSlipRatio;
};

//endregion properties

#ifdef __cplusplus
}
#endif

