#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_ArrayRagdollAdditionalConstraint_t * JoltC_ArrayRagdollAdditionalConstraint_new();

//endregion

//region functions

bool JoltC_ArrayRagdollAdditionalConstraint_empty(
  JoltC_ArrayRagdollAdditionalConstraint_t * self
);

long JoltC_ArrayRagdollAdditionalConstraint_size(
  JoltC_ArrayRagdollAdditionalConstraint_t * self
);

JoltC_RagdollAdditionalConstraint_t * JoltC_ArrayRagdollAdditionalConstraint_at(
  JoltC_ArrayRagdollAdditionalConstraint_t * self,
  long inIndex
);

void JoltC_ArrayRagdollAdditionalConstraint_push_back(
  JoltC_ArrayRagdollAdditionalConstraint_t * self,
  JoltC_RagdollAdditionalConstraint_t * inValue
);

void JoltC_ArrayRagdollAdditionalConstraint_reserve(
  JoltC_ArrayRagdollAdditionalConstraint_t * self,
  unsigned long inSize
);

void JoltC_ArrayRagdollAdditionalConstraint_resize(
  JoltC_ArrayRagdollAdditionalConstraint_t * self,
  unsigned long inSize
);

void JoltC_ArrayRagdollAdditionalConstraint_clear(
  JoltC_ArrayRagdollAdditionalConstraint_t * self
);

//endregion


#ifdef __cplusplus
}
#endif

