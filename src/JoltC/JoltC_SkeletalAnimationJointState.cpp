#include "JoltC/JoltC_SkeletalAnimationJointState.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

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
  const JoltC_Mat44_t * inMatrix
) {
  SkeletalAnimationJointState * selfCpp = static_cast<SkeletalAnimationJointState *>(self->obj);
  
  selfCpp->FromMatrix(
  *reinterpret_cast<Mat44 *>(inMatrix->obj)
  );
};

JoltC_Mat44_t * JoltC_SkeletalAnimationJointState_ToMatrix(
  JoltC_SkeletalAnimationJointState_t * self
) {
  SkeletalAnimationJointState * selfCpp = static_cast<SkeletalAnimationJointState *>(self->obj);
  Mat44 resultValue = selfCpp->ToMatrix();
  Mat44* result = new Mat44(resultValue);
  return reinterpret_cast<JoltC_Mat44_t *>(result);
};

//endregion

//region properties

JoltC_Vec3_t * JoltC_SkeletalAnimationJointState_mTranslation_Get(
  JoltC_SkeletalAnimationJointState_t * self
) {
  SkeletalAnimationJointState * selfCpp = static_cast<SkeletalAnimationJointState *>(self->obj);
  Vec3 resultValue = selfCpp->mTranslation;
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JoltC_Vec3_t *>(result);
};

void JoltC_SkeletalAnimationJointState_mTranslation_Set(
  JoltC_SkeletalAnimationJointState_t * self,
  JoltC_Vec3_t * mTranslation
) {
  SkeletalAnimationJointState * selfCpp = static_cast<SkeletalAnimationJointState *>(self->obj);
  selfCpp->mTranslation = *reinterpret_cast<Vec3 *>(mTranslation->obj);
};

JoltC_Quat_t * JoltC_SkeletalAnimationJointState_mRotation_Get(
  JoltC_SkeletalAnimationJointState_t * self
) {
  SkeletalAnimationJointState * selfCpp = static_cast<SkeletalAnimationJointState *>(self->obj);
  Quat resultValue = selfCpp->mRotation;
  Quat* result = new Quat(resultValue);
  return reinterpret_cast<JoltC_Quat_t *>(result);
};

void JoltC_SkeletalAnimationJointState_mRotation_Set(
  JoltC_SkeletalAnimationJointState_t * self,
  JoltC_Quat_t * mRotation
) {
  SkeletalAnimationJointState * selfCpp = static_cast<SkeletalAnimationJointState *>(self->obj);
  selfCpp->mRotation = *reinterpret_cast<Quat *>(mRotation->obj);
};

//endregion

#ifdef __cplusplus
}
#endif

