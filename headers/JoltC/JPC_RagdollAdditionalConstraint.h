#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region properties

size_t JPC_RagdollAdditionalConstraint_mBodyIdx_Get(
  JPC_RagdollAdditionalConstraint_t * self,
  long * outValue
);

void JPC_RagdollAdditionalConstraint_mBodyIdx_Set(
  JPC_RagdollAdditionalConstraint_t * self,
  long * mBodyIdx,
  size_t mBodyIdxSize
);

JPC_TwoBodyConstraintSettings_t * JPC_RagdollAdditionalConstraint_mConstraint_Get(
  JPC_RagdollAdditionalConstraint_t * self
);

void JPC_RagdollAdditionalConstraint_mConstraint_Set(
  JPC_RagdollAdditionalConstraint_t * self,
  JPC_TwoBodyConstraintSettings_t * mConstraint
);

//endregion properties


#ifdef __cplusplus
}
#endif

