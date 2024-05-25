#include "JoltC/JoltC_StaticCompoundShapeSettings.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_StaticCompoundShapeSettings_t * JoltC_StaticCompoundShapeSettings_new(
  char** outErrMsg
) {
  try {
    JoltC_StaticCompoundShapeSettings_t * cInstance = new JoltC_StaticCompoundShapeSettings_t();
    StaticCompoundShapeSettings * cppInstance = new StaticCompoundShapeSettings();
    cInstance->obj = cppInstance;
    return cInstance;
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

//endregion constructors

//region functions

void JoltC_StaticCompoundShapeSettings_AddShape(
  JoltC_StaticCompoundShapeSettings_t * self,
  const JoltC_Vec3_t * inPosition,
  const JoltC_Quat_t * inRotation,
  const JoltC_ShapeSettings_t * inShape,
  unsigned long inUserData,
  char** outErrMsg
) {
  try {
    StaticCompoundShapeSettings * selfCpp = static_cast<StaticCompoundShapeSettings *>(self->obj);
    
    selfCpp->AddShape(
    *reinterpret_cast<Vec3 *>(inPosition->obj),
    *reinterpret_cast<Quat *>(inRotation->obj),
    reinterpret_cast<ShapeSettings *>(inShape->obj),
    inUserData
    );
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

unsigned long JoltC_StaticCompoundShapeSettings_GetRefCount(
  JoltC_StaticCompoundShapeSettings_t * self,
  char** outErrMsg
) {
  try {
    StaticCompoundShapeSettings * selfCpp = static_cast<StaticCompoundShapeSettings *>(self->obj);
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

void JoltC_StaticCompoundShapeSettings_AddRef(
  JoltC_StaticCompoundShapeSettings_t * self,
  char** outErrMsg
) {
  try {
    StaticCompoundShapeSettings * selfCpp = static_cast<StaticCompoundShapeSettings *>(self->obj);
    
    selfCpp->AddRef();
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_StaticCompoundShapeSettings_Release(
  JoltC_StaticCompoundShapeSettings_t * self,
  char** outErrMsg
) {
  try {
    StaticCompoundShapeSettings * selfCpp = static_cast<StaticCompoundShapeSettings *>(self->obj);
    
    selfCpp->Release();
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

JoltC_Shape_ShapeResult_t * JoltC_StaticCompoundShapeSettings_Create(
  JoltC_StaticCompoundShapeSettings_t * self,
  char** outErrMsg
) {
  try {
    StaticCompoundShapeSettings * selfCpp = static_cast<StaticCompoundShapeSettings *>(self->obj);
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

void JoltC_StaticCompoundShapeSettings_ClearCachedResult(
  JoltC_StaticCompoundShapeSettings_t * self,
  char** outErrMsg
) {
  try {
    StaticCompoundShapeSettings * selfCpp = static_cast<StaticCompoundShapeSettings *>(self->obj);
    
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

unsigned long long int JoltC_StaticCompoundShapeSettings_mUserData_Get(
  JoltC_StaticCompoundShapeSettings_t * self,
  char** outErrMsg
) {
  StaticCompoundShapeSettings * selfCpp = static_cast<StaticCompoundShapeSettings *>(self->obj);
  unsigned long long int result = selfCpp->mUserData;
  return result;
};

void JoltC_StaticCompoundShapeSettings_mUserData_Set(
  JoltC_StaticCompoundShapeSettings_t * self,
  unsigned long long int mUserData,
  char** outErrMsg
) {
  StaticCompoundShapeSettings * selfCpp = static_cast<StaticCompoundShapeSettings *>(self->obj);
  selfCpp->mUserData = mUserData;
};

//endregion properties

#ifdef __cplusplus
}
#endif

