#include "JoltC/JoltC_SkeletalAnimationJointState.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region destructor

void JoltC_SkeletalAnimationJointState_destroy(
  JoltC_SkeletalAnimationJointState_t * self
){
  if (self == NULL) return;
  delete static_cast<SkeletalAnimationJointState *>(self->obj);
  free(self);
}

//endregion
//region converters

/**
 * Convert an instance of JoltC_SkeletalAnimationKeyframe_t into JoltC_SkeletalAnimationJointState_t.
 */
JoltC_SkeletalAnimationJointState_t * JoltC_SkeletalAnimationJointState_From_SkeletalAnimationKeyframe(
  JoltC_SkeletalAnimationKeyframe_t * subtype
) {
  return (JoltC_SkeletalAnimationJointState_t*) subtype;
};

//endregion

//region functions

void JoltC_SkeletalAnimationJointState_FromMatrix(
  JoltC_SkeletalAnimationJointState_t * self,
  JoltC_Mat44_t * inMatrix
) {
  SkeletalAnimationJointState * selfCpp = static_cast<SkeletalAnimationJointState *>(self->obj);
  const Mat44 * inMatrixCpp = static_cast<const Mat44 *>(inMatrix->obj);
  selfCpp->FromMatrix(
    *inMatrixCpp
  );
}

JoltC_Mat44_t * JoltC_SkeletalAnimationJointState_ToMatrix(
  JoltC_SkeletalAnimationJointState_t * self
) {
  SkeletalAnimationJointState * selfCpp = static_cast<SkeletalAnimationJointState *>(self->obj);
  Mat44 * resultPtr = new Mat44();
  *resultPtr = selfCpp->ToMatrix();
  JoltC_Mat44_t * result = new JoltC_Mat44_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

//endregion

//region properties

JoltC_Vec3_t * JoltC_SkeletalAnimationJointState_mTranslation_Get(
  JoltC_SkeletalAnimationJointState_t * self
) {
  SkeletalAnimationJointState * selfCpp = static_cast<SkeletalAnimationJointState *>(self->obj);
  Vec3 * resultPtr = new Vec3();
  *resultPtr = selfCpp->mTranslation;
  JoltC_Vec3_t * result = new JoltC_Vec3_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

void JoltC_SkeletalAnimationJointState_mTranslation_Set(
  JoltC_SkeletalAnimationJointState_t * self,
  JoltC_Vec3_t * mTranslation
) {
  SkeletalAnimationJointState * selfCpp = static_cast<SkeletalAnimationJointState *>(self->obj);
  selfCpp->mTranslation = *static_cast<Vec3 *>(mTranslation->obj);
}

JoltC_Quat_t * JoltC_SkeletalAnimationJointState_mRotation_Get(
  JoltC_SkeletalAnimationJointState_t * self
) {
  SkeletalAnimationJointState * selfCpp = static_cast<SkeletalAnimationJointState *>(self->obj);
  Quat * resultPtr = new Quat();
  *resultPtr = selfCpp->mRotation;
  JoltC_Quat_t * result = new JoltC_Quat_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

void JoltC_SkeletalAnimationJointState_mRotation_Set(
  JoltC_SkeletalAnimationJointState_t * self,
  JoltC_Quat_t * mRotation
) {
  SkeletalAnimationJointState * selfCpp = static_cast<SkeletalAnimationJointState *>(self->obj);
  selfCpp->mRotation = *static_cast<Quat *>(mRotation->obj);
}

//endregion


#ifdef __cplusplus
}
#endif
