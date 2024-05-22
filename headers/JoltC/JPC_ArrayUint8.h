#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region functions

bool JPC_ArrayUint8_empty(
  JPC_ArrayUint8_t * self
);

long JPC_ArrayUint8_size(
  JPC_ArrayUint8_t * self
);

unsigned char JPC_ArrayUint8_at(
  JPC_ArrayUint8_t * self,
  long inIndex
);

void JPC_ArrayUint8_push_back(
  JPC_ArrayUint8_t * self,
  unsigned char inValue
);

void JPC_ArrayUint8_reserve(
  JPC_ArrayUint8_t * self,
  unsigned long inSize
);

void JPC_ArrayUint8_resize(
  JPC_ArrayUint8_t * self,
  unsigned long inSize
);

void JPC_ArrayUint8_clear(
  JPC_ArrayUint8_t * self
);

JPC_Uint8MemRef_t * JPC_ArrayUint8_data(
  JPC_ArrayUint8_t * self
);

//endregion functions


#ifdef __cplusplus
}
#endif

