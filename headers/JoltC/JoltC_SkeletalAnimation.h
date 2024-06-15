#pragma once
#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_SkeletalAnimation_t * JoltC_SkeletalAnimation_new();

//endregion

//region destructor

void JoltC_SkeletalAnimation_destroy(
  JoltC_SkeletalAnimation_t * self
);

//endregion
//region functions

float JoltC_SkeletalAnimation_GetDuration(
  JoltC_SkeletalAnimation_t * self
);

void JoltC_SkeletalAnimation_ScaleJoints(
  JoltC_SkeletalAnimation_t * self,
  float inScale
);

void JoltC_SkeletalAnimation_Sample(
  JoltC_SkeletalAnimation_t * self,
  float inTime,
  JoltC_SkeletonPose_t * ioPose
);

JoltC_ArraySkeletonAnimatedJoint_t * JoltC_SkeletalAnimation_GetAnimatedJoints(
  JoltC_SkeletalAnimation_t * self
);

//endregion


#ifdef __cplusplus
}
#endif
