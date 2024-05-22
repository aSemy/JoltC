#include "JoltC/JPC_GroupFilter.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region functions

unsigned long JPC_GroupFilter_GetRefCount(
  JPC_GroupFilter_t * self
) {
  GroupFilter * selfCpp = static_cast<GroupFilter *>(self->obj);
  unsigned long result = selfCpp->GetRefCount();
  return result;
};

void JPC_GroupFilter_AddRef(
  JPC_GroupFilter_t * self
) {
  GroupFilter * selfCpp = static_cast<GroupFilter *>(self->obj);
  
  selfCpp->AddRef();
};

void JPC_GroupFilter_Release(
  JPC_GroupFilter_t * self
) {
  GroupFilter * selfCpp = static_cast<GroupFilter *>(self->obj);
  
  selfCpp->Release();
};

//endregion functions

#ifdef __cplusplus
}
#endif

