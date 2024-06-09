#include "JoltC/JoltC_ArraySkeletonAnimatedJoint.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

/**
  Construct a new `ArraySkeletonAnimatedJoint` instance.
 */
JoltC_ArraySkeletonAnimatedJoint_t * JoltC_ArraySkeletonAnimatedJoint_new() {
  JoltC_ArraySkeletonAnimatedJoint_t * cInstance = new JoltC_ArraySkeletonAnimatedJoint_t();
  ArraySkeletonAnimatedJoint * cppInstance = new ArraySkeletonAnimatedJoint();
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion

//region functions

bool JoltC_ArraySkeletonAnimatedJoint_empty(
  JoltC_ArraySkeletonAnimatedJoint_t * self
) {
  ArraySkeletonAnimatedJoint * selfCpp = static_cast<ArraySkeletonAnimatedJoint *>(self->obj);
  return selfCpp->empty();
}

long JoltC_ArraySkeletonAnimatedJoint_size(
  JoltC_ArraySkeletonAnimatedJoint_t * self
) {
  ArraySkeletonAnimatedJoint * selfCpp = static_cast<ArraySkeletonAnimatedJoint *>(self->obj);
  return selfCpp->size();
}

JoltC_SkeletalAnimationAnimatedJoint_t * JoltC_ArraySkeletonAnimatedJoint_at(
  JoltC_ArraySkeletonAnimatedJoint_t * self,
  long inIndex
) {
  ArraySkeletonAnimatedJoint * selfCpp = static_cast<ArraySkeletonAnimatedJoint *>(self->obj);
  SkeletalAnimationAnimatedJoint* resultRef = &selfCpp->at(
    inIndex
  );
  JoltC_SkeletalAnimationAnimatedJoint_t* result = new JoltC_SkeletalAnimationAnimatedJoint_t();
  result->obj = reinterpret_cast<void*>(resultRef);
  return result;
}

void JoltC_ArraySkeletonAnimatedJoint_push_back(
  JoltC_ArraySkeletonAnimatedJoint_t * self,
  JoltC_SkeletalAnimationAnimatedJoint_t * inValue
) {
  ArraySkeletonAnimatedJoint * selfCpp = static_cast<ArraySkeletonAnimatedJoint *>(self->obj);
  SkeletalAnimationAnimatedJoint * inValueCpp = static_cast<SkeletalAnimationAnimatedJoint *>(inValue->obj);
  selfCpp->push_back(
    *inValueCpp
  );
}

void JoltC_ArraySkeletonAnimatedJoint_reserve(
  JoltC_ArraySkeletonAnimatedJoint_t * self,
  unsigned long inSize
) {
  ArraySkeletonAnimatedJoint * selfCpp = static_cast<ArraySkeletonAnimatedJoint *>(self->obj);
  selfCpp->reserve(
    inSize
  );
}

void JoltC_ArraySkeletonAnimatedJoint_resize(
  JoltC_ArraySkeletonAnimatedJoint_t * self,
  unsigned long inSize
) {
  ArraySkeletonAnimatedJoint * selfCpp = static_cast<ArraySkeletonAnimatedJoint *>(self->obj);
  selfCpp->resize(
    inSize
  );
}

void JoltC_ArraySkeletonAnimatedJoint_clear(
  JoltC_ArraySkeletonAnimatedJoint_t * self
) {
  ArraySkeletonAnimatedJoint * selfCpp = static_cast<ArraySkeletonAnimatedJoint *>(self->obj);
  selfCpp->clear();
}

//endregion

#ifdef __cplusplus
}
#endif

