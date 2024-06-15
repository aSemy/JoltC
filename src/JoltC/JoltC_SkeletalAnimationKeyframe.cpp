#include "JoltC/JoltC_SkeletalAnimationKeyframe.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

/**
  Construct a new `SkeletalAnimationKeyframe` instance.
 */
JoltC_SkeletalAnimationKeyframe_t * JoltC_SkeletalAnimationKeyframe_new() {
  JoltC_SkeletalAnimationKeyframe_t * cInstance = new JoltC_SkeletalAnimationKeyframe_t();
  SkeletalAnimationKeyframe * cppInstance = new SkeletalAnimationKeyframe();
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion

//region destructor

void JoltC_SkeletalAnimationKeyframe_destroy(
  JoltC_SkeletalAnimationKeyframe_t * self
){
  if (self == NULL) return;
  delete static_cast<SkeletalAnimationKeyframe *>(self->obj);
  free(self);
}

//endregion
//region functions

void JoltC_SkeletalAnimationKeyframe_FromMatrix(
  JoltC_SkeletalAnimationKeyframe_t * self,
  JoltC_Mat44_t * inMatrix
) {
  SkeletalAnimationKeyframe * selfCpp = static_cast<SkeletalAnimationKeyframe *>(self->obj);
  const Mat44 * inMatrixCpp = static_cast<const Mat44 *>(inMatrix->obj);
  selfCpp->FromMatrix(
    *inMatrixCpp
  );
}

JoltC_Mat44_t * JoltC_SkeletalAnimationKeyframe_ToMatrix(
  JoltC_SkeletalAnimationKeyframe_t * self
) {
  SkeletalAnimationKeyframe * selfCpp = static_cast<SkeletalAnimationKeyframe *>(self->obj);
  Mat44 * resultPtr = new Mat44();
  *resultPtr = selfCpp->ToMatrix();
  JoltC_Mat44_t * result = new JoltC_Mat44_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

//endregion

//region properties

float JoltC_SkeletalAnimationKeyframe_mTime_Get(
  JoltC_SkeletalAnimationKeyframe_t * self
) {
  SkeletalAnimationKeyframe * selfCpp = static_cast<SkeletalAnimationKeyframe *>(self->obj);
  return selfCpp->mTime;
}

void JoltC_SkeletalAnimationKeyframe_mTime_Set(
  JoltC_SkeletalAnimationKeyframe_t * self,
  float mTime
) {
  SkeletalAnimationKeyframe * selfCpp = static_cast<SkeletalAnimationKeyframe *>(self->obj);
  selfCpp->mTime = mTime;
}

JoltC_Vec3_t * JoltC_SkeletalAnimationKeyframe_mTranslation_Get(
  JoltC_SkeletalAnimationKeyframe_t * self
) {
  SkeletalAnimationKeyframe * selfCpp = static_cast<SkeletalAnimationKeyframe *>(self->obj);
  Vec3 * resultPtr = new Vec3();
  *resultPtr = selfCpp->mTranslation;
  JoltC_Vec3_t * result = new JoltC_Vec3_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

void JoltC_SkeletalAnimationKeyframe_mTranslation_Set(
  JoltC_SkeletalAnimationKeyframe_t * self,
  JoltC_Vec3_t * mTranslation
) {
  SkeletalAnimationKeyframe * selfCpp = static_cast<SkeletalAnimationKeyframe *>(self->obj);
  selfCpp->mTranslation = *static_cast<Vec3 *>(mTranslation->obj);
}

JoltC_Quat_t * JoltC_SkeletalAnimationKeyframe_mRotation_Get(
  JoltC_SkeletalAnimationKeyframe_t * self
) {
  SkeletalAnimationKeyframe * selfCpp = static_cast<SkeletalAnimationKeyframe *>(self->obj);
  Quat * resultPtr = new Quat();
  *resultPtr = selfCpp->mRotation;
  JoltC_Quat_t * result = new JoltC_Quat_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

void JoltC_SkeletalAnimationKeyframe_mRotation_Set(
  JoltC_SkeletalAnimationKeyframe_t * self,
  JoltC_Quat_t * mRotation
) {
  SkeletalAnimationKeyframe * selfCpp = static_cast<SkeletalAnimationKeyframe *>(self->obj);
  selfCpp->mRotation = *static_cast<Quat *>(mRotation->obj);
}

//endregion


#ifdef __cplusplus
}
#endif
