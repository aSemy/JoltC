#include "JoltC/JoltC_GroupFilterTable.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

/**
  Construct a new `GroupFilterTable` instance.
 */
JoltC_GroupFilterTable_t * JoltC_GroupFilterTable_new(
  unsigned long inNumGroups
) {
  JoltC_GroupFilterTable_t * cInstance = new JoltC_GroupFilterTable_t();
  GroupFilterTable * cppInstance = new GroupFilterTable(
    inNumGroups
  );
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion

//region destructor

void JoltC_GroupFilterTable_destroy(
  JoltC_GroupFilterTable_t * self
){
  if (self == NULL) return;
  delete static_cast<GroupFilterTable *>(self->obj);
  free(self);
}

//endregion
//region functions

void JoltC_GroupFilterTable_DisableCollision(
  JoltC_GroupFilterTable_t * self,
  unsigned long inSubGroup1,
  unsigned long inSubGroup2
) {
  GroupFilterTable * selfCpp = static_cast<GroupFilterTable *>(self->obj);
  selfCpp->DisableCollision(
    inSubGroup1,
    inSubGroup2
  );
}

void JoltC_GroupFilterTable_EnableCollision(
  JoltC_GroupFilterTable_t * self,
  unsigned long inSubGroup1,
  unsigned long inSubGroup2
) {
  GroupFilterTable * selfCpp = static_cast<GroupFilterTable *>(self->obj);
  selfCpp->EnableCollision(
    inSubGroup1,
    inSubGroup2
  );
}

bool JoltC_GroupFilterTable_IsCollisionEnabled(
  JoltC_GroupFilterTable_t * self,
  unsigned long inSubGroup1,
  unsigned long inSubGroup2
) {
  GroupFilterTable * selfCpp = static_cast<GroupFilterTable *>(self->obj);
  return selfCpp->IsCollisionEnabled(
    inSubGroup1,
    inSubGroup2
  );
}

unsigned long JoltC_GroupFilterTable_GetRefCount(
  JoltC_GroupFilterTable_t * self
) {
  GroupFilterTable * selfCpp = static_cast<GroupFilterTable *>(self->obj);
  return selfCpp->GetRefCount();
}

void JoltC_GroupFilterTable_AddRef(
  JoltC_GroupFilterTable_t * self
) {
  GroupFilterTable * selfCpp = static_cast<GroupFilterTable *>(self->obj);
  selfCpp->AddRef();
}

void JoltC_GroupFilterTable_Release(
  JoltC_GroupFilterTable_t * self
) {
  GroupFilterTable * selfCpp = static_cast<GroupFilterTable *>(self->obj);
  selfCpp->Release();
}

//endregion


#ifdef __cplusplus
}
#endif
