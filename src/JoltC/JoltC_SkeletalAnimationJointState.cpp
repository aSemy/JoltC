#include "JoltC/JoltC_SkeletalAnimationJointState.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region functions

void JoltC_SkeletalAnimationJointState_FromMatrix(
  JoltC_SkeletalAnimationJointState_t * self,
  const JoltC_Mat44_t * inMatrix,
  char** outErrMsg
) {
  try {
    SkeletalAnimationJointState * selfCpp = static_cast<SkeletalAnimationJointState *>(self->obj);
    
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

JoltC_Mat44_t * JoltC_SkeletalAnimationJointState_ToMatrix(
  JoltC_SkeletalAnimationJointState_t * self,
  char** outErrMsg
) {
  try {
    SkeletalAnimationJointState * selfCpp = static_cast<SkeletalAnimationJointState *>(self->obj);
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

JoltC_Vec3_t * JoltC_SkeletalAnimationJointState_mTranslation_Get(
  JoltC_SkeletalAnimationJointState_t * self,
  char** outErrMsg
) {
  SkeletalAnimationJointState * selfCpp = static_cast<SkeletalAnimationJointState *>(self->obj);
  Vec3 resultValue = selfCpp->mTranslation;
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JoltC_Vec3_t *>(result);
};

void JoltC_SkeletalAnimationJointState_mTranslation_Set(
  JoltC_SkeletalAnimationJointState_t * self,
  JoltC_Vec3_t * mTranslation,
  char** outErrMsg
) {
  SkeletalAnimationJointState * selfCpp = static_cast<SkeletalAnimationJointState *>(self->obj);
  selfCpp->mTranslation = *reinterpret_cast<Vec3 *>(mTranslation->obj);
};

JoltC_Quat_t * JoltC_SkeletalAnimationJointState_mRotation_Get(
  JoltC_SkeletalAnimationJointState_t * self,
  char** outErrMsg
) {
  SkeletalAnimationJointState * selfCpp = static_cast<SkeletalAnimationJointState *>(self->obj);
  Quat resultValue = selfCpp->mRotation;
  Quat* result = new Quat(resultValue);
  return reinterpret_cast<JoltC_Quat_t *>(result);
};

void JoltC_SkeletalAnimationJointState_mRotation_Set(
  JoltC_SkeletalAnimationJointState_t * self,
  JoltC_Quat_t * mRotation,
  char** outErrMsg
) {
  SkeletalAnimationJointState * selfCpp = static_cast<SkeletalAnimationJointState *>(self->obj);
  selfCpp->mRotation = *reinterpret_cast<Quat *>(mRotation->obj);
};

//endregion properties

#ifdef __cplusplus
}
#endif

