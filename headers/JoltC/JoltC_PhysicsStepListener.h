#pragma once
#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region destructor

void JoltC_PhysicsStepListener_destroy(
  JoltC_PhysicsStepListener_t * self
);

//endregion
//region converters

/**
 * Convert an instance of JoltC_VehicleConstraintStepListener_t into JoltC_PhysicsStepListener_t.
 */
JoltC_PhysicsStepListener_t * JoltC_PhysicsStepListener_From_VehicleConstraintStepListener(
  JoltC_VehicleConstraintStepListener_t * subtype
);

//endregion


#ifdef __cplusplus
}
#endif
