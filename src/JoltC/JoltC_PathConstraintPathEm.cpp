#include "JoltC/JoltC_PathConstraintPathEm.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region functions

bool JoltC_PathConstraintPathEm_IsLooping(
  JoltC_PathConstraintPathEm_t * self,
  char** outErrMsg
) {
  try {
    PathConstraintPathEm * selfCpp = static_cast<PathConstraintPathEm *>(self->obj);
    bool result = selfCpp->IsLooping();
    return result;
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_PathConstraintPathEm_SetIsLooping(
  JoltC_PathConstraintPathEm_t * self,
  bool inIsLooping,
  char** outErrMsg
) {
  try {
    PathConstraintPathEm * selfCpp = static_cast<PathConstraintPathEm *>(self->obj);
    
    selfCpp->SetIsLooping(
    inIsLooping
    );
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

unsigned long JoltC_PathConstraintPathEm_GetRefCount(
  JoltC_PathConstraintPathEm_t * self,
  char** outErrMsg
) {
  try {
    PathConstraintPathEm * selfCpp = static_cast<PathConstraintPathEm *>(self->obj);
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

void JoltC_PathConstraintPathEm_AddRef(
  JoltC_PathConstraintPathEm_t * self,
  char** outErrMsg
) {
  try {
    PathConstraintPathEm * selfCpp = static_cast<PathConstraintPathEm *>(self->obj);
    
    selfCpp->AddRef();
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_PathConstraintPathEm_Release(
  JoltC_PathConstraintPathEm_t * self,
  char** outErrMsg
) {
  try {
    PathConstraintPathEm * selfCpp = static_cast<PathConstraintPathEm *>(self->obj);
    
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

