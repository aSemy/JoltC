#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_VehicleConstraintStepListener_t * JoltC_VehicleConstraintStepListener_new(
  JoltC_VehicleConstraint_t * inConstraint
);

//endregion


#ifdef __cplusplus
}
#endif

