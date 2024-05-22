#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region functions

unsigned long JPC_VehicleCollisionTester_GetRefCount(
  JPC_VehicleCollisionTester_t * self
);

void JPC_VehicleCollisionTester_AddRef(
  JPC_VehicleCollisionTester_t * self
);

void JPC_VehicleCollisionTester_Release(
  JPC_VehicleCollisionTester_t * self
);

//endregion functions


#ifdef __cplusplus
}
#endif

