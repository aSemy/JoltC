#include "JoltC/JPC_SkeletalAnimation.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JPC_SkeletalAnimation_t * JPC_SkeletalAnimation_new() {
  JPC_SkeletalAnimation_t * cInstance = new JPC_SkeletalAnimation_t();
  SkeletalAnimation * cppInstance = new SkeletalAnimation();
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion constructors

//region functions

float JPC_SkeletalAnimation_GetDuration(
  JPC_SkeletalAnimation_t * self
) {
  SkeletalAnimation * selfCpp = static_cast<SkeletalAnimation *>(self->obj);
  float result = selfCpp->GetDuration();
  return result;
};

void JPC_SkeletalAnimation_ScaleJoints(
  JPC_SkeletalAnimation_t * self,
  float inScale
) {
  SkeletalAnimation * selfCpp = static_cast<SkeletalAnimation *>(self->obj);
  
  selfCpp->ScaleJoints(
  inScale
  );
};

void JPC_SkeletalAnimation_Sample(
  JPC_SkeletalAnimation_t * self,
  float inTime,
  JPC_SkeletonPose_t * ioPose
) {
  SkeletalAnimation * selfCpp = static_cast<SkeletalAnimation *>(self->obj);
  
  selfCpp->Sample(
  inTime,
  *reinterpret_cast<SkeletonPose *>(ioPose->obj)
  );
};

JPC_ArraySkeletonAnimatedJoint_t * JPC_SkeletalAnimation_GetAnimatedJoints(
  JPC_SkeletalAnimation_t * self
) {
  SkeletalAnimation * selfCpp = static_cast<SkeletalAnimation *>(self->obj);
  ArraySkeletonAnimatedJoint& resultRef = selfCpp->GetAnimatedJoints();
  ArraySkeletonAnimatedJoint * result = &resultRef;
  return reinterpret_cast<JPC_ArraySkeletonAnimatedJoint_t *>(result);
};

//endregion functions

#ifdef __cplusplus
}
#endif

