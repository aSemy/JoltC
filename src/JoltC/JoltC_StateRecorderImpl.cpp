#include "JoltC/JoltC_StateRecorderImpl.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_StateRecorderImpl_t * JoltC_StateRecorderImpl_new() {
  JoltC_StateRecorderImpl_t * cInstance = new JoltC_StateRecorderImpl_t();
  StateRecorderImpl * cppInstance = new StateRecorderImpl();
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion

//region functions

void JoltC_StateRecorderImpl_Clear(
  JoltC_StateRecorderImpl_t * self
) {
  StateRecorderImpl * selfCpp = static_cast<StateRecorderImpl *>(self->obj);
  
  selfCpp->Clear();
};

void JoltC_StateRecorderImpl_Rewind(
  JoltC_StateRecorderImpl_t * self
) {
  StateRecorderImpl * selfCpp = static_cast<StateRecorderImpl *>(self->obj);
  
  selfCpp->Rewind();
};

bool JoltC_StateRecorderImpl_IsEqual(
  JoltC_StateRecorderImpl_t * self,
  JoltC_StateRecorderImpl_t * inReference
) {
  StateRecorderImpl * selfCpp = static_cast<StateRecorderImpl *>(self->obj);
  bool result = selfCpp->IsEqual(
    *reinterpret_cast<StateRecorderImpl *>(inReference->obj)
  );
  return result;
};

void JoltC_StateRecorderImpl_SetValidating(
  JoltC_StateRecorderImpl_t * self,
  bool inValidating
) {
  StateRecorderImpl * selfCpp = static_cast<StateRecorderImpl *>(self->obj);
  
  selfCpp->SetValidating(
    inValidating
  );
};

bool JoltC_StateRecorderImpl_IsValidating(
  JoltC_StateRecorderImpl_t * self
) {
  StateRecorderImpl * selfCpp = static_cast<StateRecorderImpl *>(self->obj);
  bool result = selfCpp->IsValidating();
  return result;
};

//endregion

#ifdef __cplusplus
}
#endif

