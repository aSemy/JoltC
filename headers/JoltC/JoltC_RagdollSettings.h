#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_RagdollSettings_t * JoltC_RagdollSettings_new(
  char** outErrMsg
);

//endregion constructors

//region functions

bool JoltC_RagdollSettings_Stabilize(
  JoltC_RagdollSettings_t * self,
  char** outErrMsg
);

JoltC_Ragdoll_t * JoltC_RagdollSettings_CreateRagdoll(
  JoltC_RagdollSettings_t * self,
  long inCollisionGroup,
  long inUserData,
  JoltC_PhysicsSystem_t * inSystem,
  char** outErrMsg
);

JoltC_Skeleton_t * JoltC_RagdollSettings_GetSkeleton(
  JoltC_RagdollSettings_t * self,
  char** outErrMsg
);

void JoltC_RagdollSettings_DisableParentChildCollisions(
  JoltC_RagdollSettings_t * self,
  const JoltC_Mat44MemRef_t * inJointMatrices,
  float inMinSeparationDistance,
  char** outErrMsg
);

void JoltC_RagdollSettings_CalculateBodyIndexToConstraintIndex(
  JoltC_RagdollSettings_t * self,
  char** outErrMsg
);

void JoltC_RagdollSettings_CalculateConstraintIndexToBodyIdxPair(
  JoltC_RagdollSettings_t * self,
  char** outErrMsg
);

//endregion functions

//region properties

JoltC_Skeleton_t * JoltC_RagdollSettings_mSkeleton_Get(
  JoltC_RagdollSettings_t * self,
  char** outErrMsg
);

void JoltC_RagdollSettings_mSkeleton_Set(
  JoltC_RagdollSettings_t * self,
  JoltC_Skeleton_t * mSkeleton,
  char** outErrMsg
);

JoltC_ArrayRagdollPart_t * JoltC_RagdollSettings_mParts_Get(
  JoltC_RagdollSettings_t * self,
  char** outErrMsg
);

void JoltC_RagdollSettings_mParts_Set(
  JoltC_RagdollSettings_t * self,
  JoltC_ArrayRagdollPart_t * mParts,
  char** outErrMsg
);

JoltC_ArrayRagdollAdditionalConstraint_t * JoltC_RagdollSettings_mAdditionalConstraints_Get(
  JoltC_RagdollSettings_t * self,
  char** outErrMsg
);

void JoltC_RagdollSettings_mAdditionalConstraints_Set(
  JoltC_RagdollSettings_t * self,
  JoltC_ArrayRagdollAdditionalConstraint_t * mAdditionalConstraints,
  char** outErrMsg
);

//endregion properties


#ifdef __cplusplus
}
#endif

