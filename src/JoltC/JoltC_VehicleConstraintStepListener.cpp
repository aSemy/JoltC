#include "JoltC/JoltC_VehicleConstraintStepListener.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

/**
  Construct a new `VehicleConstraintStepListener` instance.
 */
JoltC_VehicleConstraintStepListener_t * JoltC_VehicleConstraintStepListener_new(
  JoltC_VehicleConstraint_t * inConstraint
) {
  VehicleConstraint * inConstraintCpp = static_cast<VehicleConstraint *>(inConstraint->obj);
  JoltC_VehicleConstraintStepListener_t * cInstance = new JoltC_VehicleConstraintStepListener_t();
  VehicleConstraintStepListener * cppInstance = new VehicleConstraintStepListener(
    inConstraintCpp
  );
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion

//region destructor

void JoltC_VehicleConstraintStepListener_destroy(
  JoltC_VehicleConstraintStepListener_t * self
){
  if (self == NULL) return;
  delete static_cast<VehicleConstraintStepListener *>(self->obj);
  free(self);
}

//endregion

#ifdef __cplusplus
}
#endif
