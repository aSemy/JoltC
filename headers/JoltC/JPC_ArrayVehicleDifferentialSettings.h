#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region functions

bool JPC_ArrayVehicleDifferentialSettings_empty(
  JPC_ArrayVehicleDifferentialSettings_t * self
);

long JPC_ArrayVehicleDifferentialSettings_size(
  JPC_ArrayVehicleDifferentialSettings_t * self
);

JPC_VehicleDifferentialSettings_t * JPC_ArrayVehicleDifferentialSettings_at(
  JPC_ArrayVehicleDifferentialSettings_t * self,
  long inIndex
);

void JPC_ArrayVehicleDifferentialSettings_push_back(
  JPC_ArrayVehicleDifferentialSettings_t * self,
  JPC_VehicleDifferentialSettings_t * inValue
);

void JPC_ArrayVehicleDifferentialSettings_resize(
  JPC_ArrayVehicleDifferentialSettings_t * self,
  unsigned long inSize
);

void JPC_ArrayVehicleDifferentialSettings_clear(
  JPC_ArrayVehicleDifferentialSettings_t * self
);

//endregion functions


#ifdef __cplusplus
}
#endif

