#include "JoltC/JoltC_SkeletonPose.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_SkeletonPose_t * JoltC_SkeletonPose_new() {
  JoltC_SkeletonPose_t * cInstance = new JoltC_SkeletonPose_t();
  SkeletonPose * cppInstance = new SkeletonPose();
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion

//region functions

void JoltC_SkeletonPose_SetSkeleton(
  JoltC_SkeletonPose_t * self,
  const JoltC_Skeleton_t * inSkeleton
) {
  SkeletonPose * selfCpp = static_cast<SkeletonPose *>(self->obj);
  
  selfCpp->SetSkeleton(
  reinterpret_cast<Skeleton *>(inSkeleton->obj)
  );
};

const JoltC_Skeleton_t * JoltC_SkeletonPose_GetSkeleton(
  JoltC_SkeletonPose_t * self
) {
  SkeletonPose * selfCpp = static_cast<SkeletonPose *>(self->obj);
  const Skeleton * result = selfCpp->GetSkeleton();
  return reinterpret_cast<const JoltC_Skeleton_t *>(result);
};

void JoltC_SkeletonPose_SetRootOffset(
  JoltC_SkeletonPose_t * self,
  JoltC_RVec3_t * inOffset
) {
  SkeletonPose * selfCpp = static_cast<SkeletonPose *>(self->obj);
  
  selfCpp->SetRootOffset(
  *reinterpret_cast<RVec3 *>(inOffset->obj)
  );
};

JoltC_RVec3_t * JoltC_SkeletonPose_GetRootOffset(
  JoltC_SkeletonPose_t * self
) {
  SkeletonPose * selfCpp = static_cast<SkeletonPose *>(self->obj);
  RVec3 resultValue = selfCpp->GetRootOffset();
  RVec3* result = new RVec3(resultValue);
  return reinterpret_cast<JoltC_RVec3_t *>(result);
};

long JoltC_SkeletonPose_GetJointCount(
  JoltC_SkeletonPose_t * self
) {
  SkeletonPose * selfCpp = static_cast<SkeletonPose *>(self->obj);
  long result = selfCpp->GetJointCount();
  return result;
};

JoltC_SkeletalAnimationJointState_t * JoltC_SkeletonPose_GetJoint(
  JoltC_SkeletonPose_t * self,
  long inJoint
) {
  SkeletonPose * selfCpp = static_cast<SkeletonPose *>(self->obj);
  SkeletalAnimationJointState& resultRef = selfCpp->GetJoint(
  inJoint
  );
  SkeletalAnimationJointState * result = &resultRef;
  return reinterpret_cast<JoltC_SkeletalAnimationJointState_t *>(result);
};

JoltC_ArrayMat44_t * JoltC_SkeletonPose_GetJointMatrices(
  JoltC_SkeletonPose_t * self
) {
  SkeletonPose * selfCpp = static_cast<SkeletonPose *>(self->obj);
  ArrayMat44& resultRef = selfCpp->GetJointMatrices();
  ArrayMat44 * result = &resultRef;
  return reinterpret_cast<JoltC_ArrayMat44_t *>(result);
};

JoltC_Mat44_t * JoltC_SkeletonPose_GetJointMatrix(
  JoltC_SkeletonPose_t * self,
  long inJoint
) {
  SkeletonPose * selfCpp = static_cast<SkeletonPose *>(self->obj);
  Mat44& resultRef = selfCpp->GetJointMatrix(
  inJoint
  );
  Mat44 * result = &resultRef;
  return reinterpret_cast<JoltC_Mat44_t *>(result);
};

void JoltC_SkeletonPose_CalculateJointMatrices(
  JoltC_SkeletonPose_t * self
) {
  SkeletonPose * selfCpp = static_cast<SkeletonPose *>(self->obj);
  
  selfCpp->CalculateJointMatrices();
};

void JoltC_SkeletonPose_CalculateJointStates(
  JoltC_SkeletonPose_t * self
) {
  SkeletonPose * selfCpp = static_cast<SkeletonPose *>(self->obj);
  
  selfCpp->CalculateJointStates();
};

//endregion

#ifdef __cplusplus
}
#endif

