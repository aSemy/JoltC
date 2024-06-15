#pragma once
#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region destructor

void JoltC_ArrayVehicleAntiRollBar_destroy(
  JoltC_ArrayVehicleAntiRollBar_t * self
);

//endregion
//region functions

bool JoltC_ArrayVehicleAntiRollBar_empty(
  JoltC_ArrayVehicleAntiRollBar_t * self
);

long JoltC_ArrayVehicleAntiRollBar_size(
  JoltC_ArrayVehicleAntiRollBar_t * self
);

JoltC_VehicleAntiRollBar_t * JoltC_ArrayVehicleAntiRollBar_at(
  JoltC_ArrayVehicleAntiRollBar_t * self,
  long inIndex
);

void JoltC_ArrayVehicleAntiRollBar_push_back(
  JoltC_ArrayVehicleAntiRollBar_t * self,
  JoltC_VehicleAntiRollBar_t * inValue
);

void JoltC_ArrayVehicleAntiRollBar_resize(
  JoltC_ArrayVehicleAntiRollBar_t * self,
  unsigned long inSize
);

void JoltC_ArrayVehicleAntiRollBar_clear(
  JoltC_ArrayVehicleAntiRollBar_t * self
);

//endregion


#ifdef __cplusplus
}
#endif
