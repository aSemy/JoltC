#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region functions

bool JoltC_ArrayWheelSettings_empty(
  JoltC_ArrayWheelSettings_t * self,
  char** outErrMsg
);

long JoltC_ArrayWheelSettings_size(
  JoltC_ArrayWheelSettings_t * self,
  char** outErrMsg
);

JoltC_WheelSettings_t * JoltC_ArrayWheelSettings_at(
  JoltC_ArrayWheelSettings_t * self,
  long inIndex,
  char** outErrMsg
);

void JoltC_ArrayWheelSettings_push_back(
  JoltC_ArrayWheelSettings_t * self,
  JoltC_WheelSettings_t * inValue,
  char** outErrMsg
);

void JoltC_ArrayWheelSettings_resize(
  JoltC_ArrayWheelSettings_t * self,
  unsigned long inSize,
  char** outErrMsg
);

void JoltC_ArrayWheelSettings_clear(
  JoltC_ArrayWheelSettings_t * self,
  char** outErrMsg
);

//endregion functions


#ifdef __cplusplus
}
#endif

