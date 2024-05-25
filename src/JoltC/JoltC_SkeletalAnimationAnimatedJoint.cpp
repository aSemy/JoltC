#include "JoltC/JoltC_SkeletalAnimationAnimatedJoint.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_SkeletalAnimationAnimatedJoint_t * JoltC_SkeletalAnimationAnimatedJoint_new(
  char** outErrMsg
) {
  try {
    JoltC_SkeletalAnimationAnimatedJoint_t * cInstance = new JoltC_SkeletalAnimationAnimatedJoint_t();
    SkeletalAnimationAnimatedJoint * cppInstance = new SkeletalAnimationAnimatedJoint();
    cInstance->obj = cppInstance;
    return cInstance;
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

//endregion constructors

//region properties

JoltC_JPHString_t * JoltC_SkeletalAnimationAnimatedJoint_mJointName_Get(
  JoltC_SkeletalAnimationAnimatedJoint_t * self,
  char** outErrMsg
) {
  SkeletalAnimationAnimatedJoint * selfCpp = static_cast<SkeletalAnimationAnimatedJoint *>(self->obj);
  JPHString resultValue = selfCpp->mJointName;
  JPHString* result = new JPHString(resultValue);
  return reinterpret_cast<JoltC_JPHString_t *>(result);
};

void JoltC_SkeletalAnimationAnimatedJoint_mJointName_Set(
  JoltC_SkeletalAnimationAnimatedJoint_t * self,
  JoltC_JPHString_t * mJointName,
  char** outErrMsg
) {
  SkeletalAnimationAnimatedJoint * selfCpp = static_cast<SkeletalAnimationAnimatedJoint *>(self->obj);
  selfCpp->mJointName = *reinterpret_cast<JPHString *>(mJointName->obj);
};

JoltC_ArraySkeletonKeyframe_t * JoltC_SkeletalAnimationAnimatedJoint_mKeyframes_Get(
  JoltC_SkeletalAnimationAnimatedJoint_t * self,
  char** outErrMsg
) {
  SkeletalAnimationAnimatedJoint * selfCpp = static_cast<SkeletalAnimationAnimatedJoint *>(self->obj);
  ArraySkeletonKeyframe resultValue = selfCpp->mKeyframes;
  ArraySkeletonKeyframe* result = new ArraySkeletonKeyframe(resultValue);
  return reinterpret_cast<JoltC_ArraySkeletonKeyframe_t *>(result);
};

void JoltC_SkeletalAnimationAnimatedJoint_mKeyframes_Set(
  JoltC_SkeletalAnimationAnimatedJoint_t * self,
  JoltC_ArraySkeletonKeyframe_t * mKeyframes,
  char** outErrMsg
) {
  SkeletalAnimationAnimatedJoint * selfCpp = static_cast<SkeletalAnimationAnimatedJoint *>(self->obj);
  selfCpp->mKeyframes = *reinterpret_cast<ArraySkeletonKeyframe *>(mKeyframes->obj);
};

//endregion properties

#ifdef __cplusplus
}
#endif

