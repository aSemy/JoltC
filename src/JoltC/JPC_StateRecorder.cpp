#include "JoltC/JPC_StateRecorder.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region functions

void JPC_StateRecorder_SetValidating(
  JPC_StateRecorder_t * self,
  bool inValidating
) {
  StateRecorder * selfCpp = static_cast<StateRecorder *>(self->obj);
  
  selfCpp->SetValidating(
  inValidating
  );
};

bool JPC_StateRecorder_IsValidating(
  JPC_StateRecorder_t * self
) {
  StateRecorder * selfCpp = static_cast<StateRecorder *>(self->obj);
  bool result = selfCpp->IsValidating();
  return result;
};

//endregion functions

#ifdef __cplusplus
}
#endif

