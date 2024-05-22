#include "JoltC/JPC_VehicleController.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region functions

unsigned long JPC_VehicleController_GetRefCount(
  JPC_VehicleController_t * self
) {
  VehicleController * selfCpp = static_cast<VehicleController *>(self->obj);
  unsigned long result = selfCpp->GetRefCount();
  return result;
};

void JPC_VehicleController_AddRef(
  JPC_VehicleController_t * self
) {
  VehicleController * selfCpp = static_cast<VehicleController *>(self->obj);
  
  selfCpp->AddRef();
};

void JPC_VehicleController_Release(
  JPC_VehicleController_t * self
) {
  VehicleController * selfCpp = static_cast<VehicleController *>(self->obj);
  
  selfCpp->Release();
};

//endregion functions

#ifdef __cplusplus
}
#endif

