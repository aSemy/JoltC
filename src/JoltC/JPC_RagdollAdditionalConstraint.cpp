#include "JoltC/JPC_RagdollAdditionalConstraint.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region properties

size_t JPC_RagdollAdditionalConstraint_mBodyIdx_Get(
  JPC_RagdollAdditionalConstraint_t * self,
  long * outValue
) {
  RagdollAdditionalConstraint * selfCpp = static_cast<RagdollAdditionalConstraint *>(self->obj);
  size_t resultSize = std::size(selfCpp->mBodyIdx);
  // TODO get result array...
  return resultSize;
};

void JPC_RagdollAdditionalConstraint_mBodyIdx_Set(
  JPC_RagdollAdditionalConstraint_t * self,
  long * mBodyIdx,
  size_t mBodyIdxSize
) {
  RagdollAdditionalConstraint * selfCpp = static_cast<RagdollAdditionalConstraint *>(self->obj);
  for (size_t i = 0; i < mBodyIdxSize; i++) {
    selfCpp->mBodyIdx[i] = mBodyIdx[i];
  };
};

JPC_TwoBodyConstraintSettings_t * JPC_RagdollAdditionalConstraint_mConstraint_Get(
  JPC_RagdollAdditionalConstraint_t * self
) {
  RagdollAdditionalConstraint * selfCpp = static_cast<RagdollAdditionalConstraint *>(self->obj);
  TwoBodyConstraintSettings * result = selfCpp->mConstraint;
  return reinterpret_cast<JPC_TwoBodyConstraintSettings_t *>(result);
};

void JPC_RagdollAdditionalConstraint_mConstraint_Set(
  JPC_RagdollAdditionalConstraint_t * self,
  JPC_TwoBodyConstraintSettings_t * mConstraint
) {
  RagdollAdditionalConstraint * selfCpp = static_cast<RagdollAdditionalConstraint *>(self->obj);
  selfCpp->mConstraint = reinterpret_cast<TwoBodyConstraintSettings *>(mConstraint->obj);
};

//endregion properties

#ifdef __cplusplus
}
#endif

