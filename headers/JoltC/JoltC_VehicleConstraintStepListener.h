#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JPC_VehicleConstraintStepListener_t * JPC_VehicleConstraintStepListener_new(
  JPC_VehicleConstraint_t * inConstraint
);

//endregion constructors


#ifdef __cplusplus
}
#endif

