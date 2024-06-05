#include "JoltC/JoltC_VehicleCollisionTesterCastSphere.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_VehicleCollisionTesterCastSphere_t * JoltC_VehicleCollisionTesterCastSphere_new(
  unsigned long inObjectLayer,
  float inRadius,
  JoltC_Vec3_t * inUp,
  float inMaxSlopeAngle
) {
  JoltC_VehicleCollisionTesterCastSphere_t * cInstance = new JoltC_VehicleCollisionTesterCastSphere_t();
  VehicleCollisionTesterCastSphere * cppInstance = new VehicleCollisionTesterCastSphere(
    inObjectLayer,
    inRadius,
    *reinterpret_cast<Vec3 *>(inUp->obj),
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
  unsigned long result = selfCpp->GetRefCount();
  return result;
};

void JoltC_VehicleCollisionTesterCastSphere_AddRef(
  JoltC_VehicleCollisionTesterCastSphere_t * self
) {
  VehicleCollisionTesterCastSphere * selfCpp = static_cast<VehicleCollisionTesterCastSphere *>(self->obj);
  selfCpp->AddRef();
};

void JoltC_VehicleCollisionTesterCastSphere_Release(
  JoltC_VehicleCollisionTesterCastSphere_t * self
) {
  VehicleCollisionTesterCastSphere * selfCpp = static_cast<VehicleCollisionTesterCastSphere *>(self->obj);
  selfCpp->Release();
};

//endregion

#ifdef __cplusplus
}
#endif

