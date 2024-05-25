#include "JoltC/JoltC_SphereShapeSettings.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_SphereShapeSettings_t * JoltC_SphereShapeSettings_new(
  float inRadius,
  const JoltC_PhysicsMaterial_t * inMaterial,
  char** outErrMsg
) {
  try {
    JoltC_SphereShapeSettings_t * cInstance = new JoltC_SphereShapeSettings_t();
    SphereShapeSettings * cppInstance = new SphereShapeSettings(
      inRadius,
      reinterpret_cast<PhysicsMaterial *>(inMaterial->obj)
    );
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

unsigned long JoltC_SphereShapeSettings_GetRefCount(
  JoltC_SphereShapeSettings_t * self,
  char** outErrMsg
) {
  try {
    SphereShapeSettings * selfCpp = static_cast<SphereShapeSettings *>(self->obj);
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

void JoltC_SphereShapeSettings_AddRef(
  JoltC_SphereShapeSettings_t * self,
  char** outErrMsg
) {
  try {
    SphereShapeSettings * selfCpp = static_cast<SphereShapeSettings *>(self->obj);
    
    selfCpp->AddRef();
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_SphereShapeSettings_Release(
  JoltC_SphereShapeSettings_t * self,
  char** outErrMsg
) {
  try {
    SphereShapeSettings * selfCpp = static_cast<SphereShapeSettings *>(self->obj);
    
    selfCpp->Release();
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

JoltC_Shape_ShapeResult_t * JoltC_SphereShapeSettings_Create(
  JoltC_SphereShapeSettings_t * self,
  char** outErrMsg
) {
  try {
    SphereShapeSettings * selfCpp = static_cast<SphereShapeSettings *>(self->obj);
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

void JoltC_SphereShapeSettings_ClearCachedResult(
  JoltC_SphereShapeSettings_t * self,
  char** outErrMsg
) {
  try {
    SphereShapeSettings * selfCpp = static_cast<SphereShapeSettings *>(self->obj);
    
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

float JoltC_SphereShapeSettings_mRadius_Get(
  JoltC_SphereShapeSettings_t * self,
  char** outErrMsg
) {
  SphereShapeSettings * selfCpp = static_cast<SphereShapeSettings *>(self->obj);
  float result = selfCpp->mRadius;
  return result;
};

void JoltC_SphereShapeSettings_mRadius_Set(
  JoltC_SphereShapeSettings_t * self,
  float mRadius,
  char** outErrMsg
) {
  SphereShapeSettings * selfCpp = static_cast<SphereShapeSettings *>(self->obj);
  selfCpp->mRadius = mRadius;
};

const JoltC_PhysicsMaterial_t * JoltC_SphereShapeSettings_mMaterial_Get(
  JoltC_SphereShapeSettings_t * self,
  char** outErrMsg
) {
  SphereShapeSettings * selfCpp = static_cast<SphereShapeSettings *>(self->obj);
  const PhysicsMaterial * result = selfCpp->mMaterial;
  return reinterpret_cast<const JoltC_PhysicsMaterial_t *>(result);
};

const void JoltC_SphereShapeSettings_mMaterial_Set(
  JoltC_SphereShapeSettings_t * self,
  const JoltC_PhysicsMaterial_t * mMaterial,
  char** outErrMsg
) {
  SphereShapeSettings * selfCpp = static_cast<SphereShapeSettings *>(self->obj);
  selfCpp->mMaterial = reinterpret_cast<PhysicsMaterial *>(mMaterial->obj);
};

float JoltC_SphereShapeSettings_mDensity_Get(
  JoltC_SphereShapeSettings_t * self,
  char** outErrMsg
) {
  SphereShapeSettings * selfCpp = static_cast<SphereShapeSettings *>(self->obj);
  float result = selfCpp->mDensity;
  return result;
};

void JoltC_SphereShapeSettings_mDensity_Set(
  JoltC_SphereShapeSettings_t * self,
  float mDensity,
  char** outErrMsg
) {
  SphereShapeSettings * selfCpp = static_cast<SphereShapeSettings *>(self->obj);
  selfCpp->mDensity = mDensity;
};

unsigned long long int JoltC_SphereShapeSettings_mUserData_Get(
  JoltC_SphereShapeSettings_t * self,
  char** outErrMsg
) {
  SphereShapeSettings * selfCpp = static_cast<SphereShapeSettings *>(self->obj);
  unsigned long long int result = selfCpp->mUserData;
  return result;
};

void JoltC_SphereShapeSettings_mUserData_Set(
  JoltC_SphereShapeSettings_t * self,
  unsigned long long int mUserData,
  char** outErrMsg
) {
  SphereShapeSettings * selfCpp = static_cast<SphereShapeSettings *>(self->obj);
  selfCpp->mUserData = mUserData;
};

//endregion properties

#ifdef __cplusplus
}
#endif

