#pragma once
#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_BodyIDVector_t * JoltC_BodyIDVector_new();

//endregion

//region destructor

void JoltC_BodyIDVector_destroy(
  JoltC_BodyIDVector_t * self
);

//endregion
//region functions

bool JoltC_BodyIDVector_empty(
  JoltC_BodyIDVector_t * self
);

long JoltC_BodyIDVector_size(
  JoltC_BodyIDVector_t * self
);

JoltC_BodyID_t * JoltC_BodyIDVector_at(
  JoltC_BodyIDVector_t * self,
  long inIndex
);

void JoltC_BodyIDVector_push_back(
  JoltC_BodyIDVector_t * self,
  JoltC_BodyID_t * inBodyID
);

void JoltC_BodyIDVector_reserve(
  JoltC_BodyIDVector_t * self,
  unsigned long inSize
);

void JoltC_BodyIDVector_resize(
  JoltC_BodyIDVector_t * self,
  unsigned long inSize
);

void JoltC_BodyIDVector_clear(
  JoltC_BodyIDVector_t * self
);

//endregion


#ifdef __cplusplus
}
#endif
