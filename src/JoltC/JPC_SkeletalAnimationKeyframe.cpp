#include "JoltC/JPC_SkeletalAnimationKeyframe.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JPC_SkeletalAnimationKeyframe_t * JPC_SkeletalAnimationKeyframe_new() {
  JPC_SkeletalAnimationKeyframe_t * cInstance = new JPC_SkeletalAnimationKeyframe_t();
  SkeletalAnimationKeyframe * cppInstance = new SkeletalAnimationKeyframe();
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion constructors

//region functions

void JPC_SkeletalAnimationKeyframe_FromMatrix(
  JPC_SkeletalAnimationKeyframe_t * self,
  const JPC_Mat44_t * inMatrix
) {
  SkeletalAnimationKeyframe * selfCpp = static_cast<SkeletalAnimationKeyframe *>(self->obj);
  
  selfCpp->FromMatrix(
  *reinterpret_cast<Mat44 *>(inMatrix->obj)
  );
};

JPC_Mat44_t * JPC_SkeletalAnimationKeyframe_ToMatrix(
  JPC_SkeletalAnimationKeyframe_t * self
) {
  SkeletalAnimationKeyframe * selfCpp = static_cast<SkeletalAnimationKeyframe *>(self->obj);
  Mat44 resultValue = selfCpp->ToMatrix();
  Mat44* result = new Mat44(resultValue);
  return reinterpret_cast<JPC_Mat44_t *>(result);
};

//endregion functions

//region properties

float JPC_SkeletalAnimationKeyframe_mTime_Get(
  JPC_SkeletalAnimationKeyframe_t * self
) {
  SkeletalAnimationKeyframe * selfCpp = static_cast<SkeletalAnimationKeyframe *>(self->obj);
  float result = selfCpp->mTime;
  return result;
};

void JPC_SkeletalAnimationKeyframe_mTime_Set(
  JPC_SkeletalAnimationKeyframe_t * self,
  float mTime
) {
  SkeletalAnimationKeyframe * selfCpp = static_cast<SkeletalAnimationKeyframe *>(self->obj);
  selfCpp->mTime = mTime;
};

JPC_Vec3_t * JPC_SkeletalAnimationKeyframe_mTranslation_Get(
  JPC_SkeletalAnimationKeyframe_t * self
) {
  SkeletalAnimationKeyframe * selfCpp = static_cast<SkeletalAnimationKeyframe *>(self->obj);
  Vec3 resultValue = selfCpp->mTranslation;
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JPC_Vec3_t *>(result);
};

void JPC_SkeletalAnimationKeyframe_mTranslation_Set(
  JPC_SkeletalAnimationKeyframe_t * self,
  JPC_Vec3_t * mTranslation
) {
  SkeletalAnimationKeyframe * selfCpp = static_cast<SkeletalAnimationKeyframe *>(self->obj);
  selfCpp->mTranslation = *reinterpret_cast<Vec3 *>(mTranslation->obj);
};

JPC_Quat_t * JPC_SkeletalAnimationKeyframe_mRotation_Get(
  JPC_SkeletalAnimationKeyframe_t * self
) {
  SkeletalAnimationKeyframe * selfCpp = static_cast<SkeletalAnimationKeyframe *>(self->obj);
  Quat resultValue = selfCpp->mRotation;
  Quat* result = new Quat(resultValue);
  return reinterpret_cast<JPC_Quat_t *>(result);
};

void JPC_SkeletalAnimationKeyframe_mRotation_Set(
  JPC_SkeletalAnimationKeyframe_t * self,
  JPC_Quat_t * mRotation
) {
  SkeletalAnimationKeyframe * selfCpp = static_cast<SkeletalAnimationKeyframe *>(self->obj);
  selfCpp->mRotation = *reinterpret_cast<Quat *>(mRotation->obj);
};

//endregion properties

#ifdef __cplusplus
}
#endif

