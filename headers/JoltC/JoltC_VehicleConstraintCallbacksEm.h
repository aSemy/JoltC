#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region functions

void JoltC_VehicleConstraintCallbacksEm_SetVehicleConstraint(
  JoltC_VehicleConstraintCallbacksEm_t * self,
  JoltC_VehicleConstraint_t * inConstraint,
  char** outErrMsg
);

//endregion functions


#ifdef __cplusplus
}
#endif

