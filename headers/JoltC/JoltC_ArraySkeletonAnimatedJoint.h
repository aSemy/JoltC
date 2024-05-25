#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_ArraySkeletonAnimatedJoint_t * JoltC_ArraySkeletonAnimatedJoint_new(
  char** outErrMsg
);

//endregion constructors

//region functions

bool JoltC_ArraySkeletonAnimatedJoint_empty(
  JoltC_ArraySkeletonAnimatedJoint_t * self,
  char** outErrMsg
);

long JoltC_ArraySkeletonAnimatedJoint_size(
  JoltC_ArraySkeletonAnimatedJoint_t * self,
  char** outErrMsg
);

JoltC_SkeletalAnimationAnimatedJoint_t * JoltC_ArraySkeletonAnimatedJoint_at(
  JoltC_ArraySkeletonAnimatedJoint_t * self,
  long inIndex,
  char** outErrMsg
);

void JoltC_ArraySkeletonAnimatedJoint_push_back(
  JoltC_ArraySkeletonAnimatedJoint_t * self,
  JoltC_SkeletalAnimationAnimatedJoint_t * inValue,
  char** outErrMsg
);

void JoltC_ArraySkeletonAnimatedJoint_reserve(
  JoltC_ArraySkeletonAnimatedJoint_t * self,
  unsigned long inSize,
  char** outErrMsg
);

void JoltC_ArraySkeletonAnimatedJoint_resize(
  JoltC_ArraySkeletonAnimatedJoint_t * self,
  unsigned long inSize,
  char** outErrMsg
);

void JoltC_ArraySkeletonAnimatedJoint_clear(
  JoltC_ArraySkeletonAnimatedJoint_t * self,
  char** outErrMsg
);

//endregion functions


#ifdef __cplusplus
}
#endif

