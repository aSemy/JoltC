#include "JoltC/JoltC_PathConstraintPathEm.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region functions

bool JoltC_PathConstraintPathEm_IsLooping(
  JoltC_PathConstraintPathEm_t * self
) {
  PathConstraintPathEm * selfCpp = static_cast<PathConstraintPathEm *>(self->obj);
  bool result = selfCpp->IsLooping();
  return result;
};

void JoltC_PathConstraintPathEm_SetIsLooping(
  JoltC_PathConstraintPathEm_t * self,
  bool inIsLooping
) {
  PathConstraintPathEm * selfCpp = static_cast<PathConstraintPathEm *>(self->obj);
  
  selfCpp->SetIsLooping(
    inIsLooping
  );
};

unsigned long JoltC_PathConstraintPathEm_GetRefCount(
  JoltC_PathConstraintPathEm_t * self
) {
  PathConstraintPathEm * selfCpp = static_cast<PathConstraintPathEm *>(self->obj);
  unsigned long result = selfCpp->GetRefCount();
  return result;
};

void JoltC_PathConstraintPathEm_AddRef(
  JoltC_PathConstraintPathEm_t * self
) {
  PathConstraintPathEm * selfCpp = static_cast<PathConstraintPathEm *>(self->obj);
  
  selfCpp->AddRef();
};

void JoltC_PathConstraintPathEm_Release(
  JoltC_PathConstraintPathEm_t * self
) {
  PathConstraintPathEm * selfCpp = static_cast<PathConstraintPathEm *>(self->obj);
  
  selfCpp->Release();
};

//endregion

#ifdef __cplusplus
}
#endif

