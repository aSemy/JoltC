#include "JoltC/JoltC_StateRecorder.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region converters

/**
 * Convert an instance of JoltC_StateRecorderImpl_t into JoltC_StateRecorder_t.
 */
JoltC_StateRecorder_t * JoltC_StateRecorder_From_StateRecorderImpl(
  JoltC_StateRecorderImpl_t * subtype
) {
  return (JoltC_StateRecorder_t*) subtype;
};

//endregion

//region functions

void JoltC_StateRecorder_SetValidating(
  JoltC_StateRecorder_t * self,
  bool inValidating
) {
  StateRecorder * selfCpp = static_cast<StateRecorder *>(self->obj);
  
  selfCpp->SetValidating(
  inValidating
  );
};

bool JoltC_StateRecorder_IsValidating(
  JoltC_StateRecorder_t * self
) {
  StateRecorder * selfCpp = static_cast<StateRecorder *>(self->obj);
  bool result = selfCpp->IsValidating();
  return result;
};

//endregion

#ifdef __cplusplus
}
#endif

