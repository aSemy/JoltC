#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_RagdollSettings_t * JoltC_RagdollSettings_new();

//endregion

//region functions

bool JoltC_RagdollSettings_Stabilize(
  JoltC_RagdollSettings_t * self
);

JoltC_Ragdoll_t * JoltC_RagdollSettings_CreateRagdoll(
  JoltC_RagdollSettings_t * self,
  long inCollisionGroup,
  long inUserData,
  JoltC_PhysicsSystem_t * inSystem
);

JoltC_Skeleton_t * JoltC_RagdollSettings_GetSkeleton(
  JoltC_RagdollSettings_t * self
);

void JoltC_RagdollSettings_DisableParentChildCollisions(
  JoltC_RagdollSettings_t * self,
  const JoltC_Mat44MemRef_t * inJointMatrices,
  float inMinSeparationDistance
);

void JoltC_RagdollSettings_CalculateBodyIndexToConstraintIndex(
  JoltC_RagdollSettings_t * self
);

void JoltC_RagdollSettings_CalculateConstraintIndexToBodyIdxPair(
  JoltC_RagdollSettings_t * self
);

//endregion

//region properties

JoltC_Skeleton_t * JoltC_RagdollSettings_mSkeleton_Get(
  JoltC_RagdollSettings_t * self
);

void JoltC_RagdollSettings_mSkeleton_Set(
  JoltC_RagdollSettings_t * self,
  JoltC_Skeleton_t * mSkeleton
);

JoltC_ArrayRagdollPart_t * JoltC_RagdollSettings_mParts_Get(
  JoltC_RagdollSettings_t * self
);

void JoltC_RagdollSettings_mParts_Set(
  JoltC_RagdollSettings_t * self,
  JoltC_ArrayRagdollPart_t * mParts
);

JoltC_ArrayRagdollAdditionalConstraint_t * JoltC_RagdollSettings_mAdditionalConstraints_Get(
  JoltC_RagdollSettings_t * self
);

void JoltC_RagdollSettings_mAdditionalConstraints_Set(
  JoltC_RagdollSettings_t * self,
  JoltC_ArrayRagdollAdditionalConstraint_t * mAdditionalConstraints
);

//endregion


#ifdef __cplusplus
}
#endif

