#include "JoltC/JoltC_GroupFilter.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region destructor

void JoltC_GroupFilter_destroy(
  JoltC_GroupFilter_t * self
){
  if (self == NULL) return;
  delete static_cast<GroupFilter *>(self->obj);
  free(self);
}

//endregion
//region converters

/**
 * Convert an instance of JoltC_GroupFilterTable_t into JoltC_GroupFilter_t.
 */
JoltC_GroupFilter_t * JoltC_GroupFilter_From_GroupFilterTable(
  JoltC_GroupFilterTable_t * subtype
) {
  return (JoltC_GroupFilter_t*) subtype;
};

//endregion

//region functions

unsigned long JoltC_GroupFilter_GetRefCount(
  JoltC_GroupFilter_t * self
) {
  GroupFilter * selfCpp = static_cast<GroupFilter *>(self->obj);
  return selfCpp->GetRefCount();
}

void JoltC_GroupFilter_AddRef(
  JoltC_GroupFilter_t * self
) {
  GroupFilter * selfCpp = static_cast<GroupFilter *>(self->obj);
  selfCpp->AddRef();
}

void JoltC_GroupFilter_Release(
  JoltC_GroupFilter_t * self
) {
  GroupFilter * selfCpp = static_cast<GroupFilter *>(self->obj);
  selfCpp->Release();
}

//endregion


#ifdef __cplusplus
}
#endif
