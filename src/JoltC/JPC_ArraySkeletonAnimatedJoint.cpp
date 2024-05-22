#include "JoltC/JPC_ArraySkeletonAnimatedJoint.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JPC_ArraySkeletonAnimatedJoint_t * JPC_ArraySkeletonAnimatedJoint_new() {
  JPC_ArraySkeletonAnimatedJoint_t * cInstance = new JPC_ArraySkeletonAnimatedJoint_t();
  ArraySkeletonAnimatedJoint * cppInstance = new ArraySkeletonAnimatedJoint();
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion constructors

//region functions

bool JPC_ArraySkeletonAnimatedJoint_empty(
  JPC_ArraySkeletonAnimatedJoint_t * self
) {
  ArraySkeletonAnimatedJoint * selfCpp = static_cast<ArraySkeletonAnimatedJoint *>(self->obj);
  bool result = selfCpp->empty();
  return result;
};

long JPC_ArraySkeletonAnimatedJoint_size(
  JPC_ArraySkeletonAnimatedJoint_t * self
) {
  ArraySkeletonAnimatedJoint * selfCpp = static_cast<ArraySkeletonAnimatedJoint *>(self->obj);
  long result = selfCpp->size();
  return result;
};

JPC_SkeletalAnimationAnimatedJoint_t * JPC_ArraySkeletonAnimatedJoint_at(
  JPC_ArraySkeletonAnimatedJoint_t * self,
  long inIndex
) {
  ArraySkeletonAnimatedJoint * selfCpp = static_cast<ArraySkeletonAnimatedJoint *>(self->obj);
  SkeletalAnimationAnimatedJoint& resultRef = selfCpp->at(
  inIndex
  );
  SkeletalAnimationAnimatedJoint * result = &resultRef;
  return reinterpret_cast<JPC_SkeletalAnimationAnimatedJoint_t *>(result);
};

void JPC_ArraySkeletonAnimatedJoint_push_back(
  JPC_ArraySkeletonAnimatedJoint_t * self,
  JPC_SkeletalAnimationAnimatedJoint_t * inValue
) {
  ArraySkeletonAnimatedJoint * selfCpp = static_cast<ArraySkeletonAnimatedJoint *>(self->obj);
  
  selfCpp->push_back(
  *reinterpret_cast<SkeletalAnimationAnimatedJoint *>(inValue->obj)
  );
};

void JPC_ArraySkeletonAnimatedJoint_reserve(
  JPC_ArraySkeletonAnimatedJoint_t * self,
  unsigned long inSize
) {
  ArraySkeletonAnimatedJoint * selfCpp = static_cast<ArraySkeletonAnimatedJoint *>(self->obj);
  
  selfCpp->reserve(
  inSize
  );
};

void JPC_ArraySkeletonAnimatedJoint_resize(
  JPC_ArraySkeletonAnimatedJoint_t * self,
  unsigned long inSize
) {
  ArraySkeletonAnimatedJoint * selfCpp = static_cast<ArraySkeletonAnimatedJoint *>(self->obj);
  
  selfCpp->resize(
  inSize
  );
};

void JPC_ArraySkeletonAnimatedJoint_clear(
  JPC_ArraySkeletonAnimatedJoint_t * self
) {
  ArraySkeletonAnimatedJoint * selfCpp = static_cast<ArraySkeletonAnimatedJoint *>(self->obj);
  
  selfCpp->clear();
};

//endregion functions

#ifdef __cplusplus
}
#endif

