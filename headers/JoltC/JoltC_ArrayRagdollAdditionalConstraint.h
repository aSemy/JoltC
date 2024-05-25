#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JPC_ArrayRagdollAdditionalConstraint_t * JPC_ArrayRagdollAdditionalConstraint_new();

//endregion constructors

//region functions

bool JPC_ArrayRagdollAdditionalConstraint_empty(
  JPC_ArrayRagdollAdditionalConstraint_t * self
);

long JPC_ArrayRagdollAdditionalConstraint_size(
  JPC_ArrayRagdollAdditionalConstraint_t * self
);

JPC_RagdollAdditionalConstraint_t * JPC_ArrayRagdollAdditionalConstraint_at(
  JPC_ArrayRagdollAdditionalConstraint_t * self,
  long inIndex
);

void JPC_ArrayRagdollAdditionalConstraint_push_back(
  JPC_ArrayRagdollAdditionalConstraint_t * self,
  JPC_RagdollAdditionalConstraint_t * inValue
);

void JPC_ArrayRagdollAdditionalConstraint_reserve(
  JPC_ArrayRagdollAdditionalConstraint_t * self,
  unsigned long inSize
);

void JPC_ArrayRagdollAdditionalConstraint_resize(
  JPC_ArrayRagdollAdditionalConstraint_t * self,
  unsigned long inSize
);

void JPC_ArrayRagdollAdditionalConstraint_clear(
  JPC_ArrayRagdollAdditionalConstraint_t * self
);

//endregion functions


#ifdef __cplusplus
}
#endif

