#include "JoltC/JPC_VehicleCollisionTesterRay.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JPC_VehicleCollisionTesterRay_t * JPC_VehicleCollisionTesterRay_new(
  unsigned long inObjectLayer,
  JPC_Vec3_t * inUp,
  float inMaxSlopeAngle
) {
  JPC_VehicleCollisionTesterRay_t * cInstance = new JPC_VehicleCollisionTesterRay_t();
  VehicleCollisionTesterRay * cppInstance = new VehicleCollisionTesterRay(
    inObjectLayer,
    *reinterpret_cast<Vec3 *>(inUp->obj),
    inMaxSlopeAngle
  );
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion constructors

//region functions

unsigned long JPC_VehicleCollisionTesterRay_GetRefCount(
  JPC_VehicleCollisionTesterRay_t * self
) {
  VehicleCollisionTesterRay * selfCpp = static_cast<VehicleCollisionTesterRay *>(self->obj);
  unsigned long result = selfCpp->GetRefCount();
  return result;
};

void JPC_VehicleCollisionTesterRay_AddRef(
  JPC_VehicleCollisionTesterRay_t * self
) {
  VehicleCollisionTesterRay * selfCpp = static_cast<VehicleCollisionTesterRay *>(self->obj);
  
  selfCpp->AddRef();
};

void JPC_VehicleCollisionTesterRay_Release(
  JPC_VehicleCollisionTesterRay_t * self
) {
  VehicleCollisionTesterRay * selfCpp = static_cast<VehicleCollisionTesterRay *>(self->obj);
  
  selfCpp->Release();
};

//endregion functions

#ifdef __cplusplus
}
#endif

