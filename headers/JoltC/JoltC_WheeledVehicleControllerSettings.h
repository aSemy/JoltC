#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_WheeledVehicleControllerSettings_t * JoltC_WheeledVehicleControllerSettings_new();

//endregion

//region converters

/**
 * Convert an instance of JoltC_MotorcycleControllerSettings_t into JoltC_WheeledVehicleControllerSettings_t.
 */
JoltC_WheeledVehicleControllerSettings_t * JoltC_WheeledVehicleControllerSettings_From_MotorcycleControllerSettings(
  JoltC_MotorcycleControllerSettings_t * subtype
);

//endregion

//region properties

JoltC_VehicleEngineSettings_t * JoltC_WheeledVehicleControllerSettings_mEngine_Get(
  JoltC_WheeledVehicleControllerSettings_t * self
);

void JoltC_WheeledVehicleControllerSettings_mEngine_Set(
  JoltC_WheeledVehicleControllerSettings_t * self,
  JoltC_VehicleEngineSettings_t * mEngine
);

JoltC_VehicleTransmissionSettings_t * JoltC_WheeledVehicleControllerSettings_mTransmission_Get(
  JoltC_WheeledVehicleControllerSettings_t * self
);

void JoltC_WheeledVehicleControllerSettings_mTransmission_Set(
  JoltC_WheeledVehicleControllerSettings_t * self,
  JoltC_VehicleTransmissionSettings_t * mTransmission
);

JoltC_ArrayVehicleDifferentialSettings_t * JoltC_WheeledVehicleControllerSettings_mDifferentials_Get(
  JoltC_WheeledVehicleControllerSettings_t * self
);

void JoltC_WheeledVehicleControllerSettings_mDifferentials_Set(
  JoltC_WheeledVehicleControllerSettings_t * self,
  JoltC_ArrayVehicleDifferentialSettings_t * mDifferentials
);

float JoltC_WheeledVehicleControllerSettings_mDifferentialLimitedSlipRatio_Get(
  JoltC_WheeledVehicleControllerSettings_t * self
);

void JoltC_WheeledVehicleControllerSettings_mDifferentialLimitedSlipRatio_Set(
  JoltC_WheeledVehicleControllerSettings_t * self,
  float mDifferentialLimitedSlipRatio
);

//endregion


#ifdef __cplusplus
}
#endif

