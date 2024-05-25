#include "JoltC/JoltC_BoxShapeSettings.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_BoxShapeSettings_t * JoltC_BoxShapeSettings_new(
  JoltC_Vec3_t * inHalfExtent,
  float inConvexRadius,
  const JoltC_PhysicsMaterial_t * inMaterial,
  char** outErrMsg
) {
  try {
    JoltC_BoxShapeSettings_t * cInstance = new JoltC_BoxShapeSettings_t();
    BoxShapeSettings * cppInstance = new BoxShapeSettings(
      *reinterpret_cast<Vec3 *>(inHalfExtent->obj),
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

unsigned long JoltC_BoxShapeSettings_GetRefCount(
  JoltC_BoxShapeSettings_t * self,
  char** outErrMsg
) {
  try {
    BoxShapeSettings * selfCpp = static_cast<BoxShapeSettings *>(self->obj);
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

void JoltC_BoxShapeSettings_AddRef(
  JoltC_BoxShapeSettings_t * self,
  char** outErrMsg
) {
  try {
    BoxShapeSettings * selfCpp = static_cast<BoxShapeSettings *>(self->obj);
    
    selfCpp->AddRef();
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_BoxShapeSettings_Release(
  JoltC_BoxShapeSettings_t * self,
  char** outErrMsg
) {
  try {
    BoxShapeSettings * selfCpp = static_cast<BoxShapeSettings *>(self->obj);
    
    selfCpp->Release();
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

JoltC_Shape_ShapeResult_t * JoltC_BoxShapeSettings_Create(
  JoltC_BoxShapeSettings_t * self,
  char** outErrMsg
) {
  try {
    BoxShapeSettings * selfCpp = static_cast<BoxShapeSettings *>(self->obj);
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

void JoltC_BoxShapeSettings_ClearCachedResult(
  JoltC_BoxShapeSettings_t * self,
  char** outErrMsg
) {
  try {
    BoxShapeSettings * selfCpp = static_cast<BoxShapeSettings *>(self->obj);
    
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

JoltC_Vec3_t * JoltC_BoxShapeSettings_mHalfExtent_Get(
  JoltC_BoxShapeSettings_t * self,
  char** outErrMsg
) {
  BoxShapeSettings * selfCpp = static_cast<BoxShapeSettings *>(self->obj);
  Vec3 resultValue = selfCpp->mHalfExtent;
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JoltC_Vec3_t *>(result);
};

void JoltC_BoxShapeSettings_mHalfExtent_Set(
  JoltC_BoxShapeSettings_t * self,
  JoltC_Vec3_t * mHalfExtent,
  char** outErrMsg
) {
  BoxShapeSettings * selfCpp = static_cast<BoxShapeSettings *>(self->obj);
  selfCpp->mHalfExtent = *reinterpret_cast<Vec3 *>(mHalfExtent->obj);
};

float JoltC_BoxShapeSettings_mConvexRadius_Get(
  JoltC_BoxShapeSettings_t * self,
  char** outErrMsg
) {
  BoxShapeSettings * selfCpp = static_cast<BoxShapeSettings *>(self->obj);
  float result = selfCpp->mConvexRadius;
  return result;
};

void JoltC_BoxShapeSettings_mConvexRadius_Set(
  JoltC_BoxShapeSettings_t * self,
  float mConvexRadius,
  char** outErrMsg
) {
  BoxShapeSettings * selfCpp = static_cast<BoxShapeSettings *>(self->obj);
  selfCpp->mConvexRadius = mConvexRadius;
};

const JoltC_PhysicsMaterial_t * JoltC_BoxShapeSettings_mMaterial_Get(
  JoltC_BoxShapeSettings_t * self,
  char** outErrMsg
) {
  BoxShapeSettings * selfCpp = static_cast<BoxShapeSettings *>(self->obj);
  const PhysicsMaterial * result = selfCpp->mMaterial;
  return reinterpret_cast<const JoltC_PhysicsMaterial_t *>(result);
};

const void JoltC_BoxShapeSettings_mMaterial_Set(
  JoltC_BoxShapeSettings_t * self,
  const JoltC_PhysicsMaterial_t * mMaterial,
  char** outErrMsg
) {
  BoxShapeSettings * selfCpp = static_cast<BoxShapeSettings *>(self->obj);
  selfCpp->mMaterial = reinterpret_cast<PhysicsMaterial *>(mMaterial->obj);
};

float JoltC_BoxShapeSettings_mDensity_Get(
  JoltC_BoxShapeSettings_t * self,
  char** outErrMsg
) {
  BoxShapeSettings * selfCpp = static_cast<BoxShapeSettings *>(self->obj);
  float result = selfCpp->mDensity;
  return result;
};

void JoltC_BoxShapeSettings_mDensity_Set(
  JoltC_BoxShapeSettings_t * self,
  float mDensity,
  char** outErrMsg
) {
  BoxShapeSettings * selfCpp = static_cast<BoxShapeSettings *>(self->obj);
  selfCpp->mDensity = mDensity;
};

unsigned long long int JoltC_BoxShapeSettings_mUserData_Get(
  JoltC_BoxShapeSettings_t * self,
  char** outErrMsg
) {
  BoxShapeSettings * selfCpp = static_cast<BoxShapeSettings *>(self->obj);
  unsigned long long int result = selfCpp->mUserData;
  return result;
};

void JoltC_BoxShapeSettings_mUserData_Set(
  JoltC_BoxShapeSettings_t * self,
  unsigned long long int mUserData,
  char** outErrMsg
) {
  BoxShapeSettings * selfCpp = static_cast<BoxShapeSettings *>(self->obj);
  selfCpp->mUserData = mUserData;
};

//endregion properties

#ifdef __cplusplus
}
#endif

