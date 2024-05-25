#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region functions

unsigned long JoltC_VehicleController_GetRefCount(
  JoltC_VehicleController_t * self,
  char** outErrMsg
);

void JoltC_VehicleController_AddRef(
  JoltC_VehicleController_t * self,
  char** outErrMsg
);

void JoltC_VehicleController_Release(
  JoltC_VehicleController_t * self,
  char** outErrMsg
);

//endregion functions


#ifdef __cplusplus
}
#endif

