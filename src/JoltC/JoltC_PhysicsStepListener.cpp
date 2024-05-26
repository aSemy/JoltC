#include "JoltC/JoltC_PhysicsStepListener.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region converters

/**
 * Convert an instance of JoltC_VehicleConstraintStepListener_t into JoltC_PhysicsStepListener_t.
 */
JoltC_PhysicsStepListener_t * JoltC_PhysicsStepListener_From_VehicleConstraintStepListener(
  JoltC_VehicleConstraintStepListener_t * subtype
) {
  return (JoltC_PhysicsStepListener_t*) subtype;
};

//endregion

#ifdef __cplusplus
}
#endif

