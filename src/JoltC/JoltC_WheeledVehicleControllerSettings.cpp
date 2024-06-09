#include "JoltC/JoltC_WheeledVehicleControllerSettings.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

/**
  Construct a new `WheeledVehicleControllerSettings` instance.
 */
JoltC_WheeledVehicleControllerSettings_t * JoltC_WheeledVehicleControllerSettings_new() {
  JoltC_WheeledVehicleControllerSettings_t * cInstance = new JoltC_WheeledVehicleControllerSettings_t();
  WheeledVehicleControllerSettings * cppInstance = new WheeledVehicleControllerSettings();
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion

//region converters

/**
 * Convert an instance of JoltC_MotorcycleControllerSettings_t into JoltC_WheeledVehicleControllerSettings_t.
 */
JoltC_WheeledVehicleControllerSettings_t * JoltC_WheeledVehicleControllerSettings_From_MotorcycleControllerSettings(
  JoltC_MotorcycleControllerSettings_t * subtype
) {
  return (JoltC_WheeledVehicleControllerSettings_t*) subtype;
};

//endregion

//region properties

JoltC_VehicleEngineSettings_t * JoltC_WheeledVehicleControllerSettings_mEngine_Get(
  JoltC_WheeledVehicleControllerSettings_t * self
) {
  WheeledVehicleControllerSettings * selfCpp = static_cast<WheeledVehicleControllerSettings *>(self->obj);
  VehicleEngineSettings * resultPtr = new VehicleEngineSettings();
  *resultPtr = selfCpp->mEngine;
  JoltC_VehicleEngineSettings_t * result = new JoltC_VehicleEngineSettings_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

void JoltC_WheeledVehicleControllerSettings_mEngine_Set(
  JoltC_WheeledVehicleControllerSettings_t * self,
  JoltC_VehicleEngineSettings_t * mEngine
) {
  WheeledVehicleControllerSettings * selfCpp = static_cast<WheeledVehicleControllerSettings *>(self->obj);
  selfCpp->mEngine = *static_cast<VehicleEngineSettings *>(mEngine->obj);
};

JoltC_VehicleTransmissionSettings_t * JoltC_WheeledVehicleControllerSettings_mTransmission_Get(
  JoltC_WheeledVehicleControllerSettings_t * self
) {
  WheeledVehicleControllerSettings * selfCpp = static_cast<WheeledVehicleControllerSettings *>(self->obj);
  VehicleTransmissionSettings * resultPtr = new VehicleTransmissionSettings();
  *resultPtr = selfCpp->mTransmission;
  JoltC_VehicleTransmissionSettings_t * result = new JoltC_VehicleTransmissionSettings_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

void JoltC_WheeledVehicleControllerSettings_mTransmission_Set(
  JoltC_WheeledVehicleControllerSettings_t * self,
  JoltC_VehicleTransmissionSettings_t * mTransmission
) {
  WheeledVehicleControllerSettings * selfCpp = static_cast<WheeledVehicleControllerSettings *>(self->obj);
  selfCpp->mTransmission = *static_cast<VehicleTransmissionSettings *>(mTransmission->obj);
};

JoltC_ArrayVehicleDifferentialSettings_t * JoltC_WheeledVehicleControllerSettings_mDifferentials_Get(
  JoltC_WheeledVehicleControllerSettings_t * self
) {
  WheeledVehicleControllerSettings * selfCpp = static_cast<WheeledVehicleControllerSettings *>(self->obj);
  ArrayVehicleDifferentialSettings * resultPtr = new ArrayVehicleDifferentialSettings();
  *resultPtr = selfCpp->mDifferentials;
  JoltC_ArrayVehicleDifferentialSettings_t * result = new JoltC_ArrayVehicleDifferentialSettings_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

void JoltC_WheeledVehicleControllerSettings_mDifferentials_Set(
  JoltC_WheeledVehicleControllerSettings_t * self,
  JoltC_ArrayVehicleDifferentialSettings_t * mDifferentials
) {
  WheeledVehicleControllerSettings * selfCpp = static_cast<WheeledVehicleControllerSettings *>(self->obj);
  selfCpp->mDifferentials = *static_cast<ArrayVehicleDifferentialSettings *>(mDifferentials->obj);
};

float JoltC_WheeledVehicleControllerSettings_mDifferentialLimitedSlipRatio_Get(
  JoltC_WheeledVehicleControllerSettings_t * self
) {
  WheeledVehicleControllerSettings * selfCpp = static_cast<WheeledVehicleControllerSettings *>(self->obj);
  return selfCpp->mDifferentialLimitedSlipRatio;
}

void JoltC_WheeledVehicleControllerSettings_mDifferentialLimitedSlipRatio_Set(
  JoltC_WheeledVehicleControllerSettings_t * self,
  float mDifferentialLimitedSlipRatio
) {
  WheeledVehicleControllerSettings * selfCpp = static_cast<WheeledVehicleControllerSettings *>(self->obj);
  selfCpp->mDifferentialLimitedSlipRatio = mDifferentialLimitedSlipRatio;
};

//endregion

#ifdef __cplusplus
}
#endif

