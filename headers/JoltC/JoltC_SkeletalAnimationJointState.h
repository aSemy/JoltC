#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region functions

void JoltC_SkeletalAnimationJointState_FromMatrix(
  JoltC_SkeletalAnimationJointState_t * self,
  const JoltC_Mat44_t * inMatrix,
  char** outErrMsg
);

JoltC_Mat44_t * JoltC_SkeletalAnimationJointState_ToMatrix(
  JoltC_SkeletalAnimationJointState_t * self,
  char** outErrMsg
);

//endregion functions

//region properties

JoltC_Vec3_t * JoltC_SkeletalAnimationJointState_mTranslation_Get(
  JoltC_SkeletalAnimationJointState_t * self,
  char** outErrMsg
);

void JoltC_SkeletalAnimationJointState_mTranslation_Set(
  JoltC_SkeletalAnimationJointState_t * self,
  JoltC_Vec3_t * mTranslation,
  char** outErrMsg
);

JoltC_Quat_t * JoltC_SkeletalAnimationJointState_mRotation_Get(
  JoltC_SkeletalAnimationJointState_t * self,
  char** outErrMsg
);

void JoltC_SkeletalAnimationJointState_mRotation_Set(
  JoltC_SkeletalAnimationJointState_t * self,
  JoltC_Quat_t * mRotation,
  char** outErrMsg
);

//endregion properties


#ifdef __cplusplus
}
#endif

