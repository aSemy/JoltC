#include "JoltC/JoltC_HeightFieldShapeSettings.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_HeightFieldShapeSettings_t * JoltC_HeightFieldShapeSettings_new(
  char** outErrMsg
) {
  try {
    JoltC_HeightFieldShapeSettings_t * cInstance = new JoltC_HeightFieldShapeSettings_t();
    HeightFieldShapeSettings * cppInstance = new HeightFieldShapeSettings();
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

unsigned long JoltC_HeightFieldShapeSettings_GetRefCount(
  JoltC_HeightFieldShapeSettings_t * self,
  char** outErrMsg
) {
  try {
    HeightFieldShapeSettings * selfCpp = static_cast<HeightFieldShapeSettings *>(self->obj);
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

void JoltC_HeightFieldShapeSettings_AddRef(
  JoltC_HeightFieldShapeSettings_t * self,
  char** outErrMsg
) {
  try {
    HeightFieldShapeSettings * selfCpp = static_cast<HeightFieldShapeSettings *>(self->obj);
    
    selfCpp->AddRef();
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_HeightFieldShapeSettings_Release(
  JoltC_HeightFieldShapeSettings_t * self,
  char** outErrMsg
) {
  try {
    HeightFieldShapeSettings * selfCpp = static_cast<HeightFieldShapeSettings *>(self->obj);
    
    selfCpp->Release();
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

JoltC_Shape_ShapeResult_t * JoltC_HeightFieldShapeSettings_Create(
  JoltC_HeightFieldShapeSettings_t * self,
  char** outErrMsg
) {
  try {
    HeightFieldShapeSettings * selfCpp = static_cast<HeightFieldShapeSettings *>(self->obj);
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

void JoltC_HeightFieldShapeSettings_ClearCachedResult(
  JoltC_HeightFieldShapeSettings_t * self,
  char** outErrMsg
) {
  try {
    HeightFieldShapeSettings * selfCpp = static_cast<HeightFieldShapeSettings *>(self->obj);
    
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

JoltC_Vec3_t * JoltC_HeightFieldShapeSettings_mOffset_Get(
  JoltC_HeightFieldShapeSettings_t * self,
  char** outErrMsg
) {
  HeightFieldShapeSettings * selfCpp = static_cast<HeightFieldShapeSettings *>(self->obj);
  Vec3 resultValue = selfCpp->mOffset;
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JoltC_Vec3_t *>(result);
};

void JoltC_HeightFieldShapeSettings_mOffset_Set(
  JoltC_HeightFieldShapeSettings_t * self,
  JoltC_Vec3_t * mOffset,
  char** outErrMsg
) {
  HeightFieldShapeSettings * selfCpp = static_cast<HeightFieldShapeSettings *>(self->obj);
  selfCpp->mOffset = *reinterpret_cast<Vec3 *>(mOffset->obj);
};

JoltC_Vec3_t * JoltC_HeightFieldShapeSettings_mScale_Get(
  JoltC_HeightFieldShapeSettings_t * self,
  char** outErrMsg
) {
  HeightFieldShapeSettings * selfCpp = static_cast<HeightFieldShapeSettings *>(self->obj);
  Vec3 resultValue = selfCpp->mScale;
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JoltC_Vec3_t *>(result);
};

void JoltC_HeightFieldShapeSettings_mScale_Set(
  JoltC_HeightFieldShapeSettings_t * self,
  JoltC_Vec3_t * mScale,
  char** outErrMsg
) {
  HeightFieldShapeSettings * selfCpp = static_cast<HeightFieldShapeSettings *>(self->obj);
  selfCpp->mScale = *reinterpret_cast<Vec3 *>(mScale->obj);
};

long JoltC_HeightFieldShapeSettings_mSampleCount_Get(
  JoltC_HeightFieldShapeSettings_t * self,
  char** outErrMsg
) {
  HeightFieldShapeSettings * selfCpp = static_cast<HeightFieldShapeSettings *>(self->obj);
  long result = selfCpp->mSampleCount;
  return result;
};

void JoltC_HeightFieldShapeSettings_mSampleCount_Set(
  JoltC_HeightFieldShapeSettings_t * self,
  long mSampleCount,
  char** outErrMsg
) {
  HeightFieldShapeSettings * selfCpp = static_cast<HeightFieldShapeSettings *>(self->obj);
  selfCpp->mSampleCount = mSampleCount;
};

float JoltC_HeightFieldShapeSettings_mMinHeightValue_Get(
  JoltC_HeightFieldShapeSettings_t * self,
  char** outErrMsg
) {
  HeightFieldShapeSettings * selfCpp = static_cast<HeightFieldShapeSettings *>(self->obj);
  float result = selfCpp->mMinHeightValue;
  return result;
};

void JoltC_HeightFieldShapeSettings_mMinHeightValue_Set(
  JoltC_HeightFieldShapeSettings_t * self,
  float mMinHeightValue,
  char** outErrMsg
) {
  HeightFieldShapeSettings * selfCpp = static_cast<HeightFieldShapeSettings *>(self->obj);
  selfCpp->mMinHeightValue = mMinHeightValue;
};

float JoltC_HeightFieldShapeSettings_mMaxHeightValue_Get(
  JoltC_HeightFieldShapeSettings_t * self,
  char** outErrMsg
) {
  HeightFieldShapeSettings * selfCpp = static_cast<HeightFieldShapeSettings *>(self->obj);
  float result = selfCpp->mMaxHeightValue;
  return result;
};

void JoltC_HeightFieldShapeSettings_mMaxHeightValue_Set(
  JoltC_HeightFieldShapeSettings_t * self,
  float mMaxHeightValue,
  char** outErrMsg
) {
  HeightFieldShapeSettings * selfCpp = static_cast<HeightFieldShapeSettings *>(self->obj);
  selfCpp->mMaxHeightValue = mMaxHeightValue;
};

long JoltC_HeightFieldShapeSettings_mBlockSize_Get(
  JoltC_HeightFieldShapeSettings_t * self,
  char** outErrMsg
) {
  HeightFieldShapeSettings * selfCpp = static_cast<HeightFieldShapeSettings *>(self->obj);
  long result = selfCpp->mBlockSize;
  return result;
};

void JoltC_HeightFieldShapeSettings_mBlockSize_Set(
  JoltC_HeightFieldShapeSettings_t * self,
  long mBlockSize,
  char** outErrMsg
) {
  HeightFieldShapeSettings * selfCpp = static_cast<HeightFieldShapeSettings *>(self->obj);
  selfCpp->mBlockSize = mBlockSize;
};

long JoltC_HeightFieldShapeSettings_mBitsPerSample_Get(
  JoltC_HeightFieldShapeSettings_t * self,
  char** outErrMsg
) {
  HeightFieldShapeSettings * selfCpp = static_cast<HeightFieldShapeSettings *>(self->obj);
  long result = selfCpp->mBitsPerSample;
  return result;
};

void JoltC_HeightFieldShapeSettings_mBitsPerSample_Set(
  JoltC_HeightFieldShapeSettings_t * self,
  long mBitsPerSample,
  char** outErrMsg
) {
  HeightFieldShapeSettings * selfCpp = static_cast<HeightFieldShapeSettings *>(self->obj);
  selfCpp->mBitsPerSample = mBitsPerSample;
};

JoltC_ArrayFloat_t * JoltC_HeightFieldShapeSettings_mHeightSamples_Get(
  JoltC_HeightFieldShapeSettings_t * self,
  char** outErrMsg
) {
  HeightFieldShapeSettings * selfCpp = static_cast<HeightFieldShapeSettings *>(self->obj);
  ArrayFloat resultValue = selfCpp->mHeightSamples;
  ArrayFloat* result = new ArrayFloat(resultValue);
  return reinterpret_cast<JoltC_ArrayFloat_t *>(result);
};

void JoltC_HeightFieldShapeSettings_mHeightSamples_Set(
  JoltC_HeightFieldShapeSettings_t * self,
  JoltC_ArrayFloat_t * mHeightSamples,
  char** outErrMsg
) {
  HeightFieldShapeSettings * selfCpp = static_cast<HeightFieldShapeSettings *>(self->obj);
  selfCpp->mHeightSamples = *reinterpret_cast<ArrayFloat *>(mHeightSamples->obj);
};

JoltC_ArrayUint8_t * JoltC_HeightFieldShapeSettings_mMaterialIndices_Get(
  JoltC_HeightFieldShapeSettings_t * self,
  char** outErrMsg
) {
  HeightFieldShapeSettings * selfCpp = static_cast<HeightFieldShapeSettings *>(self->obj);
  ArrayUint8 resultValue = selfCpp->mMaterialIndices;
  ArrayUint8* result = new ArrayUint8(resultValue);
  return reinterpret_cast<JoltC_ArrayUint8_t *>(result);
};

void JoltC_HeightFieldShapeSettings_mMaterialIndices_Set(
  JoltC_HeightFieldShapeSettings_t * self,
  JoltC_ArrayUint8_t * mMaterialIndices,
  char** outErrMsg
) {
  HeightFieldShapeSettings * selfCpp = static_cast<HeightFieldShapeSettings *>(self->obj);
  selfCpp->mMaterialIndices = *reinterpret_cast<ArrayUint8 *>(mMaterialIndices->obj);
};

JoltC_PhysicsMaterialList_t * JoltC_HeightFieldShapeSettings_mMaterials_Get(
  JoltC_HeightFieldShapeSettings_t * self,
  char** outErrMsg
) {
  HeightFieldShapeSettings * selfCpp = static_cast<HeightFieldShapeSettings *>(self->obj);
  PhysicsMaterialList resultValue = selfCpp->mMaterials;
  PhysicsMaterialList* result = new PhysicsMaterialList(resultValue);
  return reinterpret_cast<JoltC_PhysicsMaterialList_t *>(result);
};

void JoltC_HeightFieldShapeSettings_mMaterials_Set(
  JoltC_HeightFieldShapeSettings_t * self,
  JoltC_PhysicsMaterialList_t * mMaterials,
  char** outErrMsg
) {
  HeightFieldShapeSettings * selfCpp = static_cast<HeightFieldShapeSettings *>(self->obj);
  selfCpp->mMaterials = *reinterpret_cast<PhysicsMaterialList *>(mMaterials->obj);
};

float JoltC_HeightFieldShapeSettings_mActiveEdgeCosThresholdAngle_Get(
  JoltC_HeightFieldShapeSettings_t * self,
  char** outErrMsg
) {
  HeightFieldShapeSettings * selfCpp = static_cast<HeightFieldShapeSettings *>(self->obj);
  float result = selfCpp->mActiveEdgeCosThresholdAngle;
  return result;
};

void JoltC_HeightFieldShapeSettings_mActiveEdgeCosThresholdAngle_Set(
  JoltC_HeightFieldShapeSettings_t * self,
  float mActiveEdgeCosThresholdAngle,
  char** outErrMsg
) {
  HeightFieldShapeSettings * selfCpp = static_cast<HeightFieldShapeSettings *>(self->obj);
  selfCpp->mActiveEdgeCosThresholdAngle = mActiveEdgeCosThresholdAngle;
};

unsigned long long int JoltC_HeightFieldShapeSettings_mUserData_Get(
  JoltC_HeightFieldShapeSettings_t * self,
  char** outErrMsg
) {
  HeightFieldShapeSettings * selfCpp = static_cast<HeightFieldShapeSettings *>(self->obj);
  unsigned long long int result = selfCpp->mUserData;
  return result;
};

void JoltC_HeightFieldShapeSettings_mUserData_Set(
  JoltC_HeightFieldShapeSettings_t * self,
  unsigned long long int mUserData,
  char** outErrMsg
) {
  HeightFieldShapeSettings * selfCpp = static_cast<HeightFieldShapeSettings *>(self->obj);
  selfCpp->mUserData = mUserData;
};

//endregion properties

#ifdef __cplusplus
}
#endif
