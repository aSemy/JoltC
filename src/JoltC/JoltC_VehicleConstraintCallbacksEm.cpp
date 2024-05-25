#include "JoltC/JoltC_VehicleConstraintCallbacksEm.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region functions

void JoltC_VehicleConstraintCallbacksEm_SetVehicleConstraint(
  JoltC_VehicleConstraintCallbacksEm_t * self,
  JoltC_VehicleConstraint_t * inConstraint,
  char** outErrMsg
) {
  try {
    VehicleConstraintCallbacksEm * selfCpp = static_cast<VehicleConstraintCallbacksEm *>(self->obj);
    
    selfCpp->SetVehicleConstraint(
    *reinterpret_cast<VehicleConstraint *>(inConstraint->obj)
    );
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

//endregion functions

#ifdef __cplusplus
}
#endif
