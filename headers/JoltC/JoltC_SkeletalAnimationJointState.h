#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region functions

void JPC_SkeletalAnimationJointState_FromMatrix(
  JPC_SkeletalAnimationJointState_t * self,
  const JPC_Mat44_t * inMatrix
);

JPC_Mat44_t * JPC_SkeletalAnimationJointState_ToMatrix(
  JPC_SkeletalAnimationJointState_t * self
);

//endregion functions

//region properties

JPC_Vec3_t * JPC_SkeletalAnimationJointState_mTranslation_Get(
  JPC_SkeletalAnimationJointState_t * self
);

void JPC_SkeletalAnimationJointState_mTranslation_Set(
  JPC_SkeletalAnimationJointState_t * self,
  JPC_Vec3_t * mTranslation
);

JPC_Quat_t * JPC_SkeletalAnimationJointState_mRotation_Get(
  JPC_SkeletalAnimationJointState_t * self
);

void JPC_SkeletalAnimationJointState_mRotation_Set(
  JPC_SkeletalAnimationJointState_t * self,
  JPC_Quat_t * mRotation
);

//endregion properties


#ifdef __cplusplus
}
#endif

