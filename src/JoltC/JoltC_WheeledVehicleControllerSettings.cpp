#include "JoltC/JoltC_WheeledVehicleControllerSettings.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

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
  static VehicleEngineSettings resultValue = selfCpp->mEngine;
  JoltC_VehicleEngineSettings_t* result = new JoltC_VehicleEngineSettings_t();
  result->obj = reinterpret_cast<void*>(&resultValue);
  return result;
};

void JoltC_WheeledVehicleControllerSettings_mEngine_Set(
  JoltC_WheeledVehicleControllerSettings_t * self,
  JoltC_VehicleEngineSettings_t * mEngine
) {
  WheeledVehicleControllerSettings * selfCpp = static_cast<WheeledVehicleControllerSettings *>(self->obj);
  selfCpp->mEngine = *reinterpret_cast<VehicleEngineSettings *>(mEngine->obj);
};

JoltC_VehicleTransmissionSettings_t * JoltC_WheeledVehicleControllerSettings_mTransmission_Get(
  JoltC_WheeledVehicleControllerSettings_t * self
) {
  WheeledVehicleControllerSettings * selfCpp = static_cast<WheeledVehicleControllerSettings *>(self->obj);
  static VehicleTransmissionSettings resultValue = selfCpp->mTransmission;
  JoltC_VehicleTransmissionSettings_t* result = new JoltC_VehicleTransmissionSettings_t();
  result->obj = reinterpret_cast<void*>(&resultValue);
  return result;
};

void JoltC_WheeledVehicleControllerSettings_mTransmission_Set(
  JoltC_WheeledVehicleControllerSettings_t * self,
  JoltC_VehicleTransmissionSettings_t * mTransmission
) {
  WheeledVehicleControllerSettings * selfCpp = static_cast<WheeledVehicleControllerSettings *>(self->obj);
  selfCpp->mTransmission = *reinterpret_cast<VehicleTransmissionSettings *>(mTransmission->obj);
};

JoltC_ArrayVehicleDifferentialSettings_t * JoltC_WheeledVehicleControllerSettings_mDifferentials_Get(
  JoltC_WheeledVehicleControllerSettings_t * self
) {
  WheeledVehicleControllerSettings * selfCpp = static_cast<WheeledVehicleControllerSettings *>(self->obj);
  static ArrayVehicleDifferentialSettings resultValue = selfCpp->mDifferentials;
  JoltC_ArrayVehicleDifferentialSettings_t* result = new JoltC_ArrayVehicleDifferentialSettings_t();
  result->obj = reinterpret_cast<void*>(&resultValue);
  return result;
};

void JoltC_WheeledVehicleControllerSettings_mDifferentials_Set(
  JoltC_WheeledVehicleControllerSettings_t * self,
  JoltC_ArrayVehicleDifferentialSettings_t * mDifferentials
) {
  WheeledVehicleControllerSettings * selfCpp = static_cast<WheeledVehicleControllerSettings *>(self->obj);
  selfCpp->mDifferentials = *reinterpret_cast<ArrayVehicleDifferentialSettings *>(mDifferentials->obj);
};

float JoltC_WheeledVehicleControllerSettings_mDifferentialLimitedSlipRatio_Get(
  JoltC_WheeledVehicleControllerSettings_t * self
) {
  WheeledVehicleControllerSettings * selfCpp = static_cast<WheeledVehicleControllerSettings *>(self->obj);
  float result = selfCpp->mDifferentialLimitedSlipRatio;
  return result;
};

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

