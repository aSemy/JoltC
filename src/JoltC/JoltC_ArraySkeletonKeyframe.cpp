#include "JoltC/JoltC_ArraySkeletonKeyframe.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_ArraySkeletonKeyframe_t * JoltC_ArraySkeletonKeyframe_new() {
  JoltC_ArraySkeletonKeyframe_t * cInstance = new JoltC_ArraySkeletonKeyframe_t();
  ArraySkeletonKeyframe * cppInstance = new ArraySkeletonKeyframe();
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion

//region functions

bool JoltC_ArraySkeletonKeyframe_empty(
  JoltC_ArraySkeletonKeyframe_t * self
) {
  ArraySkeletonKeyframe * selfCpp = static_cast<ArraySkeletonKeyframe *>(self->obj);
  bool result = selfCpp->empty();
  return result;
};

long JoltC_ArraySkeletonKeyframe_size(
  JoltC_ArraySkeletonKeyframe_t * self
) {
  ArraySkeletonKeyframe * selfCpp = static_cast<ArraySkeletonKeyframe *>(self->obj);
  long result = selfCpp->size();
  return result;
};

JoltC_SkeletalAnimationKeyframe_t * JoltC_ArraySkeletonKeyframe_at(
  JoltC_ArraySkeletonKeyframe_t * self,
  long inIndex
) {
  ArraySkeletonKeyframe * selfCpp = static_cast<ArraySkeletonKeyframe *>(self->obj);
  SkeletalAnimationKeyframe& resultRef = selfCpp->at(
  inIndex
  );
  SkeletalAnimationKeyframe * result = &resultRef;
  return reinterpret_cast<JoltC_SkeletalAnimationKeyframe_t *>(result);
};

void JoltC_ArraySkeletonKeyframe_push_back(
  JoltC_ArraySkeletonKeyframe_t * self,
  JoltC_SkeletalAnimationKeyframe_t * inValue
) {
  ArraySkeletonKeyframe * selfCpp = static_cast<ArraySkeletonKeyframe *>(self->obj);
  
  selfCpp->push_back(
  *reinterpret_cast<SkeletalAnimationKeyframe *>(inValue->obj)
  );
};

void JoltC_ArraySkeletonKeyframe_reserve(
  JoltC_ArraySkeletonKeyframe_t * self,
  unsigned long inSize
) {
  ArraySkeletonKeyframe * selfCpp = static_cast<ArraySkeletonKeyframe *>(self->obj);
  
  selfCpp->reserve(
  inSize
  );
};

void JoltC_ArraySkeletonKeyframe_resize(
  JoltC_ArraySkeletonKeyframe_t * self,
  unsigned long inSize
) {
  ArraySkeletonKeyframe * selfCpp = static_cast<ArraySkeletonKeyframe *>(self->obj);
  
  selfCpp->resize(
  inSize
  );
};

void JoltC_ArraySkeletonKeyframe_clear(
  JoltC_ArraySkeletonKeyframe_t * self
) {
  ArraySkeletonKeyframe * selfCpp = static_cast<ArraySkeletonKeyframe *>(self->obj);
  
  selfCpp->clear();
};

//endregion

#ifdef __cplusplus
}
#endif

