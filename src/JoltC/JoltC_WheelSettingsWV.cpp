#include "JoltC/JoltC_WheelSettingsWV.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

/**
  Construct a new `WheelSettingsWV` instance.
 */
JoltC_WheelSettingsWV_t * JoltC_WheelSettingsWV_new() {
  JoltC_WheelSettingsWV_t * cInstance = new JoltC_WheelSettingsWV_t();
  WheelSettingsWV * cppInstance = new WheelSettingsWV();
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion

//region destructor

void JoltC_WheelSettingsWV_destroy(
  JoltC_WheelSettingsWV_t * self
){
  if (self == NULL) return;
  delete static_cast<WheelSettingsWV *>(self->obj);
  free(self);
}

//endregion
//region functions

unsigned long JoltC_WheelSettingsWV_GetRefCount(
  JoltC_WheelSettingsWV_t * self
) {
  WheelSettingsWV * selfCpp = static_cast<WheelSettingsWV *>(self->obj);
  return selfCpp->GetRefCount();
}

void JoltC_WheelSettingsWV_AddRef(
  JoltC_WheelSettingsWV_t * self
) {
  WheelSettingsWV * selfCpp = static_cast<WheelSettingsWV *>(self->obj);
  selfCpp->AddRef();
}

void JoltC_WheelSettingsWV_Release(
  JoltC_WheelSettingsWV_t * self
) {
  WheelSettingsWV * selfCpp = static_cast<WheelSettingsWV *>(self->obj);
  selfCpp->Release();
}

//endregion

//region properties

float JoltC_WheelSettingsWV_mInertia_Get(
  JoltC_WheelSettingsWV_t * self
) {
  WheelSettingsWV * selfCpp = static_cast<WheelSettingsWV *>(self->obj);
  return selfCpp->mInertia;
}

void JoltC_WheelSettingsWV_mInertia_Set(
  JoltC_WheelSettingsWV_t * self,
  float mInertia
) {
  WheelSettingsWV * selfCpp = static_cast<WheelSettingsWV *>(self->obj);
  selfCpp->mInertia = mInertia;
}

float JoltC_WheelSettingsWV_mAngularDamping_Get(
  JoltC_WheelSettingsWV_t * self
) {
  WheelSettingsWV * selfCpp = static_cast<WheelSettingsWV *>(self->obj);
  return selfCpp->mAngularDamping;
}

void JoltC_WheelSettingsWV_mAngularDamping_Set(
  JoltC_WheelSettingsWV_t * self,
  float mAngularDamping
) {
  WheelSettingsWV * selfCpp = static_cast<WheelSettingsWV *>(self->obj);
  selfCpp->mAngularDamping = mAngularDamping;
}

float JoltC_WheelSettingsWV_mMaxSteerAngle_Get(
  JoltC_WheelSettingsWV_t * self
) {
  WheelSettingsWV * selfCpp = static_cast<WheelSettingsWV *>(self->obj);
  return selfCpp->mMaxSteerAngle;
}

void JoltC_WheelSettingsWV_mMaxSteerAngle_Set(
  JoltC_WheelSettingsWV_t * self,
  float mMaxSteerAngle
) {
  WheelSettingsWV * selfCpp = static_cast<WheelSettingsWV *>(self->obj);
  selfCpp->mMaxSteerAngle = mMaxSteerAngle;
}

JoltC_LinearCurve_t * JoltC_WheelSettingsWV_mLongitudinalFriction_Get(
  JoltC_WheelSettingsWV_t * self
) {
  WheelSettingsWV * selfCpp = static_cast<WheelSettingsWV *>(self->obj);
  LinearCurve * resultPtr = new LinearCurve();
  *resultPtr = selfCpp->mLongitudinalFriction;
  JoltC_LinearCurve_t * result = new JoltC_LinearCurve_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

void JoltC_WheelSettingsWV_mLongitudinalFriction_Set(
  JoltC_WheelSettingsWV_t * self,
  JoltC_LinearCurve_t * mLongitudinalFriction
) {
  WheelSettingsWV * selfCpp = static_cast<WheelSettingsWV *>(self->obj);
  selfCpp->mLongitudinalFriction = *static_cast<LinearCurve *>(mLongitudinalFriction->obj);
}

JoltC_LinearCurve_t * JoltC_WheelSettingsWV_mLateralFriction_Get(
  JoltC_WheelSettingsWV_t * self
) {
  WheelSettingsWV * selfCpp = static_cast<WheelSettingsWV *>(self->obj);
  LinearCurve * resultPtr = new LinearCurve();
  *resultPtr = selfCpp->mLateralFriction;
  JoltC_LinearCurve_t * result = new JoltC_LinearCurve_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

void JoltC_WheelSettingsWV_mLateralFriction_Set(
  JoltC_WheelSettingsWV_t * self,
  JoltC_LinearCurve_t * mLateralFriction
) {
  WheelSettingsWV * selfCpp = static_cast<WheelSettingsWV *>(self->obj);
  selfCpp->mLateralFriction = *static_cast<LinearCurve *>(mLateralFriction->obj);
}

float JoltC_WheelSettingsWV_mMaxBrakeTorque_Get(
  JoltC_WheelSettingsWV_t * self
) {
  WheelSettingsWV * selfCpp = static_cast<WheelSettingsWV *>(self->obj);
  return selfCpp->mMaxBrakeTorque;
}

void JoltC_WheelSettingsWV_mMaxBrakeTorque_Set(
  JoltC_WheelSettingsWV_t * self,
  float mMaxBrakeTorque
) {
  WheelSettingsWV * selfCpp = static_cast<WheelSettingsWV *>(self->obj);
  selfCpp->mMaxBrakeTorque = mMaxBrakeTorque;
}

float JoltC_WheelSettingsWV_mMaxHandBrakeTorque_Get(
  JoltC_WheelSettingsWV_t * self
) {
  WheelSettingsWV * selfCpp = static_cast<WheelSettingsWV *>(self->obj);
  return selfCpp->mMaxHandBrakeTorque;
}

void JoltC_WheelSettingsWV_mMaxHandBrakeTorque_Set(
  JoltC_WheelSettingsWV_t * self,
  float mMaxHandBrakeTorque
) {
  WheelSettingsWV * selfCpp = static_cast<WheelSettingsWV *>(self->obj);
  selfCpp->mMaxHandBrakeTorque = mMaxHandBrakeTorque;
}

JoltC_Vec3_t * JoltC_WheelSettingsWV_mPosition_Get(
  JoltC_WheelSettingsWV_t * self
) {
  WheelSettingsWV * selfCpp = static_cast<WheelSettingsWV *>(self->obj);
  Vec3 * resultPtr = new Vec3();
  *resultPtr = selfCpp->mPosition;
  JoltC_Vec3_t * result = new JoltC_Vec3_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

void JoltC_WheelSettingsWV_mPosition_Set(
  JoltC_WheelSettingsWV_t * self,
  JoltC_Vec3_t * mPosition
) {
  WheelSettingsWV * selfCpp = static_cast<WheelSettingsWV *>(self->obj);
  selfCpp->mPosition = *static_cast<Vec3 *>(mPosition->obj);
}

JoltC_Vec3_t * JoltC_WheelSettingsWV_mSuspensionForcePoint_Get(
  JoltC_WheelSettingsWV_t * self
) {
  WheelSettingsWV * selfCpp = static_cast<WheelSettingsWV *>(self->obj);
  Vec3 * resultPtr = new Vec3();
  *resultPtr = selfCpp->mSuspensionForcePoint;
  JoltC_Vec3_t * result = new JoltC_Vec3_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

void JoltC_WheelSettingsWV_mSuspensionForcePoint_Set(
  JoltC_WheelSettingsWV_t * self,
  JoltC_Vec3_t * mSuspensionForcePoint
) {
  WheelSettingsWV * selfCpp = static_cast<WheelSettingsWV *>(self->obj);
  selfCpp->mSuspensionForcePoint = *static_cast<Vec3 *>(mSuspensionForcePoint->obj);
}

JoltC_Vec3_t * JoltC_WheelSettingsWV_mSuspensionDirection_Get(
  JoltC_WheelSettingsWV_t * self
) {
  WheelSettingsWV * selfCpp = static_cast<WheelSettingsWV *>(self->obj);
  Vec3 * resultPtr = new Vec3();
  *resultPtr = selfCpp->mSuspensionDirection;
  JoltC_Vec3_t * result = new JoltC_Vec3_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

void JoltC_WheelSettingsWV_mSuspensionDirection_Set(
  JoltC_WheelSettingsWV_t * self,
  JoltC_Vec3_t * mSuspensionDirection
) {
  WheelSettingsWV * selfCpp = static_cast<WheelSettingsWV *>(self->obj);
  selfCpp->mSuspensionDirection = *static_cast<Vec3 *>(mSuspensionDirection->obj);
}

JoltC_Vec3_t * JoltC_WheelSettingsWV_mSteeringAxis_Get(
  JoltC_WheelSettingsWV_t * self
) {
  WheelSettingsWV * selfCpp = static_cast<WheelSettingsWV *>(self->obj);
  Vec3 * resultPtr = new Vec3();
  *resultPtr = selfCpp->mSteeringAxis;
  JoltC_Vec3_t * result = new JoltC_Vec3_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

void JoltC_WheelSettingsWV_mSteeringAxis_Set(
  JoltC_WheelSettingsWV_t * self,
  JoltC_Vec3_t * mSteeringAxis
) {
  WheelSettingsWV * selfCpp = static_cast<WheelSettingsWV *>(self->obj);
  selfCpp->mSteeringAxis = *static_cast<Vec3 *>(mSteeringAxis->obj);
}

JoltC_Vec3_t * JoltC_WheelSettingsWV_mWheelUp_Get(
  JoltC_WheelSettingsWV_t * self
) {
  WheelSettingsWV * selfCpp = static_cast<WheelSettingsWV *>(self->obj);
  Vec3 * resultPtr = new Vec3();
  *resultPtr = selfCpp->mWheelUp;
  JoltC_Vec3_t * result = new JoltC_Vec3_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

void JoltC_WheelSettingsWV_mWheelUp_Set(
  JoltC_WheelSettingsWV_t * self,
  JoltC_Vec3_t * mWheelUp
) {
  WheelSettingsWV * selfCpp = static_cast<WheelSettingsWV *>(self->obj);
  selfCpp->mWheelUp = *static_cast<Vec3 *>(mWheelUp->obj);
}

JoltC_Vec3_t * JoltC_WheelSettingsWV_mWheelForward_Get(
  JoltC_WheelSettingsWV_t * self
) {
  WheelSettingsWV * selfCpp = static_cast<WheelSettingsWV *>(self->obj);
  Vec3 * resultPtr = new Vec3();
  *resultPtr = selfCpp->mWheelForward;
  JoltC_Vec3_t * result = new JoltC_Vec3_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

void JoltC_WheelSettingsWV_mWheelForward_Set(
  JoltC_WheelSettingsWV_t * self,
  JoltC_Vec3_t * mWheelForward
) {
  WheelSettingsWV * selfCpp = static_cast<WheelSettingsWV *>(self->obj);
  selfCpp->mWheelForward = *static_cast<Vec3 *>(mWheelForward->obj);
}

JoltC_SpringSettings_t * JoltC_WheelSettingsWV_mSuspensionSpring_Get(
  JoltC_WheelSettingsWV_t * self
) {
  WheelSettingsWV * selfCpp = static_cast<WheelSettingsWV *>(self->obj);
  SpringSettings * resultPtr = new SpringSettings();
  *resultPtr = selfCpp->mSuspensionSpring;
  JoltC_SpringSettings_t * result = new JoltC_SpringSettings_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

void JoltC_WheelSettingsWV_mSuspensionSpring_Set(
  JoltC_WheelSettingsWV_t * self,
  JoltC_SpringSettings_t * mSuspensionSpring
) {
  WheelSettingsWV * selfCpp = static_cast<WheelSettingsWV *>(self->obj);
  selfCpp->mSuspensionSpring = *static_cast<SpringSettings *>(mSuspensionSpring->obj);
}

float JoltC_WheelSettingsWV_mSuspensionMinLength_Get(
  JoltC_WheelSettingsWV_t * self
) {
  WheelSettingsWV * selfCpp = static_cast<WheelSettingsWV *>(self->obj);
  return selfCpp->mSuspensionMinLength;
}

void JoltC_WheelSettingsWV_mSuspensionMinLength_Set(
  JoltC_WheelSettingsWV_t * self,
  float mSuspensionMinLength
) {
  WheelSettingsWV * selfCpp = static_cast<WheelSettingsWV *>(self->obj);
  selfCpp->mSuspensionMinLength = mSuspensionMinLength;
}

float JoltC_WheelSettingsWV_mSuspensionMaxLength_Get(
  JoltC_WheelSettingsWV_t * self
) {
  WheelSettingsWV * selfCpp = static_cast<WheelSettingsWV *>(self->obj);
  return selfCpp->mSuspensionMaxLength;
}

void JoltC_WheelSettingsWV_mSuspensionMaxLength_Set(
  JoltC_WheelSettingsWV_t * self,
  float mSuspensionMaxLength
) {
  WheelSettingsWV * selfCpp = static_cast<WheelSettingsWV *>(self->obj);
  selfCpp->mSuspensionMaxLength = mSuspensionMaxLength;
}

float JoltC_WheelSettingsWV_mSuspensionPreloadLength_Get(
  JoltC_WheelSettingsWV_t * self
) {
  WheelSettingsWV * selfCpp = static_cast<WheelSettingsWV *>(self->obj);
  return selfCpp->mSuspensionPreloadLength;
}

void JoltC_WheelSettingsWV_mSuspensionPreloadLength_Set(
  JoltC_WheelSettingsWV_t * self,
  float mSuspensionPreloadLength
) {
  WheelSettingsWV * selfCpp = static_cast<WheelSettingsWV *>(self->obj);
  selfCpp->mSuspensionPreloadLength = mSuspensionPreloadLength;
}

float JoltC_WheelSettingsWV_mRadius_Get(
  JoltC_WheelSettingsWV_t * self
) {
  WheelSettingsWV * selfCpp = static_cast<WheelSettingsWV *>(self->obj);
  return selfCpp->mRadius;
}

void JoltC_WheelSettingsWV_mRadius_Set(
  JoltC_WheelSettingsWV_t * self,
  float mRadius
) {
  WheelSettingsWV * selfCpp = static_cast<WheelSettingsWV *>(self->obj);
  selfCpp->mRadius = mRadius;
}

float JoltC_WheelSettingsWV_mWidth_Get(
  JoltC_WheelSettingsWV_t * self
) {
  WheelSettingsWV * selfCpp = static_cast<WheelSettingsWV *>(self->obj);
  return selfCpp->mWidth;
}

void JoltC_WheelSettingsWV_mWidth_Set(
  JoltC_WheelSettingsWV_t * self,
  float mWidth
) {
  WheelSettingsWV * selfCpp = static_cast<WheelSettingsWV *>(self->obj);
  selfCpp->mWidth = mWidth;
}

bool JoltC_WheelSettingsWV_mEnableSuspensionForcePoint_Get(
  JoltC_WheelSettingsWV_t * self
) {
  WheelSettingsWV * selfCpp = static_cast<WheelSettingsWV *>(self->obj);
  return selfCpp->mEnableSuspensionForcePoint;
}

void JoltC_WheelSettingsWV_mEnableSuspensionForcePoint_Set(
  JoltC_WheelSettingsWV_t * self,
  bool mEnableSuspensionForcePoint
) {
  WheelSettingsWV * selfCpp = static_cast<WheelSettingsWV *>(self->obj);
  selfCpp->mEnableSuspensionForcePoint = mEnableSuspensionForcePoint;
}

//endregion


#ifdef __cplusplus
}
#endif
