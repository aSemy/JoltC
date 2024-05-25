#include "JoltC/JPC_PathConstraintPath.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region functions

bool JPC_PathConstraintPath_IsLooping(
  JPC_PathConstraintPath_t * self
) {
  PathConstraintPath * selfCpp = static_cast<PathConstraintPath *>(self->obj);
  bool result = selfCpp->IsLooping();
  return result;
};

void JPC_PathConstraintPath_SetIsLooping(
  JPC_PathConstraintPath_t * self,
  bool inIsLooping
) {
  PathConstraintPath * selfCpp = static_cast<PathConstraintPath *>(self->obj);
  
  selfCpp->SetIsLooping(
  inIsLooping
  );
};

unsigned long JPC_PathConstraintPath_GetRefCount(
  JPC_PathConstraintPath_t * self
) {
  PathConstraintPath * selfCpp = static_cast<PathConstraintPath *>(self->obj);
  unsigned long result = selfCpp->GetRefCount();
  return result;
};

void JPC_PathConstraintPath_AddRef(
  JPC_PathConstraintPath_t * self
) {
  PathConstraintPath * selfCpp = static_cast<PathConstraintPath *>(self->obj);
  
  selfCpp->AddRef();
};

void JPC_PathConstraintPath_Release(
  JPC_PathConstraintPath_t * self
) {
  PathConstraintPath * selfCpp = static_cast<PathConstraintPath *>(self->obj);
  
  selfCpp->Release();
};

//endregion functions

#ifdef __cplusplus
}
#endif

