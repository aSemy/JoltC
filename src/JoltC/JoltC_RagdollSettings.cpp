#include "JoltC/JoltC_RagdollSettings.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

/**
  Construct a new `RagdollSettings` instance.
 */
JoltC_RagdollSettings_t * JoltC_RagdollSettings_new() {
  JoltC_RagdollSettings_t * cInstance = new JoltC_RagdollSettings_t();
  RagdollSettings * cppInstance = new RagdollSettings();
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion

//region destructor

void JoltC_RagdollSettings_destroy(
  JoltC_RagdollSettings_t * self
){
  if (self == NULL) return;
  delete static_cast<RagdollSettings *>(self->obj);
  free(self);
}

//endregion
//region functions

bool JoltC_RagdollSettings_Stabilize(
  JoltC_RagdollSettings_t * self
) {
  RagdollSettings * selfCpp = static_cast<RagdollSettings *>(self->obj);
  return selfCpp->Stabilize();
}

JoltC_Ragdoll_t * JoltC_RagdollSettings_CreateRagdoll(
  JoltC_RagdollSettings_t * self,
  long inCollisionGroup,
  long inUserData,
  JoltC_PhysicsSystem_t * inSystem
) {
  RagdollSettings * selfCpp = static_cast<RagdollSettings *>(self->obj);
  PhysicsSystem * inSystemCpp = static_cast<PhysicsSystem *>(inSystem->obj);
  const Ragdoll * resultPtr = selfCpp->CreateRagdoll(
    inCollisionGroup,
    inUserData,
    inSystemCpp
  );
  JoltC_Ragdoll_t * result = new JoltC_Ragdoll_t();
  result->obj = const_cast<void *>(reinterpret_cast<const void *>(resultPtr));
  return result;
}

JoltC_Skeleton_t * JoltC_RagdollSettings_GetSkeleton(
  JoltC_RagdollSettings_t * self
) {
  RagdollSettings * selfCpp = static_cast<RagdollSettings *>(self->obj);
  const Skeleton * resultPtr = selfCpp->GetSkeleton();
  JoltC_Skeleton_t * result = new JoltC_Skeleton_t();
  result->obj = const_cast<void *>(reinterpret_cast<const void *>(resultPtr));
  return result;
}

void JoltC_RagdollSettings_DisableParentChildCollisions(
  JoltC_RagdollSettings_t * self,
  JoltC_Mat44MemRef_t * inJointMatrices,
  float inMinSeparationDistance
) {
  RagdollSettings * selfCpp = static_cast<RagdollSettings *>(self->obj);
  const Mat44MemRef * inJointMatricesCpp = static_cast<const Mat44MemRef *>(inJointMatrices->obj);
  selfCpp->DisableParentChildCollisions(
    inJointMatricesCpp,
    inMinSeparationDistance
  );
}

void JoltC_RagdollSettings_CalculateBodyIndexToConstraintIndex(
  JoltC_RagdollSettings_t * self
) {
  RagdollSettings * selfCpp = static_cast<RagdollSettings *>(self->obj);
  selfCpp->CalculateBodyIndexToConstraintIndex();
}

void JoltC_RagdollSettings_CalculateConstraintIndexToBodyIdxPair(
  JoltC_RagdollSettings_t * self
) {
  RagdollSettings * selfCpp = static_cast<RagdollSettings *>(self->obj);
  selfCpp->CalculateConstraintIndexToBodyIdxPair();
}

//endregion

//region properties

JoltC_Skeleton_t * JoltC_RagdollSettings_mSkeleton_Get(
  JoltC_RagdollSettings_t * self
) {
  RagdollSettings * selfCpp = static_cast<RagdollSettings *>(self->obj);
  const Skeleton * resultPtr = selfCpp->mSkeleton;
  JoltC_Skeleton_t * result = new JoltC_Skeleton_t();
  result->obj = const_cast<void *>(reinterpret_cast<const void *>(resultPtr));
  return result;
}

void JoltC_RagdollSettings_mSkeleton_Set(
  JoltC_RagdollSettings_t * self,
  JoltC_Skeleton_t * mSkeleton
) {
  RagdollSettings * selfCpp = static_cast<RagdollSettings *>(self->obj);
  selfCpp->mSkeleton = static_cast<Skeleton *>(mSkeleton->obj);
}

JoltC_ArrayRagdollPart_t * JoltC_RagdollSettings_mParts_Get(
  JoltC_RagdollSettings_t * self
) {
  RagdollSettings * selfCpp = static_cast<RagdollSettings *>(self->obj);
  ArrayRagdollPart * resultPtr = new ArrayRagdollPart();
  *resultPtr = selfCpp->mParts;
  JoltC_ArrayRagdollPart_t * result = new JoltC_ArrayRagdollPart_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

void JoltC_RagdollSettings_mParts_Set(
  JoltC_RagdollSettings_t * self,
  JoltC_ArrayRagdollPart_t * mParts
) {
  RagdollSettings * selfCpp = static_cast<RagdollSettings *>(self->obj);
  selfCpp->mParts = *static_cast<ArrayRagdollPart *>(mParts->obj);
}

JoltC_ArrayRagdollAdditionalConstraint_t * JoltC_RagdollSettings_mAdditionalConstraints_Get(
  JoltC_RagdollSettings_t * self
) {
  RagdollSettings * selfCpp = static_cast<RagdollSettings *>(self->obj);
  ArrayRagdollAdditionalConstraint * resultPtr = new ArrayRagdollAdditionalConstraint();
  *resultPtr = selfCpp->mAdditionalConstraints;
  JoltC_ArrayRagdollAdditionalConstraint_t * result = new JoltC_ArrayRagdollAdditionalConstraint_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

void JoltC_RagdollSettings_mAdditionalConstraints_Set(
  JoltC_RagdollSettings_t * self,
  JoltC_ArrayRagdollAdditionalConstraint_t * mAdditionalConstraints
) {
  RagdollSettings * selfCpp = static_cast<RagdollSettings *>(self->obj);
  selfCpp->mAdditionalConstraints = *static_cast<ArrayRagdollAdditionalConstraint *>(mAdditionalConstraints->obj);
}

//endregion


#ifdef __cplusplus
}
#endif
