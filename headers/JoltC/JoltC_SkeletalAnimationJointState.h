#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region converters

/**
 * Convert an instance of JoltC_SkeletalAnimationKeyframe_t into JoltC_SkeletalAnimationJointState_t.
 */
JoltC_SkeletalAnimationJointState_t * JoltC_SkeletalAnimationJointState_From_SkeletalAnimationKeyframe(
  JoltC_SkeletalAnimationKeyframe_t * subtype
);

//endregion

//region functions

void JoltC_SkeletalAnimationJointState_FromMatrix(
  JoltC_SkeletalAnimationJointState_t * self,
  const JoltC_Mat44_t * inMatrix
);

JoltC_Mat44_t * JoltC_SkeletalAnimationJointState_ToMatrix(
  JoltC_SkeletalAnimationJointState_t * self
);

//endregion

//region properties

JoltC_Vec3_t * JoltC_SkeletalAnimationJointState_mTranslation_Get(
  JoltC_SkeletalAnimationJointState_t * self
);

void JoltC_SkeletalAnimationJointState_mTranslation_Set(
  JoltC_SkeletalAnimationJointState_t * self,
  JoltC_Vec3_t * mTranslation
);

JoltC_Quat_t * JoltC_SkeletalAnimationJointState_mRotation_Get(
  JoltC_SkeletalAnimationJointState_t * self
);

void JoltC_SkeletalAnimationJointState_mRotation_Set(
  JoltC_SkeletalAnimationJointState_t * self,
  JoltC_Quat_t * mRotation
);

//endregion


#ifdef __cplusplus
}
#endif

