#include "JoltC/JoltC_StateRecorder.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region functions

void JoltC_StateRecorder_SetValidating(
  JoltC_StateRecorder_t * self,
  bool inValidating,
  char** outErrMsg
) {
  try {
    StateRecorder * selfCpp = static_cast<StateRecorder *>(self->obj);
    
    selfCpp->SetValidating(
    inValidating
    );
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

bool JoltC_StateRecorder_IsValidating(
  JoltC_StateRecorder_t * self,
  char** outErrMsg
) {
  try {
    StateRecorder * selfCpp = static_cast<StateRecorder *>(self->obj);
    bool result = selfCpp->IsValidating();
    return result;
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

//endregion functions

#ifdef __cplusplus
}
#endif

