#include "JoltC/JoltC_PathConstraintPath.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region functions

bool JoltC_PathConstraintPath_IsLooping(
  JoltC_PathConstraintPath_t * self,
  char** outErrMsg
) {
  try {
    PathConstraintPath * selfCpp = static_cast<PathConstraintPath *>(self->obj);
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

void JoltC_PathConstraintPath_SetIsLooping(
  JoltC_PathConstraintPath_t * self,
  bool inIsLooping,
  char** outErrMsg
) {
  try {
    PathConstraintPath * selfCpp = static_cast<PathConstraintPath *>(self->obj);
    
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

unsigned long JoltC_PathConstraintPath_GetRefCount(
  JoltC_PathConstraintPath_t * self,
  char** outErrMsg
) {
  try {
    PathConstraintPath * selfCpp = static_cast<PathConstraintPath *>(self->obj);
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

void JoltC_PathConstraintPath_AddRef(
  JoltC_PathConstraintPath_t * self,
  char** outErrMsg
) {
  try {
    PathConstraintPath * selfCpp = static_cast<PathConstraintPath *>(self->obj);
    
    selfCpp->AddRef();
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_PathConstraintPath_Release(
  JoltC_PathConstraintPath_t * self,
  char** outErrMsg
) {
  try {
    PathConstraintPath * selfCpp = static_cast<PathConstraintPath *>(self->obj);
    
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

