#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_VehicleCollisionTesterCastCylinder_t * JoltC_VehicleCollisionTesterCastCylinder_new(
  unsigned long inObjectLayer,
  float inConvexRadiusFraction,
  char** outErrMsg
);

//endregion constructors

//region functions

unsigned long JoltC_VehicleCollisionTesterCastCylinder_GetRefCount(
  JoltC_VehicleCollisionTesterCastCylinder_t * self,
  char** outErrMsg
);

void JoltC_VehicleCollisionTesterCastCylinder_AddRef(
  JoltC_VehicleCollisionTesterCastCylinder_t * self,
  char** outErrMsg
);

void JoltC_VehicleCollisionTesterCastCylinder_Release(
  JoltC_VehicleCollisionTesterCastCylinder_t * self,
  char** outErrMsg
);

//endregion functions


#ifdef __cplusplus
}
#endif

