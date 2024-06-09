#include "JoltC/JoltC_RagdollAdditionalConstraint.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region properties

size_t JoltC_RagdollAdditionalConstraint_mBodyIdx_Get(
  JoltC_RagdollAdditionalConstraint_t * self,
  long * outValue
) {
  RagdollAdditionalConstraint * selfCpp = static_cast<RagdollAdditionalConstraint *>(self->obj);
  size_t resultSize = std::size(selfCpp->mBodyIdx);
  // TODO get result array...
}

void JoltC_RagdollAdditionalConstraint_mBodyIdx_Set(
  JoltC_RagdollAdditionalConstraint_t * self,
  long * mBodyIdx,
  size_t mBodyIdxSize
) {
  RagdollAdditionalConstraint * selfCpp = static_cast<RagdollAdditionalConstraint *>(self->obj);
  for (size_t i = 0; i < mBodyIdxSize; i++) {
    selfCpp->mBodyIdx[i] = mBodyIdx[i];
  };
};

JoltC_TwoBodyConstraintSettings_t * JoltC_RagdollAdditionalConstraint_mConstraint_Get(
  JoltC_RagdollAdditionalConstraint_t * self
) {
  RagdollAdditionalConstraint * selfCpp = static_cast<RagdollAdditionalConstraint *>(self->obj);
  const TwoBodyConstraintSettings * resultPtr = selfCpp->mConstraint;
  JoltC_TwoBodyConstraintSettings_t * result = new JoltC_TwoBodyConstraintSettings_t();
  result->obj = const_cast<void *>(reinterpret_cast<const void *>(resultPtr));
  return result;
}

void JoltC_RagdollAdditionalConstraint_mConstraint_Set(
  JoltC_RagdollAdditionalConstraint_t * self,
  JoltC_TwoBodyConstraintSettings_t * mConstraint
) {
  RagdollAdditionalConstraint * selfCpp = static_cast<RagdollAdditionalConstraint *>(self->obj);
  selfCpp->mConstraint = static_cast<TwoBodyConstraintSettings *>(mConstraint->obj);
};

//endregion

#ifdef __cplusplus
}
#endif

