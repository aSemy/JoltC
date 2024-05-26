#include "JoltC/JoltC_PathConstraintPath.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region converters

/**
 * Convert an instance of JoltC_PathConstraintPathEm_t into JoltC_PathConstraintPath_t.
 */
JoltC_PathConstraintPath_t * JoltC_PathConstraintPath_From_PathConstraintPathEm(
  JoltC_PathConstraintPathEm_t * subtype
) {
  return (JoltC_PathConstraintPath_t*) subtype;
};

//endregion

//region functions

bool JoltC_PathConstraintPath_IsLooping(
  JoltC_PathConstraintPath_t * self
) {
  PathConstraintPath * selfCpp = static_cast<PathConstraintPath *>(self->obj);
  bool result = selfCpp->IsLooping();
  return result;
};

void JoltC_PathConstraintPath_SetIsLooping(
  JoltC_PathConstraintPath_t * self,
  bool inIsLooping
) {
  PathConstraintPath * selfCpp = static_cast<PathConstraintPath *>(self->obj);
  
  selfCpp->SetIsLooping(
    inIsLooping
  );
};

unsigned long JoltC_PathConstraintPath_GetRefCount(
  JoltC_PathConstraintPath_t * self
) {
  PathConstraintPath * selfCpp = static_cast<PathConstraintPath *>(self->obj);
  unsigned long result = selfCpp->GetRefCount();
  return result;
};

void JoltC_PathConstraintPath_AddRef(
  JoltC_PathConstraintPath_t * self
) {
  PathConstraintPath * selfCpp = static_cast<PathConstraintPath *>(self->obj);
  
  selfCpp->AddRef();
};

void JoltC_PathConstraintPath_Release(
  JoltC_PathConstraintPath_t * self
) {
  PathConstraintPath * selfCpp = static_cast<PathConstraintPath *>(self->obj);
  
  selfCpp->Release();
};

//endregion

#ifdef __cplusplus
}
#endif

