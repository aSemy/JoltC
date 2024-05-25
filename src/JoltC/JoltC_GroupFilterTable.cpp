#include "JoltC/JPC_GroupFilterTable.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JPC_GroupFilterTable_t * JPC_GroupFilterTable_new(
  unsigned long inNumGroups
) {
  JPC_GroupFilterTable_t * cInstance = new JPC_GroupFilterTable_t();
  GroupFilterTable * cppInstance = new GroupFilterTable(
    inNumGroups
  );
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion constructors

//region functions

void JPC_GroupFilterTable_DisableCollision(
  JPC_GroupFilterTable_t * self,
  unsigned long inSubGroup1,
  unsigned long inSubGroup2
) {
  GroupFilterTable * selfCpp = static_cast<GroupFilterTable *>(self->obj);
  
  selfCpp->DisableCollision(
  inSubGroup1,
  inSubGroup2
  );
};

void JPC_GroupFilterTable_EnableCollision(
  JPC_GroupFilterTable_t * self,
  unsigned long inSubGroup1,
  unsigned long inSubGroup2
) {
  GroupFilterTable * selfCpp = static_cast<GroupFilterTable *>(self->obj);
  
  selfCpp->EnableCollision(
  inSubGroup1,
  inSubGroup2
  );
};

bool JPC_GroupFilterTable_IsCollisionEnabled(
  JPC_GroupFilterTable_t * self,
  unsigned long inSubGroup1,
  unsigned long inSubGroup2
) {
  GroupFilterTable * selfCpp = static_cast<GroupFilterTable *>(self->obj);
  bool result = selfCpp->IsCollisionEnabled(
  inSubGroup1,
  inSubGroup2
  );
  return result;
};

unsigned long JPC_GroupFilterTable_GetRefCount(
  JPC_GroupFilterTable_t * self
) {
  GroupFilterTable * selfCpp = static_cast<GroupFilterTable *>(self->obj);
  unsigned long result = selfCpp->GetRefCount();
  return result;
};

void JPC_GroupFilterTable_AddRef(
  JPC_GroupFilterTable_t * self
) {
  GroupFilterTable * selfCpp = static_cast<GroupFilterTable *>(self->obj);
  
  selfCpp->AddRef();
};

void JPC_GroupFilterTable_Release(
  JPC_GroupFilterTable_t * self
) {
  GroupFilterTable * selfCpp = static_cast<GroupFilterTable *>(self->obj);
  
  selfCpp->Release();
};

//endregion functions

#ifdef __cplusplus
}
#endif

