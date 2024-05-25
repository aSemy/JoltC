#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JPC_VehicleCollisionTesterRay_t * JPC_VehicleCollisionTesterRay_new(
  unsigned long inObjectLayer,
  JPC_Vec3_t * inUp,
  float inMaxSlopeAngle
);

//endregion constructors

//region functions

unsigned long JPC_VehicleCollisionTesterRay_GetRefCount(
  JPC_VehicleCollisionTesterRay_t * self
);

void JPC_VehicleCollisionTesterRay_AddRef(
  JPC_VehicleCollisionTesterRay_t * self
);

void JPC_VehicleCollisionTesterRay_Release(
  JPC_VehicleCollisionTesterRay_t * self
);

//endregion functions


#ifdef __cplusplus
}
#endif

