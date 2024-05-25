#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JPC_SkeletonPose_t * JPC_SkeletonPose_new();

//endregion constructors

//region functions

void JPC_SkeletonPose_SetSkeleton(
  JPC_SkeletonPose_t * self,
  const JPC_Skeleton_t * inSkeleton
);

const JPC_Skeleton_t * JPC_SkeletonPose_GetSkeleton(
  JPC_SkeletonPose_t * self
);

void JPC_SkeletonPose_SetRootOffset(
  JPC_SkeletonPose_t * self,
  JPC_RVec3_t * inOffset
);

JPC_RVec3_t * JPC_SkeletonPose_GetRootOffset(
  JPC_SkeletonPose_t * self
);

long JPC_SkeletonPose_GetJointCount(
  JPC_SkeletonPose_t * self
);

JPC_SkeletalAnimationJointState_t * JPC_SkeletonPose_GetJoint(
  JPC_SkeletonPose_t * self,
  long inJoint
);

JPC_ArrayMat44_t * JPC_SkeletonPose_GetJointMatrices(
  JPC_SkeletonPose_t * self
);

JPC_Mat44_t * JPC_SkeletonPose_GetJointMatrix(
  JPC_SkeletonPose_t * self,
  long inJoint
);

void JPC_SkeletonPose_CalculateJointMatrices(
  JPC_SkeletonPose_t * self
);

void JPC_SkeletonPose_CalculateJointStates(
  JPC_SkeletonPose_t * self
);

//endregion functions


#ifdef __cplusplus
}
#endif

