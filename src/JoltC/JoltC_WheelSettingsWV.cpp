#include "JoltC/JPC_WheelSettingsWV.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JPC_WheelSettingsWV_t * JPC_WheelSettingsWV_new() {
  JPC_WheelSettingsWV_t * cInstance = new JPC_WheelSettingsWV_t();
  WheelSettingsWV * cppInstance = new WheelSettingsWV();
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion constructors

//region functions

unsigned long JPC_WheelSettingsWV_GetRefCount(
  JPC_WheelSettingsWV_t * self
) {
  WheelSettingsWV * selfCpp = static_cast<WheelSettingsWV *>(self->obj);
  unsigned long result = selfCpp->GetRefCount();
  return result;
};

void JPC_WheelSettingsWV_AddRef(
  JPC_WheelSettingsWV_t * self
) {
  WheelSettingsWV * selfCpp = static_cast<WheelSettingsWV *>(self->obj);
  
  selfCpp->AddRef();
};

void JPC_WheelSettingsWV_Release(
  JPC_WheelSettingsWV_t * self
) {
  WheelSettingsWV * selfCpp = static_cast<WheelSettingsWV *>(self->obj);
  
  selfCpp->Release();
};

//endregion functions

//region properties

float JPC_WheelSettingsWV_mInertia_Get(
  JPC_WheelSettingsWV_t * self
) {
  WheelSettingsWV * selfCpp = static_cast<WheelSettingsWV *>(self->obj);
  float result = selfCpp->mInertia;
  return result;
};

void JPC_WheelSettingsWV_mInertia_Set(
  JPC_WheelSettingsWV_t * self,
  float mInertia
) {
  WheelSettingsWV * selfCpp = static_cast<WheelSettingsWV *>(self->obj);
  selfCpp->mInertia = mInertia;
};

float JPC_WheelSettingsWV_mAngularDamping_Get(
  JPC_WheelSettingsWV_t * self
) {
  WheelSettingsWV * selfCpp = static_cast<WheelSettingsWV *>(self->obj);
  float result = selfCpp->mAngularDamping;
  return result;
};

void JPC_WheelSettingsWV_mAngularDamping_Set(
  JPC_WheelSettingsWV_t * self,
  float mAngularDamping
) {
  WheelSettingsWV * selfCpp = static_cast<WheelSettingsWV *>(self->obj);
  selfCpp->mAngularDamping = mAngularDamping;
};

float JPC_WheelSettingsWV_mMaxSteerAngle_Get(
  JPC_WheelSettingsWV_t * self
) {
  WheelSettingsWV * selfCpp = static_cast<WheelSettingsWV *>(self->obj);
  float result = selfCpp->mMaxSteerAngle;
  return result;
};

void JPC_WheelSettingsWV_mMaxSteerAngle_Set(
  JPC_WheelSettingsWV_t * self,
  float mMaxSteerAngle
) {
  WheelSettingsWV * selfCpp = static_cast<WheelSettingsWV *>(self->obj);
  selfCpp->mMaxSteerAngle = mMaxSteerAngle;
};

JPC_LinearCurve_t * JPC_WheelSettingsWV_mLongitudinalFriction_Get(
  JPC_WheelSettingsWV_t * self
) {
  WheelSettingsWV * selfCpp = static_cast<WheelSettingsWV *>(self->obj);
  LinearCurve resultValue = selfCpp->mLongitudinalFriction;
  LinearCurve* result = new LinearCurve(resultValue);
  return reinterpret_cast<JPC_LinearCurve_t *>(result);
};

void JPC_WheelSettingsWV_mLongitudinalFriction_Set(
  JPC_WheelSettingsWV_t * self,
  JPC_LinearCurve_t * mLongitudinalFriction
) {
  WheelSettingsWV * selfCpp = static_cast<WheelSettingsWV *>(self->obj);
  selfCpp->mLongitudinalFriction = *reinterpret_cast<LinearCurve *>(mLongitudinalFriction->obj);
};

JPC_LinearCurve_t * JPC_WheelSettingsWV_mLateralFriction_Get(
  JPC_WheelSettingsWV_t * self
) {
  WheelSettingsWV * selfCpp = static_cast<WheelSettingsWV *>(self->obj);
  LinearCurve resultValue = selfCpp->mLateralFriction;
  LinearCurve* result = new LinearCurve(resultValue);
  return reinterpret_cast<JPC_LinearCurve_t *>(result);
};

void JPC_WheelSettingsWV_mLateralFriction_Set(
  JPC_WheelSettingsWV_t * self,
  JPC_LinearCurve_t * mLateralFriction
) {
  WheelSettingsWV * selfCpp = static_cast<WheelSettingsWV *>(self->obj);
  selfCpp->mLateralFriction = *reinterpret_cast<LinearCurve *>(mLateralFriction->obj);
};

float JPC_WheelSettingsWV_mMaxBrakeTorque_Get(
  JPC_WheelSettingsWV_t * self
) {
  WheelSettingsWV * selfCpp = static_cast<WheelSettingsWV *>(self->obj);
  float result = selfCpp->mMaxBrakeTorque;
  return result;
};

void JPC_WheelSettingsWV_mMaxBrakeTorque_Set(
  JPC_WheelSettingsWV_t * self,
  float mMaxBrakeTorque
) {
  WheelSettingsWV * selfCpp = static_cast<WheelSettingsWV *>(self->obj);
  selfCpp->mMaxBrakeTorque = mMaxBrakeTorque;
};

float JPC_WheelSettingsWV_mMaxHandBrakeTorque_Get(
  JPC_WheelSettingsWV_t * self
) {
  WheelSettingsWV * selfCpp = static_cast<WheelSettingsWV *>(self->obj);
  float result = selfCpp->mMaxHandBrakeTorque;
  return result;
};

void JPC_WheelSettingsWV_mMaxHandBrakeTorque_Set(
  JPC_WheelSettingsWV_t * self,
  float mMaxHandBrakeTorque
) {
  WheelSettingsWV * selfCpp = static_cast<WheelSettingsWV *>(self->obj);
  selfCpp->mMaxHandBrakeTorque = mMaxHandBrakeTorque;
};

JPC_Vec3_t * JPC_WheelSettingsWV_mPosition_Get(
  JPC_WheelSettingsWV_t * self
) {
  WheelSettingsWV * selfCpp = static_cast<WheelSettingsWV *>(self->obj);
  Vec3 resultValue = selfCpp->mPosition;
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JPC_Vec3_t *>(result);
};

void JPC_WheelSettingsWV_mPosition_Set(
  JPC_WheelSettingsWV_t * self,
  JPC_Vec3_t * mPosition
) {
  WheelSettingsWV * selfCpp = static_cast<WheelSettingsWV *>(self->obj);
  selfCpp->mPosition = *reinterpret_cast<Vec3 *>(mPosition->obj);
};

JPC_Vec3_t * JPC_WheelSettingsWV_mSuspensionForcePoint_Get(
  JPC_WheelSettingsWV_t * self
) {
  WheelSettingsWV * selfCpp = static_cast<WheelSettingsWV *>(self->obj);
  Vec3 resultValue = selfCpp->mSuspensionForcePoint;
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JPC_Vec3_t *>(result);
};

void JPC_WheelSettingsWV_mSuspensionForcePoint_Set(
  JPC_WheelSettingsWV_t * self,
  JPC_Vec3_t * mSuspensionForcePoint
) {
  WheelSettingsWV * selfCpp = static_cast<WheelSettingsWV *>(self->obj);
  selfCpp->mSuspensionForcePoint = *reinterpret_cast<Vec3 *>(mSuspensionForcePoint->obj);
};

JPC_Vec3_t * JPC_WheelSettingsWV_mSuspensionDirection_Get(
  JPC_WheelSettingsWV_t * self
) {
  WheelSettingsWV * selfCpp = static_cast<WheelSettingsWV *>(self->obj);
  Vec3 resultValue = selfCpp->mSuspensionDirection;
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JPC_Vec3_t *>(result);
};

void JPC_WheelSettingsWV_mSuspensionDirection_Set(
  JPC_WheelSettingsWV_t * self,
  JPC_Vec3_t * mSuspensionDirection
) {
  WheelSettingsWV * selfCpp = static_cast<WheelSettingsWV *>(self->obj);
  selfCpp->mSuspensionDirection = *reinterpret_cast<Vec3 *>(mSuspensionDirection->obj);
};

JPC_Vec3_t * JPC_WheelSettingsWV_mSteeringAxis_Get(
  JPC_WheelSettingsWV_t * self
) {
  WheelSettingsWV * selfCpp = static_cast<WheelSettingsWV *>(self->obj);
  Vec3 resultValue = selfCpp->mSteeringAxis;
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JPC_Vec3_t *>(result);
};

void JPC_WheelSettingsWV_mSteeringAxis_Set(
  JPC_WheelSettingsWV_t * self,
  JPC_Vec3_t * mSteeringAxis
) {
  WheelSettingsWV * selfCpp = static_cast<WheelSettingsWV *>(self->obj);
  selfCpp->mSteeringAxis = *reinterpret_cast<Vec3 *>(mSteeringAxis->obj);
};

JPC_Vec3_t * JPC_WheelSettingsWV_mWheelUp_Get(
  JPC_WheelSettingsWV_t * self
) {
  WheelSettingsWV * selfCpp = static_cast<WheelSettingsWV *>(self->obj);
  Vec3 resultValue = selfCpp->mWheelUp;
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JPC_Vec3_t *>(result);
};

void JPC_WheelSettingsWV_mWheelUp_Set(
  JPC_WheelSettingsWV_t * self,
  JPC_Vec3_t * mWheelUp
) {
  WheelSettingsWV * selfCpp = static_cast<WheelSettingsWV *>(self->obj);
  selfCpp->mWheelUp = *reinterpret_cast<Vec3 *>(mWheelUp->obj);
};

JPC_Vec3_t * JPC_WheelSettingsWV_mWheelForward_Get(
  JPC_WheelSettingsWV_t * self
) {
  WheelSettingsWV * selfCpp = static_cast<WheelSettingsWV *>(self->obj);
  Vec3 resultValue = selfCpp->mWheelForward;
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JPC_Vec3_t *>(result);
};

void JPC_WheelSettingsWV_mWheelForward_Set(
  JPC_WheelSettingsWV_t * self,
  JPC_Vec3_t * mWheelForward
) {
  WheelSettingsWV * selfCpp = static_cast<WheelSettingsWV *>(self->obj);
  selfCpp->mWheelForward = *reinterpret_cast<Vec3 *>(mWheelForward->obj);
};

JPC_SpringSettings_t * JPC_WheelSettingsWV_mSuspensionSpring_Get(
  JPC_WheelSettingsWV_t * self
) {
  WheelSettingsWV * selfCpp = static_cast<WheelSettingsWV *>(self->obj);
  SpringSettings resultValue = selfCpp->mSuspensionSpring;
  SpringSettings* result = new SpringSettings(resultValue);
  return reinterpret_cast<JPC_SpringSettings_t *>(result);
};

void JPC_WheelSettingsWV_mSuspensionSpring_Set(
  JPC_WheelSettingsWV_t * self,
  JPC_SpringSettings_t * mSuspensionSpring
) {
  WheelSettingsWV * selfCpp = static_cast<WheelSettingsWV *>(self->obj);
  selfCpp->mSuspensionSpring = *reinterpret_cast<SpringSettings *>(mSuspensionSpring->obj);
};

float JPC_WheelSettingsWV_mSuspensionMinLength_Get(
  JPC_WheelSettingsWV_t * self
) {
  WheelSettingsWV * selfCpp = static_cast<WheelSettingsWV *>(self->obj);
  float result = selfCpp->mSuspensionMinLength;
  return result;
};

void JPC_WheelSettingsWV_mSuspensionMinLength_Set(
  JPC_WheelSettingsWV_t * self,
  float mSuspensionMinLength
) {
  WheelSettingsWV * selfCpp = static_cast<WheelSettingsWV *>(self->obj);
  selfCpp->mSuspensionMinLength = mSuspensionMinLength;
};

float JPC_WheelSettingsWV_mSuspensionMaxLength_Get(
  JPC_WheelSettingsWV_t * self
) {
  WheelSettingsWV * selfCpp = static_cast<WheelSettingsWV *>(self->obj);
  float result = selfCpp->mSuspensionMaxLength;
  return result;
};

void JPC_WheelSettingsWV_mSuspensionMaxLength_Set(
  JPC_WheelSettingsWV_t * self,
  float mSuspensionMaxLength
) {
  WheelSettingsWV * selfCpp = static_cast<WheelSettingsWV *>(self->obj);
  selfCpp->mSuspensionMaxLength = mSuspensionMaxLength;
};

float JPC_WheelSettingsWV_mSuspensionPreloadLength_Get(
  JPC_WheelSettingsWV_t * self
) {
  WheelSettingsWV * selfCpp = static_cast<WheelSettingsWV *>(self->obj);
  float result = selfCpp->mSuspensionPreloadLength;
  return result;
};

void JPC_WheelSettingsWV_mSuspensionPreloadLength_Set(
  JPC_WheelSettingsWV_t * self,
  float mSuspensionPreloadLength
) {
  WheelSettingsWV * selfCpp = static_cast<WheelSettingsWV *>(self->obj);
  selfCpp->mSuspensionPreloadLength = mSuspensionPreloadLength;
};

float JPC_WheelSettingsWV_mRadius_Get(
  JPC_WheelSettingsWV_t * self
) {
  WheelSettingsWV * selfCpp = static_cast<WheelSettingsWV *>(self->obj);
  float result = selfCpp->mRadius;
  return result;
};

void JPC_WheelSettingsWV_mRadius_Set(
  JPC_WheelSettingsWV_t * self,
  float mRadius
) {
  WheelSettingsWV * selfCpp = static_cast<WheelSettingsWV *>(self->obj);
  selfCpp->mRadius = mRadius;
};

float JPC_WheelSettingsWV_mWidth_Get(
  JPC_WheelSettingsWV_t * self
) {
  WheelSettingsWV * selfCpp = static_cast<WheelSettingsWV *>(self->obj);
  float result = selfCpp->mWidth;
  return result;
};

void JPC_WheelSettingsWV_mWidth_Set(
  JPC_WheelSettingsWV_t * self,
  float mWidth
) {
  WheelSettingsWV * selfCpp = static_cast<WheelSettingsWV *>(self->obj);
  selfCpp->mWidth = mWidth;
};

bool JPC_WheelSettingsWV_mEnableSuspensionForcePoint_Get(
  JPC_WheelSettingsWV_t * self
) {
  WheelSettingsWV * selfCpp = static_cast<WheelSettingsWV *>(self->obj);
  bool result = selfCpp->mEnableSuspensionForcePoint;
  return result;
};

void JPC_WheelSettingsWV_mEnableSuspensionForcePoint_Set(
  JPC_WheelSettingsWV_t * self,
  bool mEnableSuspensionForcePoint
) {
  WheelSettingsWV * selfCpp = static_cast<WheelSettingsWV *>(self->obj);
  selfCpp->mEnableSuspensionForcePoint = mEnableSuspensionForcePoint;
};

//endregion properties

#ifdef __cplusplus
}
#endif

