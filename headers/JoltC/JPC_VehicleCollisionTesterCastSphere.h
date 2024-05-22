#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JPC_VehicleCollisionTesterCastSphere_t * JPC_VehicleCollisionTesterCastSphere_new(
  unsigned long inObjectLayer,
  float inRadius,
  JPC_Vec3_t * inUp,
  float inMaxSlopeAngle
);

//endregion constructors

//region functions

unsigned long JPC_VehicleCollisionTesterCastSphere_GetRefCount(
  JPC_VehicleCollisionTesterCastSphere_t * self
);

void JPC_VehicleCollisionTesterCastSphere_AddRef(
  JPC_VehicleCollisionTesterCastSphere_t * self
);

void JPC_VehicleCollisionTesterCastSphere_Release(
  JPC_VehicleCollisionTesterCastSphere_t * self
);

//endregion functions


#ifdef __cplusplus
}
#endif

