#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region functions

bool JPC_ArrayVehicleAntiRollBar_empty(
  JPC_ArrayVehicleAntiRollBar_t * self
);

long JPC_ArrayVehicleAntiRollBar_size(
  JPC_ArrayVehicleAntiRollBar_t * self
);

JPC_VehicleAntiRollBar_t * JPC_ArrayVehicleAntiRollBar_at(
  JPC_ArrayVehicleAntiRollBar_t * self,
  long inIndex
);

void JPC_ArrayVehicleAntiRollBar_push_back(
  JPC_ArrayVehicleAntiRollBar_t * self,
  JPC_VehicleAntiRollBar_t * inValue
);

void JPC_ArrayVehicleAntiRollBar_resize(
  JPC_ArrayVehicleAntiRollBar_t * self,
  unsigned long inSize
);

void JPC_ArrayVehicleAntiRollBar_clear(
  JPC_ArrayVehicleAntiRollBar_t * self
);

//endregion functions


#ifdef __cplusplus
}
#endif

