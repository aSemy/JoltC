#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JPC_RagdollSettings_t * JPC_RagdollSettings_new();

//endregion constructors

//region functions

bool JPC_RagdollSettings_Stabilize(
  JPC_RagdollSettings_t * self
);

JPC_Ragdoll_t * JPC_RagdollSettings_CreateRagdoll(
  JPC_RagdollSettings_t * self,
  long inCollisionGroup,
  long inUserData,
  JPC_PhysicsSystem_t * inSystem
);

JPC_Skeleton_t * JPC_RagdollSettings_GetSkeleton(
  JPC_RagdollSettings_t * self
);

void JPC_RagdollSettings_DisableParentChildCollisions(
  JPC_RagdollSettings_t * self,
  const JPC_Mat44MemRef_t * inJointMatrices,
  float inMinSeparationDistance
);

void JPC_RagdollSettings_CalculateBodyIndexToConstraintIndex(
  JPC_RagdollSettings_t * self
);

void JPC_RagdollSettings_CalculateConstraintIndexToBodyIdxPair(
  JPC_RagdollSettings_t * self
);

//endregion functions

//region properties

JPC_Skeleton_t * JPC_RagdollSettings_mSkeleton_Get(
  JPC_RagdollSettings_t * self
);

void JPC_RagdollSettings_mSkeleton_Set(
  JPC_RagdollSettings_t * self,
  JPC_Skeleton_t * mSkeleton
);

JPC_ArrayRagdollPart_t * JPC_RagdollSettings_mParts_Get(
  JPC_RagdollSettings_t * self
);

void JPC_RagdollSettings_mParts_Set(
  JPC_RagdollSettings_t * self,
  JPC_ArrayRagdollPart_t * mParts
);

JPC_ArrayRagdollAdditionalConstraint_t * JPC_RagdollSettings_mAdditionalConstraints_Get(
  JPC_RagdollSettings_t * self
);

void JPC_RagdollSettings_mAdditionalConstraints_Set(
  JPC_RagdollSettings_t * self,
  JPC_ArrayRagdollAdditionalConstraint_t * mAdditionalConstraints
);

//endregion properties


#ifdef __cplusplus
}
#endif

