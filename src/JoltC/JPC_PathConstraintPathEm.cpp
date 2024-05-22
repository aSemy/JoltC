#include "JoltC/JPC_PathConstraintPathEm.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region functions

bool JPC_PathConstraintPathEm_IsLooping(
  JPC_PathConstraintPathEm_t * self
) {
  PathConstraintPathEm * selfCpp = static_cast<PathConstraintPathEm *>(self->obj);
  bool result = selfCpp->IsLooping();
  return result;
};

void JPC_PathConstraintPathEm_SetIsLooping(
  JPC_PathConstraintPathEm_t * self,
  bool inIsLooping
) {
  PathConstraintPathEm * selfCpp = static_cast<PathConstraintPathEm *>(self->obj);
  
  selfCpp->SetIsLooping(
  inIsLooping
  );
};

unsigned long JPC_PathConstraintPathEm_GetRefCount(
  JPC_PathConstraintPathEm_t * self
) {
  PathConstraintPathEm * selfCpp = static_cast<PathConstraintPathEm *>(self->obj);
  unsigned long result = selfCpp->GetRefCount();
  return result;
};

void JPC_PathConstraintPathEm_AddRef(
  JPC_PathConstraintPathEm_t * self
) {
  PathConstraintPathEm * selfCpp = static_cast<PathConstraintPathEm *>(self->obj);
  
  selfCpp->AddRef();
};

void JPC_PathConstraintPathEm_Release(
  JPC_PathConstraintPathEm_t * self
) {
  PathConstraintPathEm * selfCpp = static_cast<PathConstraintPathEm *>(self->obj);
  
  selfCpp->Release();
};

//endregion functions

#ifdef __cplusplus
}
#endif

