#include "JoltC/JoltC_RagdollSettings.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_RagdollSettings_t * JoltC_RagdollSettings_new() {
  JoltC_RagdollSettings_t * cInstance = new JoltC_RagdollSettings_t();
  RagdollSettings * cppInstance = new RagdollSettings();
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion

//region functions

bool JoltC_RagdollSettings_Stabilize(
  JoltC_RagdollSettings_t * self
) {
  RagdollSettings * selfCpp = static_cast<RagdollSettings *>(self->obj);
  bool result = selfCpp->Stabilize();
  return result;
};

JoltC_Ragdoll_t * JoltC_RagdollSettings_CreateRagdoll(
  JoltC_RagdollSettings_t * self,
  long inCollisionGroup,
  long inUserData,
  JoltC_PhysicsSystem_t * inSystem
) {
  RagdollSettings * selfCpp = static_cast<RagdollSettings *>(self->obj);
  Ragdoll * resultValue = selfCpp->CreateRagdoll(
    inCollisionGroup,
    inUserData,
    reinterpret_cast<PhysicsSystem *>(inSystem->obj)
  );
  JoltC_Ragdoll_t* result = new JoltC_Ragdoll_t();
  result->obj = reinterpret_cast<void*>(&resultValue);
  return result;
};

JoltC_Skeleton_t * JoltC_RagdollSettings_GetSkeleton(
  JoltC_RagdollSettings_t * self
) {
  RagdollSettings * selfCpp = static_cast<RagdollSettings *>(self->obj);
  Skeleton * resultValue = selfCpp->GetSkeleton();
  JoltC_Skeleton_t* result = new JoltC_Skeleton_t();
  result->obj = reinterpret_cast<void*>(&resultValue);
  return result;
};

void JoltC_RagdollSettings_DisableParentChildCollisions(
  JoltC_RagdollSettings_t * self,
  JoltC_Mat44MemRef_t * inJointMatrices,
  float inMinSeparationDistance
) {
  RagdollSettings * selfCpp = static_cast<RagdollSettings *>(self->obj);
  
  selfCpp->DisableParentChildCollisions(
    reinterpret_cast<Mat44MemRef *>(inJointMatrices->obj),
    inMinSeparationDistance
  );
};

void JoltC_RagdollSettings_CalculateBodyIndexToConstraintIndex(
  JoltC_RagdollSettings_t * self
) {
  RagdollSettings * selfCpp = static_cast<RagdollSettings *>(self->obj);
  
  selfCpp->CalculateBodyIndexToConstraintIndex();
};

void JoltC_RagdollSettings_CalculateConstraintIndexToBodyIdxPair(
  JoltC_RagdollSettings_t * self
) {
  RagdollSettings * selfCpp = static_cast<RagdollSettings *>(self->obj);
  
  selfCpp->CalculateConstraintIndexToBodyIdxPair();
};

//endregion

//region properties

JoltC_Skeleton_t * JoltC_RagdollSettings_mSkeleton_Get(
  JoltC_RagdollSettings_t * self
) {
  RagdollSettings * selfCpp = static_cast<RagdollSettings *>(self->obj);
  Skeleton * resultValue = selfCpp->mSkeleton;
  JoltC_Skeleton_t* result = new JoltC_Skeleton_t();
  result->obj = reinterpret_cast<void*>(&resultValue);
  return result;
};

void JoltC_RagdollSettings_mSkeleton_Set(
  JoltC_RagdollSettings_t * self,
  JoltC_Skeleton_t * mSkeleton
) {
  RagdollSettings * selfCpp = static_cast<RagdollSettings *>(self->obj);
  selfCpp->mSkeleton = reinterpret_cast<Skeleton *>(mSkeleton->obj);
};

JoltC_ArrayRagdollPart_t * JoltC_RagdollSettings_mParts_Get(
  JoltC_RagdollSettings_t * self
) {
  RagdollSettings * selfCpp = static_cast<RagdollSettings *>(self->obj);
  static ArrayRagdollPart resultValue = selfCpp->mParts;
  JoltC_ArrayRagdollPart_t* result = new JoltC_ArrayRagdollPart_t();
  result->obj = reinterpret_cast<void*>(&resultValue);
  return result;
};

void JoltC_RagdollSettings_mParts_Set(
  JoltC_RagdollSettings_t * self,
  JoltC_ArrayRagdollPart_t * mParts
) {
  RagdollSettings * selfCpp = static_cast<RagdollSettings *>(self->obj);
  selfCpp->mParts = *reinterpret_cast<ArrayRagdollPart *>(mParts->obj);
};

JoltC_ArrayRagdollAdditionalConstraint_t * JoltC_RagdollSettings_mAdditionalConstraints_Get(
  JoltC_RagdollSettings_t * self
) {
  RagdollSettings * selfCpp = static_cast<RagdollSettings *>(self->obj);
  static ArrayRagdollAdditionalConstraint resultValue = selfCpp->mAdditionalConstraints;
  JoltC_ArrayRagdollAdditionalConstraint_t* result = new JoltC_ArrayRagdollAdditionalConstraint_t();
  result->obj = reinterpret_cast<void*>(&resultValue);
  return result;
};

void JoltC_RagdollSettings_mAdditionalConstraints_Set(
  JoltC_RagdollSettings_t * self,
  JoltC_ArrayRagdollAdditionalConstraint_t * mAdditionalConstraints
) {
  RagdollSettings * selfCpp = static_cast<RagdollSettings *>(self->obj);
  selfCpp->mAdditionalConstraints = *reinterpret_cast<ArrayRagdollAdditionalConstraint *>(mAdditionalConstraints->obj);
};

//endregion

#ifdef __cplusplus
}
#endif

