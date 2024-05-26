#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region functions

bool JoltC_ArrayUint8_empty(
  JoltC_ArrayUint8_t * self
);

long JoltC_ArrayUint8_size(
  JoltC_ArrayUint8_t * self
);

unsigned char JoltC_ArrayUint8_at(
  JoltC_ArrayUint8_t * self,
  long inIndex
);

void JoltC_ArrayUint8_push_back(
  JoltC_ArrayUint8_t * self,
  unsigned char inValue
);

void JoltC_ArrayUint8_reserve(
  JoltC_ArrayUint8_t * self,
  unsigned long inSize
);

void JoltC_ArrayUint8_resize(
  JoltC_ArrayUint8_t * self,
  unsigned long inSize
);

void JoltC_ArrayUint8_clear(
  JoltC_ArrayUint8_t * self
);

JoltC_Uint8MemRef_t * JoltC_ArrayUint8_data(
  JoltC_ArrayUint8_t * self
);

//endregion


#ifdef __cplusplus
}
#endif

