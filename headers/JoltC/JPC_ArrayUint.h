#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region functions

bool JPC_ArrayUint_empty(
  JPC_ArrayUint_t * self
);

long JPC_ArrayUint_size(
  JPC_ArrayUint_t * self
);

unsigned long JPC_ArrayUint_at(
  JPC_ArrayUint_t * self,
  long inIndex
);

void JPC_ArrayUint_push_back(
  JPC_ArrayUint_t * self,
  unsigned long inValue
);

void JPC_ArrayUint_reserve(
  JPC_ArrayUint_t * self,
  unsigned long inSize
);

void JPC_ArrayUint_resize(
  JPC_ArrayUint_t * self,
  unsigned long inSize
);

void JPC_ArrayUint_clear(
  JPC_ArrayUint_t * self
);

JPC_UintMemRef_t * JPC_ArrayUint_data(
  JPC_ArrayUint_t * self
);

//endregion functions


#ifdef __cplusplus
}
#endif

