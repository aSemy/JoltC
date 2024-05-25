#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JPC_ArraySkeletonAnimatedJoint_t * JPC_ArraySkeletonAnimatedJoint_new();

//endregion constructors

//region functions

bool JPC_ArraySkeletonAnimatedJoint_empty(
  JPC_ArraySkeletonAnimatedJoint_t * self
);

long JPC_ArraySkeletonAnimatedJoint_size(
  JPC_ArraySkeletonAnimatedJoint_t * self
);

JPC_SkeletalAnimationAnimatedJoint_t * JPC_ArraySkeletonAnimatedJoint_at(
  JPC_ArraySkeletonAnimatedJoint_t * self,
  long inIndex
);

void JPC_ArraySkeletonAnimatedJoint_push_back(
  JPC_ArraySkeletonAnimatedJoint_t * self,
  JPC_SkeletalAnimationAnimatedJoint_t * inValue
);

void JPC_ArraySkeletonAnimatedJoint_reserve(
  JPC_ArraySkeletonAnimatedJoint_t * self,
  unsigned long inSize
);

void JPC_ArraySkeletonAnimatedJoint_resize(
  JPC_ArraySkeletonAnimatedJoint_t * self,
  unsigned long inSize
);

void JPC_ArraySkeletonAnimatedJoint_clear(
  JPC_ArraySkeletonAnimatedJoint_t * self
);

//endregion functions


#ifdef __cplusplus
}
#endif

