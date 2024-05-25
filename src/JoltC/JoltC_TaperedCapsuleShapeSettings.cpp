#include "JoltC/JoltC_TaperedCapsuleShapeSettings.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_TaperedCapsuleShapeSettings_t * JoltC_TaperedCapsuleShapeSettings_new(
  float inHalfHeightOfTaperedCylinder,
  float inTopRadius,
  float inBottomRadius,
  const JoltC_PhysicsMaterial_t * inMaterial,
  char** outErrMsg
) {
  try {
    JoltC_TaperedCapsuleShapeSettings_t * cInstance = new JoltC_TaperedCapsuleShapeSettings_t();
    TaperedCapsuleShapeSettings * cppInstance = new TaperedCapsuleShapeSettings(
      inHalfHeightOfTaperedCylinder,
      inTopRadius,
      inBottomRadius,
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

unsigned long JoltC_TaperedCapsuleShapeSettings_GetRefCount(
  JoltC_TaperedCapsuleShapeSettings_t * self,
  char** outErrMsg
) {
  try {
    TaperedCapsuleShapeSettings * selfCpp = static_cast<TaperedCapsuleShapeSettings *>(self->obj);
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

void JoltC_TaperedCapsuleShapeSettings_AddRef(
  JoltC_TaperedCapsuleShapeSettings_t * self,
  char** outErrMsg
) {
  try {
    TaperedCapsuleShapeSettings * selfCpp = static_cast<TaperedCapsuleShapeSettings *>(self->obj);
    
    selfCpp->AddRef();
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_TaperedCapsuleShapeSettings_Release(
  JoltC_TaperedCapsuleShapeSettings_t * self,
  char** outErrMsg
) {
  try {
    TaperedCapsuleShapeSettings * selfCpp = static_cast<TaperedCapsuleShapeSettings *>(self->obj);
    
    selfCpp->Release();
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

JoltC_Shape_ShapeResult_t * JoltC_TaperedCapsuleShapeSettings_Create(
  JoltC_TaperedCapsuleShapeSettings_t * self,
  char** outErrMsg
) {
  try {
    TaperedCapsuleShapeSettings * selfCpp = static_cast<TaperedCapsuleShapeSettings *>(self->obj);
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

void JoltC_TaperedCapsuleShapeSettings_ClearCachedResult(
  JoltC_TaperedCapsuleShapeSettings_t * self,
  char** outErrMsg
) {
  try {
    TaperedCapsuleShapeSettings * selfCpp = static_cast<TaperedCapsuleShapeSettings *>(self->obj);
    
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

float JoltC_TaperedCapsuleShapeSettings_mHalfHeightOfTaperedCylinder_Get(
  JoltC_TaperedCapsuleShapeSettings_t * self,
  char** outErrMsg
) {
  TaperedCapsuleShapeSettings * selfCpp = static_cast<TaperedCapsuleShapeSettings *>(self->obj);
  float result = selfCpp->mHalfHeightOfTaperedCylinder;
  return result;
};

void JoltC_TaperedCapsuleShapeSettings_mHalfHeightOfTaperedCylinder_Set(
  JoltC_TaperedCapsuleShapeSettings_t * self,
  float mHalfHeightOfTaperedCylinder,
  char** outErrMsg
) {
  TaperedCapsuleShapeSettings * selfCpp = static_cast<TaperedCapsuleShapeSettings *>(self->obj);
  selfCpp->mHalfHeightOfTaperedCylinder = mHalfHeightOfTaperedCylinder;
};

float JoltC_TaperedCapsuleShapeSettings_mTopRadius_Get(
  JoltC_TaperedCapsuleShapeSettings_t * self,
  char** outErrMsg
) {
  TaperedCapsuleShapeSettings * selfCpp = static_cast<TaperedCapsuleShapeSettings *>(self->obj);
  float result = selfCpp->mTopRadius;
  return result;
};

void JoltC_TaperedCapsuleShapeSettings_mTopRadius_Set(
  JoltC_TaperedCapsuleShapeSettings_t * self,
  float mTopRadius,
  char** outErrMsg
) {
  TaperedCapsuleShapeSettings * selfCpp = static_cast<TaperedCapsuleShapeSettings *>(self->obj);
  selfCpp->mTopRadius = mTopRadius;
};

float JoltC_TaperedCapsuleShapeSettings_mBottomRadius_Get(
  JoltC_TaperedCapsuleShapeSettings_t * self,
  char** outErrMsg
) {
  TaperedCapsuleShapeSettings * selfCpp = static_cast<TaperedCapsuleShapeSettings *>(self->obj);
  float result = selfCpp->mBottomRadius;
  return result;
};

void JoltC_TaperedCapsuleShapeSettings_mBottomRadius_Set(
  JoltC_TaperedCapsuleShapeSettings_t * self,
  float mBottomRadius,
  char** outErrMsg
) {
  TaperedCapsuleShapeSettings * selfCpp = static_cast<TaperedCapsuleShapeSettings *>(self->obj);
  selfCpp->mBottomRadius = mBottomRadius;
};

const JoltC_PhysicsMaterial_t * JoltC_TaperedCapsuleShapeSettings_mMaterial_Get(
  JoltC_TaperedCapsuleShapeSettings_t * self,
  char** outErrMsg
) {
  TaperedCapsuleShapeSettings * selfCpp = static_cast<TaperedCapsuleShapeSettings *>(self->obj);
  const PhysicsMaterial * result = selfCpp->mMaterial;
  return reinterpret_cast<const JoltC_PhysicsMaterial_t *>(result);
};

const void JoltC_TaperedCapsuleShapeSettings_mMaterial_Set(
  JoltC_TaperedCapsuleShapeSettings_t * self,
  const JoltC_PhysicsMaterial_t * mMaterial,
  char** outErrMsg
) {
  TaperedCapsuleShapeSettings * selfCpp = static_cast<TaperedCapsuleShapeSettings *>(self->obj);
  selfCpp->mMaterial = reinterpret_cast<PhysicsMaterial *>(mMaterial->obj);
};

float JoltC_TaperedCapsuleShapeSettings_mDensity_Get(
  JoltC_TaperedCapsuleShapeSettings_t * self,
  char** outErrMsg
) {
  TaperedCapsuleShapeSettings * selfCpp = static_cast<TaperedCapsuleShapeSettings *>(self->obj);
  float result = selfCpp->mDensity;
  return result;
};

void JoltC_TaperedCapsuleShapeSettings_mDensity_Set(
  JoltC_TaperedCapsuleShapeSettings_t * self,
  float mDensity,
  char** outErrMsg
) {
  TaperedCapsuleShapeSettings * selfCpp = static_cast<TaperedCapsuleShapeSettings *>(self->obj);
  selfCpp->mDensity = mDensity;
};

unsigned long long int JoltC_TaperedCapsuleShapeSettings_mUserData_Get(
  JoltC_TaperedCapsuleShapeSettings_t * self,
  char** outErrMsg
) {
  TaperedCapsuleShapeSettings * selfCpp = static_cast<TaperedCapsuleShapeSettings *>(self->obj);
  unsigned long long int result = selfCpp->mUserData;
  return result;
};

void JoltC_TaperedCapsuleShapeSettings_mUserData_Set(
  JoltC_TaperedCapsuleShapeSettings_t * self,
  unsigned long long int mUserData,
  char** outErrMsg
) {
  TaperedCapsuleShapeSettings * selfCpp = static_cast<TaperedCapsuleShapeSettings *>(self->obj);
  selfCpp->mUserData = mUserData;
};

//endregion properties

#ifdef __cplusplus
}
#endif

