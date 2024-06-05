#include "JoltC/JoltC_SkeletalAnimation.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_SkeletalAnimation_t * JoltC_SkeletalAnimation_new() {
  JoltC_SkeletalAnimation_t * cInstance = new JoltC_SkeletalAnimation_t();
  SkeletalAnimation * cppInstance = new SkeletalAnimation();
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion

//region functions

float JoltC_SkeletalAnimation_GetDuration(
  JoltC_SkeletalAnimation_t * self
) {
  SkeletalAnimation * selfCpp = static_cast<SkeletalAnimation *>(self->obj);
  float result = selfCpp->GetDuration();
  return result;
};

void JoltC_SkeletalAnimation_ScaleJoints(
  JoltC_SkeletalAnimation_t * self,
  float inScale
) {
  SkeletalAnimation * selfCpp = static_cast<SkeletalAnimation *>(self->obj);
  selfCpp->ScaleJoints(
    inScale
  );
};

void JoltC_SkeletalAnimation_Sample(
  JoltC_SkeletalAnimation_t * self,
  float inTime,
  JoltC_SkeletonPose_t * ioPose
) {
  SkeletalAnimation * selfCpp = static_cast<SkeletalAnimation *>(self->obj);
  selfCpp->Sample(
    inTime,
    *reinterpret_cast<SkeletonPose *>(ioPose->obj)
  );
};

JoltC_ArraySkeletonAnimatedJoint_t * JoltC_SkeletalAnimation_GetAnimatedJoints(
  JoltC_SkeletalAnimation_t * self
) {
  SkeletalAnimation * selfCpp = static_cast<SkeletalAnimation *>(self->obj);
  ArraySkeletonAnimatedJoint* resultRef = &selfCpp->GetAnimatedJoints();
  JoltC_ArraySkeletonAnimatedJoint_t* result = new JoltC_ArraySkeletonAnimatedJoint_t();
  result->obj = reinterpret_cast<void*>(resultRef);
  return result;
};

//endregion

#ifdef __cplusplus
}
#endif

