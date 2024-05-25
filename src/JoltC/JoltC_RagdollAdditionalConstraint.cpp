#include "JoltC/JoltC_RagdollAdditionalConstraint.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region properties

size_t JoltC_RagdollAdditionalConstraint_mBodyIdx_Get(
  JoltC_RagdollAdditionalConstraint_t * self,
  long * outValue,
  char** outErrMsg
) {
  RagdollAdditionalConstraint * selfCpp = static_cast<RagdollAdditionalConstraint *>(self->obj);
  size_t resultSize = std::size(selfCpp->mBodyIdx);
  // TODO get result array...
  return resultSize;
};

void JoltC_RagdollAdditionalConstraint_mBodyIdx_Set(
  JoltC_RagdollAdditionalConstraint_t * self,
  long * mBodyIdx,
  size_t mBodyIdxSize,
  char** outErrMsg
) {
  RagdollAdditionalConstraint * selfCpp = static_cast<RagdollAdditionalConstraint *>(self->obj);
  for (size_t i = 0; i < mBodyIdxSize; i++) {
    selfCpp->mBodyIdx[i] = mBodyIdx[i];
  };
};

JoltC_TwoBodyConstraintSettings_t * JoltC_RagdollAdditionalConstraint_mConstraint_Get(
  JoltC_RagdollAdditionalConstraint_t * self,
  char** outErrMsg
) {
  RagdollAdditionalConstraint * selfCpp = static_cast<RagdollAdditionalConstraint *>(self->obj);
  TwoBodyConstraintSettings * result = selfCpp->mConstraint;
  return reinterpret_cast<JoltC_TwoBodyConstraintSettings_t *>(result);
};

void JoltC_RagdollAdditionalConstraint_mConstraint_Set(
  JoltC_RagdollAdditionalConstraint_t * self,
  JoltC_TwoBodyConstraintSettings_t * mConstraint,
  char** outErrMsg
) {
  RagdollAdditionalConstraint * selfCpp = static_cast<RagdollAdditionalConstraint *>(self->obj);
  selfCpp->mConstraint = reinterpret_cast<TwoBodyConstraintSettings *>(mConstraint->obj);
};

//endregion properties

#ifdef __cplusplus
}
#endif

