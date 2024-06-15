#include "JoltC/JoltC_ArraySkeletonKeyframe.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

/**
  Construct a new `ArraySkeletonKeyframe` instance.
 */
JoltC_ArraySkeletonKeyframe_t * JoltC_ArraySkeletonKeyframe_new() {
  JoltC_ArraySkeletonKeyframe_t * cInstance = new JoltC_ArraySkeletonKeyframe_t();
  ArraySkeletonKeyframe * cppInstance = new ArraySkeletonKeyframe();
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion

//region destructor

void JoltC_ArraySkeletonKeyframe_destroy(
  JoltC_ArraySkeletonKeyframe_t * self
){
  if (self == NULL) return;
  delete static_cast<ArraySkeletonKeyframe *>(self->obj);
  free(self);
}

//endregion
//region functions

bool JoltC_ArraySkeletonKeyframe_empty(
  JoltC_ArraySkeletonKeyframe_t * self
) {
  ArraySkeletonKeyframe * selfCpp = static_cast<ArraySkeletonKeyframe *>(self->obj);
  return selfCpp->empty();
}

long JoltC_ArraySkeletonKeyframe_size(
  JoltC_ArraySkeletonKeyframe_t * self
) {
  ArraySkeletonKeyframe * selfCpp = static_cast<ArraySkeletonKeyframe *>(self->obj);
  return selfCpp->size();
}

JoltC_SkeletalAnimationKeyframe_t * JoltC_ArraySkeletonKeyframe_at(
  JoltC_ArraySkeletonKeyframe_t * self,
  long inIndex
) {
  ArraySkeletonKeyframe * selfCpp = static_cast<ArraySkeletonKeyframe *>(self->obj);
  SkeletalAnimationKeyframe* resultRef = &selfCpp->at(
    inIndex
  );
  JoltC_SkeletalAnimationKeyframe_t* result = new JoltC_SkeletalAnimationKeyframe_t();
  result->obj = reinterpret_cast<void*>(resultRef);
  return result;
}

void JoltC_ArraySkeletonKeyframe_push_back(
  JoltC_ArraySkeletonKeyframe_t * self,
  JoltC_SkeletalAnimationKeyframe_t * inValue
) {
  ArraySkeletonKeyframe * selfCpp = static_cast<ArraySkeletonKeyframe *>(self->obj);
  SkeletalAnimationKeyframe * inValueCpp = static_cast<SkeletalAnimationKeyframe *>(inValue->obj);
  selfCpp->push_back(
    *inValueCpp
  );
}

void JoltC_ArraySkeletonKeyframe_reserve(
  JoltC_ArraySkeletonKeyframe_t * self,
  unsigned long inSize
) {
  ArraySkeletonKeyframe * selfCpp = static_cast<ArraySkeletonKeyframe *>(self->obj);
  selfCpp->reserve(
    inSize
  );
}

void JoltC_ArraySkeletonKeyframe_resize(
  JoltC_ArraySkeletonKeyframe_t * self,
  unsigned long inSize
) {
  ArraySkeletonKeyframe * selfCpp = static_cast<ArraySkeletonKeyframe *>(self->obj);
  selfCpp->resize(
    inSize
  );
}

void JoltC_ArraySkeletonKeyframe_clear(
  JoltC_ArraySkeletonKeyframe_t * self
) {
  ArraySkeletonKeyframe * selfCpp = static_cast<ArraySkeletonKeyframe *>(self->obj);
  selfCpp->clear();
}

//endregion


#ifdef __cplusplus
}
#endif
