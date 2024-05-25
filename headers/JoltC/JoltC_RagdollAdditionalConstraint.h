#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region properties

size_t JoltC_RagdollAdditionalConstraint_mBodyIdx_Get(
  JoltC_RagdollAdditionalConstraint_t * self,
  long * outValue,
  char** outErrMsg
);

void JoltC_RagdollAdditionalConstraint_mBodyIdx_Set(
  JoltC_RagdollAdditionalConstraint_t * self,
  long * mBodyIdx,
  size_t mBodyIdxSize,
  char** outErrMsg
);

JoltC_TwoBodyConstraintSettings_t * JoltC_RagdollAdditionalConstraint_mConstraint_Get(
  JoltC_RagdollAdditionalConstraint_t * self,
  char** outErrMsg
);

void JoltC_RagdollAdditionalConstraint_mConstraint_Set(
  JoltC_RagdollAdditionalConstraint_t * self,
  JoltC_TwoBodyConstraintSettings_t * mConstraint,
  char** outErrMsg
);

//endregion properties


#ifdef __cplusplus
}
#endif

