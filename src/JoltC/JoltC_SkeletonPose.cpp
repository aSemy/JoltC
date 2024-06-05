#include "JoltC/JoltC_SkeletonPose.h"
#include "JoltC/JoltJS.h"

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
  JoltC_Skeleton_t * inSkeleton
) {
  SkeletonPose * selfCpp = static_cast<SkeletonPose *>(self->obj);
  selfCpp->SetSkeleton(
    reinterpret_cast<Skeleton *>(inSkeleton->obj)
  );
};

JoltC_Skeleton_t * JoltC_SkeletonPose_GetSkeleton(
  JoltC_SkeletonPose_t * self
) {
  SkeletonPose * selfCpp = static_cast<SkeletonPose *>(self->obj);
  const Skeleton * resultValue = selfCpp->GetSkeleton();
  JoltC_Skeleton_t* result = new JoltC_Skeleton_t();
  result->obj = const_cast<void*>(reinterpret_cast<const void*>(&resultValue));
  return result;
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
  const RVec3& resultValue = selfCpp->GetRootOffset();
  JoltC_RVec3_t* result = new JoltC_RVec3_t();
  result->obj = const_cast<void*>(reinterpret_cast<const void*>(&resultValue));
  return result;
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
  SkeletalAnimationJointState* resultRef = &selfCpp->GetJoint(
    inJoint
  );
  JoltC_SkeletalAnimationJointState_t* result = new JoltC_SkeletalAnimationJointState_t();
  result->obj = reinterpret_cast<void*>(resultRef);
  return result;
};

JoltC_ArrayMat44_t * JoltC_SkeletonPose_GetJointMatrices(
  JoltC_SkeletonPose_t * self
) {
  SkeletonPose * selfCpp = static_cast<SkeletonPose *>(self->obj);
  ArrayMat44* resultRef = &selfCpp->GetJointMatrices();
  JoltC_ArrayMat44_t* result = new JoltC_ArrayMat44_t();
  result->obj = reinterpret_cast<void*>(resultRef);
  return result;
};

JoltC_Mat44_t * JoltC_SkeletonPose_GetJointMatrix(
  JoltC_SkeletonPose_t * self,
  long inJoint
) {
  SkeletonPose * selfCpp = static_cast<SkeletonPose *>(self->obj);
  Mat44* resultRef = &selfCpp->GetJointMatrix(
    inJoint
  );
  JoltC_Mat44_t* result = new JoltC_Mat44_t();
  result->obj = reinterpret_cast<void*>(resultRef);
  return result;
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

