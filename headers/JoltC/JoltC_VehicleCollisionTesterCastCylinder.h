#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_VehicleCollisionTesterCastCylinder_t * JoltC_VehicleCollisionTesterCastCylinder_new(
  unsigned long inObjectLayer,
  float inConvexRadiusFraction
);

//endregion

//region functions

unsigned long JoltC_VehicleCollisionTesterCastCylinder_GetRefCount(
  JoltC_VehicleCollisionTesterCastCylinder_t * self
);

void JoltC_VehicleCollisionTesterCastCylinder_AddRef(
  JoltC_VehicleCollisionTesterCastCylinder_t * self
);

void JoltC_VehicleCollisionTesterCastCylinder_Release(
  JoltC_VehicleCollisionTesterCastCylinder_t * self
);

//endregion


#ifdef __cplusplus
}
#endif

