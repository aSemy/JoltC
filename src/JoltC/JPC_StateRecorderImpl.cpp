#include "JoltC/JPC_StateRecorderImpl.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JPC_StateRecorderImpl_t * JPC_StateRecorderImpl_new() {
  JPC_StateRecorderImpl_t * cInstance = new JPC_StateRecorderImpl_t();
  StateRecorderImpl * cppInstance = new StateRecorderImpl();
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion constructors

//region functions

void JPC_StateRecorderImpl_Clear(
  JPC_StateRecorderImpl_t * self
) {
  StateRecorderImpl * selfCpp = static_cast<StateRecorderImpl *>(self->obj);
  
  selfCpp->Clear();
};

void JPC_StateRecorderImpl_Rewind(
  JPC_StateRecorderImpl_t * self
) {
  StateRecorderImpl * selfCpp = static_cast<StateRecorderImpl *>(self->obj);
  
  selfCpp->Rewind();
};

bool JPC_StateRecorderImpl_IsEqual(
  JPC_StateRecorderImpl_t * self,
  JPC_StateRecorderImpl_t * inReference
) {
  StateRecorderImpl * selfCpp = static_cast<StateRecorderImpl *>(self->obj);
  bool result = selfCpp->IsEqual(
  *reinterpret_cast<StateRecorderImpl *>(inReference->obj)
  );
  return result;
};

void JPC_StateRecorderImpl_SetValidating(
  JPC_StateRecorderImpl_t * self,
  bool inValidating
) {
  StateRecorderImpl * selfCpp = static_cast<StateRecorderImpl *>(self->obj);
  
  selfCpp->SetValidating(
  inValidating
  );
};

bool JPC_StateRecorderImpl_IsValidating(
  JPC_StateRecorderImpl_t * self
) {
  StateRecorderImpl * selfCpp = static_cast<StateRecorderImpl *>(self->obj);
  bool result = selfCpp->IsValidating();
  return result;
};

//endregion functions

#ifdef __cplusplus
}
#endif

