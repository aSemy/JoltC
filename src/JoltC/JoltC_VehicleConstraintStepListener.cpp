#include "JoltC/JoltC_VehicleConstraintStepListener.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_VehicleConstraintStepListener_t * JoltC_VehicleConstraintStepListener_new(
  JoltC_VehicleConstraint_t * inConstraint,
  char** outErrMsg
) {
  try {
    JoltC_VehicleConstraintStepListener_t * cInstance = new JoltC_VehicleConstraintStepListener_t();
    VehicleConstraintStepListener * cppInstance = new VehicleConstraintStepListener(
      reinterpret_cast<VehicleConstraint *>(inConstraint->obj)
    );
    cInstance->obj = cppInstance;
    return cInstance;
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

//endregion constructors

#ifdef __cplusplus
}
#endif

