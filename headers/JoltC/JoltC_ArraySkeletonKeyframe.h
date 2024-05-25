#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_ArraySkeletonKeyframe_t * JoltC_ArraySkeletonKeyframe_new(
  char** outErrMsg
);

//endregion constructors

//region functions

bool JoltC_ArraySkeletonKeyframe_empty(
  JoltC_ArraySkeletonKeyframe_t * self,
  char** outErrMsg
);

long JoltC_ArraySkeletonKeyframe_size(
  JoltC_ArraySkeletonKeyframe_t * self,
  char** outErrMsg
);

JoltC_SkeletalAnimationKeyframe_t * JoltC_ArraySkeletonKeyframe_at(
  JoltC_ArraySkeletonKeyframe_t * self,
  long inIndex,
  char** outErrMsg
);

void JoltC_ArraySkeletonKeyframe_push_back(
  JoltC_ArraySkeletonKeyframe_t * self,
  JoltC_SkeletalAnimationKeyframe_t * inValue,
  char** outErrMsg
);

void JoltC_ArraySkeletonKeyframe_reserve(
  JoltC_ArraySkeletonKeyframe_t * self,
  unsigned long inSize,
  char** outErrMsg
);

void JoltC_ArraySkeletonKeyframe_resize(
  JoltC_ArraySkeletonKeyframe_t * self,
  unsigned long inSize,
  char** outErrMsg
);

void JoltC_ArraySkeletonKeyframe_clear(
  JoltC_ArraySkeletonKeyframe_t * self,
  char** outErrMsg
);

//endregion functions


#ifdef __cplusplus
}
#endif

