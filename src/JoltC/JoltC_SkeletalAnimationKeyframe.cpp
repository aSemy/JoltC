#include "JoltC/JoltC_SkeletalAnimationKeyframe.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_SkeletalAnimationKeyframe_t * JoltC_SkeletalAnimationKeyframe_new(
  char** outErrMsg
) {
  try {
    JoltC_SkeletalAnimationKeyframe_t * cInstance = new JoltC_SkeletalAnimationKeyframe_t();
    SkeletalAnimationKeyframe * cppInstance = new SkeletalAnimationKeyframe();
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

//region functions

void JoltC_SkeletalAnimationKeyframe_FromMatrix(
  JoltC_SkeletalAnimationKeyframe_t * self,
  const JoltC_Mat44_t * inMatrix,
  char** outErrMsg
) {
  try {
    SkeletalAnimationKeyframe * selfCpp = static_cast<SkeletalAnimationKeyframe *>(self->obj);
    
    selfCpp->FromMatrix(
    *reinterpret_cast<Mat44 *>(inMatrix->obj)
    );
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

JoltC_Mat44_t * JoltC_SkeletalAnimationKeyframe_ToMatrix(
  JoltC_SkeletalAnimationKeyframe_t * self,
  char** outErrMsg
) {
  try {
    SkeletalAnimationKeyframe * selfCpp = static_cast<SkeletalAnimationKeyframe *>(self->obj);
    Mat44 resultValue = selfCpp->ToMatrix();
    Mat44* result = new Mat44(resultValue);
    return reinterpret_cast<JoltC_Mat44_t *>(result);
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

//endregion functions

//region properties

float JoltC_SkeletalAnimationKeyframe_mTime_Get(
  JoltC_SkeletalAnimationKeyframe_t * self,
  char** outErrMsg
) {
  SkeletalAnimationKeyframe * selfCpp = static_cast<SkeletalAnimationKeyframe *>(self->obj);
  float result = selfCpp->mTime;
  return result;
};

void JoltC_SkeletalAnimationKeyframe_mTime_Set(
  JoltC_SkeletalAnimationKeyframe_t * self,
  float mTime,
  char** outErrMsg
) {
  SkeletalAnimationKeyframe * selfCpp = static_cast<SkeletalAnimationKeyframe *>(self->obj);
  selfCpp->mTime = mTime;
};

JoltC_Vec3_t * JoltC_SkeletalAnimationKeyframe_mTranslation_Get(
  JoltC_SkeletalAnimationKeyframe_t * self,
  char** outErrMsg
) {
  SkeletalAnimationKeyframe * selfCpp = static_cast<SkeletalAnimationKeyframe *>(self->obj);
  Vec3 resultValue = selfCpp->mTranslation;
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JoltC_Vec3_t *>(result);
};

void JoltC_SkeletalAnimationKeyframe_mTranslation_Set(
  JoltC_SkeletalAnimationKeyframe_t * self,
  JoltC_Vec3_t * mTranslation,
  char** outErrMsg
) {
  SkeletalAnimationKeyframe * selfCpp = static_cast<SkeletalAnimationKeyframe *>(self->obj);
  selfCpp->mTranslation = *reinterpret_cast<Vec3 *>(mTranslation->obj);
};

JoltC_Quat_t * JoltC_SkeletalAnimationKeyframe_mRotation_Get(
  JoltC_SkeletalAnimationKeyframe_t * self,
  char** outErrMsg
) {
  SkeletalAnimationKeyframe * selfCpp = static_cast<SkeletalAnimationKeyframe *>(self->obj);
  Quat resultValue = selfCpp->mRotation;
  Quat* result = new Quat(resultValue);
  return reinterpret_cast<JoltC_Quat_t *>(result);
};

void JoltC_SkeletalAnimationKeyframe_mRotation_Set(
  JoltC_SkeletalAnimationKeyframe_t * self,
  JoltC_Quat_t * mRotation,
  char** outErrMsg
) {
  SkeletalAnimationKeyframe * selfCpp = static_cast<SkeletalAnimationKeyframe *>(self->obj);
  selfCpp->mRotation = *reinterpret_cast<Quat *>(mRotation->obj);
};

//endregion properties

#ifdef __cplusplus
}
#endif

