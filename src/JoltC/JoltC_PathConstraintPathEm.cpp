#include "JoltC/JoltC_PathConstraintPathEm.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region destructor

void JoltC_PathConstraintPathEm_destroy(
  JoltC_PathConstraintPathEm_t * self
){
  if (self == NULL) return;
  delete static_cast<PathConstraintPathEm *>(self->obj);
  free(self);
}

//endregion
//region functions

bool JoltC_PathConstraintPathEm_IsLooping(
  JoltC_PathConstraintPathEm_t * self
) {
  PathConstraintPathEm * selfCpp = static_cast<PathConstraintPathEm *>(self->obj);
  return selfCpp->IsLooping();
}

void JoltC_PathConstraintPathEm_SetIsLooping(
  JoltC_PathConstraintPathEm_t * self,
  bool inIsLooping
) {
  PathConstraintPathEm * selfCpp = static_cast<PathConstraintPathEm *>(self->obj);
  selfCpp->SetIsLooping(
    inIsLooping
  );
}

unsigned long JoltC_PathConstraintPathEm_GetRefCount(
  JoltC_PathConstraintPathEm_t * self
) {
  PathConstraintPathEm * selfCpp = static_cast<PathConstraintPathEm *>(self->obj);
  return selfCpp->GetRefCount();
}

void JoltC_PathConstraintPathEm_AddRef(
  JoltC_PathConstraintPathEm_t * self
) {
  PathConstraintPathEm * selfCpp = static_cast<PathConstraintPathEm *>(self->obj);
  selfCpp->AddRef();
}

void JoltC_PathConstraintPathEm_Release(
  JoltC_PathConstraintPathEm_t * self
) {
  PathConstraintPathEm * selfCpp = static_cast<PathConstraintPathEm *>(self->obj);
  selfCpp->Release();
}

//endregion


#ifdef __cplusplus
}
#endif
