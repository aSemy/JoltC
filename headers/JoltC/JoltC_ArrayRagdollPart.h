#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JPC_ArrayRagdollPart_t * JPC_ArrayRagdollPart_new();

//endregion constructors

//region functions

bool JPC_ArrayRagdollPart_empty(
  JPC_ArrayRagdollPart_t * self
);

long JPC_ArrayRagdollPart_size(
  JPC_ArrayRagdollPart_t * self
);

JPC_RagdollPart_t * JPC_ArrayRagdollPart_at(
  JPC_ArrayRagdollPart_t * self,
  long inIndex
);

void JPC_ArrayRagdollPart_push_back(
  JPC_ArrayRagdollPart_t * self,
  JPC_RagdollPart_t * inValue
);

void JPC_ArrayRagdollPart_reserve(
  JPC_ArrayRagdollPart_t * self,
  unsigned long inSize
);

void JPC_ArrayRagdollPart_resize(
  JPC_ArrayRagdollPart_t * self,
  unsigned long inSize
);

void JPC_ArrayRagdollPart_clear(
  JPC_ArrayRagdollPart_t * self
);

//endregion functions


#ifdef __cplusplus
}
#endif

