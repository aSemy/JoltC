#include "JoltC/JPC_WheelSettingsTV.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JPC_WheelSettingsTV_t * JPC_WheelSettingsTV_new() {
  JPC_WheelSettingsTV_t * cInstance = new JPC_WheelSettingsTV_t();
  WheelSettingsTV * cppInstance = new WheelSettingsTV();
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion constructors

//region functions

unsigned long JPC_WheelSettingsTV_GetRefCount(
  JPC_WheelSettingsTV_t * self
) {
  WheelSettingsTV * selfCpp = static_cast<WheelSettingsTV *>(self->obj);
  unsigned long result = selfCpp->GetRefCount();
  return result;
};

void JPC_WheelSettingsTV_AddRef(
  JPC_WheelSettingsTV_t * self
) {
  WheelSettingsTV * selfCpp = static_cast<WheelSettingsTV *>(self->obj);
  
  selfCpp->AddRef();
};

void JPC_WheelSettingsTV_Release(
  JPC_WheelSettingsTV_t * self
) {
  WheelSettingsTV * selfCpp = static_cast<WheelSettingsTV *>(self->obj);
  
  selfCpp->Release();
};

//endregion functions

//region properties

float JPC_WheelSettingsTV_mLongitudinalFriction_Get(
  JPC_WheelSettingsTV_t * self
) {
  WheelSettingsTV * selfCpp = static_cast<WheelSettingsTV *>(self->obj);
  float result = selfCpp->mLongitudinalFriction;
  return result;
};

void JPC_WheelSettingsTV_mLongitudinalFriction_Set(
  JPC_WheelSettingsTV_t * self,
  float mLongitudinalFriction
) {
  WheelSettingsTV * selfCpp = static_cast<WheelSettingsTV *>(self->obj);
  selfCpp->mLongitudinalFriction = mLongitudinalFriction;
};

float JPC_WheelSettingsTV_mLateralFriction_Get(
  JPC_WheelSettingsTV_t * self
) {
  WheelSettingsTV * selfCpp = static_cast<WheelSettingsTV *>(self->obj);
  float result = selfCpp->mLateralFriction;
  return result;
};

void JPC_WheelSettingsTV_mLateralFriction_Set(
  JPC_WheelSettingsTV_t * self,
  float mLateralFriction
) {
  WheelSettingsTV * selfCpp = static_cast<WheelSettingsTV *>(self->obj);
  selfCpp->mLateralFriction = mLateralFriction;
};

JPC_Vec3_t * JPC_WheelSettingsTV_mPosition_Get(
  JPC_WheelSettingsTV_t * self
) {
  WheelSettingsTV * selfCpp = static_cast<WheelSettingsTV *>(self->obj);
  Vec3 resultValue = selfCpp->mPosition;
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JPC_Vec3_t *>(result);
};

void JPC_WheelSettingsTV_mPosition_Set(
  JPC_WheelSettingsTV_t * self,
  JPC_Vec3_t * mPosition
) {
  WheelSettingsTV * selfCpp = static_cast<WheelSettingsTV *>(self->obj);
  selfCpp->mPosition = *reinterpret_cast<Vec3 *>(mPosition->obj);
};

JPC_Vec3_t * JPC_WheelSettingsTV_mSuspensionForcePoint_Get(
  JPC_WheelSettingsTV_t * self
) {
  WheelSettingsTV * selfCpp = static_cast<WheelSettingsTV *>(self->obj);
  Vec3 resultValue = selfCpp->mSuspensionForcePoint;
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JPC_Vec3_t *>(result);
};

void JPC_WheelSettingsTV_mSuspensionForcePoint_Set(
  JPC_WheelSettingsTV_t * self,
  JPC_Vec3_t * mSuspensionForcePoint
) {
  WheelSettingsTV * selfCpp = static_cast<WheelSettingsTV *>(self->obj);
  selfCpp->mSuspensionForcePoint = *reinterpret_cast<Vec3 *>(mSuspensionForcePoint->obj);
};

JPC_Vec3_t * JPC_WheelSettingsTV_mSuspensionDirection_Get(
  JPC_WheelSettingsTV_t * self
) {
  WheelSettingsTV * selfCpp = static_cast<WheelSettingsTV *>(self->obj);
  Vec3 resultValue = selfCpp->mSuspensionDirection;
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JPC_Vec3_t *>(result);
};

void JPC_WheelSettingsTV_mSuspensionDirection_Set(
  JPC_WheelSettingsTV_t * self,
  JPC_Vec3_t * mSuspensionDirection
) {
  WheelSettingsTV * selfCpp = static_cast<WheelSettingsTV *>(self->obj);
  selfCpp->mSuspensionDirection = *reinterpret_cast<Vec3 *>(mSuspensionDirection->obj);
};

JPC_Vec3_t * JPC_WheelSettingsTV_mSteeringAxis_Get(
  JPC_WheelSettingsTV_t * self
) {
  WheelSettingsTV * selfCpp = static_cast<WheelSettingsTV *>(self->obj);
  Vec3 resultValue = selfCpp->mSteeringAxis;
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JPC_Vec3_t *>(result);
};

void JPC_WheelSettingsTV_mSteeringAxis_Set(
  JPC_WheelSettingsTV_t * self,
  JPC_Vec3_t * mSteeringAxis
) {
  WheelSettingsTV * selfCpp = static_cast<WheelSettingsTV *>(self->obj);
  selfCpp->mSteeringAxis = *reinterpret_cast<Vec3 *>(mSteeringAxis->obj);
};

JPC_Vec3_t * JPC_WheelSettingsTV_mWheelUp_Get(
  JPC_WheelSettingsTV_t * self
) {
  WheelSettingsTV * selfCpp = static_cast<WheelSettingsTV *>(self->obj);
  Vec3 resultValue = selfCpp->mWheelUp;
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JPC_Vec3_t *>(result);
};

void JPC_WheelSettingsTV_mWheelUp_Set(
  JPC_WheelSettingsTV_t * self,
  JPC_Vec3_t * mWheelUp
) {
  WheelSettingsTV * selfCpp = static_cast<WheelSettingsTV *>(self->obj);
  selfCpp->mWheelUp = *reinterpret_cast<Vec3 *>(mWheelUp->obj);
};

JPC_Vec3_t * JPC_WheelSettingsTV_mWheelForward_Get(
  JPC_WheelSettingsTV_t * self
) {
  WheelSettingsTV * selfCpp = static_cast<WheelSettingsTV *>(self->obj);
  Vec3 resultValue = selfCpp->mWheelForward;
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JPC_Vec3_t *>(result);
};

void JPC_WheelSettingsTV_mWheelForward_Set(
  JPC_WheelSettingsTV_t * self,
  JPC_Vec3_t * mWheelForward
) {
  WheelSettingsTV * selfCpp = static_cast<WheelSettingsTV *>(self->obj);
  selfCpp->mWheelForward = *reinterpret_cast<Vec3 *>(mWheelForward->obj);
};

JPC_SpringSettings_t * JPC_WheelSettingsTV_mSuspensionSpring_Get(
  JPC_WheelSettingsTV_t * self
) {
  WheelSettingsTV * selfCpp = static_cast<WheelSettingsTV *>(self->obj);
  SpringSettings resultValue = selfCpp->mSuspensionSpring;
  SpringSettings* result = new SpringSettings(resultValue);
  return reinterpret_cast<JPC_SpringSettings_t *>(result);
};

void JPC_WheelSettingsTV_mSuspensionSpring_Set(
  JPC_WheelSettingsTV_t * self,
  JPC_SpringSettings_t * mSuspensionSpring
) {
  WheelSettingsTV * selfCpp = static_cast<WheelSettingsTV *>(self->obj);
  selfCpp->mSuspensionSpring = *reinterpret_cast<SpringSettings *>(mSuspensionSpring->obj);
};

float JPC_WheelSettingsTV_mSuspensionMinLength_Get(
  JPC_WheelSettingsTV_t * self
) {
  WheelSettingsTV * selfCpp = static_cast<WheelSettingsTV *>(self->obj);
  float result = selfCpp->mSuspensionMinLength;
  return result;
};

void JPC_WheelSettingsTV_mSuspensionMinLength_Set(
  JPC_WheelSettingsTV_t * self,
  float mSuspensionMinLength
) {
  WheelSettingsTV * selfCpp = static_cast<WheelSettingsTV *>(self->obj);
  selfCpp->mSuspensionMinLength = mSuspensionMinLength;
};

float JPC_WheelSettingsTV_mSuspensionMaxLength_Get(
  JPC_WheelSettingsTV_t * self
) {
  WheelSettingsTV * selfCpp = static_cast<WheelSettingsTV *>(self->obj);
  float result = selfCpp->mSuspensionMaxLength;
  return result;
};

void JPC_WheelSettingsTV_mSuspensionMaxLength_Set(
  JPC_WheelSettingsTV_t * self,
  float mSuspensionMaxLength
) {
  WheelSettingsTV * selfCpp = static_cast<WheelSettingsTV *>(self->obj);
  selfCpp->mSuspensionMaxLength = mSuspensionMaxLength;
};

float JPC_WheelSettingsTV_mSuspensionPreloadLength_Get(
  JPC_WheelSettingsTV_t * self
) {
  WheelSettingsTV * selfCpp = static_cast<WheelSettingsTV *>(self->obj);
  float result = selfCpp->mSuspensionPreloadLength;
  return result;
};

void JPC_WheelSettingsTV_mSuspensionPreloadLength_Set(
  JPC_WheelSettingsTV_t * self,
  float mSuspensionPreloadLength
) {
  WheelSettingsTV * selfCpp = static_cast<WheelSettingsTV *>(self->obj);
  selfCpp->mSuspensionPreloadLength = mSuspensionPreloadLength;
};

float JPC_WheelSettingsTV_mRadius_Get(
  JPC_WheelSettingsTV_t * self
) {
  WheelSettingsTV * selfCpp = static_cast<WheelSettingsTV *>(self->obj);
  float result = selfCpp->mRadius;
  return result;
};

void JPC_WheelSettingsTV_mRadius_Set(
  JPC_WheelSettingsTV_t * self,
  float mRadius
) {
  WheelSettingsTV * selfCpp = static_cast<WheelSettingsTV *>(self->obj);
  selfCpp->mRadius = mRadius;
};

float JPC_WheelSettingsTV_mWidth_Get(
  JPC_WheelSettingsTV_t * self
) {
  WheelSettingsTV * selfCpp = static_cast<WheelSettingsTV *>(self->obj);
  float result = selfCpp->mWidth;
  return result;
};

void JPC_WheelSettingsTV_mWidth_Set(
  JPC_WheelSettingsTV_t * self,
  float mWidth
) {
  WheelSettingsTV * selfCpp = static_cast<WheelSettingsTV *>(self->obj);
  selfCpp->mWidth = mWidth;
};

bool JPC_WheelSettingsTV_mEnableSuspensionForcePoint_Get(
  JPC_WheelSettingsTV_t * self
) {
  WheelSettingsTV * selfCpp = static_cast<WheelSettingsTV *>(self->obj);
  bool result = selfCpp->mEnableSuspensionForcePoint;
  return result;
};

void JPC_WheelSettingsTV_mEnableSuspensionForcePoint_Set(
  JPC_WheelSettingsTV_t * self,
  bool mEnableSuspensionForcePoint
) {
  WheelSettingsTV * selfCpp = static_cast<WheelSettingsTV *>(self->obj);
  selfCpp->mEnableSuspensionForcePoint = mEnableSuspensionForcePoint;
};

//endregion properties

#ifdef __cplusplus
}
#endif

