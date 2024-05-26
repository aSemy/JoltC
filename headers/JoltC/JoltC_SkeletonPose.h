#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_SkeletonPose_t * JoltC_SkeletonPose_new();

//endregion

//region functions

void JoltC_SkeletonPose_SetSkeleton(
  JoltC_SkeletonPose_t * self,
  JoltC_Skeleton_t * inSkeleton
);

JoltC_Skeleton_t * JoltC_SkeletonPose_GetSkeleton(
  JoltC_SkeletonPose_t * self
);

void JoltC_SkeletonPose_SetRootOffset(
  JoltC_SkeletonPose_t * self,
  JoltC_RVec3_t * inOffset
);

JoltC_RVec3_t * JoltC_SkeletonPose_GetRootOffset(
  JoltC_SkeletonPose_t * self
);

long JoltC_SkeletonPose_GetJointCount(
  JoltC_SkeletonPose_t * self
);

JoltC_SkeletalAnimationJointState_t * JoltC_SkeletonPose_GetJoint(
  JoltC_SkeletonPose_t * self,
  long inJoint
);

JoltC_ArrayMat44_t * JoltC_SkeletonPose_GetJointMatrices(
  JoltC_SkeletonPose_t * self
);

JoltC_Mat44_t * JoltC_SkeletonPose_GetJointMatrix(
  JoltC_SkeletonPose_t * self,
  long inJoint
);

void JoltC_SkeletonPose_CalculateJointMatrices(
  JoltC_SkeletonPose_t * self
);

void JoltC_SkeletonPose_CalculateJointStates(
  JoltC_SkeletonPose_t * self
);

//endregion


#ifdef __cplusplus
}
#endif

