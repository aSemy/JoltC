#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_VehicleCollisionTesterRay_t * JoltC_VehicleCollisionTesterRay_new(
  unsigned long inObjectLayer,
  JoltC_Vec3_t * inUp,
  float inMaxSlopeAngle,
  char** outErrMsg
);

//endregion constructors

//region functions

unsigned long JoltC_VehicleCollisionTesterRay_GetRefCount(
  JoltC_VehicleCollisionTesterRay_t * self,
  char** outErrMsg
);

void JoltC_VehicleCollisionTesterRay_AddRef(
  JoltC_VehicleCollisionTesterRay_t * self,
  char** outErrMsg
);

void JoltC_VehicleCollisionTesterRay_Release(
  JoltC_VehicleCollisionTesterRay_t * self,
  char** outErrMsg
);

//endregion functions


#ifdef __cplusplus
}
#endif

