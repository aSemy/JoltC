#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JPC_ArraySkeletonKeyframe_t * JPC_ArraySkeletonKeyframe_new();

//endregion constructors

//region functions

bool JPC_ArraySkeletonKeyframe_empty(
  JPC_ArraySkeletonKeyframe_t * self
);

long JPC_ArraySkeletonKeyframe_size(
  JPC_ArraySkeletonKeyframe_t * self
);

JPC_SkeletalAnimationKeyframe_t * JPC_ArraySkeletonKeyframe_at(
  JPC_ArraySkeletonKeyframe_t * self,
  long inIndex
);

void JPC_ArraySkeletonKeyframe_push_back(
  JPC_ArraySkeletonKeyframe_t * self,
  JPC_SkeletalAnimationKeyframe_t * inValue
);

void JPC_ArraySkeletonKeyframe_reserve(
  JPC_ArraySkeletonKeyframe_t * self,
  unsigned long inSize
);

void JPC_ArraySkeletonKeyframe_resize(
  JPC_ArraySkeletonKeyframe_t * self,
  unsigned long inSize
);

void JPC_ArraySkeletonKeyframe_clear(
  JPC_ArraySkeletonKeyframe_t * self
);

//endregion functions


#ifdef __cplusplus
}
#endif

