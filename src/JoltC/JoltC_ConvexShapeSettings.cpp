#include "JoltC/JoltC_ConvexShapeSettings.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region functions

unsigned long JoltC_ConvexShapeSettings_GetRefCount(
  JoltC_ConvexShapeSettings_t * self,
  char** outErrMsg
) {
  try {
    ConvexShapeSettings * selfCpp = static_cast<ConvexShapeSettings *>(self->obj);
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

void JoltC_ConvexShapeSettings_AddRef(
  JoltC_ConvexShapeSettings_t * self,
  char** outErrMsg
) {
  try {
    ConvexShapeSettings * selfCpp = static_cast<ConvexShapeSettings *>(self->obj);
    
    selfCpp->AddRef();
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_ConvexShapeSettings_Release(
  JoltC_ConvexShapeSettings_t * self,
  char** outErrMsg
) {
  try {
    ConvexShapeSettings * selfCpp = static_cast<ConvexShapeSettings *>(self->obj);
    
    selfCpp->Release();
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

JoltC_Shape_ShapeResult_t * JoltC_ConvexShapeSettings_Create(
  JoltC_ConvexShapeSettings_t * self,
  char** outErrMsg
) {
  try {
    ConvexShapeSettings * selfCpp = static_cast<ConvexShapeSettings *>(self->obj);
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

void JoltC_ConvexShapeSettings_ClearCachedResult(
  JoltC_ConvexShapeSettings_t * self,
  char** outErrMsg
) {
  try {
    ConvexShapeSettings * selfCpp = static_cast<ConvexShapeSettings *>(self->obj);
    
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

const JoltC_PhysicsMaterial_t * JoltC_ConvexShapeSettings_mMaterial_Get(
  JoltC_ConvexShapeSettings_t * self,
  char** outErrMsg
) {
  ConvexShapeSettings * selfCpp = static_cast<ConvexShapeSettings *>(self->obj);
  const PhysicsMaterial * result = selfCpp->mMaterial;
  return reinterpret_cast<const JoltC_PhysicsMaterial_t *>(result);
};

const void JoltC_ConvexShapeSettings_mMaterial_Set(
  JoltC_ConvexShapeSettings_t * self,
  const JoltC_PhysicsMaterial_t * mMaterial,
  char** outErrMsg
) {
  ConvexShapeSettings * selfCpp = static_cast<ConvexShapeSettings *>(self->obj);
  selfCpp->mMaterial = reinterpret_cast<PhysicsMaterial *>(mMaterial->obj);
};

float JoltC_ConvexShapeSettings_mDensity_Get(
  JoltC_ConvexShapeSettings_t * self,
  char** outErrMsg
) {
  ConvexShapeSettings * selfCpp = static_cast<ConvexShapeSettings *>(self->obj);
  float result = selfCpp->mDensity;
  return result;
};

void JoltC_ConvexShapeSettings_mDensity_Set(
  JoltC_ConvexShapeSettings_t * self,
  float mDensity,
  char** outErrMsg
) {
  ConvexShapeSettings * selfCpp = static_cast<ConvexShapeSettings *>(self->obj);
  selfCpp->mDensity = mDensity;
};

unsigned long long int JoltC_ConvexShapeSettings_mUserData_Get(
  JoltC_ConvexShapeSettings_t * self,
  char** outErrMsg
) {
  ConvexShapeSettings * selfCpp = static_cast<ConvexShapeSettings *>(self->obj);
  unsigned long long int result = selfCpp->mUserData;
  return result;
};

void JoltC_ConvexShapeSettings_mUserData_Set(
  JoltC_ConvexShapeSettings_t * self,
  unsigned long long int mUserData,
  char** outErrMsg
) {
  ConvexShapeSettings * selfCpp = static_cast<ConvexShapeSettings *>(self->obj);
  selfCpp->mUserData = mUserData;
};

//endregion properties

#ifdef __cplusplus
}
#endif

