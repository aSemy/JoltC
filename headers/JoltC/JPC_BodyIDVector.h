#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JPC_BodyIDVector_t * JPC_BodyIDVector_new();

//endregion constructors

//region functions

bool JPC_BodyIDVector_empty(
  JPC_BodyIDVector_t * self
);

long JPC_BodyIDVector_size(
  JPC_BodyIDVector_t * self
);

JPC_BodyID_t * JPC_BodyIDVector_at(
  JPC_BodyIDVector_t * self,
  long inIndex
);

void JPC_BodyIDVector_push_back(
  JPC_BodyIDVector_t * self,
  const JPC_BodyID_t * inBodyID
);

void JPC_BodyIDVector_reserve(
  JPC_BodyIDVector_t * self,
  unsigned long inSize
);

void JPC_BodyIDVector_resize(
  JPC_BodyIDVector_t * self,
  unsigned long inSize
);

void JPC_BodyIDVector_clear(
  JPC_BodyIDVector_t * self
);

//endregion functions


#ifdef __cplusplus
}
#endif

