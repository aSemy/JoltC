#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JPC_VehicleCollisionTesterCastCylinder_t * JPC_VehicleCollisionTesterCastCylinder_new(
  unsigned long inObjectLayer,
  float inConvexRadiusFraction
);

//endregion constructors

//region functions

unsigned long JPC_VehicleCollisionTesterCastCylinder_GetRefCount(
  JPC_VehicleCollisionTesterCastCylinder_t * self
);

void JPC_VehicleCollisionTesterCastCylinder_AddRef(
  JPC_VehicleCollisionTesterCastCylinder_t * self
);

void JPC_VehicleCollisionTesterCastCylinder_Release(
  JPC_VehicleCollisionTesterCastCylinder_t * self
);

//endregion functions


#ifdef __cplusplus
}
#endif

