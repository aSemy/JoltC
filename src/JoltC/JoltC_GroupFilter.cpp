#include "JoltC/JoltC_GroupFilter.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region functions

unsigned long JoltC_GroupFilter_GetRefCount(
  JoltC_GroupFilter_t * self,
  char** outErrMsg
) {
  try {
    GroupFilter * selfCpp = static_cast<GroupFilter *>(self->obj);
    unsigned long result = selfCpp->GetRefCount();
    return result;
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_GroupFilter_AddRef(
  JoltC_GroupFilter_t * self,
  char** outErrMsg
) {
  try {
    GroupFilter * selfCpp = static_cast<GroupFilter *>(self->obj);
    
    selfCpp->AddRef();
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_GroupFilter_Release(
  JoltC_GroupFilter_t * self,
  char** outErrMsg
) {
  try {
    GroupFilter * selfCpp = static_cast<GroupFilter *>(self->obj);
    
    selfCpp->Release();
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

