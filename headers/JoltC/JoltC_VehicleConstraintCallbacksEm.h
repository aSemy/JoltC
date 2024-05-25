#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region functions

void JPC_VehicleConstraintCallbacksEm_SetVehicleConstraint(
  JPC_VehicleConstraintCallbacksEm_t * self,
  JPC_VehicleConstraint_t * inConstraint
);

//endregion functions


#ifdef __cplusplus
}
#endif

