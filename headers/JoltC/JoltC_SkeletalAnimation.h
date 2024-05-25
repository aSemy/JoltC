#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JPC_SkeletalAnimation_t * JPC_SkeletalAnimation_new();

//endregion constructors

//region functions

float JPC_SkeletalAnimation_GetDuration(
  JPC_SkeletalAnimation_t * self
);

void JPC_SkeletalAnimation_ScaleJoints(
  JPC_SkeletalAnimation_t * self,
  float inScale
);

void JPC_SkeletalAnimation_Sample(
  JPC_SkeletalAnimation_t * self,
  float inTime,
  JPC_SkeletonPose_t * ioPose
);

JPC_ArraySkeletonAnimatedJoint_t * JPC_SkeletalAnimation_GetAnimatedJoints(
  JPC_SkeletalAnimation_t * self
);

//endregion functions


#ifdef __cplusplus
}
#endif

