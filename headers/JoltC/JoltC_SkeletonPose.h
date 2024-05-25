#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_SkeletonPose_t * JoltC_SkeletonPose_new(
  char** outErrMsg
);

//endregion constructors

//region functions

void JoltC_SkeletonPose_SetSkeleton(
  JoltC_SkeletonPose_t * self,
  const JoltC_Skeleton_t * inSkeleton,
  char** outErrMsg
);

const JoltC_Skeleton_t * JoltC_SkeletonPose_GetSkeleton(
  JoltC_SkeletonPose_t * self,
  char** outErrMsg
);

void JoltC_SkeletonPose_SetRootOffset(
  JoltC_SkeletonPose_t * self,
  JoltC_RVec3_t * inOffset,
  char** outErrMsg
);

JoltC_RVec3_t * JoltC_SkeletonPose_GetRootOffset(
  JoltC_SkeletonPose_t * self,
  char** outErrMsg
);

long JoltC_SkeletonPose_GetJointCount(
  JoltC_SkeletonPose_t * self,
  char** outErrMsg
);

JoltC_SkeletalAnimationJointState_t * JoltC_SkeletonPose_GetJoint(
  JoltC_SkeletonPose_t * self,
  long inJoint,
  char** outErrMsg
);

JoltC_ArrayMat44_t * JoltC_SkeletonPose_GetJointMatrices(
  JoltC_SkeletonPose_t * self,
  char** outErrMsg
);

JoltC_Mat44_t * JoltC_SkeletonPose_GetJointMatrix(
  JoltC_SkeletonPose_t * self,
  long inJoint,
  char** outErrMsg
);

void JoltC_SkeletonPose_CalculateJointMatrices(
  JoltC_SkeletonPose_t * self,
  char** outErrMsg
);

void JoltC_SkeletonPose_CalculateJointStates(
  JoltC_SkeletonPose_t * self,
  char** outErrMsg
);

//endregion functions


#ifdef __cplusplus
}
#endif

