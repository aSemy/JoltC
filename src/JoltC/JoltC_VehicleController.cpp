#include "JoltC/JoltC_VehicleController.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region destructor

void JoltC_VehicleController_destroy(
  JoltC_VehicleController_t * self
){
  if (self == NULL) return;
  delete static_cast<VehicleController *>(self->obj);
  free(self);
}

//endregion
//region converters

/**
 * Convert an instance of JoltC_TrackedVehicleController_t into JoltC_VehicleController_t.
 */
JoltC_VehicleController_t * JoltC_VehicleController_From_TrackedVehicleController(
  JoltC_TrackedVehicleController_t * subtype
) {
  return (JoltC_VehicleController_t*) subtype;
};

/**
 * Convert an instance of JoltC_WheeledVehicleController_t into JoltC_VehicleController_t.
 */
JoltC_VehicleController_t * JoltC_VehicleController_From_WheeledVehicleController(
  JoltC_WheeledVehicleController_t * subtype
) {
  return (JoltC_VehicleController_t*) subtype;
};

/**
 * Convert an instance of JoltC_MotorcycleController_t into JoltC_VehicleController_t.
 */
JoltC_VehicleController_t * JoltC_VehicleController_From_MotorcycleController(
  JoltC_MotorcycleController_t * subtype
) {
  return (JoltC_VehicleController_t*) subtype;
};

//endregion

//region functions

unsigned long JoltC_VehicleController_GetRefCount(
  JoltC_VehicleController_t * self
) {
  VehicleController * selfCpp = static_cast<VehicleController *>(self->obj);
  return selfCpp->GetRefCount();
}

void JoltC_VehicleController_AddRef(
  JoltC_VehicleController_t * self
) {
  VehicleController * selfCpp = static_cast<VehicleController *>(self->obj);
  selfCpp->AddRef();
}

void JoltC_VehicleController_Release(
  JoltC_VehicleController_t * self
) {
  VehicleController * selfCpp = static_cast<VehicleController *>(self->obj);
  selfCpp->Release();
}

//endregion


#ifdef __cplusplus
}
#endif
