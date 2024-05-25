#include "JoltC/JoltC_CylinderShapeSettings.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_CylinderShapeSettings_t * JoltC_CylinderShapeSettings_new(
  float inHalfHeight,
  float inRadius,
  float inConvexRadius,
  const JoltC_PhysicsMaterial_t * inMaterial,
  char** outErrMsg
) {
  try {
    JoltC_CylinderShapeSettings_t * cInstance = new JoltC_CylinderShapeSettings_t();
    CylinderShapeSettings * cppInstance = new CylinderShapeSettings(
      inHalfHeight,
      inRadius,
      inConvexRadius,
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

unsigned long JoltC_CylinderShapeSettings_GetRefCount(
  JoltC_CylinderShapeSettings_t * self,
  char** outErrMsg
) {
  try {
    CylinderShapeSettings * selfCpp = static_cast<CylinderShapeSettings *>(self->obj);
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

void JoltC_CylinderShapeSettings_AddRef(
  JoltC_CylinderShapeSettings_t * self,
  char** outErrMsg
) {
  try {
    CylinderShapeSettings * selfCpp = static_cast<CylinderShapeSettings *>(self->obj);
    
    selfCpp->AddRef();
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_CylinderShapeSettings_Release(
  JoltC_CylinderShapeSettings_t * self,
  char** outErrMsg
) {
  try {
    CylinderShapeSettings * selfCpp = static_cast<CylinderShapeSettings *>(self->obj);
    
    selfCpp->Release();
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

JoltC_Shape_ShapeResult_t * JoltC_CylinderShapeSettings_Create(
  JoltC_CylinderShapeSettings_t * self,
  char** outErrMsg
) {
  try {
    CylinderShapeSettings * selfCpp = static_cast<CylinderShapeSettings *>(self->obj);
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

void JoltC_CylinderShapeSettings_ClearCachedResult(
  JoltC_CylinderShapeSettings_t * self,
  char** outErrMsg
) {
  try {
    CylinderShapeSettings * selfCpp = static_cast<CylinderShapeSettings *>(self->obj);
    
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

float JoltC_CylinderShapeSettings_mHalfHeight_Get(
  JoltC_CylinderShapeSettings_t * self,
  char** outErrMsg
) {
  CylinderShapeSettings * selfCpp = static_cast<CylinderShapeSettings *>(self->obj);
  float result = selfCpp->mHalfHeight;
  return result;
};

void JoltC_CylinderShapeSettings_mHalfHeight_Set(
  JoltC_CylinderShapeSettings_t * self,
  float mHalfHeight,
  char** outErrMsg
) {
  CylinderShapeSettings * selfCpp = static_cast<CylinderShapeSettings *>(self->obj);
  selfCpp->mHalfHeight = mHalfHeight;
};

float JoltC_CylinderShapeSettings_mRadius_Get(
  JoltC_CylinderShapeSettings_t * self,
  char** outErrMsg
) {
  CylinderShapeSettings * selfCpp = static_cast<CylinderShapeSettings *>(self->obj);
  float result = selfCpp->mRadius;
  return result;
};

void JoltC_CylinderShapeSettings_mRadius_Set(
  JoltC_CylinderShapeSettings_t * self,
  float mRadius,
  char** outErrMsg
) {
  CylinderShapeSettings * selfCpp = static_cast<CylinderShapeSettings *>(self->obj);
  selfCpp->mRadius = mRadius;
};

float JoltC_CylinderShapeSettings_mConvexRadius_Get(
  JoltC_CylinderShapeSettings_t * self,
  char** outErrMsg
) {
  CylinderShapeSettings * selfCpp = static_cast<CylinderShapeSettings *>(self->obj);
  float result = selfCpp->mConvexRadius;
  return result;
};

void JoltC_CylinderShapeSettings_mConvexRadius_Set(
  JoltC_CylinderShapeSettings_t * self,
  float mConvexRadius,
  char** outErrMsg
) {
  CylinderShapeSettings * selfCpp = static_cast<CylinderShapeSettings *>(self->obj);
  selfCpp->mConvexRadius = mConvexRadius;
};

const JoltC_PhysicsMaterial_t * JoltC_CylinderShapeSettings_mMaterial_Get(
  JoltC_CylinderShapeSettings_t * self,
  char** outErrMsg
) {
  CylinderShapeSettings * selfCpp = static_cast<CylinderShapeSettings *>(self->obj);
  const PhysicsMaterial * result = selfCpp->mMaterial;
  return reinterpret_cast<const JoltC_PhysicsMaterial_t *>(result);
};

const void JoltC_CylinderShapeSettings_mMaterial_Set(
  JoltC_CylinderShapeSettings_t * self,
  const JoltC_PhysicsMaterial_t * mMaterial,
  char** outErrMsg
) {
  CylinderShapeSettings * selfCpp = static_cast<CylinderShapeSettings *>(self->obj);
  selfCpp->mMaterial = reinterpret_cast<PhysicsMaterial *>(mMaterial->obj);
};

float JoltC_CylinderShapeSettings_mDensity_Get(
  JoltC_CylinderShapeSettings_t * self,
  char** outErrMsg
) {
  CylinderShapeSettings * selfCpp = static_cast<CylinderShapeSettings *>(self->obj);
  float result = selfCpp->mDensity;
  return result;
};

void JoltC_CylinderShapeSettings_mDensity_Set(
  JoltC_CylinderShapeSettings_t * self,
  float mDensity,
  char** outErrMsg
) {
  CylinderShapeSettings * selfCpp = static_cast<CylinderShapeSettings *>(self->obj);
  selfCpp->mDensity = mDensity;
};

unsigned long long int JoltC_CylinderShapeSettings_mUserData_Get(
  JoltC_CylinderShapeSettings_t * self,
  char** outErrMsg
) {
  CylinderShapeSettings * selfCpp = static_cast<CylinderShapeSettings *>(self->obj);
  unsigned long long int result = selfCpp->mUserData;
  return result;
};

void JoltC_CylinderShapeSettings_mUserData_Set(
  JoltC_CylinderShapeSettings_t * self,
  unsigned long long int mUserData,
  char** outErrMsg
) {
  CylinderShapeSettings * selfCpp = static_cast<CylinderShapeSettings *>(self->obj);
  selfCpp->mUserData = mUserData;
};

//endregion properties

#ifdef __cplusplus
}
#endif

