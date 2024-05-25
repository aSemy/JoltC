#include "JoltC/JoltC_WheelSettingsTV.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_WheelSettingsTV_t * JoltC_WheelSettingsTV_new(
  char** outErrMsg
) {
  try {
    JoltC_WheelSettingsTV_t * cInstance = new JoltC_WheelSettingsTV_t();
    WheelSettingsTV * cppInstance = new WheelSettingsTV();
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

unsigned long JoltC_WheelSettingsTV_GetRefCount(
  JoltC_WheelSettingsTV_t * self,
  char** outErrMsg
) {
  try {
    WheelSettingsTV * selfCpp = static_cast<WheelSettingsTV *>(self->obj);
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

void JoltC_WheelSettingsTV_AddRef(
  JoltC_WheelSettingsTV_t * self,
  char** outErrMsg
) {
  try {
    WheelSettingsTV * selfCpp = static_cast<WheelSettingsTV *>(self->obj);
    
    selfCpp->AddRef();
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_WheelSettingsTV_Release(
  JoltC_WheelSettingsTV_t * self,
  char** outErrMsg
) {
  try {
    WheelSettingsTV * selfCpp = static_cast<WheelSettingsTV *>(self->obj);
    
    selfCpp->Release();
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

float JoltC_WheelSettingsTV_mLongitudinalFriction_Get(
  JoltC_WheelSettingsTV_t * self,
  char** outErrMsg
) {
  WheelSettingsTV * selfCpp = static_cast<WheelSettingsTV *>(self->obj);
  float result = selfCpp->mLongitudinalFriction;
  return result;
};

void JoltC_WheelSettingsTV_mLongitudinalFriction_Set(
  JoltC_WheelSettingsTV_t * self,
  float mLongitudinalFriction,
  char** outErrMsg
) {
  WheelSettingsTV * selfCpp = static_cast<WheelSettingsTV *>(self->obj);
  selfCpp->mLongitudinalFriction = mLongitudinalFriction;
};

float JoltC_WheelSettingsTV_mLateralFriction_Get(
  JoltC_WheelSettingsTV_t * self,
  char** outErrMsg
) {
  WheelSettingsTV * selfCpp = static_cast<WheelSettingsTV *>(self->obj);
  float result = selfCpp->mLateralFriction;
  return result;
};

void JoltC_WheelSettingsTV_mLateralFriction_Set(
  JoltC_WheelSettingsTV_t * self,
  float mLateralFriction,
  char** outErrMsg
) {
  WheelSettingsTV * selfCpp = static_cast<WheelSettingsTV *>(self->obj);
  selfCpp->mLateralFriction = mLateralFriction;
};

JoltC_Vec3_t * JoltC_WheelSettingsTV_mPosition_Get(
  JoltC_WheelSettingsTV_t * self,
  char** outErrMsg
) {
  WheelSettingsTV * selfCpp = static_cast<WheelSettingsTV *>(self->obj);
  Vec3 resultValue = selfCpp->mPosition;
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JoltC_Vec3_t *>(result);
};

void JoltC_WheelSettingsTV_mPosition_Set(
  JoltC_WheelSettingsTV_t * self,
  JoltC_Vec3_t * mPosition,
  char** outErrMsg
) {
  WheelSettingsTV * selfCpp = static_cast<WheelSettingsTV *>(self->obj);
  selfCpp->mPosition = *reinterpret_cast<Vec3 *>(mPosition->obj);
};

JoltC_Vec3_t * JoltC_WheelSettingsTV_mSuspensionForcePoint_Get(
  JoltC_WheelSettingsTV_t * self,
  char** outErrMsg
) {
  WheelSettingsTV * selfCpp = static_cast<WheelSettingsTV *>(self->obj);
  Vec3 resultValue = selfCpp->mSuspensionForcePoint;
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JoltC_Vec3_t *>(result);
};

void JoltC_WheelSettingsTV_mSuspensionForcePoint_Set(
  JoltC_WheelSettingsTV_t * self,
  JoltC_Vec3_t * mSuspensionForcePoint,
  char** outErrMsg
) {
  WheelSettingsTV * selfCpp = static_cast<WheelSettingsTV *>(self->obj);
  selfCpp->mSuspensionForcePoint = *reinterpret_cast<Vec3 *>(mSuspensionForcePoint->obj);
};

JoltC_Vec3_t * JoltC_WheelSettingsTV_mSuspensionDirection_Get(
  JoltC_WheelSettingsTV_t * self,
  char** outErrMsg
) {
  WheelSettingsTV * selfCpp = static_cast<WheelSettingsTV *>(self->obj);
  Vec3 resultValue = selfCpp->mSuspensionDirection;
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JoltC_Vec3_t *>(result);
};

void JoltC_WheelSettingsTV_mSuspensionDirection_Set(
  JoltC_WheelSettingsTV_t * self,
  JoltC_Vec3_t * mSuspensionDirection,
  char** outErrMsg
) {
  WheelSettingsTV * selfCpp = static_cast<WheelSettingsTV *>(self->obj);
  selfCpp->mSuspensionDirection = *reinterpret_cast<Vec3 *>(mSuspensionDirection->obj);
};

JoltC_Vec3_t * JoltC_WheelSettingsTV_mSteeringAxis_Get(
  JoltC_WheelSettingsTV_t * self,
  char** outErrMsg
) {
  WheelSettingsTV * selfCpp = static_cast<WheelSettingsTV *>(self->obj);
  Vec3 resultValue = selfCpp->mSteeringAxis;
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JoltC_Vec3_t *>(result);
};

void JoltC_WheelSettingsTV_mSteeringAxis_Set(
  JoltC_WheelSettingsTV_t * self,
  JoltC_Vec3_t * mSteeringAxis,
  char** outErrMsg
) {
  WheelSettingsTV * selfCpp = static_cast<WheelSettingsTV *>(self->obj);
  selfCpp->mSteeringAxis = *reinterpret_cast<Vec3 *>(mSteeringAxis->obj);
};

JoltC_Vec3_t * JoltC_WheelSettingsTV_mWheelUp_Get(
  JoltC_WheelSettingsTV_t * self,
  char** outErrMsg
) {
  WheelSettingsTV * selfCpp = static_cast<WheelSettingsTV *>(self->obj);
  Vec3 resultValue = selfCpp->mWheelUp;
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JoltC_Vec3_t *>(result);
};

void JoltC_WheelSettingsTV_mWheelUp_Set(
  JoltC_WheelSettingsTV_t * self,
  JoltC_Vec3_t * mWheelUp,
  char** outErrMsg
) {
  WheelSettingsTV * selfCpp = static_cast<WheelSettingsTV *>(self->obj);
  selfCpp->mWheelUp = *reinterpret_cast<Vec3 *>(mWheelUp->obj);
};

JoltC_Vec3_t * JoltC_WheelSettingsTV_mWheelForward_Get(
  JoltC_WheelSettingsTV_t * self,
  char** outErrMsg
) {
  WheelSettingsTV * selfCpp = static_cast<WheelSettingsTV *>(self->obj);
  Vec3 resultValue = selfCpp->mWheelForward;
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JoltC_Vec3_t *>(result);
};

void JoltC_WheelSettingsTV_mWheelForward_Set(
  JoltC_WheelSettingsTV_t * self,
  JoltC_Vec3_t * mWheelForward,
  char** outErrMsg
) {
  WheelSettingsTV * selfCpp = static_cast<WheelSettingsTV *>(self->obj);
  selfCpp->mWheelForward = *reinterpret_cast<Vec3 *>(mWheelForward->obj);
};

JoltC_SpringSettings_t * JoltC_WheelSettingsTV_mSuspensionSpring_Get(
  JoltC_WheelSettingsTV_t * self,
  char** outErrMsg
) {
  WheelSettingsTV * selfCpp = static_cast<WheelSettingsTV *>(self->obj);
  SpringSettings resultValue = selfCpp->mSuspensionSpring;
  SpringSettings* result = new SpringSettings(resultValue);
  return reinterpret_cast<JoltC_SpringSettings_t *>(result);
};

void JoltC_WheelSettingsTV_mSuspensionSpring_Set(
  JoltC_WheelSettingsTV_t * self,
  JoltC_SpringSettings_t * mSuspensionSpring,
  char** outErrMsg
) {
  WheelSettingsTV * selfCpp = static_cast<WheelSettingsTV *>(self->obj);
  selfCpp->mSuspensionSpring = *reinterpret_cast<SpringSettings *>(mSuspensionSpring->obj);
};

float JoltC_WheelSettingsTV_mSuspensionMinLength_Get(
  JoltC_WheelSettingsTV_t * self,
  char** outErrMsg
) {
  WheelSettingsTV * selfCpp = static_cast<WheelSettingsTV *>(self->obj);
  float result = selfCpp->mSuspensionMinLength;
  return result;
};

void JoltC_WheelSettingsTV_mSuspensionMinLength_Set(
  JoltC_WheelSettingsTV_t * self,
  float mSuspensionMinLength,
  char** outErrMsg
) {
  WheelSettingsTV * selfCpp = static_cast<WheelSettingsTV *>(self->obj);
  selfCpp->mSuspensionMinLength = mSuspensionMinLength;
};

float JoltC_WheelSettingsTV_mSuspensionMaxLength_Get(
  JoltC_WheelSettingsTV_t * self,
  char** outErrMsg
) {
  WheelSettingsTV * selfCpp = static_cast<WheelSettingsTV *>(self->obj);
  float result = selfCpp->mSuspensionMaxLength;
  return result;
};

void JoltC_WheelSettingsTV_mSuspensionMaxLength_Set(
  JoltC_WheelSettingsTV_t * self,
  float mSuspensionMaxLength,
  char** outErrMsg
) {
  WheelSettingsTV * selfCpp = static_cast<WheelSettingsTV *>(self->obj);
  selfCpp->mSuspensionMaxLength = mSuspensionMaxLength;
};

float JoltC_WheelSettingsTV_mSuspensionPreloadLength_Get(
  JoltC_WheelSettingsTV_t * self,
  char** outErrMsg
) {
  WheelSettingsTV * selfCpp = static_cast<WheelSettingsTV *>(self->obj);
  float result = selfCpp->mSuspensionPreloadLength;
  return result;
};

void JoltC_WheelSettingsTV_mSuspensionPreloadLength_Set(
  JoltC_WheelSettingsTV_t * self,
  float mSuspensionPreloadLength,
  char** outErrMsg
) {
  WheelSettingsTV * selfCpp = static_cast<WheelSettingsTV *>(self->obj);
  selfCpp->mSuspensionPreloadLength = mSuspensionPreloadLength;
};

float JoltC_WheelSettingsTV_mRadius_Get(
  JoltC_WheelSettingsTV_t * self,
  char** outErrMsg
) {
  WheelSettingsTV * selfCpp = static_cast<WheelSettingsTV *>(self->obj);
  float result = selfCpp->mRadius;
  return result;
};

void JoltC_WheelSettingsTV_mRadius_Set(
  JoltC_WheelSettingsTV_t * self,
  float mRadius,
  char** outErrMsg
) {
  WheelSettingsTV * selfCpp = static_cast<WheelSettingsTV *>(self->obj);
  selfCpp->mRadius = mRadius;
};

float JoltC_WheelSettingsTV_mWidth_Get(
  JoltC_WheelSettingsTV_t * self,
  char** outErrMsg
) {
  WheelSettingsTV * selfCpp = static_cast<WheelSettingsTV *>(self->obj);
  float result = selfCpp->mWidth;
  return result;
};

void JoltC_WheelSettingsTV_mWidth_Set(
  JoltC_WheelSettingsTV_t * self,
  float mWidth,
  char** outErrMsg
) {
  WheelSettingsTV * selfCpp = static_cast<WheelSettingsTV *>(self->obj);
  selfCpp->mWidth = mWidth;
};

bool JoltC_WheelSettingsTV_mEnableSuspensionForcePoint_Get(
  JoltC_WheelSettingsTV_t * self,
  char** outErrMsg
) {
  WheelSettingsTV * selfCpp = static_cast<WheelSettingsTV *>(self->obj);
  bool result = selfCpp->mEnableSuspensionForcePoint;
  return result;
};

void JoltC_WheelSettingsTV_mEnableSuspensionForcePoint_Set(
  JoltC_WheelSettingsTV_t * self,
  bool mEnableSuspensionForcePoint,
  char** outErrMsg
) {
  WheelSettingsTV * selfCpp = static_cast<WheelSettingsTV *>(self->obj);
  selfCpp->mEnableSuspensionForcePoint = mEnableSuspensionForcePoint;
};

//endregion properties

#ifdef __cplusplus
}
#endif

