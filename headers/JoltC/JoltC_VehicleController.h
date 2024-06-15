#pragma once
#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region destructor

void JoltC_VehicleController_destroy(
  JoltC_VehicleController_t * self
);

//endregion
//region converters

/**
 * Convert an instance of JoltC_TrackedVehicleController_t into JoltC_VehicleController_t.
 */
JoltC_VehicleController_t * JoltC_VehicleController_From_TrackedVehicleController(
  JoltC_TrackedVehicleController_t * subtype
);

/**
 * Convert an instance of JoltC_WheeledVehicleController_t into JoltC_VehicleController_t.
 */
JoltC_VehicleController_t * JoltC_VehicleController_From_WheeledVehicleController(
  JoltC_WheeledVehicleController_t * subtype
);

/**
 * Convert an instance of JoltC_MotorcycleController_t into JoltC_VehicleController_t.
 */
JoltC_VehicleController_t * JoltC_VehicleController_From_MotorcycleController(
  JoltC_MotorcycleController_t * subtype
);

//endregion

//region functions

unsigned long JoltC_VehicleController_GetRefCount(
  JoltC_VehicleController_t * self
);

void JoltC_VehicleController_AddRef(
  JoltC_VehicleController_t * self
);

void JoltC_VehicleController_Release(
  JoltC_VehicleController_t * self
);

//endregion


#ifdef __cplusplus
}
#endif
