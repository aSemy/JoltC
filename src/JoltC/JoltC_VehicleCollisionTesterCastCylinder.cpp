#include "JoltC/JoltC_VehicleCollisionTesterCastCylinder.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

/**
  Construct a new `VehicleCollisionTesterCastCylinder` instance.
 */
JoltC_VehicleCollisionTesterCastCylinder_t * JoltC_VehicleCollisionTesterCastCylinder_new(
  unsigned long inObjectLayer,
  float inConvexRadiusFraction
) {
  JoltC_VehicleCollisionTesterCastCylinder_t * cInstance = new JoltC_VehicleCollisionTesterCastCylinder_t();
  VehicleCollisionTesterCastCylinder * cppInstance = new VehicleCollisionTesterCastCylinder(
    inObjectLayer,
    inConvexRadiusFraction
  );
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion

//region functions

unsigned long JoltC_VehicleCollisionTesterCastCylinder_GetRefCount(
  JoltC_VehicleCollisionTesterCastCylinder_t * self
) {
  VehicleCollisionTesterCastCylinder * selfCpp = static_cast<VehicleCollisionTesterCastCylinder *>(self->obj);
  return selfCpp->GetRefCount();
}

void JoltC_VehicleCollisionTesterCastCylinder_AddRef(
  JoltC_VehicleCollisionTesterCastCylinder_t * self
) {
  VehicleCollisionTesterCastCylinder * selfCpp = static_cast<VehicleCollisionTesterCastCylinder *>(self->obj);
  selfCpp->AddRef();
}

void JoltC_VehicleCollisionTesterCastCylinder_Release(
  JoltC_VehicleCollisionTesterCastCylinder_t * self
) {
  VehicleCollisionTesterCastCylinder * selfCpp = static_cast<VehicleCollisionTesterCastCylinder *>(self->obj);
  selfCpp->Release();
}

//endregion

#ifdef __cplusplus
}
#endif

