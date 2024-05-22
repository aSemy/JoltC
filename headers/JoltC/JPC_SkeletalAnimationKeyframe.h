#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JPC_SkeletalAnimationKeyframe_t * JPC_SkeletalAnimationKeyframe_new();

//endregion constructors

//region functions

void JPC_SkeletalAnimationKeyframe_FromMatrix(
  JPC_SkeletalAnimationKeyframe_t * self,
  const JPC_Mat44_t * inMatrix
);

JPC_Mat44_t * JPC_SkeletalAnimationKeyframe_ToMatrix(
  JPC_SkeletalAnimationKeyframe_t * self
);

//endregion functions

//region properties

float JPC_SkeletalAnimationKeyframe_mTime_Get(
  JPC_SkeletalAnimationKeyframe_t * self
);

void JPC_SkeletalAnimationKeyframe_mTime_Set(
  JPC_SkeletalAnimationKeyframe_t * self,
  float mTime
);

JPC_Vec3_t * JPC_SkeletalAnimationKeyframe_mTranslation_Get(
  JPC_SkeletalAnimationKeyframe_t * self
);

void JPC_SkeletalAnimationKeyframe_mTranslation_Set(
  JPC_SkeletalAnimationKeyframe_t * self,
  JPC_Vec3_t * mTranslation
);

JPC_Quat_t * JPC_SkeletalAnimationKeyframe_mRotation_Get(
  JPC_SkeletalAnimationKeyframe_t * self
);

void JPC_SkeletalAnimationKeyframe_mRotation_Set(
  JPC_SkeletalAnimationKeyframe_t * self,
  JPC_Quat_t * mRotation
);

//endregion properties


#ifdef __cplusplus
}
#endif

