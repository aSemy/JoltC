#include "JoltC/JPC_SkeletalAnimationJointState.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region functions

void JPC_SkeletalAnimationJointState_FromMatrix(
  JPC_SkeletalAnimationJointState_t * self,
  const JPC_Mat44_t * inMatrix
) {
  SkeletalAnimationJointState * selfCpp = static_cast<SkeletalAnimationJointState *>(self->obj);
  
  selfCpp->FromMatrix(
  *reinterpret_cast<Mat44 *>(inMatrix->obj)
  );
};

JPC_Mat44_t * JPC_SkeletalAnimationJointState_ToMatrix(
  JPC_SkeletalAnimationJointState_t * self
) {
  SkeletalAnimationJointState * selfCpp = static_cast<SkeletalAnimationJointState *>(self->obj);
  Mat44 resultValue = selfCpp->ToMatrix();
  Mat44* result = new Mat44(resultValue);
  return reinterpret_cast<JPC_Mat44_t *>(result);
};

//endregion functions

//region properties

JPC_Vec3_t * JPC_SkeletalAnimationJointState_mTranslation_Get(
  JPC_SkeletalAnimationJointState_t * self
) {
  SkeletalAnimationJointState * selfCpp = static_cast<SkeletalAnimationJointState *>(self->obj);
  Vec3 resultValue = selfCpp->mTranslation;
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JPC_Vec3_t *>(result);
};

void JPC_SkeletalAnimationJointState_mTranslation_Set(
  JPC_SkeletalAnimationJointState_t * self,
  JPC_Vec3_t * mTranslation
) {
  SkeletalAnimationJointState * selfCpp = static_cast<SkeletalAnimationJointState *>(self->obj);
  selfCpp->mTranslation = *reinterpret_cast<Vec3 *>(mTranslation->obj);
};

JPC_Quat_t * JPC_SkeletalAnimationJointState_mRotation_Get(
  JPC_SkeletalAnimationJointState_t * self
) {
  SkeletalAnimationJointState * selfCpp = static_cast<SkeletalAnimationJointState *>(self->obj);
  Quat resultValue = selfCpp->mRotation;
  Quat* result = new Quat(resultValue);
  return reinterpret_cast<JPC_Quat_t *>(result);
};

void JPC_SkeletalAnimationJointState_mRotation_Set(
  JPC_SkeletalAnimationJointState_t * self,
  JPC_Quat_t * mRotation
) {
  SkeletalAnimationJointState * selfCpp = static_cast<SkeletalAnimationJointState *>(self->obj);
  selfCpp->mRotation = *reinterpret_cast<Quat *>(mRotation->obj);
};

//endregion properties

#ifdef __cplusplus
}
#endif

