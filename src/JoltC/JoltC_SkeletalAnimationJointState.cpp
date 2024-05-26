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
  JoltC_Mat44_t * inMatrix
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
  static Mat44 resultValue = selfCpp->ToMatrix();
  JoltC_Mat44_t* result = new JoltC_Mat44_t();
  result->obj = reinterpret_cast<void*>(&resultValue);
  return result;
};

//endregion

//region properties

JoltC_Vec3_t * JoltC_SkeletalAnimationJointState_mTranslation_Get(
  JoltC_SkeletalAnimationJointState_t * self
) {
  SkeletalAnimationJointState * selfCpp = static_cast<SkeletalAnimationJointState *>(self->obj);
  static Vec3 resultValue = selfCpp->mTranslation;
  JoltC_Vec3_t* result = new JoltC_Vec3_t();
  result->obj = reinterpret_cast<void*>(&resultValue);
  return result;
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
  static Quat resultValue = selfCpp->mRotation;
  JoltC_Quat_t* result = new JoltC_Quat_t();
  result->obj = reinterpret_cast<void*>(&resultValue);
  return result;
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

