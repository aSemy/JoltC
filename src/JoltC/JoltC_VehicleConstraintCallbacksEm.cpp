#include "JoltC/JPC_VehicleConstraintCallbacksEm.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region functions

void JPC_VehicleConstraintCallbacksEm_SetVehicleConstraint(
  JPC_VehicleConstraintCallbacksEm_t * self,
  JPC_VehicleConstraint_t * inConstraint
) {
  VehicleConstraintCallbacksEm * selfCpp = static_cast<VehicleConstraintCallbacksEm *>(self->obj);
  
  selfCpp->SetVehicleConstraint(
  *reinterpret_cast<VehicleConstraint *>(inConstraint->obj)
  );
};

//endregion functions

#ifdef __cplusplus
}
#endif

