#include "JoltC/JPC_RagdollSettings.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JPC_RagdollSettings_t * JPC_RagdollSettings_new() {
  JPC_RagdollSettings_t * cInstance = new JPC_RagdollSettings_t();
  RagdollSettings * cppInstance = new RagdollSettings();
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion constructors

//region functions

bool JPC_RagdollSettings_Stabilize(
  JPC_RagdollSettings_t * self
) {
  RagdollSettings * selfCpp = static_cast<RagdollSettings *>(self->obj);
  bool result = selfCpp->Stabilize();
  return result;
};

JPC_Ragdoll_t * JPC_RagdollSettings_CreateRagdoll(
  JPC_RagdollSettings_t * self,
  long inCollisionGroup,
  long inUserData,
  JPC_PhysicsSystem_t * inSystem
) {
  RagdollSettings * selfCpp = static_cast<RagdollSettings *>(self->obj);
  Ragdoll * result = selfCpp->CreateRagdoll(
  inCollisionGroup,
  inUserData,
  reinterpret_cast<PhysicsSystem *>(inSystem->obj)
  );
  return reinterpret_cast<JPC_Ragdoll_t *>(result);
};

JPC_Skeleton_t * JPC_RagdollSettings_GetSkeleton(
  JPC_RagdollSettings_t * self
) {
  RagdollSettings * selfCpp = static_cast<RagdollSettings *>(self->obj);
  Skeleton * result = selfCpp->GetSkeleton();
  return reinterpret_cast<JPC_Skeleton_t *>(result);
};

void JPC_RagdollSettings_DisableParentChildCollisions(
  JPC_RagdollSettings_t * self,
  const JPC_Mat44MemRef_t * inJointMatrices,
  float inMinSeparationDistance
) {
  RagdollSettings * selfCpp = static_cast<RagdollSettings *>(self->obj);
  
  selfCpp->DisableParentChildCollisions(
  reinterpret_cast<Mat44MemRef *>(inJointMatrices->obj),
  inMinSeparationDistance
  );
};

void JPC_RagdollSettings_CalculateBodyIndexToConstraintIndex(
  JPC_RagdollSettings_t * self
) {
  RagdollSettings * selfCpp = static_cast<RagdollSettings *>(self->obj);
  
  selfCpp->CalculateBodyIndexToConstraintIndex();
};

void JPC_RagdollSettings_CalculateConstraintIndexToBodyIdxPair(
  JPC_RagdollSettings_t * self
) {
  RagdollSettings * selfCpp = static_cast<RagdollSettings *>(self->obj);
  
  selfCpp->CalculateConstraintIndexToBodyIdxPair();
};

//endregion functions

//region properties

JPC_Skeleton_t * JPC_RagdollSettings_mSkeleton_Get(
  JPC_RagdollSettings_t * self
) {
  RagdollSettings * selfCpp = static_cast<RagdollSettings *>(self->obj);
  Skeleton * result = selfCpp->mSkeleton;
  return reinterpret_cast<JPC_Skeleton_t *>(result);
};

void JPC_RagdollSettings_mSkeleton_Set(
  JPC_RagdollSettings_t * self,
  JPC_Skeleton_t * mSkeleton
) {
  RagdollSettings * selfCpp = static_cast<RagdollSettings *>(self->obj);
  selfCpp->mSkeleton = reinterpret_cast<Skeleton *>(mSkeleton->obj);
};

JPC_ArrayRagdollPart_t * JPC_RagdollSettings_mParts_Get(
  JPC_RagdollSettings_t * self
) {
  RagdollSettings * selfCpp = static_cast<RagdollSettings *>(self->obj);
  ArrayRagdollPart resultValue = selfCpp->mParts;
  ArrayRagdollPart* result = new ArrayRagdollPart(resultValue);
  return reinterpret_cast<JPC_ArrayRagdollPart_t *>(result);
};

void JPC_RagdollSettings_mParts_Set(
  JPC_RagdollSettings_t * self,
  JPC_ArrayRagdollPart_t * mParts
) {
  RagdollSettings * selfCpp = static_cast<RagdollSettings *>(self->obj);
  selfCpp->mParts = *reinterpret_cast<ArrayRagdollPart *>(mParts->obj);
};

JPC_ArrayRagdollAdditionalConstraint_t * JPC_RagdollSettings_mAdditionalConstraints_Get(
  JPC_RagdollSettings_t * self
) {
  RagdollSettings * selfCpp = static_cast<RagdollSettings *>(self->obj);
  ArrayRagdollAdditionalConstraint resultValue = selfCpp->mAdditionalConstraints;
  ArrayRagdollAdditionalConstraint* result = new ArrayRagdollAdditionalConstraint(resultValue);
  return reinterpret_cast<JPC_ArrayRagdollAdditionalConstraint_t *>(result);
};

void JPC_RagdollSettings_mAdditionalConstraints_Set(
  JPC_RagdollSettings_t * self,
  JPC_ArrayRagdollAdditionalConstraint_t * mAdditionalConstraints
) {
  RagdollSettings * selfCpp = static_cast<RagdollSettings *>(self->obj);
  selfCpp->mAdditionalConstraints = *reinterpret_cast<ArrayRagdollAdditionalConstraint *>(mAdditionalConstraints->obj);
};

//endregion properties

#ifdef __cplusplus
}
#endif

