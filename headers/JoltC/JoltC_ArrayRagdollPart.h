#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_ArrayRagdollPart_t * JoltC_ArrayRagdollPart_new();

//endregion

//region functions

bool JoltC_ArrayRagdollPart_empty(
  JoltC_ArrayRagdollPart_t * self
);

long JoltC_ArrayRagdollPart_size(
  JoltC_ArrayRagdollPart_t * self
);

JoltC_RagdollPart_t * JoltC_ArrayRagdollPart_at(
  JoltC_ArrayRagdollPart_t * self,
  long inIndex
);

void JoltC_ArrayRagdollPart_push_back(
  JoltC_ArrayRagdollPart_t * self,
  JoltC_RagdollPart_t * inValue
);

void JoltC_ArrayRagdollPart_reserve(
  JoltC_ArrayRagdollPart_t * self,
  unsigned long inSize
);

void JoltC_ArrayRagdollPart_resize(
  JoltC_ArrayRagdollPart_t * self,
  unsigned long inSize
);

void JoltC_ArrayRagdollPart_clear(
  JoltC_ArrayRagdollPart_t * self
);

//endregion


#ifdef __cplusplus
}
#endif

