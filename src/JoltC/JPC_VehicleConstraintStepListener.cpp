#include "JoltC/JPC_VehicleConstraintStepListener.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JPC_VehicleConstraintStepListener_t * JPC_VehicleConstraintStepListener_new(
  JPC_VehicleConstraint_t * inConstraint
) {
  JPC_VehicleConstraintStepListener_t * cInstance = new JPC_VehicleConstraintStepListener_t();
  VehicleConstraintStepListener * cppInstance = new VehicleConstraintStepListener(
    reinterpret_cast<VehicleConstraint *>(inConstraint->obj)
  );
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion constructors

#ifdef __cplusplus
}
#endif

