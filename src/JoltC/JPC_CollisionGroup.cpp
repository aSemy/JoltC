#include "JoltC/JPC_CollisionGroup.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JPC_CollisionGroup_t * JPC_CollisionGroup_new_0() {
  JPC_CollisionGroup_t * cInstance = new JPC_CollisionGroup_t();
  CollisionGroup * cppInstance = new CollisionGroup();
  cInstance->obj = cppInstance;
  return cInstance;
};

JPC_CollisionGroup_t * JPC_CollisionGroup_new_1(
  JPC_GroupFilter_t * inFilter,
  unsigned long inGroupID,
  unsigned long inSubGroupID
) {
  JPC_CollisionGroup_t * cInstance = new JPC_CollisionGroup_t();
  CollisionGroup * cppInstance = new CollisionGroup(
    reinterpret_cast<GroupFilter *>(inFilter->obj),
    inGroupID,
    inSubGroupID
  );
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion constructors

//region functions

void JPC_CollisionGroup_SetGroupFilter(
  JPC_CollisionGroup_t * self,
  JPC_GroupFilter_t * inFilter
) {
  CollisionGroup * selfCpp = static_cast<CollisionGroup *>(self->obj);
  
  selfCpp->SetGroupFilter(
  reinterpret_cast<GroupFilter *>(inFilter->obj)
  );
};

const JPC_GroupFilter_t * JPC_CollisionGroup_GetGroupFilter(
  JPC_CollisionGroup_t * self
) {
  CollisionGroup * selfCpp = static_cast<CollisionGroup *>(self->obj);
  const GroupFilter * result = selfCpp->GetGroupFilter();
  return reinterpret_cast<const JPC_GroupFilter_t *>(result);
};

void JPC_CollisionGroup_SetGroupID(
  JPC_CollisionGroup_t * self,
  unsigned long inGroupID
) {
  CollisionGroup * selfCpp = static_cast<CollisionGroup *>(self->obj);
  
  selfCpp->SetGroupID(
  inGroupID
  );
};

unsigned long JPC_CollisionGroup_GetGroupID(
  JPC_CollisionGroup_t * self
) {
  CollisionGroup * selfCpp = static_cast<CollisionGroup *>(self->obj);
  unsigned long result = selfCpp->GetGroupID();
  return result;
};

void JPC_CollisionGroup_SetSubGroupID(
  JPC_CollisionGroup_t * self,
  unsigned long inSubGroupID
) {
  CollisionGroup * selfCpp = static_cast<CollisionGroup *>(self->obj);
  
  selfCpp->SetSubGroupID(
  inSubGroupID
  );
};

unsigned long JPC_CollisionGroup_GetSubGroupID(
  JPC_CollisionGroup_t * self
) {
  CollisionGroup * selfCpp = static_cast<CollisionGroup *>(self->obj);
  unsigned long result = selfCpp->GetSubGroupID();
  return result;
};

//endregion functions

#ifdef __cplusplus
}
#endif

