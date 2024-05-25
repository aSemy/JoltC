#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_SkeletalAnimationAnimatedJoint_t * JoltC_SkeletalAnimationAnimatedJoint_new(
  char** outErrMsg
);

//endregion constructors

//region properties

JoltC_JPHString_t * JoltC_SkeletalAnimationAnimatedJoint_mJointName_Get(
  JoltC_SkeletalAnimationAnimatedJoint_t * self,
  char** outErrMsg
);

void JoltC_SkeletalAnimationAnimatedJoint_mJointName_Set(
  JoltC_SkeletalAnimationAnimatedJoint_t * self,
  JoltC_JPHString_t * mJointName,
  char** outErrMsg
);

JoltC_ArraySkeletonKeyframe_t * JoltC_SkeletalAnimationAnimatedJoint_mKeyframes_Get(
  JoltC_SkeletalAnimationAnimatedJoint_t * self,
  char** outErrMsg
);

void JoltC_SkeletalAnimationAnimatedJoint_mKeyframes_Set(
  JoltC_SkeletalAnimationAnimatedJoint_t * self,
  JoltC_ArraySkeletonKeyframe_t * mKeyframes,
  char** outErrMsg
);

//endregion properties


#ifdef __cplusplus
}
#endif

