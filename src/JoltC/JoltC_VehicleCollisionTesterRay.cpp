#include "JoltC/JoltC_VehicleCollisionTesterRay.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_VehicleCollisionTesterRay_t * JoltC_VehicleCollisionTesterRay_new(
  unsigned long inObjectLayer,
  JoltC_Vec3_t * inUp,
  float inMaxSlopeAngle
) {
  JoltC_VehicleCollisionTesterRay_t * cInstance = new JoltC_VehicleCollisionTesterRay_t();
  VehicleCollisionTesterRay * cppInstance = new VehicleCollisionTesterRay(
    inObjectLayer,
    *reinterpret_cast<Vec3 *>(inUp->obj),
    inMaxSlopeAngle
  );
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion

//region functions

unsigned long JoltC_VehicleCollisionTesterRay_GetRefCount(
  JoltC_VehicleCollisionTesterRay_t * self
) {
  VehicleCollisionTesterRay * selfCpp = static_cast<VehicleCollisionTesterRay *>(self->obj);
  unsigned long result = selfCpp->GetRefCount();
  return result;
};

void JoltC_VehicleCollisionTesterRay_AddRef(
  JoltC_VehicleCollisionTesterRay_t * self
) {
  VehicleCollisionTesterRay * selfCpp = static_cast<VehicleCollisionTesterRay *>(self->obj);
  selfCpp->AddRef();
};

void JoltC_VehicleCollisionTesterRay_Release(
  JoltC_VehicleCollisionTesterRay_t * self
) {
  VehicleCollisionTesterRay * selfCpp = static_cast<VehicleCollisionTesterRay *>(self->obj);
  selfCpp->Release();
};

//endregion

#ifdef __cplusplus
}
#endif

