#include "JoltC/JoltC_Skeleton.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

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
  long result = selfCpp->AddJoint(
    *reinterpret_cast<JPHString *>(inName->obj),
    inParentIndex
  );
  return result;
};

long JoltC_Skeleton_GetJointCount(
  JoltC_Skeleton_t * self
) {
  Skeleton * selfCpp = static_cast<Skeleton *>(self->obj);
  long result = selfCpp->GetJointCount();
  return result;
};

bool JoltC_Skeleton_AreJointsCorrectlyOrdered(
  JoltC_Skeleton_t * self
) {
  Skeleton * selfCpp = static_cast<Skeleton *>(self->obj);
  bool result = selfCpp->AreJointsCorrectlyOrdered();
  return result;
};

void JoltC_Skeleton_CalculateParentJointIndices(
  JoltC_Skeleton_t * self
) {
  Skeleton * selfCpp = static_cast<Skeleton *>(self->obj);
  
  selfCpp->CalculateParentJointIndices();
};

//endregion

#ifdef __cplusplus
}
#endif

