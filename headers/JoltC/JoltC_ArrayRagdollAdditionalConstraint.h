#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_ArrayRagdollAdditionalConstraint_t * JoltC_ArrayRagdollAdditionalConstraint_new(
  char** outErrMsg
);

//endregion constructors

//region functions

bool JoltC_ArrayRagdollAdditionalConstraint_empty(
  JoltC_ArrayRagdollAdditionalConstraint_t * self,
  char** outErrMsg
);

long JoltC_ArrayRagdollAdditionalConstraint_size(
  JoltC_ArrayRagdollAdditionalConstraint_t * self,
  char** outErrMsg
);

JoltC_RagdollAdditionalConstraint_t * JoltC_ArrayRagdollAdditionalConstraint_at(
  JoltC_ArrayRagdollAdditionalConstraint_t * self,
  long inIndex,
  char** outErrMsg
);

void JoltC_ArrayRagdollAdditionalConstraint_push_back(
  JoltC_ArrayRagdollAdditionalConstraint_t * self,
  JoltC_RagdollAdditionalConstraint_t * inValue,
  char** outErrMsg
);

void JoltC_ArrayRagdollAdditionalConstraint_reserve(
  JoltC_ArrayRagdollAdditionalConstraint_t * self,
  unsigned long inSize,
  char** outErrMsg
);

void JoltC_ArrayRagdollAdditionalConstraint_resize(
  JoltC_ArrayRagdollAdditionalConstraint_t * self,
  unsigned long inSize,
  char** outErrMsg
);

void JoltC_ArrayRagdollAdditionalConstraint_clear(
  JoltC_ArrayRagdollAdditionalConstraint_t * self,
  char** outErrMsg
);

//endregion functions


#ifdef __cplusplus
}
#endif

