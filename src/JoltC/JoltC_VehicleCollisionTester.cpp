#include "JoltC/JoltC_VehicleCollisionTester.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region destructor

void JoltC_VehicleCollisionTester_destroy(
  JoltC_VehicleCollisionTester_t * self
){
  if (self == NULL) return;
  delete static_cast<VehicleCollisionTester *>(self->obj);
  free(self);
}

//endregion
//region converters

/**
 * Convert an instance of JoltC_VehicleCollisionTesterRay_t into JoltC_VehicleCollisionTester_t.
 */
JoltC_VehicleCollisionTester_t * JoltC_VehicleCollisionTester_From_VehicleCollisionTesterRay(
  JoltC_VehicleCollisionTesterRay_t * subtype
) {
  return (JoltC_VehicleCollisionTester_t*) subtype;
};

/**
 * Convert an instance of JoltC_VehicleCollisionTesterCastSphere_t into JoltC_VehicleCollisionTester_t.
 */
JoltC_VehicleCollisionTester_t * JoltC_VehicleCollisionTester_From_VehicleCollisionTesterCastSphere(
  JoltC_VehicleCollisionTesterCastSphere_t * subtype
) {
  return (JoltC_VehicleCollisionTester_t*) subtype;
};

/**
 * Convert an instance of JoltC_VehicleCollisionTesterCastCylinder_t into JoltC_VehicleCollisionTester_t.
 */
JoltC_VehicleCollisionTester_t * JoltC_VehicleCollisionTester_From_VehicleCollisionTesterCastCylinder(
  JoltC_VehicleCollisionTesterCastCylinder_t * subtype
) {
  return (JoltC_VehicleCollisionTester_t*) subtype;
};

//endregion

//region functions

unsigned long JoltC_VehicleCollisionTester_GetRefCount(
  JoltC_VehicleCollisionTester_t * self
) {
  VehicleCollisionTester * selfCpp = static_cast<VehicleCollisionTester *>(self->obj);
  return selfCpp->GetRefCount();
}

void JoltC_VehicleCollisionTester_AddRef(
  JoltC_VehicleCollisionTester_t * self
) {
  VehicleCollisionTester * selfCpp = static_cast<VehicleCollisionTester *>(self->obj);
  selfCpp->AddRef();
}

void JoltC_VehicleCollisionTester_Release(
  JoltC_VehicleCollisionTester_t * self
) {
  VehicleCollisionTester * selfCpp = static_cast<VehicleCollisionTester *>(self->obj);
  selfCpp->Release();
}

//endregion


#ifdef __cplusplus
}
#endif
