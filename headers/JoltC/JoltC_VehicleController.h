#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region functions

unsigned long JPC_VehicleController_GetRefCount(
  JPC_VehicleController_t * self
);

void JPC_VehicleController_AddRef(
  JPC_VehicleController_t * self
);

void JPC_VehicleController_Release(
  JPC_VehicleController_t * self
);

//endregion functions


#ifdef __cplusplus
}
#endif

