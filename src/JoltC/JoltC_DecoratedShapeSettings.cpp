#include "JoltC/JoltC_DecoratedShapeSettings.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region functions

unsigned long JoltC_DecoratedShapeSettings_GetRefCount(
  JoltC_DecoratedShapeSettings_t * self,
  char** outErrMsg
) {
  try {
    DecoratedShapeSettings * selfCpp = static_cast<DecoratedShapeSettings *>(self->obj);
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

void JoltC_DecoratedShapeSettings_AddRef(
  JoltC_DecoratedShapeSettings_t * self,
  char** outErrMsg
) {
  try {
    DecoratedShapeSettings * selfCpp = static_cast<DecoratedShapeSettings *>(self->obj);
    
    selfCpp->AddRef();
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_DecoratedShapeSettings_Release(
  JoltC_DecoratedShapeSettings_t * self,
  char** outErrMsg
) {
  try {
    DecoratedShapeSettings * selfCpp = static_cast<DecoratedShapeSettings *>(self->obj);
    
    selfCpp->Release();
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

JoltC_Shape_ShapeResult_t * JoltC_DecoratedShapeSettings_Create(
  JoltC_DecoratedShapeSettings_t * self,
  char** outErrMsg
) {
  try {
    DecoratedShapeSettings * selfCpp = static_cast<DecoratedShapeSettings *>(self->obj);
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

void JoltC_DecoratedShapeSettings_ClearCachedResult(
  JoltC_DecoratedShapeSettings_t * self,
  char** outErrMsg
) {
  try {
    DecoratedShapeSettings * selfCpp = static_cast<DecoratedShapeSettings *>(self->obj);
    
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

unsigned long long int JoltC_DecoratedShapeSettings_mUserData_Get(
  JoltC_DecoratedShapeSettings_t * self,
  char** outErrMsg
) {
  DecoratedShapeSettings * selfCpp = static_cast<DecoratedShapeSettings *>(self->obj);
  unsigned long long int result = selfCpp->mUserData;
  return result;
};

void JoltC_DecoratedShapeSettings_mUserData_Set(
  JoltC_DecoratedShapeSettings_t * self,
  unsigned long long int mUserData,
  char** outErrMsg
) {
  DecoratedShapeSettings * selfCpp = static_cast<DecoratedShapeSettings *>(self->obj);
  selfCpp->mUserData = mUserData;
};

//endregion properties

#ifdef __cplusplus
}
#endif

