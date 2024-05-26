#include "JoltC/JoltC_WheelSettingsTV.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_WheelSettingsTV_t * JoltC_WheelSettingsTV_new() {
  JoltC_WheelSettingsTV_t * cInstance = new JoltC_WheelSettingsTV_t();
  WheelSettingsTV * cppInstance = new WheelSettingsTV();
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion

//region functions

unsigned long JoltC_WheelSettingsTV_GetRefCount(
  JoltC_WheelSettingsTV_t * self
) {
  WheelSettingsTV * selfCpp = static_cast<WheelSettingsTV *>(self->obj);
  unsigned long result = selfCpp->GetRefCount();
  return result;
};

void JoltC_WheelSettingsTV_AddRef(
  JoltC_WheelSettingsTV_t * self
) {
  WheelSettingsTV * selfCpp = static_cast<WheelSettingsTV *>(self->obj);
  
  selfCpp->AddRef();
};

void JoltC_WheelSettingsTV_Release(
  JoltC_WheelSettingsTV_t * self
) {
  WheelSettingsTV * selfCpp = static_cast<WheelSettingsTV *>(self->obj);
  
  selfCpp->Release();
};

//endregion

//region properties

float JoltC_WheelSettingsTV_mLongitudinalFriction_Get(
  JoltC_WheelSettingsTV_t * self
) {
  WheelSettingsTV * selfCpp = static_cast<WheelSettingsTV *>(self->obj);
  float result = selfCpp->mLongitudinalFriction;
  return result;
};

void JoltC_WheelSettingsTV_mLongitudinalFriction_Set(
  JoltC_WheelSettingsTV_t * self,
  float mLongitudinalFriction
) {
  WheelSettingsTV * selfCpp = static_cast<WheelSettingsTV *>(self->obj);
  selfCpp->mLongitudinalFriction = mLongitudinalFriction;
};

float JoltC_WheelSettingsTV_mLateralFriction_Get(
  JoltC_WheelSettingsTV_t * self
) {
  WheelSettingsTV * selfCpp = static_cast<WheelSettingsTV *>(self->obj);
  float result = selfCpp->mLateralFriction;
  return result;
};

void JoltC_WheelSettingsTV_mLateralFriction_Set(
  JoltC_WheelSettingsTV_t * self,
  float mLateralFriction
) {
  WheelSettingsTV * selfCpp = static_cast<WheelSettingsTV *>(self->obj);
  selfCpp->mLateralFriction = mLateralFriction;
};

JoltC_Vec3_t * JoltC_WheelSettingsTV_mPosition_Get(
  JoltC_WheelSettingsTV_t * self
) {
  WheelSettingsTV * selfCpp = static_cast<WheelSettingsTV *>(self->obj);
  static Vec3 resultValue = selfCpp->mPosition;
  JoltC_Vec3_t* result = new JoltC_Vec3_t();
  result->obj = reinterpret_cast<void*>(&resultValue);
  return result;
};

void JoltC_WheelSettingsTV_mPosition_Set(
  JoltC_WheelSettingsTV_t * self,
  JoltC_Vec3_t * mPosition
) {
  WheelSettingsTV * selfCpp = static_cast<WheelSettingsTV *>(self->obj);
  selfCpp->mPosition = *reinterpret_cast<Vec3 *>(mPosition->obj);
};

JoltC_Vec3_t * JoltC_WheelSettingsTV_mSuspensionForcePoint_Get(
  JoltC_WheelSettingsTV_t * self
) {
  WheelSettingsTV * selfCpp = static_cast<WheelSettingsTV *>(self->obj);
  static Vec3 resultValue = selfCpp->mSuspensionForcePoint;
  JoltC_Vec3_t* result = new JoltC_Vec3_t();
  result->obj = reinterpret_cast<void*>(&resultValue);
  return result;
};

void JoltC_WheelSettingsTV_mSuspensionForcePoint_Set(
  JoltC_WheelSettingsTV_t * self,
  JoltC_Vec3_t * mSuspensionForcePoint
) {
  WheelSettingsTV * selfCpp = static_cast<WheelSettingsTV *>(self->obj);
  selfCpp->mSuspensionForcePoint = *reinterpret_cast<Vec3 *>(mSuspensionForcePoint->obj);
};

JoltC_Vec3_t * JoltC_WheelSettingsTV_mSuspensionDirection_Get(
  JoltC_WheelSettingsTV_t * self
) {
  WheelSettingsTV * selfCpp = static_cast<WheelSettingsTV *>(self->obj);
  static Vec3 resultValue = selfCpp->mSuspensionDirection;
  JoltC_Vec3_t* result = new JoltC_Vec3_t();
  result->obj = reinterpret_cast<void*>(&resultValue);
  return result;
};

void JoltC_WheelSettingsTV_mSuspensionDirection_Set(
  JoltC_WheelSettingsTV_t * self,
  JoltC_Vec3_t * mSuspensionDirection
) {
  WheelSettingsTV * selfCpp = static_cast<WheelSettingsTV *>(self->obj);
  selfCpp->mSuspensionDirection = *reinterpret_cast<Vec3 *>(mSuspensionDirection->obj);
};

JoltC_Vec3_t * JoltC_WheelSettingsTV_mSteeringAxis_Get(
  JoltC_WheelSettingsTV_t * self
) {
  WheelSettingsTV * selfCpp = static_cast<WheelSettingsTV *>(self->obj);
  static Vec3 resultValue = selfCpp->mSteeringAxis;
  JoltC_Vec3_t* result = new JoltC_Vec3_t();
  result->obj = reinterpret_cast<void*>(&resultValue);
  return result;
};

void JoltC_WheelSettingsTV_mSteeringAxis_Set(
  JoltC_WheelSettingsTV_t * self,
  JoltC_Vec3_t * mSteeringAxis
) {
  WheelSettingsTV * selfCpp = static_cast<WheelSettingsTV *>(self->obj);
  selfCpp->mSteeringAxis = *reinterpret_cast<Vec3 *>(mSteeringAxis->obj);
};

JoltC_Vec3_t * JoltC_WheelSettingsTV_mWheelUp_Get(
  JoltC_WheelSettingsTV_t * self
) {
  WheelSettingsTV * selfCpp = static_cast<WheelSettingsTV *>(self->obj);
  static Vec3 resultValue = selfCpp->mWheelUp;
  JoltC_Vec3_t* result = new JoltC_Vec3_t();
  result->obj = reinterpret_cast<void*>(&resultValue);
  return result;
};

void JoltC_WheelSettingsTV_mWheelUp_Set(
  JoltC_WheelSettingsTV_t * self,
  JoltC_Vec3_t * mWheelUp
) {
  WheelSettingsTV * selfCpp = static_cast<WheelSettingsTV *>(self->obj);
  selfCpp->mWheelUp = *reinterpret_cast<Vec3 *>(mWheelUp->obj);
};

JoltC_Vec3_t * JoltC_WheelSettingsTV_mWheelForward_Get(
  JoltC_WheelSettingsTV_t * self
) {
  WheelSettingsTV * selfCpp = static_cast<WheelSettingsTV *>(self->obj);
  static Vec3 resultValue = selfCpp->mWheelForward;
  JoltC_Vec3_t* result = new JoltC_Vec3_t();
  result->obj = reinterpret_cast<void*>(&resultValue);
  return result;
};

void JoltC_WheelSettingsTV_mWheelForward_Set(
  JoltC_WheelSettingsTV_t * self,
  JoltC_Vec3_t * mWheelForward
) {
  WheelSettingsTV * selfCpp = static_cast<WheelSettingsTV *>(self->obj);
  selfCpp->mWheelForward = *reinterpret_cast<Vec3 *>(mWheelForward->obj);
};

JoltC_SpringSettings_t * JoltC_WheelSettingsTV_mSuspensionSpring_Get(
  JoltC_WheelSettingsTV_t * self
) {
  WheelSettingsTV * selfCpp = static_cast<WheelSettingsTV *>(self->obj);
  static SpringSettings resultValue = selfCpp->mSuspensionSpring;
  JoltC_SpringSettings_t* result = new JoltC_SpringSettings_t();
  result->obj = reinterpret_cast<void*>(&resultValue);
  return result;
};

void JoltC_WheelSettingsTV_mSuspensionSpring_Set(
  JoltC_WheelSettingsTV_t * self,
  JoltC_SpringSettings_t * mSuspensionSpring
) {
  WheelSettingsTV * selfCpp = static_cast<WheelSettingsTV *>(self->obj);
  selfCpp->mSuspensionSpring = *reinterpret_cast<SpringSettings *>(mSuspensionSpring->obj);
};

float JoltC_WheelSettingsTV_mSuspensionMinLength_Get(
  JoltC_WheelSettingsTV_t * self
) {
  WheelSettingsTV * selfCpp = static_cast<WheelSettingsTV *>(self->obj);
  float result = selfCpp->mSuspensionMinLength;
  return result;
};

void JoltC_WheelSettingsTV_mSuspensionMinLength_Set(
  JoltC_WheelSettingsTV_t * self,
  float mSuspensionMinLength
) {
  WheelSettingsTV * selfCpp = static_cast<WheelSettingsTV *>(self->obj);
  selfCpp->mSuspensionMinLength = mSuspensionMinLength;
};

float JoltC_WheelSettingsTV_mSuspensionMaxLength_Get(
  JoltC_WheelSettingsTV_t * self
) {
  WheelSettingsTV * selfCpp = static_cast<WheelSettingsTV *>(self->obj);
  float result = selfCpp->mSuspensionMaxLength;
  return result;
};

void JoltC_WheelSettingsTV_mSuspensionMaxLength_Set(
  JoltC_WheelSettingsTV_t * self,
  float mSuspensionMaxLength
) {
  WheelSettingsTV * selfCpp = static_cast<WheelSettingsTV *>(self->obj);
  selfCpp->mSuspensionMaxLength = mSuspensionMaxLength;
};

float JoltC_WheelSettingsTV_mSuspensionPreloadLength_Get(
  JoltC_WheelSettingsTV_t * self
) {
  WheelSettingsTV * selfCpp = static_cast<WheelSettingsTV *>(self->obj);
  float result = selfCpp->mSuspensionPreloadLength;
  return result;
};

void JoltC_WheelSettingsTV_mSuspensionPreloadLength_Set(
  JoltC_WheelSettingsTV_t * self,
  float mSuspensionPreloadLength
) {
  WheelSettingsTV * selfCpp = static_cast<WheelSettingsTV *>(self->obj);
  selfCpp->mSuspensionPreloadLength = mSuspensionPreloadLength;
};

float JoltC_WheelSettingsTV_mRadius_Get(
  JoltC_WheelSettingsTV_t * self
) {
  WheelSettingsTV * selfCpp = static_cast<WheelSettingsTV *>(self->obj);
  float result = selfCpp->mRadius;
  return result;
};

void JoltC_WheelSettingsTV_mRadius_Set(
  JoltC_WheelSettingsTV_t * self,
  float mRadius
) {
  WheelSettingsTV * selfCpp = static_cast<WheelSettingsTV *>(self->obj);
  selfCpp->mRadius = mRadius;
};

float JoltC_WheelSettingsTV_mWidth_Get(
  JoltC_WheelSettingsTV_t * self
) {
  WheelSettingsTV * selfCpp = static_cast<WheelSettingsTV *>(self->obj);
  float result = selfCpp->mWidth;
  return result;
};

void JoltC_WheelSettingsTV_mWidth_Set(
  JoltC_WheelSettingsTV_t * self,
  float mWidth
) {
  WheelSettingsTV * selfCpp = static_cast<WheelSettingsTV *>(self->obj);
  selfCpp->mWidth = mWidth;
};

bool JoltC_WheelSettingsTV_mEnableSuspensionForcePoint_Get(
  JoltC_WheelSettingsTV_t * self
) {
  WheelSettingsTV * selfCpp = static_cast<WheelSettingsTV *>(self->obj);
  bool result = selfCpp->mEnableSuspensionForcePoint;
  return result;
};

void JoltC_WheelSettingsTV_mEnableSuspensionForcePoint_Set(
  JoltC_WheelSettingsTV_t * self,
  bool mEnableSuspensionForcePoint
) {
  WheelSettingsTV * selfCpp = static_cast<WheelSettingsTV *>(self->obj);
  selfCpp->mEnableSuspensionForcePoint = mEnableSuspensionForcePoint;
};

//endregion

#ifdef __cplusplus
}
#endif

