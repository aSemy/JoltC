#include "JoltC/JoltC_ShapeSettings.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region functions

unsigned long JoltC_ShapeSettings_GetRefCount(
  JoltC_ShapeSettings_t * self,
  char** outErrMsg
) {
  try {
    ShapeSettings * selfCpp = static_cast<ShapeSettings *>(self->obj);
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

void JoltC_ShapeSettings_AddRef(
  JoltC_ShapeSettings_t * self,
  char** outErrMsg
) {
  try {
    ShapeSettings * selfCpp = static_cast<ShapeSettings *>(self->obj);
    
    selfCpp->AddRef();
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_ShapeSettings_Release(
  JoltC_ShapeSettings_t * self,
  char** outErrMsg
) {
  try {
    ShapeSettings * selfCpp = static_cast<ShapeSettings *>(self->obj);
    
    selfCpp->Release();
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

JoltC_Shape_ShapeResult_t * JoltC_ShapeSettings_Create(
  JoltC_ShapeSettings_t * self,
  char** outErrMsg
) {
  try {
    ShapeSettings * selfCpp = static_cast<ShapeSettings *>(self->obj);
    Shape::ShapeResult resultValue = selfCpp->Create();
    Shape::ShapeResult* result = new Shape::ShapeResult(resultValue);
    return reinterpret_cast<JoltC_Shape_ShapeResult_t *>(result);
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_ShapeSettings_ClearCachedResult(
  JoltC_ShapeSettings_t * self,
  char** outErrMsg
) {
  try {
    ShapeSettings * selfCpp = static_cast<ShapeSettings *>(self->obj);
    
    selfCpp->ClearCachedResult();
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

//endregion functions

//region properties

unsigned long long int JoltC_ShapeSettings_mUserData_Get(
  JoltC_ShapeSettings_t * self,
  char** outErrMsg
) {
  ShapeSettings * selfCpp = static_cast<ShapeSettings *>(self->obj);
  unsigned long long int result = selfCpp->mUserData;
  return result;
};

void JoltC_ShapeSettings_mUserData_Set(
  JoltC_ShapeSettings_t * self,
  unsigned long long int mUserData,
  char** outErrMsg
) {
  ShapeSettings * selfCpp = static_cast<ShapeSettings *>(self->obj);
  selfCpp->mUserData = mUserData;
};

//endregion properties

#ifdef __cplusplus
}
#endif

