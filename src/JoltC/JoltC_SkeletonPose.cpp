#include "JoltC/JoltC_SkeletonPose.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

/**
  Construct a new `SkeletonPose` instance.
 */
JoltC_SkeletonPose_t * JoltC_SkeletonPose_new() {
  JoltC_SkeletonPose_t * cInstance = new JoltC_SkeletonPose_t();
  SkeletonPose * cppInstance = new SkeletonPose();
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion

//region destructor

void JoltC_SkeletonPose_destroy(
  JoltC_SkeletonPose_t * self
){
  if (self == NULL) return;
  delete static_cast<SkeletonPose *>(self->obj);
  free(self);
}

//endregion
//region functions

void JoltC_SkeletonPose_SetSkeleton(
  JoltC_SkeletonPose_t * self,
  JoltC_Skeleton_t * inSkeleton
) {
  SkeletonPose * selfCpp = static_cast<SkeletonPose *>(self->obj);
  const Skeleton * inSkeletonCpp = static_cast<const Skeleton *>(inSkeleton->obj);
  selfCpp->SetSkeleton(
    inSkeletonCpp
  );
}

JoltC_Skeleton_t * JoltC_SkeletonPose_GetSkeleton(
  JoltC_SkeletonPose_t * self
) {
  SkeletonPose * selfCpp = static_cast<SkeletonPose *>(self->obj);
  const Skeleton * resultPtr = selfCpp->GetSkeleton();
  JoltC_Skeleton_t * result = new JoltC_Skeleton_t();
  result->obj = const_cast<void *>(reinterpret_cast<const void *>(resultPtr));
  return result;
}

void JoltC_SkeletonPose_SetRootOffset(
  JoltC_SkeletonPose_t * self,
  JoltC_RVec3_t * inOffset
) {
  SkeletonPose * selfCpp = static_cast<SkeletonPose *>(self->obj);
  RVec3 * inOffsetCpp = static_cast<RVec3 *>(inOffset->obj);
  selfCpp->SetRootOffset(
    *inOffsetCpp
  );
}

JoltC_RVec3_t * JoltC_SkeletonPose_GetRootOffset(
  JoltC_SkeletonPose_t * self
) {
  SkeletonPose * selfCpp = static_cast<SkeletonPose *>(self->obj);
  RVec3 * resultPtr = new RVec3();
  *resultPtr = selfCpp->GetRootOffset();
  JoltC_RVec3_t * result = new JoltC_RVec3_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

long JoltC_SkeletonPose_GetJointCount(
  JoltC_SkeletonPose_t * self
) {
  SkeletonPose * selfCpp = static_cast<SkeletonPose *>(self->obj);
  return selfCpp->GetJointCount();
}

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
}

JoltC_ArrayMat44_t * JoltC_SkeletonPose_GetJointMatrices(
  JoltC_SkeletonPose_t * self
) {
  SkeletonPose * selfCpp = static_cast<SkeletonPose *>(self->obj);
  ArrayMat44* resultRef = &selfCpp->GetJointMatrices();
  JoltC_ArrayMat44_t* result = new JoltC_ArrayMat44_t();
  result->obj = reinterpret_cast<void*>(resultRef);
  return result;
}

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
}

void JoltC_SkeletonPose_CalculateJointMatrices(
  JoltC_SkeletonPose_t * self
) {
  SkeletonPose * selfCpp = static_cast<SkeletonPose *>(self->obj);
  selfCpp->CalculateJointMatrices();
}

void JoltC_SkeletonPose_CalculateJointStates(
  JoltC_SkeletonPose_t * self
) {
  SkeletonPose * selfCpp = static_cast<SkeletonPose *>(self->obj);
  selfCpp->CalculateJointStates();
}

//endregion


#ifdef __cplusplus
}
#endif
