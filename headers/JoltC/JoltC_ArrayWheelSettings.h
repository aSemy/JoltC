#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region functions

bool JPC_ArrayWheelSettings_empty(
  JPC_ArrayWheelSettings_t * self
);

long JPC_ArrayWheelSettings_size(
  JPC_ArrayWheelSettings_t * self
);

JPC_WheelSettings_t * JPC_ArrayWheelSettings_at(
  JPC_ArrayWheelSettings_t * self,
  long inIndex
);

void JPC_ArrayWheelSettings_push_back(
  JPC_ArrayWheelSettings_t * self,
  JPC_WheelSettings_t * inValue
);

void JPC_ArrayWheelSettings_resize(
  JPC_ArrayWheelSettings_t * self,
  unsigned long inSize
);

void JPC_ArrayWheelSettings_clear(
  JPC_ArrayWheelSettings_t * self
);

//endregion functions


#ifdef __cplusplus
}
#endif

