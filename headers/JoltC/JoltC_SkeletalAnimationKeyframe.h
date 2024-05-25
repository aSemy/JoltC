#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_SkeletalAnimationKeyframe_t * JoltC_SkeletalAnimationKeyframe_new(
  char** outErrMsg
);

//endregion constructors

//region functions

void JoltC_SkeletalAnimationKeyframe_FromMatrix(
  JoltC_SkeletalAnimationKeyframe_t * self,
  const JoltC_Mat44_t * inMatrix,
  char** outErrMsg
);

JoltC_Mat44_t * JoltC_SkeletalAnimationKeyframe_ToMatrix(
  JoltC_SkeletalAnimationKeyframe_t * self,
  char** outErrMsg
);

//endregion functions

//region properties

float JoltC_SkeletalAnimationKeyframe_mTime_Get(
  JoltC_SkeletalAnimationKeyframe_t * self,
  char** outErrMsg
);

void JoltC_SkeletalAnimationKeyframe_mTime_Set(
  JoltC_SkeletalAnimationKeyframe_t * self,
  float mTime,
  char** outErrMsg
);

JoltC_Vec3_t * JoltC_SkeletalAnimationKeyframe_mTranslation_Get(
  JoltC_SkeletalAnimationKeyframe_t * self,
  char** outErrMsg
);

void JoltC_SkeletalAnimationKeyframe_mTranslation_Set(
  JoltC_SkeletalAnimationKeyframe_t * self,
  JoltC_Vec3_t * mTranslation,
  char** outErrMsg
);

JoltC_Quat_t * JoltC_SkeletalAnimationKeyframe_mRotation_Get(
  JoltC_SkeletalAnimationKeyframe_t * self,
  char** outErrMsg
);

void JoltC_SkeletalAnimationKeyframe_mRotation_Set(
  JoltC_SkeletalAnimationKeyframe_t * self,
  JoltC_Quat_t * mRotation,
  char** outErrMsg
);

//endregion properties


#ifdef __cplusplus
}
#endif

