#include "JoltC/JoltC_WheelSettingsWV.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_WheelSettingsWV_t * JoltC_WheelSettingsWV_new() {
  JoltC_WheelSettingsWV_t * cInstance = new JoltC_WheelSettingsWV_t();
  WheelSettingsWV * cppInstance = new WheelSettingsWV();
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion

//region functions

unsigned long JoltC_WheelSettingsWV_GetRefCount(
  JoltC_WheelSettingsWV_t * self
) {
  WheelSettingsWV * selfCpp = static_cast<WheelSettingsWV *>(self->obj);
  unsigned long result = selfCpp->GetRefCount();
  return result;
};

void JoltC_WheelSettingsWV_AddRef(
  JoltC_WheelSettingsWV_t * self
) {
  WheelSettingsWV * selfCpp = static_cast<WheelSettingsWV *>(self->obj);
  
  selfCpp->AddRef();
};

void JoltC_WheelSettingsWV_Release(
  JoltC_WheelSettingsWV_t * self
) {
  WheelSettingsWV * selfCpp = static_cast<WheelSettingsWV *>(self->obj);
  
  selfCpp->Release();
};

//endregion

//region properties

float JoltC_WheelSettingsWV_mInertia_Get(
  JoltC_WheelSettingsWV_t * self
) {
  WheelSettingsWV * selfCpp = static_cast<WheelSettingsWV *>(self->obj);
  float result = selfCpp->mInertia;
  return result;
};

void JoltC_WheelSettingsWV_mInertia_Set(
  JoltC_WheelSettingsWV_t * self,
  float mInertia
) {
  WheelSettingsWV * selfCpp = static_cast<WheelSettingsWV *>(self->obj);
  selfCpp->mInertia = mInertia;
};

float JoltC_WheelSettingsWV_mAngularDamping_Get(
  JoltC_WheelSettingsWV_t * self
) {
  WheelSettingsWV * selfCpp = static_cast<WheelSettingsWV *>(self->obj);
  float result = selfCpp->mAngularDamping;
  return result;
};

void JoltC_WheelSettingsWV_mAngularDamping_Set(
  JoltC_WheelSettingsWV_t * self,
  float mAngularDamping
) {
  WheelSettingsWV * selfCpp = static_cast<WheelSettingsWV *>(self->obj);
  selfCpp->mAngularDamping = mAngularDamping;
};

float JoltC_WheelSettingsWV_mMaxSteerAngle_Get(
  JoltC_WheelSettingsWV_t * self
) {
  WheelSettingsWV * selfCpp = static_cast<WheelSettingsWV *>(self->obj);
  float result = selfCpp->mMaxSteerAngle;
  return result;
};

void JoltC_WheelSettingsWV_mMaxSteerAngle_Set(
  JoltC_WheelSettingsWV_t * self,
  float mMaxSteerAngle
) {
  WheelSettingsWV * selfCpp = static_cast<WheelSettingsWV *>(self->obj);
  selfCpp->mMaxSteerAngle = mMaxSteerAngle;
};

JoltC_LinearCurve_t * JoltC_WheelSettingsWV_mLongitudinalFriction_Get(
  JoltC_WheelSettingsWV_t * self
) {
  WheelSettingsWV * selfCpp = static_cast<WheelSettingsWV *>(self->obj);
  LinearCurve resultValue = selfCpp->mLongitudinalFriction;
  LinearCurve* result = new LinearCurve(resultValue);
  return reinterpret_cast<JoltC_LinearCurve_t *>(result);
};

void JoltC_WheelSettingsWV_mLongitudinalFriction_Set(
  JoltC_WheelSettingsWV_t * self,
  JoltC_LinearCurve_t * mLongitudinalFriction
) {
  WheelSettingsWV * selfCpp = static_cast<WheelSettingsWV *>(self->obj);
  selfCpp->mLongitudinalFriction = *reinterpret_cast<LinearCurve *>(mLongitudinalFriction->obj);
};

JoltC_LinearCurve_t * JoltC_WheelSettingsWV_mLateralFriction_Get(
  JoltC_WheelSettingsWV_t * self
) {
  WheelSettingsWV * selfCpp = static_cast<WheelSettingsWV *>(self->obj);
  LinearCurve resultValue = selfCpp->mLateralFriction;
  LinearCurve* result = new LinearCurve(resultValue);
  return reinterpret_cast<JoltC_LinearCurve_t *>(result);
};

void JoltC_WheelSettingsWV_mLateralFriction_Set(
  JoltC_WheelSettingsWV_t * self,
  JoltC_LinearCurve_t * mLateralFriction
) {
  WheelSettingsWV * selfCpp = static_cast<WheelSettingsWV *>(self->obj);
  selfCpp->mLateralFriction = *reinterpret_cast<LinearCurve *>(mLateralFriction->obj);
};

float JoltC_WheelSettingsWV_mMaxBrakeTorque_Get(
  JoltC_WheelSettingsWV_t * self
) {
  WheelSettingsWV * selfCpp = static_cast<WheelSettingsWV *>(self->obj);
  float result = selfCpp->mMaxBrakeTorque;
  return result;
};

void JoltC_WheelSettingsWV_mMaxBrakeTorque_Set(
  JoltC_WheelSettingsWV_t * self,
  float mMaxBrakeTorque
) {
  WheelSettingsWV * selfCpp = static_cast<WheelSettingsWV *>(self->obj);
  selfCpp->mMaxBrakeTorque = mMaxBrakeTorque;
};

float JoltC_WheelSettingsWV_mMaxHandBrakeTorque_Get(
  JoltC_WheelSettingsWV_t * self
) {
  WheelSettingsWV * selfCpp = static_cast<WheelSettingsWV *>(self->obj);
  float result = selfCpp->mMaxHandBrakeTorque;
  return result;
};

void JoltC_WheelSettingsWV_mMaxHandBrakeTorque_Set(
  JoltC_WheelSettingsWV_t * self,
  float mMaxHandBrakeTorque
) {
  WheelSettingsWV * selfCpp = static_cast<WheelSettingsWV *>(self->obj);
  selfCpp->mMaxHandBrakeTorque = mMaxHandBrakeTorque;
};

JoltC_Vec3_t * JoltC_WheelSettingsWV_mPosition_Get(
  JoltC_WheelSettingsWV_t * self
) {
  WheelSettingsWV * selfCpp = static_cast<WheelSettingsWV *>(self->obj);
  Vec3 resultValue = selfCpp->mPosition;
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JoltC_Vec3_t *>(result);
};

void JoltC_WheelSettingsWV_mPosition_Set(
  JoltC_WheelSettingsWV_t * self,
  JoltC_Vec3_t * mPosition
) {
  WheelSettingsWV * selfCpp = static_cast<WheelSettingsWV *>(self->obj);
  selfCpp->mPosition = *reinterpret_cast<Vec3 *>(mPosition->obj);
};

JoltC_Vec3_t * JoltC_WheelSettingsWV_mSuspensionForcePoint_Get(
  JoltC_WheelSettingsWV_t * self
) {
  WheelSettingsWV * selfCpp = static_cast<WheelSettingsWV *>(self->obj);
  Vec3 resultValue = selfCpp->mSuspensionForcePoint;
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JoltC_Vec3_t *>(result);
};

void JoltC_WheelSettingsWV_mSuspensionForcePoint_Set(
  JoltC_WheelSettingsWV_t * self,
  JoltC_Vec3_t * mSuspensionForcePoint
) {
  WheelSettingsWV * selfCpp = static_cast<WheelSettingsWV *>(self->obj);
  selfCpp->mSuspensionForcePoint = *reinterpret_cast<Vec3 *>(mSuspensionForcePoint->obj);
};

JoltC_Vec3_t * JoltC_WheelSettingsWV_mSuspensionDirection_Get(
  JoltC_WheelSettingsWV_t * self
) {
  WheelSettingsWV * selfCpp = static_cast<WheelSettingsWV *>(self->obj);
  Vec3 resultValue = selfCpp->mSuspensionDirection;
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JoltC_Vec3_t *>(result);
};

void JoltC_WheelSettingsWV_mSuspensionDirection_Set(
  JoltC_WheelSettingsWV_t * self,
  JoltC_Vec3_t * mSuspensionDirection
) {
  WheelSettingsWV * selfCpp = static_cast<WheelSettingsWV *>(self->obj);
  selfCpp->mSuspensionDirection = *reinterpret_cast<Vec3 *>(mSuspensionDirection->obj);
};

JoltC_Vec3_t * JoltC_WheelSettingsWV_mSteeringAxis_Get(
  JoltC_WheelSettingsWV_t * self
) {
  WheelSettingsWV * selfCpp = static_cast<WheelSettingsWV *>(self->obj);
  Vec3 resultValue = selfCpp->mSteeringAxis;
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JoltC_Vec3_t *>(result);
};

void JoltC_WheelSettingsWV_mSteeringAxis_Set(
  JoltC_WheelSettingsWV_t * self,
  JoltC_Vec3_t * mSteeringAxis
) {
  WheelSettingsWV * selfCpp = static_cast<WheelSettingsWV *>(self->obj);
  selfCpp->mSteeringAxis = *reinterpret_cast<Vec3 *>(mSteeringAxis->obj);
};

JoltC_Vec3_t * JoltC_WheelSettingsWV_mWheelUp_Get(
  JoltC_WheelSettingsWV_t * self
) {
  WheelSettingsWV * selfCpp = static_cast<WheelSettingsWV *>(self->obj);
  Vec3 resultValue = selfCpp->mWheelUp;
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JoltC_Vec3_t *>(result);
};

void JoltC_WheelSettingsWV_mWheelUp_Set(
  JoltC_WheelSettingsWV_t * self,
  JoltC_Vec3_t * mWheelUp
) {
  WheelSettingsWV * selfCpp = static_cast<WheelSettingsWV *>(self->obj);
  selfCpp->mWheelUp = *reinterpret_cast<Vec3 *>(mWheelUp->obj);
};

JoltC_Vec3_t * JoltC_WheelSettingsWV_mWheelForward_Get(
  JoltC_WheelSettingsWV_t * self
) {
  WheelSettingsWV * selfCpp = static_cast<WheelSettingsWV *>(self->obj);
  Vec3 resultValue = selfCpp->mWheelForward;
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JoltC_Vec3_t *>(result);
};

void JoltC_WheelSettingsWV_mWheelForward_Set(
  JoltC_WheelSettingsWV_t * self,
  JoltC_Vec3_t * mWheelForward
) {
  WheelSettingsWV * selfCpp = static_cast<WheelSettingsWV *>(self->obj);
  selfCpp->mWheelForward = *reinterpret_cast<Vec3 *>(mWheelForward->obj);
};

JoltC_SpringSettings_t * JoltC_WheelSettingsWV_mSuspensionSpring_Get(
  JoltC_WheelSettingsWV_t * self
) {
  WheelSettingsWV * selfCpp = static_cast<WheelSettingsWV *>(self->obj);
  SpringSettings resultValue = selfCpp->mSuspensionSpring;
  SpringSettings* result = new SpringSettings(resultValue);
  return reinterpret_cast<JoltC_SpringSettings_t *>(result);
};

void JoltC_WheelSettingsWV_mSuspensionSpring_Set(
  JoltC_WheelSettingsWV_t * self,
  JoltC_SpringSettings_t * mSuspensionSpring
) {
  WheelSettingsWV * selfCpp = static_cast<WheelSettingsWV *>(self->obj);
  selfCpp->mSuspensionSpring = *reinterpret_cast<SpringSettings *>(mSuspensionSpring->obj);
};

float JoltC_WheelSettingsWV_mSuspensionMinLength_Get(
  JoltC_WheelSettingsWV_t * self
) {
  WheelSettingsWV * selfCpp = static_cast<WheelSettingsWV *>(self->obj);
  float result = selfCpp->mSuspensionMinLength;
  return result;
};

void JoltC_WheelSettingsWV_mSuspensionMinLength_Set(
  JoltC_WheelSettingsWV_t * self,
  float mSuspensionMinLength
) {
  WheelSettingsWV * selfCpp = static_cast<WheelSettingsWV *>(self->obj);
  selfCpp->mSuspensionMinLength = mSuspensionMinLength;
};

float JoltC_WheelSettingsWV_mSuspensionMaxLength_Get(
  JoltC_WheelSettingsWV_t * self
) {
  WheelSettingsWV * selfCpp = static_cast<WheelSettingsWV *>(self->obj);
  float result = selfCpp->mSuspensionMaxLength;
  return result;
};

void JoltC_WheelSettingsWV_mSuspensionMaxLength_Set(
  JoltC_WheelSettingsWV_t * self,
  float mSuspensionMaxLength
) {
  WheelSettingsWV * selfCpp = static_cast<WheelSettingsWV *>(self->obj);
  selfCpp->mSuspensionMaxLength = mSuspensionMaxLength;
};

float JoltC_WheelSettingsWV_mSuspensionPreloadLength_Get(
  JoltC_WheelSettingsWV_t * self
) {
  WheelSettingsWV * selfCpp = static_cast<WheelSettingsWV *>(self->obj);
  float result = selfCpp->mSuspensionPreloadLength;
  return result;
};

void JoltC_WheelSettingsWV_mSuspensionPreloadLength_Set(
  JoltC_WheelSettingsWV_t * self,
  float mSuspensionPreloadLength
) {
  WheelSettingsWV * selfCpp = static_cast<WheelSettingsWV *>(self->obj);
  selfCpp->mSuspensionPreloadLength = mSuspensionPreloadLength;
};

float JoltC_WheelSettingsWV_mRadius_Get(
  JoltC_WheelSettingsWV_t * self
) {
  WheelSettingsWV * selfCpp = static_cast<WheelSettingsWV *>(self->obj);
  float result = selfCpp->mRadius;
  return result;
};

void JoltC_WheelSettingsWV_mRadius_Set(
  JoltC_WheelSettingsWV_t * self,
  float mRadius
) {
  WheelSettingsWV * selfCpp = static_cast<WheelSettingsWV *>(self->obj);
  selfCpp->mRadius = mRadius;
};

float JoltC_WheelSettingsWV_mWidth_Get(
  JoltC_WheelSettingsWV_t * self
) {
  WheelSettingsWV * selfCpp = static_cast<WheelSettingsWV *>(self->obj);
  float result = selfCpp->mWidth;
  return result;
};

void JoltC_WheelSettingsWV_mWidth_Set(
  JoltC_WheelSettingsWV_t * self,
  float mWidth
) {
  WheelSettingsWV * selfCpp = static_cast<WheelSettingsWV *>(self->obj);
  selfCpp->mWidth = mWidth;
};

bool JoltC_WheelSettingsWV_mEnableSuspensionForcePoint_Get(
  JoltC_WheelSettingsWV_t * self
) {
  WheelSettingsWV * selfCpp = static_cast<WheelSettingsWV *>(self->obj);
  bool result = selfCpp->mEnableSuspensionForcePoint;
  return result;
};

void JoltC_WheelSettingsWV_mEnableSuspensionForcePoint_Set(
  JoltC_WheelSettingsWV_t * self,
  bool mEnableSuspensionForcePoint
) {
  WheelSettingsWV * selfCpp = static_cast<WheelSettingsWV *>(self->obj);
  selfCpp->mEnableSuspensionForcePoint = mEnableSuspensionForcePoint;
};

//endregion

#ifdef __cplusplus
}
#endif

