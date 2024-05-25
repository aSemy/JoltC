#include "JoltC/JoltC_WheeledVehicleControllerSettings.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_WheeledVehicleControllerSettings_t * JoltC_WheeledVehicleControllerSettings_new(
  char** outErrMsg
) {
  try {
    JoltC_WheeledVehicleControllerSettings_t * cInstance = new JoltC_WheeledVehicleControllerSettings_t();
    WheeledVehicleControllerSettings * cppInstance = new WheeledVehicleControllerSettings();
    cInstance->obj = cppInstance;
    return cInstance;
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

//endregion constructors

//region properties

JoltC_VehicleEngineSettings_t * JoltC_WheeledVehicleControllerSettings_mEngine_Get(
  JoltC_WheeledVehicleControllerSettings_t * self,
  char** outErrMsg
) {
  WheeledVehicleControllerSettings * selfCpp = static_cast<WheeledVehicleControllerSettings *>(self->obj);
  VehicleEngineSettings resultValue = selfCpp->mEngine;
  VehicleEngineSettings* result = new VehicleEngineSettings(resultValue);
  return reinterpret_cast<JoltC_VehicleEngineSettings_t *>(result);
};

void JoltC_WheeledVehicleControllerSettings_mEngine_Set(
  JoltC_WheeledVehicleControllerSettings_t * self,
  JoltC_VehicleEngineSettings_t * mEngine,
  char** outErrMsg
) {
  WheeledVehicleControllerSettings * selfCpp = static_cast<WheeledVehicleControllerSettings *>(self->obj);
  selfCpp->mEngine = *reinterpret_cast<VehicleEngineSettings *>(mEngine->obj);
};

JoltC_VehicleTransmissionSettings_t * JoltC_WheeledVehicleControllerSettings_mTransmission_Get(
  JoltC_WheeledVehicleControllerSettings_t * self,
  char** outErrMsg
) {
  WheeledVehicleControllerSettings * selfCpp = static_cast<WheeledVehicleControllerSettings *>(self->obj);
  VehicleTransmissionSettings resultValue = selfCpp->mTransmission;
  VehicleTransmissionSettings* result = new VehicleTransmissionSettings(resultValue);
  return reinterpret_cast<JoltC_VehicleTransmissionSettings_t *>(result);
};

void JoltC_WheeledVehicleControllerSettings_mTransmission_Set(
  JoltC_WheeledVehicleControllerSettings_t * self,
  JoltC_VehicleTransmissionSettings_t * mTransmission,
  char** outErrMsg
) {
  WheeledVehicleControllerSettings * selfCpp = static_cast<WheeledVehicleControllerSettings *>(self->obj);
  selfCpp->mTransmission = *reinterpret_cast<VehicleTransmissionSettings *>(mTransmission->obj);
};

JoltC_ArrayVehicleDifferentialSettings_t * JoltC_WheeledVehicleControllerSettings_mDifferentials_Get(
  JoltC_WheeledVehicleControllerSettings_t * self,
  char** outErrMsg
) {
  WheeledVehicleControllerSettings * selfCpp = static_cast<WheeledVehicleControllerSettings *>(self->obj);
  ArrayVehicleDifferentialSettings resultValue = selfCpp->mDifferentials;
  ArrayVehicleDifferentialSettings* result = new ArrayVehicleDifferentialSettings(resultValue);
  return reinterpret_cast<JoltC_ArrayVehicleDifferentialSettings_t *>(result);
};

void JoltC_WheeledVehicleControllerSettings_mDifferentials_Set(
  JoltC_WheeledVehicleControllerSettings_t * self,
  JoltC_ArrayVehicleDifferentialSettings_t * mDifferentials,
  char** outErrMsg
) {
  WheeledVehicleControllerSettings * selfCpp = static_cast<WheeledVehicleControllerSettings *>(self->obj);
  selfCpp->mDifferentials = *reinterpret_cast<ArrayVehicleDifferentialSettings *>(mDifferentials->obj);
};

float JoltC_WheeledVehicleControllerSettings_mDifferentialLimitedSlipRatio_Get(
  JoltC_WheeledVehicleControllerSettings_t * self,
  char** outErrMsg
) {
  WheeledVehicleControllerSettings * selfCpp = static_cast<WheeledVehicleControllerSettings *>(self->obj);
  float result = selfCpp->mDifferentialLimitedSlipRatio;
  return result;
};

void JoltC_WheeledVehicleControllerSettings_mDifferentialLimitedSlipRatio_Set(
  JoltC_WheeledVehicleControllerSettings_t * self,
  float mDifferentialLimitedSlipRatio,
  char** outErrMsg
) {
  WheeledVehicleControllerSettings * selfCpp = static_cast<WheeledVehicleControllerSettings *>(self->obj);
  selfCpp->mDifferentialLimitedSlipRatio = mDifferentialLimitedSlipRatio;
};

//endregion properties

#ifdef __cplusplus
}
#endif

