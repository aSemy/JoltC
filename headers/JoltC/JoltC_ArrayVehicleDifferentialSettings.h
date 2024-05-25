#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region functions

bool JoltC_ArrayVehicleDifferentialSettings_empty(
  JoltC_ArrayVehicleDifferentialSettings_t * self,
  char** outErrMsg
);

long JoltC_ArrayVehicleDifferentialSettings_size(
  JoltC_ArrayVehicleDifferentialSettings_t * self,
  char** outErrMsg
);

JoltC_VehicleDifferentialSettings_t * JoltC_ArrayVehicleDifferentialSettings_at(
  JoltC_ArrayVehicleDifferentialSettings_t * self,
  long inIndex,
  char** outErrMsg
);

void JoltC_ArrayVehicleDifferentialSettings_push_back(
  JoltC_ArrayVehicleDifferentialSettings_t * self,
  JoltC_VehicleDifferentialSettings_t * inValue,
  char** outErrMsg
);

void JoltC_ArrayVehicleDifferentialSettings_resize(
  JoltC_ArrayVehicleDifferentialSettings_t * self,
  unsigned long inSize,
  char** outErrMsg
);

void JoltC_ArrayVehicleDifferentialSettings_clear(
  JoltC_ArrayVehicleDifferentialSettings_t * self,
  char** outErrMsg
);

//endregion functions


#ifdef __cplusplus
}
#endif

