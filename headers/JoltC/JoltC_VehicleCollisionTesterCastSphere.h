#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_VehicleCollisionTesterCastSphere_t * JoltC_VehicleCollisionTesterCastSphere_new(
  unsigned long inObjectLayer,
  float inRadius,
  JoltC_Vec3_t * inUp,
  float inMaxSlopeAngle
);

//endregion

//region functions

unsigned long JoltC_VehicleCollisionTesterCastSphere_GetRefCount(
  JoltC_VehicleCollisionTesterCastSphere_t * self
);

void JoltC_VehicleCollisionTesterCastSphere_AddRef(
  JoltC_VehicleCollisionTesterCastSphere_t * self
);

void JoltC_VehicleCollisionTesterCastSphere_Release(
  JoltC_VehicleCollisionTesterCastSphere_t * self
);

//endregion


#ifdef __cplusplus
}
#endif

