#include "JoltC/JoltC_StateRecorderImpl.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

/**
  Construct a new `StateRecorderImpl` instance.
 */
JoltC_StateRecorderImpl_t * JoltC_StateRecorderImpl_new() {
  JoltC_StateRecorderImpl_t * cInstance = new JoltC_StateRecorderImpl_t();
  StateRecorderImpl * cppInstance = new StateRecorderImpl();
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion

//region destructor

void JoltC_StateRecorderImpl_destroy(
  JoltC_StateRecorderImpl_t * self
){
  if (self == NULL) return;
  delete static_cast<StateRecorderImpl *>(self->obj);
  free(self);
}

//endregion
//region functions

void JoltC_StateRecorderImpl_Clear(
  JoltC_StateRecorderImpl_t * self
) {
  StateRecorderImpl * selfCpp = static_cast<StateRecorderImpl *>(self->obj);
  selfCpp->Clear();
}

void JoltC_StateRecorderImpl_Rewind(
  JoltC_StateRecorderImpl_t * self
) {
  StateRecorderImpl * selfCpp = static_cast<StateRecorderImpl *>(self->obj);
  selfCpp->Rewind();
}

bool JoltC_StateRecorderImpl_IsEqual(
  JoltC_StateRecorderImpl_t * self,
  JoltC_StateRecorderImpl_t * inReference
) {
  StateRecorderImpl * selfCpp = static_cast<StateRecorderImpl *>(self->obj);
  StateRecorderImpl * inReferenceCpp = static_cast<StateRecorderImpl *>(inReference->obj);
  return selfCpp->IsEqual(
    *inReferenceCpp
  );
}

void JoltC_StateRecorderImpl_SetValidating(
  JoltC_StateRecorderImpl_t * self,
  bool inValidating
) {
  StateRecorderImpl * selfCpp = static_cast<StateRecorderImpl *>(self->obj);
  selfCpp->SetValidating(
    inValidating
  );
}

bool JoltC_StateRecorderImpl_IsValidating(
  JoltC_StateRecorderImpl_t * self
) {
  StateRecorderImpl * selfCpp = static_cast<StateRecorderImpl *>(self->obj);
  return selfCpp->IsValidating();
}

//endregion


#ifdef __cplusplus
}
#endif
