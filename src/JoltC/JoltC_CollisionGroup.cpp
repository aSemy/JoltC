#include "JoltC/JoltC_CollisionGroup.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

/**
  Construct a new `CollisionGroup` instance.
 */
JoltC_CollisionGroup_t * JoltC_CollisionGroup_new_0() {
  JoltC_CollisionGroup_t * cInstance = new JoltC_CollisionGroup_t();
  CollisionGroup * cppInstance = new CollisionGroup();
  cInstance->obj = cppInstance;
  return cInstance;
};

/**
  Construct a new `CollisionGroup` instance.
 */
JoltC_CollisionGroup_t * JoltC_CollisionGroup_new_1(
  JoltC_GroupFilter_t * inFilter,
  unsigned long inGroupID,
  unsigned long inSubGroupID
) {
  GroupFilter * inFilterCpp = static_cast<GroupFilter *>(inFilter->obj);
  JoltC_CollisionGroup_t * cInstance = new JoltC_CollisionGroup_t();
  CollisionGroup * cppInstance = new CollisionGroup(
    inFilterCpp,
    inGroupID,
    inSubGroupID
  );
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion

//region functions

void JoltC_CollisionGroup_SetGroupFilter(
  JoltC_CollisionGroup_t * self,
  JoltC_GroupFilter_t * inFilter
) {
  CollisionGroup * selfCpp = static_cast<CollisionGroup *>(self->obj);
  GroupFilter * inFilterCpp = static_cast<GroupFilter *>(inFilter->obj);
  selfCpp->SetGroupFilter(
    inFilterCpp
  );
}

JoltC_GroupFilter_t * JoltC_CollisionGroup_GetGroupFilter(
  JoltC_CollisionGroup_t * self
) {
  CollisionGroup * selfCpp = static_cast<CollisionGroup *>(self->obj);
  const GroupFilter * resultPtr = selfCpp->GetGroupFilter();
  JoltC_GroupFilter_t * result = new JoltC_GroupFilter_t();
  result->obj = const_cast<void *>(reinterpret_cast<const void *>(resultPtr));
  return result;
}

void JoltC_CollisionGroup_SetGroupID(
  JoltC_CollisionGroup_t * self,
  unsigned long inGroupID
) {
  CollisionGroup * selfCpp = static_cast<CollisionGroup *>(self->obj);
  selfCpp->SetGroupID(
    inGroupID
  );
}

unsigned long JoltC_CollisionGroup_GetGroupID(
  JoltC_CollisionGroup_t * self
) {
  CollisionGroup * selfCpp = static_cast<CollisionGroup *>(self->obj);
  return selfCpp->GetGroupID();
}

void JoltC_CollisionGroup_SetSubGroupID(
  JoltC_CollisionGroup_t * self,
  unsigned long inSubGroupID
) {
  CollisionGroup * selfCpp = static_cast<CollisionGroup *>(self->obj);
  selfCpp->SetSubGroupID(
    inSubGroupID
  );
}

unsigned long JoltC_CollisionGroup_GetSubGroupID(
  JoltC_CollisionGroup_t * self
) {
  CollisionGroup * selfCpp = static_cast<CollisionGroup *>(self->obj);
  return selfCpp->GetSubGroupID();
}

//endregion

#ifdef __cplusplus
}
#endif

