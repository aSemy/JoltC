#include "JoltC/JoltC_WheelSettingsTV.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

/**
  Construct a new `WheelSettingsTV` instance.
 */
JoltC_WheelSettingsTV_t * JoltC_WheelSettingsTV_new() {
  JoltC_WheelSettingsTV_t * cInstance = new JoltC_WheelSettingsTV_t();
  WheelSettingsTV * cppInstance = new WheelSettingsTV();
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion

//region destructor

void JoltC_WheelSettingsTV_destroy(
  JoltC_WheelSettingsTV_t * self
){
  if (self == NULL) return;
  delete static_cast<WheelSettingsTV *>(self->obj);
  free(self);
}

//endregion
//region functions

unsigned long JoltC_WheelSettingsTV_GetRefCount(
  JoltC_WheelSettingsTV_t * self
) {
  WheelSettingsTV * selfCpp = static_cast<WheelSettingsTV *>(self->obj);
  return selfCpp->GetRefCount();
}

void JoltC_WheelSettingsTV_AddRef(
  JoltC_WheelSettingsTV_t * self
) {
  WheelSettingsTV * selfCpp = static_cast<WheelSettingsTV *>(self->obj);
  selfCpp->AddRef();
}

void JoltC_WheelSettingsTV_Release(
  JoltC_WheelSettingsTV_t * self
) {
  WheelSettingsTV * selfCpp = static_cast<WheelSettingsTV *>(self->obj);
  selfCpp->Release();
}

//endregion

//region properties

float JoltC_WheelSettingsTV_mLongitudinalFriction_Get(
  JoltC_WheelSettingsTV_t * self
) {
  WheelSettingsTV * selfCpp = static_cast<WheelSettingsTV *>(self->obj);
  return selfCpp->mLongitudinalFriction;
}

void JoltC_WheelSettingsTV_mLongitudinalFriction_Set(
  JoltC_WheelSettingsTV_t * self,
  float mLongitudinalFriction
) {
  WheelSettingsTV * selfCpp = static_cast<WheelSettingsTV *>(self->obj);
  selfCpp->mLongitudinalFriction = mLongitudinalFriction;
}

float JoltC_WheelSettingsTV_mLateralFriction_Get(
  JoltC_WheelSettingsTV_t * self
) {
  WheelSettingsTV * selfCpp = static_cast<WheelSettingsTV *>(self->obj);
  return selfCpp->mLateralFriction;
}

void JoltC_WheelSettingsTV_mLateralFriction_Set(
  JoltC_WheelSettingsTV_t * self,
  float mLateralFriction
) {
  WheelSettingsTV * selfCpp = static_cast<WheelSettingsTV *>(self->obj);
  selfCpp->mLateralFriction = mLateralFriction;
}

JoltC_Vec3_t * JoltC_WheelSettingsTV_mPosition_Get(
  JoltC_WheelSettingsTV_t * self
) {
  WheelSettingsTV * selfCpp = static_cast<WheelSettingsTV *>(self->obj);
  Vec3 * resultPtr = new Vec3();
  *resultPtr = selfCpp->mPosition;
  JoltC_Vec3_t * result = new JoltC_Vec3_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

void JoltC_WheelSettingsTV_mPosition_Set(
  JoltC_WheelSettingsTV_t * self,
  JoltC_Vec3_t * mPosition
) {
  WheelSettingsTV * selfCpp = static_cast<WheelSettingsTV *>(self->obj);
  selfCpp->mPosition = *static_cast<Vec3 *>(mPosition->obj);
}

JoltC_Vec3_t * JoltC_WheelSettingsTV_mSuspensionForcePoint_Get(
  JoltC_WheelSettingsTV_t * self
) {
  WheelSettingsTV * selfCpp = static_cast<WheelSettingsTV *>(self->obj);
  Vec3 * resultPtr = new Vec3();
  *resultPtr = selfCpp->mSuspensionForcePoint;
  JoltC_Vec3_t * result = new JoltC_Vec3_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

void JoltC_WheelSettingsTV_mSuspensionForcePoint_Set(
  JoltC_WheelSettingsTV_t * self,
  JoltC_Vec3_t * mSuspensionForcePoint
) {
  WheelSettingsTV * selfCpp = static_cast<WheelSettingsTV *>(self->obj);
  selfCpp->mSuspensionForcePoint = *static_cast<Vec3 *>(mSuspensionForcePoint->obj);
}

JoltC_Vec3_t * JoltC_WheelSettingsTV_mSuspensionDirection_Get(
  JoltC_WheelSettingsTV_t * self
) {
  WheelSettingsTV * selfCpp = static_cast<WheelSettingsTV *>(self->obj);
  Vec3 * resultPtr = new Vec3();
  *resultPtr = selfCpp->mSuspensionDirection;
  JoltC_Vec3_t * result = new JoltC_Vec3_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

void JoltC_WheelSettingsTV_mSuspensionDirection_Set(
  JoltC_WheelSettingsTV_t * self,
  JoltC_Vec3_t * mSuspensionDirection
) {
  WheelSettingsTV * selfCpp = static_cast<WheelSettingsTV *>(self->obj);
  selfCpp->mSuspensionDirection = *static_cast<Vec3 *>(mSuspensionDirection->obj);
}

JoltC_Vec3_t * JoltC_WheelSettingsTV_mSteeringAxis_Get(
  JoltC_WheelSettingsTV_t * self
) {
  WheelSettingsTV * selfCpp = static_cast<WheelSettingsTV *>(self->obj);
  Vec3 * resultPtr = new Vec3();
  *resultPtr = selfCpp->mSteeringAxis;
  JoltC_Vec3_t * result = new JoltC_Vec3_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

void JoltC_WheelSettingsTV_mSteeringAxis_Set(
  JoltC_WheelSettingsTV_t * self,
  JoltC_Vec3_t * mSteeringAxis
) {
  WheelSettingsTV * selfCpp = static_cast<WheelSettingsTV *>(self->obj);
  selfCpp->mSteeringAxis = *static_cast<Vec3 *>(mSteeringAxis->obj);
}

JoltC_Vec3_t * JoltC_WheelSettingsTV_mWheelUp_Get(
  JoltC_WheelSettingsTV_t * self
) {
  WheelSettingsTV * selfCpp = static_cast<WheelSettingsTV *>(self->obj);
  Vec3 * resultPtr = new Vec3();
  *resultPtr = selfCpp->mWheelUp;
  JoltC_Vec3_t * result = new JoltC_Vec3_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

void JoltC_WheelSettingsTV_mWheelUp_Set(
  JoltC_WheelSettingsTV_t * self,
  JoltC_Vec3_t * mWheelUp
) {
  WheelSettingsTV * selfCpp = static_cast<WheelSettingsTV *>(self->obj);
  selfCpp->mWheelUp = *static_cast<Vec3 *>(mWheelUp->obj);
}

JoltC_Vec3_t * JoltC_WheelSettingsTV_mWheelForward_Get(
  JoltC_WheelSettingsTV_t * self
) {
  WheelSettingsTV * selfCpp = static_cast<WheelSettingsTV *>(self->obj);
  Vec3 * resultPtr = new Vec3();
  *resultPtr = selfCpp->mWheelForward;
  JoltC_Vec3_t * result = new JoltC_Vec3_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

void JoltC_WheelSettingsTV_mWheelForward_Set(
  JoltC_WheelSettingsTV_t * self,
  JoltC_Vec3_t * mWheelForward
) {
  WheelSettingsTV * selfCpp = static_cast<WheelSettingsTV *>(self->obj);
  selfCpp->mWheelForward = *static_cast<Vec3 *>(mWheelForward->obj);
}

JoltC_SpringSettings_t * JoltC_WheelSettingsTV_mSuspensionSpring_Get(
  JoltC_WheelSettingsTV_t * self
) {
  WheelSettingsTV * selfCpp = static_cast<WheelSettingsTV *>(self->obj);
  SpringSettings * resultPtr = new SpringSettings();
  *resultPtr = selfCpp->mSuspensionSpring;
  JoltC_SpringSettings_t * result = new JoltC_SpringSettings_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

void JoltC_WheelSettingsTV_mSuspensionSpring_Set(
  JoltC_WheelSettingsTV_t * self,
  JoltC_SpringSettings_t * mSuspensionSpring
) {
  WheelSettingsTV * selfCpp = static_cast<WheelSettingsTV *>(self->obj);
  selfCpp->mSuspensionSpring = *static_cast<SpringSettings *>(mSuspensionSpring->obj);
}

float JoltC_WheelSettingsTV_mSuspensionMinLength_Get(
  JoltC_WheelSettingsTV_t * self
) {
  WheelSettingsTV * selfCpp = static_cast<WheelSettingsTV *>(self->obj);
  return selfCpp->mSuspensionMinLength;
}

void JoltC_WheelSettingsTV_mSuspensionMinLength_Set(
  JoltC_WheelSettingsTV_t * self,
  float mSuspensionMinLength
) {
  WheelSettingsTV * selfCpp = static_cast<WheelSettingsTV *>(self->obj);
  selfCpp->mSuspensionMinLength = mSuspensionMinLength;
}

float JoltC_WheelSettingsTV_mSuspensionMaxLength_Get(
  JoltC_WheelSettingsTV_t * self
) {
  WheelSettingsTV * selfCpp = static_cast<WheelSettingsTV *>(self->obj);
  return selfCpp->mSuspensionMaxLength;
}

void JoltC_WheelSettingsTV_mSuspensionMaxLength_Set(
  JoltC_WheelSettingsTV_t * self,
  float mSuspensionMaxLength
) {
  WheelSettingsTV * selfCpp = static_cast<WheelSettingsTV *>(self->obj);
  selfCpp->mSuspensionMaxLength = mSuspensionMaxLength;
}

float JoltC_WheelSettingsTV_mSuspensionPreloadLength_Get(
  JoltC_WheelSettingsTV_t * self
) {
  WheelSettingsTV * selfCpp = static_cast<WheelSettingsTV *>(self->obj);
  return selfCpp->mSuspensionPreloadLength;
}

void JoltC_WheelSettingsTV_mSuspensionPreloadLength_Set(
  JoltC_WheelSettingsTV_t * self,
  float mSuspensionPreloadLength
) {
  WheelSettingsTV * selfCpp = static_cast<WheelSettingsTV *>(self->obj);
  selfCpp->mSuspensionPreloadLength = mSuspensionPreloadLength;
}

float JoltC_WheelSettingsTV_mRadius_Get(
  JoltC_WheelSettingsTV_t * self
) {
  WheelSettingsTV * selfCpp = static_cast<WheelSettingsTV *>(self->obj);
  return selfCpp->mRadius;
}

void JoltC_WheelSettingsTV_mRadius_Set(
  JoltC_WheelSettingsTV_t * self,
  float mRadius
) {
  WheelSettingsTV * selfCpp = static_cast<WheelSettingsTV *>(self->obj);
  selfCpp->mRadius = mRadius;
}

float JoltC_WheelSettingsTV_mWidth_Get(
  JoltC_WheelSettingsTV_t * self
) {
  WheelSettingsTV * selfCpp = static_cast<WheelSettingsTV *>(self->obj);
  return selfCpp->mWidth;
}

void JoltC_WheelSettingsTV_mWidth_Set(
  JoltC_WheelSettingsTV_t * self,
  float mWidth
) {
  WheelSettingsTV * selfCpp = static_cast<WheelSettingsTV *>(self->obj);
  selfCpp->mWidth = mWidth;
}

bool JoltC_WheelSettingsTV_mEnableSuspensionForcePoint_Get(
  JoltC_WheelSettingsTV_t * self
) {
  WheelSettingsTV * selfCpp = static_cast<WheelSettingsTV *>(self->obj);
  return selfCpp->mEnableSuspensionForcePoint;
}

void JoltC_WheelSettingsTV_mEnableSuspensionForcePoint_Set(
  JoltC_WheelSettingsTV_t * self,
  bool mEnableSuspensionForcePoint
) {
  WheelSettingsTV * selfCpp = static_cast<WheelSettingsTV *>(self->obj);
  selfCpp->mEnableSuspensionForcePoint = mEnableSuspensionForcePoint;
}

//endregion


#ifdef __cplusplus
}
#endif
