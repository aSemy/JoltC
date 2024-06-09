#include "JoltC/JoltC_VehicleConstraintCallbacksEm.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region functions

void JoltC_VehicleConstraintCallbacksEm_SetVehicleConstraint(
  JoltC_VehicleConstraintCallbacksEm_t * self,
  JoltC_VehicleConstraint_t * inConstraint
) {
  VehicleConstraintCallbacksEm * selfCpp = static_cast<VehicleConstraintCallbacksEm *>(self->obj);
  VehicleConstraint * inConstraintCpp = static_cast<VehicleConstraint *>(inConstraint->obj);
  selfCpp->SetVehicleConstraint(
    *inConstraintCpp
  );
}

//endregion

#ifdef __cplusplus
}
#endif

