#include "JoltC/JoltC_SkeletalAnimationAnimatedJoint.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_SkeletalAnimationAnimatedJoint_t * JoltC_SkeletalAnimationAnimatedJoint_new() {
  JoltC_SkeletalAnimationAnimatedJoint_t * cInstance = new JoltC_SkeletalAnimationAnimatedJoint_t();
  SkeletalAnimationAnimatedJoint * cppInstance = new SkeletalAnimationAnimatedJoint();
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion

//region properties

JoltC_JPHString_t * JoltC_SkeletalAnimationAnimatedJoint_mJointName_Get(
  JoltC_SkeletalAnimationAnimatedJoint_t * self
) {
  SkeletalAnimationAnimatedJoint * selfCpp = static_cast<SkeletalAnimationAnimatedJoint *>(self->obj);
  static JPHString resultValue = selfCpp->mJointName;
  JoltC_JPHString_t* result = new JoltC_JPHString_t();
  result->obj = reinterpret_cast<void*>(&resultValue);
  return result;
};

void JoltC_SkeletalAnimationAnimatedJoint_mJointName_Set(
  JoltC_SkeletalAnimationAnimatedJoint_t * self,
  JoltC_JPHString_t * mJointName
) {
  SkeletalAnimationAnimatedJoint * selfCpp = static_cast<SkeletalAnimationAnimatedJoint *>(self->obj);
  selfCpp->mJointName = *reinterpret_cast<JPHString *>(mJointName->obj);
};

JoltC_ArraySkeletonKeyframe_t * JoltC_SkeletalAnimationAnimatedJoint_mKeyframes_Get(
  JoltC_SkeletalAnimationAnimatedJoint_t * self
) {
  SkeletalAnimationAnimatedJoint * selfCpp = static_cast<SkeletalAnimationAnimatedJoint *>(self->obj);
  static ArraySkeletonKeyframe resultValue = selfCpp->mKeyframes;
  JoltC_ArraySkeletonKeyframe_t* result = new JoltC_ArraySkeletonKeyframe_t();
  result->obj = reinterpret_cast<void*>(&resultValue);
  return result;
};

void JoltC_SkeletalAnimationAnimatedJoint_mKeyframes_Set(
  JoltC_SkeletalAnimationAnimatedJoint_t * self,
  JoltC_ArraySkeletonKeyframe_t * mKeyframes
) {
  SkeletalAnimationAnimatedJoint * selfCpp = static_cast<SkeletalAnimationAnimatedJoint *>(self->obj);
  selfCpp->mKeyframes = *reinterpret_cast<ArraySkeletonKeyframe *>(mKeyframes->obj);
};

//endregion

#ifdef __cplusplus
}
#endif

