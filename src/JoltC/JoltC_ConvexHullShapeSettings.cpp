#include "JoltC/JoltC_ConvexHullShapeSettings.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_ConvexHullShapeSettings_t * JoltC_ConvexHullShapeSettings_new(
  char** outErrMsg
) {
  try {
    JoltC_ConvexHullShapeSettings_t * cInstance = new JoltC_ConvexHullShapeSettings_t();
    ConvexHullShapeSettings * cppInstance = new ConvexHullShapeSettings();
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

unsigned long JoltC_ConvexHullShapeSettings_GetRefCount(
  JoltC_ConvexHullShapeSettings_t * self,
  char** outErrMsg
) {
  try {
    ConvexHullShapeSettings * selfCpp = static_cast<ConvexHullShapeSettings *>(self->obj);
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

void JoltC_ConvexHullShapeSettings_AddRef(
  JoltC_ConvexHullShapeSettings_t * self,
  char** outErrMsg
) {
  try {
    ConvexHullShapeSettings * selfCpp = static_cast<ConvexHullShapeSettings *>(self->obj);
    
    selfCpp->AddRef();
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_ConvexHullShapeSettings_Release(
  JoltC_ConvexHullShapeSettings_t * self,
  char** outErrMsg
) {
  try {
    ConvexHullShapeSettings * selfCpp = static_cast<ConvexHullShapeSettings *>(self->obj);
    
    selfCpp->Release();
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

JoltC_Shape_ShapeResult_t * JoltC_ConvexHullShapeSettings_Create(
  JoltC_ConvexHullShapeSettings_t * self,
  char** outErrMsg
) {
  try {
    ConvexHullShapeSettings * selfCpp = static_cast<ConvexHullShapeSettings *>(self->obj);
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

void JoltC_ConvexHullShapeSettings_ClearCachedResult(
  JoltC_ConvexHullShapeSettings_t * self,
  char** outErrMsg
) {
  try {
    ConvexHullShapeSettings * selfCpp = static_cast<ConvexHullShapeSettings *>(self->obj);
    
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

JoltC_ArrayVec3_t * JoltC_ConvexHullShapeSettings_mPoints_Get(
  JoltC_ConvexHullShapeSettings_t * self,
  char** outErrMsg
) {
  ConvexHullShapeSettings * selfCpp = static_cast<ConvexHullShapeSettings *>(self->obj);
  ArrayVec3 resultValue = selfCpp->mPoints;
  ArrayVec3* result = new ArrayVec3(resultValue);
  return reinterpret_cast<JoltC_ArrayVec3_t *>(result);
};

void JoltC_ConvexHullShapeSettings_mPoints_Set(
  JoltC_ConvexHullShapeSettings_t * self,
  JoltC_ArrayVec3_t * mPoints,
  char** outErrMsg
) {
  ConvexHullShapeSettings * selfCpp = static_cast<ConvexHullShapeSettings *>(self->obj);
  selfCpp->mPoints = *reinterpret_cast<ArrayVec3 *>(mPoints->obj);
};

float JoltC_ConvexHullShapeSettings_mMaxConvexRadius_Get(
  JoltC_ConvexHullShapeSettings_t * self,
  char** outErrMsg
) {
  ConvexHullShapeSettings * selfCpp = static_cast<ConvexHullShapeSettings *>(self->obj);
  float result = selfCpp->mMaxConvexRadius;
  return result;
};

void JoltC_ConvexHullShapeSettings_mMaxConvexRadius_Set(
  JoltC_ConvexHullShapeSettings_t * self,
  float mMaxConvexRadius,
  char** outErrMsg
) {
  ConvexHullShapeSettings * selfCpp = static_cast<ConvexHullShapeSettings *>(self->obj);
  selfCpp->mMaxConvexRadius = mMaxConvexRadius;
};

float JoltC_ConvexHullShapeSettings_mMaxErrorConvexRadius_Get(
  JoltC_ConvexHullShapeSettings_t * self,
  char** outErrMsg
) {
  ConvexHullShapeSettings * selfCpp = static_cast<ConvexHullShapeSettings *>(self->obj);
  float result = selfCpp->mMaxErrorConvexRadius;
  return result;
};

void JoltC_ConvexHullShapeSettings_mMaxErrorConvexRadius_Set(
  JoltC_ConvexHullShapeSettings_t * self,
  float mMaxErrorConvexRadius,
  char** outErrMsg
) {
  ConvexHullShapeSettings * selfCpp = static_cast<ConvexHullShapeSettings *>(self->obj);
  selfCpp->mMaxErrorConvexRadius = mMaxErrorConvexRadius;
};

float JoltC_ConvexHullShapeSettings_mHullTolerance_Get(
  JoltC_ConvexHullShapeSettings_t * self,
  char** outErrMsg
) {
  ConvexHullShapeSettings * selfCpp = static_cast<ConvexHullShapeSettings *>(self->obj);
  float result = selfCpp->mHullTolerance;
  return result;
};

void JoltC_ConvexHullShapeSettings_mHullTolerance_Set(
  JoltC_ConvexHullShapeSettings_t * self,
  float mHullTolerance,
  char** outErrMsg
) {
  ConvexHullShapeSettings * selfCpp = static_cast<ConvexHullShapeSettings *>(self->obj);
  selfCpp->mHullTolerance = mHullTolerance;
};

const JoltC_PhysicsMaterial_t * JoltC_ConvexHullShapeSettings_mMaterial_Get(
  JoltC_ConvexHullShapeSettings_t * self,
  char** outErrMsg
) {
  ConvexHullShapeSettings * selfCpp = static_cast<ConvexHullShapeSettings *>(self->obj);
  const PhysicsMaterial * result = selfCpp->mMaterial;
  return reinterpret_cast<const JoltC_PhysicsMaterial_t *>(result);
};

const void JoltC_ConvexHullShapeSettings_mMaterial_Set(
  JoltC_ConvexHullShapeSettings_t * self,
  const JoltC_PhysicsMaterial_t * mMaterial,
  char** outErrMsg
) {
  ConvexHullShapeSettings * selfCpp = static_cast<ConvexHullShapeSettings *>(self->obj);
  selfCpp->mMaterial = reinterpret_cast<PhysicsMaterial *>(mMaterial->obj);
};

float JoltC_ConvexHullShapeSettings_mDensity_Get(
  JoltC_ConvexHullShapeSettings_t * self,
  char** outErrMsg
) {
  ConvexHullShapeSettings * selfCpp = static_cast<ConvexHullShapeSettings *>(self->obj);
  float result = selfCpp->mDensity;
  return result;
};

void JoltC_ConvexHullShapeSettings_mDensity_Set(
  JoltC_ConvexHullShapeSettings_t * self,
  float mDensity,
  char** outErrMsg
) {
  ConvexHullShapeSettings * selfCpp = static_cast<ConvexHullShapeSettings *>(self->obj);
  selfCpp->mDensity = mDensity;
};

unsigned long long int JoltC_ConvexHullShapeSettings_mUserData_Get(
  JoltC_ConvexHullShapeSettings_t * self,
  char** outErrMsg
) {
  ConvexHullShapeSettings * selfCpp = static_cast<ConvexHullShapeSettings *>(self->obj);
  unsigned long long int result = selfCpp->mUserData;
  return result;
};

void JoltC_ConvexHullShapeSettings_mUserData_Set(
  JoltC_ConvexHullShapeSettings_t * self,
  unsigned long long int mUserData,
  char** outErrMsg
) {
  ConvexHullShapeSettings * selfCpp = static_cast<ConvexHullShapeSettings *>(self->obj);
  selfCpp->mUserData = mUserData;
};

//endregion properties

#ifdef __cplusplus
}
#endif

