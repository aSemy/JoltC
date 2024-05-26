#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region functions

bool JoltC_ArrayWheelSettings_empty(
  JoltC_ArrayWheelSettings_t * self
);

long JoltC_ArrayWheelSettings_size(
  JoltC_ArrayWheelSettings_t * self
);

JoltC_WheelSettings_t * JoltC_ArrayWheelSettings_at(
  JoltC_ArrayWheelSettings_t * self,
  long inIndex
);

void JoltC_ArrayWheelSettings_push_back(
  JoltC_ArrayWheelSettings_t * self,
  JoltC_WheelSettings_t * inValue
);

void JoltC_ArrayWheelSettings_resize(
  JoltC_ArrayWheelSettings_t * self,
  unsigned long inSize
);

void JoltC_ArrayWheelSettings_clear(
  JoltC_ArrayWheelSettings_t * self
);

//endregion


#ifdef __cplusplus
}
#endif

