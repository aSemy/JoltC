#include "JoltC/JPC_ArraySkeletonKeyframe.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JPC_ArraySkeletonKeyframe_t * JPC_ArraySkeletonKeyframe_new() {
  JPC_ArraySkeletonKeyframe_t * cInstance = new JPC_ArraySkeletonKeyframe_t();
  ArraySkeletonKeyframe * cppInstance = new ArraySkeletonKeyframe();
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion constructors

//region functions

bool JPC_ArraySkeletonKeyframe_empty(
  JPC_ArraySkeletonKeyframe_t * self
) {
  ArraySkeletonKeyframe * selfCpp = static_cast<ArraySkeletonKeyframe *>(self->obj);
  bool result = selfCpp->empty();
  return result;
};

long JPC_ArraySkeletonKeyframe_size(
  JPC_ArraySkeletonKeyframe_t * self
) {
  ArraySkeletonKeyframe * selfCpp = static_cast<ArraySkeletonKeyframe *>(self->obj);
  long result = selfCpp->size();
  return result;
};

JPC_SkeletalAnimationKeyframe_t * JPC_ArraySkeletonKeyframe_at(
  JPC_ArraySkeletonKeyframe_t * self,
  long inIndex
) {
  ArraySkeletonKeyframe * selfCpp = static_cast<ArraySkeletonKeyframe *>(self->obj);
  SkeletalAnimationKeyframe& resultRef = selfCpp->at(
  inIndex
  );
  SkeletalAnimationKeyframe * result = &resultRef;
  return reinterpret_cast<JPC_SkeletalAnimationKeyframe_t *>(result);
};

void JPC_ArraySkeletonKeyframe_push_back(
  JPC_ArraySkeletonKeyframe_t * self,
  JPC_SkeletalAnimationKeyframe_t * inValue
) {
  ArraySkeletonKeyframe * selfCpp = static_cast<ArraySkeletonKeyframe *>(self->obj);
  
  selfCpp->push_back(
  *reinterpret_cast<SkeletalAnimationKeyframe *>(inValue->obj)
  );
};

void JPC_ArraySkeletonKeyframe_reserve(
  JPC_ArraySkeletonKeyframe_t * self,
  unsigned long inSize
) {
  ArraySkeletonKeyframe * selfCpp = static_cast<ArraySkeletonKeyframe *>(self->obj);
  
  selfCpp->reserve(
  inSize
  );
};

void JPC_ArraySkeletonKeyframe_resize(
  JPC_ArraySkeletonKeyframe_t * self,
  unsigned long inSize
) {
  ArraySkeletonKeyframe * selfCpp = static_cast<ArraySkeletonKeyframe *>(self->obj);
  
  selfCpp->resize(
  inSize
  );
};

void JPC_ArraySkeletonKeyframe_clear(
  JPC_ArraySkeletonKeyframe_t * self
) {
  ArraySkeletonKeyframe * selfCpp = static_cast<ArraySkeletonKeyframe *>(self->obj);
  
  selfCpp->clear();
};

//endregion functions

#ifdef __cplusplus
}
#endif

