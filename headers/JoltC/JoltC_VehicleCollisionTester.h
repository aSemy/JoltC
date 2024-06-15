#pragma once
#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region destructor

void JoltC_VehicleCollisionTester_destroy(
  JoltC_VehicleCollisionTester_t * self
);

//endregion
//region converters

/**
 * Convert an instance of JoltC_VehicleCollisionTesterRay_t into JoltC_VehicleCollisionTester_t.
 */
JoltC_VehicleCollisionTester_t * JoltC_VehicleCollisionTester_From_VehicleCollisionTesterRay(
  JoltC_VehicleCollisionTesterRay_t * subtype
);

/**
 * Convert an instance of JoltC_VehicleCollisionTesterCastSphere_t into JoltC_VehicleCollisionTester_t.
 */
JoltC_VehicleCollisionTester_t * JoltC_VehicleCollisionTester_From_VehicleCollisionTesterCastSphere(
  JoltC_VehicleCollisionTesterCastSphere_t * subtype
);

/**
 * Convert an instance of JoltC_VehicleCollisionTesterCastCylinder_t into JoltC_VehicleCollisionTester_t.
 */
JoltC_VehicleCollisionTester_t * JoltC_VehicleCollisionTester_From_VehicleCollisionTesterCastCylinder(
  JoltC_VehicleCollisionTesterCastCylinder_t * subtype
);

//endregion

//region functions

unsigned long JoltC_VehicleCollisionTester_GetRefCount(
  JoltC_VehicleCollisionTester_t * self
);

void JoltC_VehicleCollisionTester_AddRef(
  JoltC_VehicleCollisionTester_t * self
);

void JoltC_VehicleCollisionTester_Release(
  JoltC_VehicleCollisionTester_t * self
);

//endregion


#ifdef __cplusplus
}
#endif
