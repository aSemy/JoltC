#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JPC_SkeletalAnimationAnimatedJoint_t * JPC_SkeletalAnimationAnimatedJoint_new();

//endregion constructors

//region properties

JPC_JPHString_t * JPC_SkeletalAnimationAnimatedJoint_mJointName_Get(
  JPC_SkeletalAnimationAnimatedJoint_t * self
);

void JPC_SkeletalAnimationAnimatedJoint_mJointName_Set(
  JPC_SkeletalAnimationAnimatedJoint_t * self,
  JPC_JPHString_t * mJointName
);

JPC_ArraySkeletonKeyframe_t * JPC_SkeletalAnimationAnimatedJoint_mKeyframes_Get(
  JPC_SkeletalAnimationAnimatedJoint_t * self
);

void JPC_SkeletalAnimationAnimatedJoint_mKeyframes_Set(
  JPC_SkeletalAnimationAnimatedJoint_t * self,
  JPC_ArraySkeletonKeyframe_t * mKeyframes
);

//endregion properties


#ifdef __cplusplus
}
#endif

