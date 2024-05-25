#include "JoltC/JPC_SkeletalAnimationAnimatedJoint.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JPC_SkeletalAnimationAnimatedJoint_t * JPC_SkeletalAnimationAnimatedJoint_new() {
  JPC_SkeletalAnimationAnimatedJoint_t * cInstance = new JPC_SkeletalAnimationAnimatedJoint_t();
  SkeletalAnimationAnimatedJoint * cppInstance = new SkeletalAnimationAnimatedJoint();
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion constructors

//region properties

JPC_JPHString_t * JPC_SkeletalAnimationAnimatedJoint_mJointName_Get(
  JPC_SkeletalAnimationAnimatedJoint_t * self
) {
  SkeletalAnimationAnimatedJoint * selfCpp = static_cast<SkeletalAnimationAnimatedJoint *>(self->obj);
  JPHString resultValue = selfCpp->mJointName;
  JPHString* result = new JPHString(resultValue);
  return reinterpret_cast<JPC_JPHString_t *>(result);
};

void JPC_SkeletalAnimationAnimatedJoint_mJointName_Set(
  JPC_SkeletalAnimationAnimatedJoint_t * self,
  JPC_JPHString_t * mJointName
) {
  SkeletalAnimationAnimatedJoint * selfCpp = static_cast<SkeletalAnimationAnimatedJoint *>(self->obj);
  selfCpp->mJointName = *reinterpret_cast<JPHString *>(mJointName->obj);
};

JPC_ArraySkeletonKeyframe_t * JPC_SkeletalAnimationAnimatedJoint_mKeyframes_Get(
  JPC_SkeletalAnimationAnimatedJoint_t * self
) {
  SkeletalAnimationAnimatedJoint * selfCpp = static_cast<SkeletalAnimationAnimatedJoint *>(self->obj);
  ArraySkeletonKeyframe resultValue = selfCpp->mKeyframes;
  ArraySkeletonKeyframe* result = new ArraySkeletonKeyframe(resultValue);
  return reinterpret_cast<JPC_ArraySkeletonKeyframe_t *>(result);
};

void JPC_SkeletalAnimationAnimatedJoint_mKeyframes_Set(
  JPC_SkeletalAnimationAnimatedJoint_t * self,
  JPC_ArraySkeletonKeyframe_t * mKeyframes
) {
  SkeletalAnimationAnimatedJoint * selfCpp = static_cast<SkeletalAnimationAnimatedJoint *>(self->obj);
  selfCpp->mKeyframes = *reinterpret_cast<ArraySkeletonKeyframe *>(mKeyframes->obj);
};

//endregion properties

#ifdef __cplusplus
}
#endif

