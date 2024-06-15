#pragma once
#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region destructor

void JoltC_ArrayFloat_destroy(
  JoltC_ArrayFloat_t * self
);

//endregion
//region functions

bool JoltC_ArrayFloat_empty(
  JoltC_ArrayFloat_t * self
);

long JoltC_ArrayFloat_size(
  JoltC_ArrayFloat_t * self
);

float JoltC_ArrayFloat_at(
  JoltC_ArrayFloat_t * self,
  long inIndex
);

void JoltC_ArrayFloat_push_back(
  JoltC_ArrayFloat_t * self,
  float inValue
);

void JoltC_ArrayFloat_reserve(
  JoltC_ArrayFloat_t * self,
  unsigned long inSize
);

void JoltC_ArrayFloat_resize(
  JoltC_ArrayFloat_t * self,
  unsigned long inSize
);

void JoltC_ArrayFloat_clear(
  JoltC_ArrayFloat_t * self
);

JoltC_FloatMemRef_t * JoltC_ArrayFloat_data(
  JoltC_ArrayFloat_t * self
);

//endregion


#ifdef __cplusplus
}
#endif
