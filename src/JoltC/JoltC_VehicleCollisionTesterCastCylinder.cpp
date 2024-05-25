#include "JoltC/JPC_VehicleCollisionTesterCastCylinder.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JPC_VehicleCollisionTesterCastCylinder_t * JPC_VehicleCollisionTesterCastCylinder_new(
  unsigned long inObjectLayer,
  float inConvexRadiusFraction
) {
  JPC_VehicleCollisionTesterCastCylinder_t * cInstance = new JPC_VehicleCollisionTesterCastCylinder_t();
  VehicleCollisionTesterCastCylinder * cppInstance = new VehicleCollisionTesterCastCylinder(
    inObjectLayer,
    inConvexRadiusFraction
  );
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion constructors

//region functions

unsigned long JPC_VehicleCollisionTesterCastCylinder_GetRefCount(
  JPC_VehicleCollisionTesterCastCylinder_t * self
) {
  VehicleCollisionTesterCastCylinder * selfCpp = static_cast<VehicleCollisionTesterCastCylinder *>(self->obj);
  unsigned long result = selfCpp->GetRefCount();
  return result;
};

void JPC_VehicleCollisionTesterCastCylinder_AddRef(
  JPC_VehicleCollisionTesterCastCylinder_t * self
) {
  VehicleCollisionTesterCastCylinder * selfCpp = static_cast<VehicleCollisionTesterCastCylinder *>(self->obj);
  
  selfCpp->AddRef();
};

void JPC_VehicleCollisionTesterCastCylinder_Release(
  JPC_VehicleCollisionTesterCastCylinder_t * self
) {
  VehicleCollisionTesterCastCylinder * selfCpp = static_cast<VehicleCollisionTesterCastCylinder *>(self->obj);
  
  selfCpp->Release();
};

//endregion functions

#ifdef __cplusplus
}
#endif

