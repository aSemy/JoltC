#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_SkeletalAnimationAnimatedJoint_t * JoltC_SkeletalAnimationAnimatedJoint_new();

//endregion

//region properties

JoltC_JPHString_t * JoltC_SkeletalAnimationAnimatedJoint_mJointName_Get(
  JoltC_SkeletalAnimationAnimatedJoint_t * self
);

void JoltC_SkeletalAnimationAnimatedJoint_mJointName_Set(
  JoltC_SkeletalAnimationAnimatedJoint_t * self,
  JoltC_JPHString_t * mJointName
);

JoltC_ArraySkeletonKeyframe_t * JoltC_SkeletalAnimationAnimatedJoint_mKeyframes_Get(
  JoltC_SkeletalAnimationAnimatedJoint_t * self
);

void JoltC_SkeletalAnimationAnimatedJoint_mKeyframes_Set(
  JoltC_SkeletalAnimationAnimatedJoint_t * self,
  JoltC_ArraySkeletonKeyframe_t * mKeyframes
);

//endregion


#ifdef __cplusplus
}
#endif

