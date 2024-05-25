#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_SkeletalAnimation_t * JoltC_SkeletalAnimation_new(
  char** outErrMsg
);

//endregion constructors

//region functions

float JoltC_SkeletalAnimation_GetDuration(
  JoltC_SkeletalAnimation_t * self,
  char** outErrMsg
);

void JoltC_SkeletalAnimation_ScaleJoints(
  JoltC_SkeletalAnimation_t * self,
  float inScale,
  char** outErrMsg
);

void JoltC_SkeletalAnimation_Sample(
  JoltC_SkeletalAnimation_t * self,
  float inTime,
  JoltC_SkeletonPose_t * ioPose,
  char** outErrMsg
);

JoltC_ArraySkeletonAnimatedJoint_t * JoltC_SkeletalAnimation_GetAnimatedJoints(
  JoltC_SkeletalAnimation_t * self,
  char** outErrMsg
);

//endregion functions


#ifdef __cplusplus
}
#endif

