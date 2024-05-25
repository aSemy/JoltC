#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region functions

bool JoltC_ArrayVehicleAntiRollBar_empty(
  JoltC_ArrayVehicleAntiRollBar_t * self,
  char** outErrMsg
);

long JoltC_ArrayVehicleAntiRollBar_size(
  JoltC_ArrayVehicleAntiRollBar_t * self,
  char** outErrMsg
);

JoltC_VehicleAntiRollBar_t * JoltC_ArrayVehicleAntiRollBar_at(
  JoltC_ArrayVehicleAntiRollBar_t * self,
  long inIndex,
  char** outErrMsg
);

void JoltC_ArrayVehicleAntiRollBar_push_back(
  JoltC_ArrayVehicleAntiRollBar_t * self,
  JoltC_VehicleAntiRollBar_t * inValue,
  char** outErrMsg
);

void JoltC_ArrayVehicleAntiRollBar_resize(
  JoltC_ArrayVehicleAntiRollBar_t * self,
  unsigned long inSize,
  char** outErrMsg
);

void JoltC_ArrayVehicleAntiRollBar_clear(
  JoltC_ArrayVehicleAntiRollBar_t * self,
  char** outErrMsg
);

//endregion functions


#ifdef __cplusplus
}
#endif

