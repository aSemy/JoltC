#include "JoltC/JPC_VehicleCollisionTester.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region functions

unsigned long JPC_VehicleCollisionTester_GetRefCount(
  JPC_VehicleCollisionTester_t * self
) {
  VehicleCollisionTester * selfCpp = static_cast<VehicleCollisionTester *>(self->obj);
  unsigned long result = selfCpp->GetRefCount();
  return result;
};

void JPC_VehicleCollisionTester_AddRef(
  JPC_VehicleCollisionTester_t * self
) {
  VehicleCollisionTester * selfCpp = static_cast<VehicleCollisionTester *>(self->obj);
  
  selfCpp->AddRef();
};

void JPC_VehicleCollisionTester_Release(
  JPC_VehicleCollisionTester_t * self
) {
  VehicleCollisionTester * selfCpp = static_cast<VehicleCollisionTester *>(self->obj);
  
  selfCpp->Release();
};

//endregion functions

#ifdef __cplusplus
}
#endif

