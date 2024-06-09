#include "JoltC/JoltC_VehicleCollisionTesterCastSphere.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

/**
  Construct a new `VehicleCollisionTesterCastSphere` instance.
 */
JoltC_VehicleCollisionTesterCastSphere_t * JoltC_VehicleCollisionTesterCastSphere_new(
  unsigned long inObjectLayer,
  float inRadius,
  JoltC_Vec3_t * inUp,
  float inMaxSlopeAngle
) {
  Vec3 * inUpCpp = static_cast<Vec3 *>(inUp->obj);
  JoltC_VehicleCollisionTesterCastSphere_t * cInstance = new JoltC_VehicleCollisionTesterCastSphere_t();
  VehicleCollisionTesterCastSphere * cppInstance = new VehicleCollisionTesterCastSphere(
    inObjectLayer,
    inRadius,
    *inUpCpp,
    inMaxSlopeAngle
  );
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion

//region functions

unsigned long JoltC_VehicleCollisionTesterCastSphere_GetRefCount(
  JoltC_VehicleCollisionTesterCastSphere_t * self
) {
  VehicleCollisionTesterCastSphere * selfCpp = static_cast<VehicleCollisionTesterCastSphere *>(self->obj);
  return selfCpp->GetRefCount();
}

void JoltC_VehicleCollisionTesterCastSphere_AddRef(
  JoltC_VehicleCollisionTesterCastSphere_t * self
) {
  VehicleCollisionTesterCastSphere * selfCpp = static_cast<VehicleCollisionTesterCastSphere *>(self->obj);
  selfCpp->AddRef();
}

void JoltC_VehicleCollisionTesterCastSphere_Release(
  JoltC_VehicleCollisionTesterCastSphere_t * self
) {
  VehicleCollisionTesterCastSphere * selfCpp = static_cast<VehicleCollisionTesterCastSphere *>(self->obj);
  selfCpp->Release();
}

//endregion

#ifdef __cplusplus
}
#endif

