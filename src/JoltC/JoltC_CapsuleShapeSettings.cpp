#include "JoltC/JoltC_CapsuleShapeSettings.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_CapsuleShapeSettings_t * JoltC_CapsuleShapeSettings_new(
  float inHalfHeight,
  float inRadius,
  const JoltC_PhysicsMaterial_t * inMaterial,
  char** outErrMsg
) {
  try {
    JoltC_CapsuleShapeSettings_t * cInstance = new JoltC_CapsuleShapeSettings_t();
    CapsuleShapeSettings * cppInstance = new CapsuleShapeSettings(
      inHalfHeight,
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

unsigned long JoltC_CapsuleShapeSettings_GetRefCount(
  JoltC_CapsuleShapeSettings_t * self,
  char** outErrMsg
) {
  try {
    CapsuleShapeSettings * selfCpp = static_cast<CapsuleShapeSettings *>(self->obj);
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

void JoltC_CapsuleShapeSettings_AddRef(
  JoltC_CapsuleShapeSettings_t * self,
  char** outErrMsg
) {
  try {
    CapsuleShapeSettings * selfCpp = static_cast<CapsuleShapeSettings *>(self->obj);
    
    selfCpp->AddRef();
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_CapsuleShapeSettings_Release(
  JoltC_CapsuleShapeSettings_t * self,
  char** outErrMsg
) {
  try {
    CapsuleShapeSettings * selfCpp = static_cast<CapsuleShapeSettings *>(self->obj);
    
    selfCpp->Release();
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

JoltC_Shape_ShapeResult_t * JoltC_CapsuleShapeSettings_Create(
  JoltC_CapsuleShapeSettings_t * self,
  char** outErrMsg
) {
  try {
    CapsuleShapeSettings * selfCpp = static_cast<CapsuleShapeSettings *>(self->obj);
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

void JoltC_CapsuleShapeSettings_ClearCachedResult(
  JoltC_CapsuleShapeSettings_t * self,
  char** outErrMsg
) {
  try {
    CapsuleShapeSettings * selfCpp = static_cast<CapsuleShapeSettings *>(self->obj);
    
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

float JoltC_CapsuleShapeSettings_mRadius_Get(
  JoltC_CapsuleShapeSettings_t * self,
  char** outErrMsg
) {
  CapsuleShapeSettings * selfCpp = static_cast<CapsuleShapeSettings *>(self->obj);
  float result = selfCpp->mRadius;
  return result;
};

void JoltC_CapsuleShapeSettings_mRadius_Set(
  JoltC_CapsuleShapeSettings_t * self,
  float mRadius,
  char** outErrMsg
) {
  CapsuleShapeSettings * selfCpp = static_cast<CapsuleShapeSettings *>(self->obj);
  selfCpp->mRadius = mRadius;
};

float JoltC_CapsuleShapeSettings_mHalfHeightOfCylinder_Get(
  JoltC_CapsuleShapeSettings_t * self,
  char** outErrMsg
) {
  CapsuleShapeSettings * selfCpp = static_cast<CapsuleShapeSettings *>(self->obj);
  float result = selfCpp->mHalfHeightOfCylinder;
  return result;
};

void JoltC_CapsuleShapeSettings_mHalfHeightOfCylinder_Set(
  JoltC_CapsuleShapeSettings_t * self,
  float mHalfHeightOfCylinder,
  char** outErrMsg
) {
  CapsuleShapeSettings * selfCpp = static_cast<CapsuleShapeSettings *>(self->obj);
  selfCpp->mHalfHeightOfCylinder = mHalfHeightOfCylinder;
};

const JoltC_PhysicsMaterial_t * JoltC_CapsuleShapeSettings_mMaterial_Get(
  JoltC_CapsuleShapeSettings_t * self,
  char** outErrMsg
) {
  CapsuleShapeSettings * selfCpp = static_cast<CapsuleShapeSettings *>(self->obj);
  const PhysicsMaterial * result = selfCpp->mMaterial;
  return reinterpret_cast<const JoltC_PhysicsMaterial_t *>(result);
};

const void JoltC_CapsuleShapeSettings_mMaterial_Set(
  JoltC_CapsuleShapeSettings_t * self,
  const JoltC_PhysicsMaterial_t * mMaterial,
  char** outErrMsg
) {
  CapsuleShapeSettings * selfCpp = static_cast<CapsuleShapeSettings *>(self->obj);
  selfCpp->mMaterial = reinterpret_cast<PhysicsMaterial *>(mMaterial->obj);
};

float JoltC_CapsuleShapeSettings_mDensity_Get(
  JoltC_CapsuleShapeSettings_t * self,
  char** outErrMsg
) {
  CapsuleShapeSettings * selfCpp = static_cast<CapsuleShapeSettings *>(self->obj);
  float result = selfCpp->mDensity;
  return result;
};

void JoltC_CapsuleShapeSettings_mDensity_Set(
  JoltC_CapsuleShapeSettings_t * self,
  float mDensity,
  char** outErrMsg
) {
  CapsuleShapeSettings * selfCpp = static_cast<CapsuleShapeSettings *>(self->obj);
  selfCpp->mDensity = mDensity;
};

unsigned long long int JoltC_CapsuleShapeSettings_mUserData_Get(
  JoltC_CapsuleShapeSettings_t * self,
  char** outErrMsg
) {
  CapsuleShapeSettings * selfCpp = static_cast<CapsuleShapeSettings *>(self->obj);
  unsigned long long int result = selfCpp->mUserData;
  return result;
};

void JoltC_CapsuleShapeSettings_mUserData_Set(
  JoltC_CapsuleShapeSettings_t * self,
  unsigned long long int mUserData,
  char** outErrMsg
) {
  CapsuleShapeSettings * selfCpp = static_cast<CapsuleShapeSettings *>(self->obj);
  selfCpp->mUserData = mUserData;
};

//endregion properties

#ifdef __cplusplus
}
#endif

