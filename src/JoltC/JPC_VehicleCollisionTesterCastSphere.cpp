#include "JoltC/JPC_VehicleCollisionTesterCastSphere.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JPC_VehicleCollisionTesterCastSphere_t * JPC_VehicleCollisionTesterCastSphere_new(
  unsigned long inObjectLayer,
  float inRadius,
  JPC_Vec3_t * inUp,
  float inMaxSlopeAngle
) {
  JPC_VehicleCollisionTesterCastSphere_t * cInstance = new JPC_VehicleCollisionTesterCastSphere_t();
  VehicleCollisionTesterCastSphere * cppInstance = new VehicleCollisionTesterCastSphere(
    inObjectLayer,
    inRadius,
    *reinterpret_cast<Vec3 *>(inUp->obj),
    inMaxSlopeAngle
  );
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion constructors

//region functions

unsigned long JPC_VehicleCollisionTesterCastSphere_GetRefCount(
  JPC_VehicleCollisionTesterCastSphere_t * self
) {
  VehicleCollisionTesterCastSphere * selfCpp = static_cast<VehicleCollisionTesterCastSphere *>(self->obj);
  unsigned long result = selfCpp->GetRefCount();
  return result;
};

void JPC_VehicleCollisionTesterCastSphere_AddRef(
  JPC_VehicleCollisionTesterCastSphere_t * self
) {
  VehicleCollisionTesterCastSphere * selfCpp = static_cast<VehicleCollisionTesterCastSphere *>(self->obj);
  
  selfCpp->AddRef();
};

void JPC_VehicleCollisionTesterCastSphere_Release(
  JPC_VehicleCollisionTesterCastSphere_t * self
) {
  VehicleCollisionTesterCastSphere * selfCpp = static_cast<VehicleCollisionTesterCastSphere *>(self->obj);
  
  selfCpp->Release();
};

//endregion functions

#ifdef __cplusplus
}
#endif

