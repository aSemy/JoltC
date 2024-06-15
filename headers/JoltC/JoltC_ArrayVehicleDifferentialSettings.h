#pragma once
#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region destructor

void JoltC_ArrayVehicleDifferentialSettings_destroy(
  JoltC_ArrayVehicleDifferentialSettings_t * self
);

//endregion
//region functions

bool JoltC_ArrayVehicleDifferentialSettings_empty(
  JoltC_ArrayVehicleDifferentialSettings_t * self
);

long JoltC_ArrayVehicleDifferentialSettings_size(
  JoltC_ArrayVehicleDifferentialSettings_t * self
);

JoltC_VehicleDifferentialSettings_t * JoltC_ArrayVehicleDifferentialSettings_at(
  JoltC_ArrayVehicleDifferentialSettings_t * self,
  long inIndex
);

void JoltC_ArrayVehicleDifferentialSettings_push_back(
  JoltC_ArrayVehicleDifferentialSettings_t * self,
  JoltC_VehicleDifferentialSettings_t * inValue
);

void JoltC_ArrayVehicleDifferentialSettings_resize(
  JoltC_ArrayVehicleDifferentialSettings_t * self,
  unsigned long inSize
);

void JoltC_ArrayVehicleDifferentialSettings_clear(
  JoltC_ArrayVehicleDifferentialSettings_t * self
);

//endregion


#ifdef __cplusplus
}
#endif
