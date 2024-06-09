#include "JoltC/JoltC_Skeleton.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

/**
  Construct a new `Skeleton` instance.
 */
JoltC_Skeleton_t * JoltC_Skeleton_new() {
  JoltC_Skeleton_t * cInstance = new JoltC_Skeleton_t();
  Skeleton * cppInstance = new Skeleton();
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion

//region functions

long JoltC_Skeleton_AddJoint(
  JoltC_Skeleton_t * self,
  JoltC_JPHString_t * inName,
  long inParentIndex
) {
  Skeleton * selfCpp = static_cast<Skeleton *>(self->obj);
  const JPHString * inNameCpp = static_cast<const JPHString *>(inName->obj);
  return selfCpp->AddJoint(
    *inNameCpp,
    inParentIndex
  );
}

long JoltC_Skeleton_GetJointCount(
  JoltC_Skeleton_t * self
) {
  Skeleton * selfCpp = static_cast<Skeleton *>(self->obj);
  return selfCpp->GetJointCount();
}

bool JoltC_Skeleton_AreJointsCorrectlyOrdered(
  JoltC_Skeleton_t * self
) {
  Skeleton * selfCpp = static_cast<Skeleton *>(self->obj);
  return selfCpp->AreJointsCorrectlyOrdered();
}

void JoltC_Skeleton_CalculateParentJointIndices(
  JoltC_Skeleton_t * self
) {
  Skeleton * selfCpp = static_cast<Skeleton *>(self->obj);
  selfCpp->CalculateParentJointIndices();
}

//endregion

#ifdef __cplusplus
}
#endif

