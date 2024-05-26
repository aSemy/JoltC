#include "JoltC/JoltC_SkeletalAnimationKeyframe.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_SkeletalAnimationKeyframe_t * JoltC_SkeletalAnimationKeyframe_new() {
  JoltC_SkeletalAnimationKeyframe_t * cInstance = new JoltC_SkeletalAnimationKeyframe_t();
  SkeletalAnimationKeyframe * cppInstance = new SkeletalAnimationKeyframe();
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion

//region functions

void JoltC_SkeletalAnimationKeyframe_FromMatrix(
  JoltC_SkeletalAnimationKeyframe_t * self,
  JoltC_Mat44_t * inMatrix
) {
  SkeletalAnimationKeyframe * selfCpp = static_cast<SkeletalAnimationKeyframe *>(self->obj);
  
  selfCpp->FromMatrix(
    *reinterpret_cast<Mat44 *>(inMatrix->obj)
  );
};

JoltC_Mat44_t * JoltC_SkeletalAnimationKeyframe_ToMatrix(
  JoltC_SkeletalAnimationKeyframe_t * self
) {
  SkeletalAnimationKeyframe * selfCpp = static_cast<SkeletalAnimationKeyframe *>(self->obj);
  static Mat44 resultValue = selfCpp->ToMatrix();
  JoltC_Mat44_t* result = new JoltC_Mat44_t();
  result->obj = reinterpret_cast<void*>(&resultValue);
  return result;
};

//endregion

//region properties

float JoltC_SkeletalAnimationKeyframe_mTime_Get(
  JoltC_SkeletalAnimationKeyframe_t * self
) {
  SkeletalAnimationKeyframe * selfCpp = static_cast<SkeletalAnimationKeyframe *>(self->obj);
  float result = selfCpp->mTime;
  return result;
};

void JoltC_SkeletalAnimationKeyframe_mTime_Set(
  JoltC_SkeletalAnimationKeyframe_t * self,
  float mTime
) {
  SkeletalAnimationKeyframe * selfCpp = static_cast<SkeletalAnimationKeyframe *>(self->obj);
  selfCpp->mTime = mTime;
};

JoltC_Vec3_t * JoltC_SkeletalAnimationKeyframe_mTranslation_Get(
  JoltC_SkeletalAnimationKeyframe_t * self
) {
  SkeletalAnimationKeyframe * selfCpp = static_cast<SkeletalAnimationKeyframe *>(self->obj);
  static Vec3 resultValue = selfCpp->mTranslation;
  JoltC_Vec3_t* result = new JoltC_Vec3_t();
  result->obj = reinterpret_cast<void*>(&resultValue);
  return result;
};

void JoltC_SkeletalAnimationKeyframe_mTranslation_Set(
  JoltC_SkeletalAnimationKeyframe_t * self,
  JoltC_Vec3_t * mTranslation
) {
  SkeletalAnimationKeyframe * selfCpp = static_cast<SkeletalAnimationKeyframe *>(self->obj);
  selfCpp->mTranslation = *reinterpret_cast<Vec3 *>(mTranslation->obj);
};

JoltC_Quat_t * JoltC_SkeletalAnimationKeyframe_mRotation_Get(
  JoltC_SkeletalAnimationKeyframe_t * self
) {
  SkeletalAnimationKeyframe * selfCpp = static_cast<SkeletalAnimationKeyframe *>(self->obj);
  static Quat resultValue = selfCpp->mRotation;
  JoltC_Quat_t* result = new JoltC_Quat_t();
  result->obj = reinterpret_cast<void*>(&resultValue);
  return result;
};

void JoltC_SkeletalAnimationKeyframe_mRotation_Set(
  JoltC_SkeletalAnimationKeyframe_t * self,
  JoltC_Quat_t * mRotation
) {
  SkeletalAnimationKeyframe * selfCpp = static_cast<SkeletalAnimationKeyframe *>(self->obj);
  selfCpp->mRotation = *reinterpret_cast<Quat *>(mRotation->obj);
};

//endregion

#ifdef __cplusplus
}
#endif

