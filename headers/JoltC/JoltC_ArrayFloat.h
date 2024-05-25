#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region functions

bool JPC_ArrayFloat_empty(
  JPC_ArrayFloat_t * self
);

long JPC_ArrayFloat_size(
  JPC_ArrayFloat_t * self
);

float JPC_ArrayFloat_at(
  JPC_ArrayFloat_t * self,
  long inIndex
);

void JPC_ArrayFloat_push_back(
  JPC_ArrayFloat_t * self,
  float inValue
);

void JPC_ArrayFloat_reserve(
  JPC_ArrayFloat_t * self,
  unsigned long inSize
);

void JPC_ArrayFloat_resize(
  JPC_ArrayFloat_t * self,
  unsigned long inSize
);

void JPC_ArrayFloat_clear(
  JPC_ArrayFloat_t * self
);

JPC_FloatMemRef_t * JPC_ArrayFloat_data(
  JPC_ArrayFloat_t * self
);

//endregion functions


#ifdef __cplusplus
}
#endif

