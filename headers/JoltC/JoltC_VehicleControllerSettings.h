#pragma once
#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region destructor

void JoltC_VehicleControllerSettings_destroy(
  JoltC_VehicleControllerSettings_t * self
);

//endregion
//region converters

/**
 * Convert an instance of JoltC_WheeledVehicleControllerSettings_t into JoltC_VehicleControllerSettings_t.
 */
JoltC_VehicleControllerSettings_t * JoltC_VehicleControllerSettings_From_WheeledVehicleControllerSettings(
  JoltC_WheeledVehicleControllerSettings_t * subtype
);

/**
 * Convert an instance of JoltC_TrackedVehicleControllerSettings_t into JoltC_VehicleControllerSettings_t.
 */
JoltC_VehicleControllerSettings_t * JoltC_VehicleControllerSettings_From_TrackedVehicleControllerSettings(
  JoltC_TrackedVehicleControllerSettings_t * subtype
);

/**
 * Convert an instance of JoltC_MotorcycleControllerSettings_t into JoltC_VehicleControllerSettings_t.
 */
JoltC_VehicleControllerSettings_t * JoltC_VehicleControllerSettings_From_MotorcycleControllerSettings(
  JoltC_MotorcycleControllerSettings_t * subtype
);

//endregion


#ifdef __cplusplus
}
#endif
