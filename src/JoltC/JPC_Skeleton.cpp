#include "JoltC/JPC_Skeleton.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JPC_Skeleton_t * JPC_Skeleton_new() {
  JPC_Skeleton_t * cInstance = new JPC_Skeleton_t();
  Skeleton * cppInstance = new Skeleton();
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion constructors

//region functions

long JPC_Skeleton_AddJoint(
  JPC_Skeleton_t * self,
  const JPC_JPHString_t * inName,
  long inParentIndex
) {
  Skeleton * selfCpp = static_cast<Skeleton *>(self->obj);
  long result = selfCpp->AddJoint(
  *reinterpret_cast<JPHString *>(inName->obj),
  inParentIndex
  );
  return result;
};

long JPC_Skeleton_GetJointCount(
  JPC_Skeleton_t * self
) {
  Skeleton * selfCpp = static_cast<Skeleton *>(self->obj);
  long result = selfCpp->GetJointCount();
  return result;
};

bool JPC_Skeleton_AreJointsCorrectlyOrdered(
  JPC_Skeleton_t * self
) {
  Skeleton * selfCpp = static_cast<Skeleton *>(self->obj);
  bool result = selfCpp->AreJointsCorrectlyOrdered();
  return result;
};

void JPC_Skeleton_CalculateParentJointIndices(
  JPC_Skeleton_t * self
) {
  Skeleton * selfCpp = static_cast<Skeleton *>(self->obj);
  
  selfCpp->CalculateParentJointIndices();
};

//endregion functions

#ifdef __cplusplus
}
#endif

