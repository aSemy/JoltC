#include "JoltC/JoltC_WheelSettings.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_WheelSettings_t * JoltC_WheelSettings_new(
  char** outErrMsg
) {
  try {
    JoltC_WheelSettings_t * cInstance = new JoltC_WheelSettings_t();
    WheelSettings * cppInstance = new WheelSettings();
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

unsigned long JoltC_WheelSettings_GetRefCount(
  JoltC_WheelSettings_t * self,
  char** outErrMsg
) {
  try {
    WheelSettings * selfCpp = static_cast<WheelSettings *>(self->obj);
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

void JoltC_WheelSettings_AddRef(
  JoltC_WheelSettings_t * self,
  char** outErrMsg
) {
  try {
    WheelSettings * selfCpp = static_cast<WheelSettings *>(self->obj);
    
    selfCpp->AddRef();
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_WheelSettings_Release(
  JoltC_WheelSettings_t * self,
  char** outErrMsg
) {
  try {
    WheelSettings * selfCpp = static_cast<WheelSettings *>(self->obj);
    
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

JoltC_Vec3_t * JoltC_WheelSettings_mPosition_Get(
  JoltC_WheelSettings_t * self,
  char** outErrMsg
) {
  WheelSettings * selfCpp = static_cast<WheelSettings *>(self->obj);
  Vec3 resultValue = selfCpp->mPosition;
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JoltC_Vec3_t *>(result);
};

void JoltC_WheelSettings_mPosition_Set(
  JoltC_WheelSettings_t * self,
  JoltC_Vec3_t * mPosition,
  char** outErrMsg
) {
  WheelSettings * selfCpp = static_cast<WheelSettings *>(self->obj);
  selfCpp->mPosition = *reinterpret_cast<Vec3 *>(mPosition->obj);
};

JoltC_Vec3_t * JoltC_WheelSettings_mSuspensionForcePoint_Get(
  JoltC_WheelSettings_t * self,
  char** outErrMsg
) {
  WheelSettings * selfCpp = static_cast<WheelSettings *>(self->obj);
  Vec3 resultValue = selfCpp->mSuspensionForcePoint;
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JoltC_Vec3_t *>(result);
};

void JoltC_WheelSettings_mSuspensionForcePoint_Set(
  JoltC_WheelSettings_t * self,
  JoltC_Vec3_t * mSuspensionForcePoint,
  char** outErrMsg
) {
  WheelSettings * selfCpp = static_cast<WheelSettings *>(self->obj);
  selfCpp->mSuspensionForcePoint = *reinterpret_cast<Vec3 *>(mSuspensionForcePoint->obj);
};

JoltC_Vec3_t * JoltC_WheelSettings_mSuspensionDirection_Get(
  JoltC_WheelSettings_t * self,
  char** outErrMsg
) {
  WheelSettings * selfCpp = static_cast<WheelSettings *>(self->obj);
  Vec3 resultValue = selfCpp->mSuspensionDirection;
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JoltC_Vec3_t *>(result);
};

void JoltC_WheelSettings_mSuspensionDirection_Set(
  JoltC_WheelSettings_t * self,
  JoltC_Vec3_t * mSuspensionDirection,
  char** outErrMsg
) {
  WheelSettings * selfCpp = static_cast<WheelSettings *>(self->obj);
  selfCpp->mSuspensionDirection = *reinterpret_cast<Vec3 *>(mSuspensionDirection->obj);
};

JoltC_Vec3_t * JoltC_WheelSettings_mSteeringAxis_Get(
  JoltC_WheelSettings_t * self,
  char** outErrMsg
) {
  WheelSettings * selfCpp = static_cast<WheelSettings *>(self->obj);
  Vec3 resultValue = selfCpp->mSteeringAxis;
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JoltC_Vec3_t *>(result);
};

void JoltC_WheelSettings_mSteeringAxis_Set(
  JoltC_WheelSettings_t * self,
  JoltC_Vec3_t * mSteeringAxis,
  char** outErrMsg
) {
  WheelSettings * selfCpp = static_cast<WheelSettings *>(self->obj);
  selfCpp->mSteeringAxis = *reinterpret_cast<Vec3 *>(mSteeringAxis->obj);
};

JoltC_Vec3_t * JoltC_WheelSettings_mWheelUp_Get(
  JoltC_WheelSettings_t * self,
  char** outErrMsg
) {
  WheelSettings * selfCpp = static_cast<WheelSettings *>(self->obj);
  Vec3 resultValue = selfCpp->mWheelUp;
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JoltC_Vec3_t *>(result);
};

void JoltC_WheelSettings_mWheelUp_Set(
  JoltC_WheelSettings_t * self,
  JoltC_Vec3_t * mWheelUp,
  char** outErrMsg
) {
  WheelSettings * selfCpp = static_cast<WheelSettings *>(self->obj);
  selfCpp->mWheelUp = *reinterpret_cast<Vec3 *>(mWheelUp->obj);
};

JoltC_Vec3_t * JoltC_WheelSettings_mWheelForward_Get(
  JoltC_WheelSettings_t * self,
  char** outErrMsg
) {
  WheelSettings * selfCpp = static_cast<WheelSettings *>(self->obj);
  Vec3 resultValue = selfCpp->mWheelForward;
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JoltC_Vec3_t *>(result);
};

void JoltC_WheelSettings_mWheelForward_Set(
  JoltC_WheelSettings_t * self,
  JoltC_Vec3_t * mWheelForward,
  char** outErrMsg
) {
  WheelSettings * selfCpp = static_cast<WheelSettings *>(self->obj);
  selfCpp->mWheelForward = *reinterpret_cast<Vec3 *>(mWheelForward->obj);
};

JoltC_SpringSettings_t * JoltC_WheelSettings_mSuspensionSpring_Get(
  JoltC_WheelSettings_t * self,
  char** outErrMsg
) {
  WheelSettings * selfCpp = static_cast<WheelSettings *>(self->obj);
  SpringSettings resultValue = selfCpp->mSuspensionSpring;
  SpringSettings* result = new SpringSettings(resultValue);
  return reinterpret_cast<JoltC_SpringSettings_t *>(result);
};

void JoltC_WheelSettings_mSuspensionSpring_Set(
  JoltC_WheelSettings_t * self,
  JoltC_SpringSettings_t * mSuspensionSpring,
  char** outErrMsg
) {
  WheelSettings * selfCpp = static_cast<WheelSettings *>(self->obj);
  selfCpp->mSuspensionSpring = *reinterpret_cast<SpringSettings *>(mSuspensionSpring->obj);
};

float JoltC_WheelSettings_mSuspensionMinLength_Get(
  JoltC_WheelSettings_t * self,
  char** outErrMsg
) {
  WheelSettings * selfCpp = static_cast<WheelSettings *>(self->obj);
  float result = selfCpp->mSuspensionMinLength;
  return result;
};

void JoltC_WheelSettings_mSuspensionMinLength_Set(
  JoltC_WheelSettings_t * self,
  float mSuspensionMinLength,
  char** outErrMsg
) {
  WheelSettings * selfCpp = static_cast<WheelSettings *>(self->obj);
  selfCpp->mSuspensionMinLength = mSuspensionMinLength;
};

float JoltC_WheelSettings_mSuspensionMaxLength_Get(
  JoltC_WheelSettings_t * self,
  char** outErrMsg
) {
  WheelSettings * selfCpp = static_cast<WheelSettings *>(self->obj);
  float result = selfCpp->mSuspensionMaxLength;
  return result;
};

void JoltC_WheelSettings_mSuspensionMaxLength_Set(
  JoltC_WheelSettings_t * self,
  float mSuspensionMaxLength,
  char** outErrMsg
) {
  WheelSettings * selfCpp = static_cast<WheelSettings *>(self->obj);
  selfCpp->mSuspensionMaxLength = mSuspensionMaxLength;
};

float JoltC_WheelSettings_mSuspensionPreloadLength_Get(
  JoltC_WheelSettings_t * self,
  char** outErrMsg
) {
  WheelSettings * selfCpp = static_cast<WheelSettings *>(self->obj);
  float result = selfCpp->mSuspensionPreloadLength;
  return result;
};

void JoltC_WheelSettings_mSuspensionPreloadLength_Set(
  JoltC_WheelSettings_t * self,
  float mSuspensionPreloadLength,
  char** outErrMsg
) {
  WheelSettings * selfCpp = static_cast<WheelSettings *>(self->obj);
  selfCpp->mSuspensionPreloadLength = mSuspensionPreloadLength;
};

float JoltC_WheelSettings_mRadius_Get(
  JoltC_WheelSettings_t * self,
  char** outErrMsg
) {
  WheelSettings * selfCpp = static_cast<WheelSettings *>(self->obj);
  float result = selfCpp->mRadius;
  return result;
};

void JoltC_WheelSettings_mRadius_Set(
  JoltC_WheelSettings_t * self,
  float mRadius,
  char** outErrMsg
) {
  WheelSettings * selfCpp = static_cast<WheelSettings *>(self->obj);
  selfCpp->mRadius = mRadius;
};

float JoltC_WheelSettings_mWidth_Get(
  JoltC_WheelSettings_t * self,
  char** outErrMsg
) {
  WheelSettings * selfCpp = static_cast<WheelSettings *>(self->obj);
  float result = selfCpp->mWidth;
  return result;
};

void JoltC_WheelSettings_mWidth_Set(
  JoltC_WheelSettings_t * self,
  float mWidth,
  char** outErrMsg
) {
  WheelSettings * selfCpp = static_cast<WheelSettings *>(self->obj);
  selfCpp->mWidth = mWidth;
};

bool JoltC_WheelSettings_mEnableSuspensionForcePoint_Get(
  JoltC_WheelSettings_t * self,
  char** outErrMsg
) {
  WheelSettings * selfCpp = static_cast<WheelSettings *>(self->obj);
  bool result = selfCpp->mEnableSuspensionForcePoint;
  return result;
};

void JoltC_WheelSettings_mEnableSuspensionForcePoint_Set(
  JoltC_WheelSettings_t * self,
  bool mEnableSuspensionForcePoint,
  char** outErrMsg
) {
  WheelSettings * selfCpp = static_cast<WheelSettings *>(self->obj);
  selfCpp->mEnableSuspensionForcePoint = mEnableSuspensionForcePoint;
};

//endregion properties

#ifdef __cplusplus
}
#endif

