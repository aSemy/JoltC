#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region functions

unsigned long JoltC_VehicleCollisionTester_GetRefCount(
  JoltC_VehicleCollisionTester_t * self,
  char** outErrMsg
);

void JoltC_VehicleCollisionTester_AddRef(
  JoltC_VehicleCollisionTester_t * self,
  char** outErrMsg
);

void JoltC_VehicleCollisionTester_Release(
  JoltC_VehicleCollisionTester_t * self,
  char** outErrMsg
);

//endregion functions


#ifdef __cplusplus
}
#endif

