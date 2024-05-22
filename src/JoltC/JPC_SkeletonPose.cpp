#include "JoltC/JPC_SkeletonPose.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JPC_SkeletonPose_t * JPC_SkeletonPose_new() {
  JPC_SkeletonPose_t * cInstance = new JPC_SkeletonPose_t();
  SkeletonPose * cppInstance = new SkeletonPose();
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion constructors

//region functions

void JPC_SkeletonPose_SetSkeleton(
  JPC_SkeletonPose_t * self,
  const JPC_Skeleton_t * inSkeleton
) {
  SkeletonPose * selfCpp = static_cast<SkeletonPose *>(self->obj);
  
  selfCpp->SetSkeleton(
  reinterpret_cast<Skeleton *>(inSkeleton->obj)
  );
};

const JPC_Skeleton_t * JPC_SkeletonPose_GetSkeleton(
  JPC_SkeletonPose_t * self
) {
  SkeletonPose * selfCpp = static_cast<SkeletonPose *>(self->obj);
  const Skeleton * result = selfCpp->GetSkeleton();
  return reinterpret_cast<const JPC_Skeleton_t *>(result);
};

void JPC_SkeletonPose_SetRootOffset(
  JPC_SkeletonPose_t * self,
  JPC_RVec3_t * inOffset
) {
  SkeletonPose * selfCpp = static_cast<SkeletonPose *>(self->obj);
  
  selfCpp->SetRootOffset(
  *reinterpret_cast<RVec3 *>(inOffset->obj)
  );
};

JPC_RVec3_t * JPC_SkeletonPose_GetRootOffset(
  JPC_SkeletonPose_t * self
) {
  SkeletonPose * selfCpp = static_cast<SkeletonPose *>(self->obj);
  RVec3 resultValue = selfCpp->GetRootOffset();
  RVec3* result = new RVec3(resultValue);
  return reinterpret_cast<JPC_RVec3_t *>(result);
};

long JPC_SkeletonPose_GetJointCount(
  JPC_SkeletonPose_t * self
) {
  SkeletonPose * selfCpp = static_cast<SkeletonPose *>(self->obj);
  long result = selfCpp->GetJointCount();
  return result;
};

JPC_SkeletalAnimationJointState_t * JPC_SkeletonPose_GetJoint(
  JPC_SkeletonPose_t * self,
  long inJoint
) {
  SkeletonPose * selfCpp = static_cast<SkeletonPose *>(self->obj);
  SkeletalAnimationJointState& resultRef = selfCpp->GetJoint(
  inJoint
  );
  SkeletalAnimationJointState * result = &resultRef;
  return reinterpret_cast<JPC_SkeletalAnimationJointState_t *>(result);
};

JPC_ArrayMat44_t * JPC_SkeletonPose_GetJointMatrices(
  JPC_SkeletonPose_t * self
) {
  SkeletonPose * selfCpp = static_cast<SkeletonPose *>(self->obj);
  ArrayMat44& resultRef = selfCpp->GetJointMatrices();
  ArrayMat44 * result = &resultRef;
  return reinterpret_cast<JPC_ArrayMat44_t *>(result);
};

JPC_Mat44_t * JPC_SkeletonPose_GetJointMatrix(
  JPC_SkeletonPose_t * self,
  long inJoint
) {
  SkeletonPose * selfCpp = static_cast<SkeletonPose *>(self->obj);
  Mat44& resultRef = selfCpp->GetJointMatrix(
  inJoint
  );
  Mat44 * result = &resultRef;
  return reinterpret_cast<JPC_Mat44_t *>(result);
};

void JPC_SkeletonPose_CalculateJointMatrices(
  JPC_SkeletonPose_t * self
) {
  SkeletonPose * selfCpp = static_cast<SkeletonPose *>(self->obj);
  
  selfCpp->CalculateJointMatrices();
};

void JPC_SkeletonPose_CalculateJointStates(
  JPC_SkeletonPose_t * self
) {
  SkeletonPose * selfCpp = static_cast<SkeletonPose *>(self->obj);
  
  selfCpp->CalculateJointStates();
};

//endregion functions

#ifdef __cplusplus
}
#endif

