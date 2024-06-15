#pragma once
#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region destructor

void JoltC_ArrayUint_destroy(
  JoltC_ArrayUint_t * self
);

//endregion
//region functions

bool JoltC_ArrayUint_empty(
  JoltC_ArrayUint_t * self
);

long JoltC_ArrayUint_size(
  JoltC_ArrayUint_t * self
);

unsigned long JoltC_ArrayUint_at(
  JoltC_ArrayUint_t * self,
  long inIndex
);

void JoltC_ArrayUint_push_back(
  JoltC_ArrayUint_t * self,
  unsigned long inValue
);

void JoltC_ArrayUint_reserve(
  JoltC_ArrayUint_t * self,
  unsigned long inSize
);

void JoltC_ArrayUint_resize(
  JoltC_ArrayUint_t * self,
  unsigned long inSize
);

void JoltC_ArrayUint_clear(
  JoltC_ArrayUint_t * self
);

JoltC_UintMemRef_t * JoltC_ArrayUint_data(
  JoltC_ArrayUint_t * self
);

//endregion


#ifdef __cplusplus
}
#endif
