#pragma once
#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_ArraySkeletonKeyframe_t * JoltC_ArraySkeletonKeyframe_new();

//endregion

//region destructor

void JoltC_ArraySkeletonKeyframe_destroy(
  JoltC_ArraySkeletonKeyframe_t * self
);

//endregion
//region functions

bool JoltC_ArraySkeletonKeyframe_empty(
  JoltC_ArraySkeletonKeyframe_t * self
);

long JoltC_ArraySkeletonKeyframe_size(
  JoltC_ArraySkeletonKeyframe_t * self
);

JoltC_SkeletalAnimationKeyframe_t * JoltC_ArraySkeletonKeyframe_at(
  JoltC_ArraySkeletonKeyframe_t * self,
  long inIndex
);

void JoltC_ArraySkeletonKeyframe_push_back(
  JoltC_ArraySkeletonKeyframe_t * self,
  JoltC_SkeletalAnimationKeyframe_t * inValue
);

void JoltC_ArraySkeletonKeyframe_reserve(
  JoltC_ArraySkeletonKeyframe_t * self,
  unsigned long inSize
);

void JoltC_ArraySkeletonKeyframe_resize(
  JoltC_ArraySkeletonKeyframe_t * self,
  unsigned long inSize
);

void JoltC_ArraySkeletonKeyframe_clear(
  JoltC_ArraySkeletonKeyframe_t * self
);

//endregion


#ifdef __cplusplus
}
#endif
