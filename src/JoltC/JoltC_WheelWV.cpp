#include "JoltC/JoltC_WheelWV.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_WheelWV_t * JoltC_WheelWV_new(
  JoltC_WheelSettingsWV_t * inWheel
) {
  JoltC_WheelWV_t * cInstance = new JoltC_WheelWV_t();
  WheelWV * cppInstance = new WheelWV(
    *reinterpret_cast<WheelSettingsWV *>(inWheel->obj)
  );
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion

//region functions

JoltC_WheelSettingsWV_t * JoltC_WheelWV_GetSettings_0(
  JoltC_WheelWV_t * self
) {
  WheelWV * selfCpp = static_cast<WheelWV *>(self->obj);
  const WheelSettingsWV * resultValue = selfCpp->GetSettings();
  JoltC_WheelSettingsWV_t* result = new JoltC_WheelSettingsWV_t();
  result->obj = reinterpret_cast<void*>(&resultValue);
  return result;
};

JoltC_WheelSettings_t * JoltC_WheelWV_GetSettings_1(
  JoltC_WheelWV_t * self
) {
  WheelWV * selfCpp = static_cast<WheelWV *>(self->obj);
  const WheelSettings * resultValue = selfCpp->GetSettings();
  JoltC_WheelSettings_t* result = new JoltC_WheelSettings_t();
  result->obj = reinterpret_cast<void*>(&resultValue);
  return result;
};

float JoltC_WheelWV_GetAngularVelocity(
  JoltC_WheelWV_t * self
) {
  WheelWV * selfCpp = static_cast<WheelWV *>(self->obj);
  float result = selfCpp->GetAngularVelocity();
  return result;
};

void JoltC_WheelWV_SetAngularVelocity(
  JoltC_WheelWV_t * self,
  float inVel
) {
  WheelWV * selfCpp = static_cast<WheelWV *>(self->obj);
  
  selfCpp->SetAngularVelocity(
    inVel
  );
};

float JoltC_WheelWV_GetRotationAngle(
  JoltC_WheelWV_t * self
) {
  WheelWV * selfCpp = static_cast<WheelWV *>(self->obj);
  float result = selfCpp->GetRotationAngle();
  return result;
};

void JoltC_WheelWV_SetRotationAngle(
  JoltC_WheelWV_t * self,
  float inAngle
) {
  WheelWV * selfCpp = static_cast<WheelWV *>(self->obj);
  
  selfCpp->SetRotationAngle(
    inAngle
  );
};

float JoltC_WheelWV_GetSteerAngle(
  JoltC_WheelWV_t * self
) {
  WheelWV * selfCpp = static_cast<WheelWV *>(self->obj);
  float result = selfCpp->GetSteerAngle();
  return result;
};

void JoltC_WheelWV_SetSteerAngle(
  JoltC_WheelWV_t * self,
  float inAngle
) {
  WheelWV * selfCpp = static_cast<WheelWV *>(self->obj);
  
  selfCpp->SetSteerAngle(
    inAngle
  );
};

bool JoltC_WheelWV_HasContact(
  JoltC_WheelWV_t * self
) {
  WheelWV * selfCpp = static_cast<WheelWV *>(self->obj);
  bool result = selfCpp->HasContact();
  return result;
};

JoltC_BodyID_t * JoltC_WheelWV_GetContactBodyID(
  JoltC_WheelWV_t * self
) {
  WheelWV * selfCpp = static_cast<WheelWV *>(self->obj);
  static BodyID resultValue = selfCpp->GetContactBodyID();
  JoltC_BodyID_t* result = new JoltC_BodyID_t();
  result->obj = reinterpret_cast<void*>(&resultValue);
  return result;
};

JoltC_RVec3_t * JoltC_WheelWV_GetContactPosition(
  JoltC_WheelWV_t * self
) {
  WheelWV * selfCpp = static_cast<WheelWV *>(self->obj);
  static RVec3 resultValue = selfCpp->GetContactPosition();
  JoltC_RVec3_t* result = new JoltC_RVec3_t();
  result->obj = reinterpret_cast<void*>(&resultValue);
  return result;
};

JoltC_Vec3_t * JoltC_WheelWV_GetContactPointVelocity(
  JoltC_WheelWV_t * self
) {
  WheelWV * selfCpp = static_cast<WheelWV *>(self->obj);
  static Vec3 resultValue = selfCpp->GetContactPointVelocity();
  JoltC_Vec3_t* result = new JoltC_Vec3_t();
  result->obj = reinterpret_cast<void*>(&resultValue);
  return result;
};

JoltC_Vec3_t * JoltC_WheelWV_GetContactNormal(
  JoltC_WheelWV_t * self
) {
  WheelWV * selfCpp = static_cast<WheelWV *>(self->obj);
  static Vec3 resultValue = selfCpp->GetContactNormal();
  JoltC_Vec3_t* result = new JoltC_Vec3_t();
  result->obj = reinterpret_cast<void*>(&resultValue);
  return result;
};

JoltC_Vec3_t * JoltC_WheelWV_GetContactLongitudinal(
  JoltC_WheelWV_t * self
) {
  WheelWV * selfCpp = static_cast<WheelWV *>(self->obj);
  static Vec3 resultValue = selfCpp->GetContactLongitudinal();
  JoltC_Vec3_t* result = new JoltC_Vec3_t();
  result->obj = reinterpret_cast<void*>(&resultValue);
  return result;
};

JoltC_Vec3_t * JoltC_WheelWV_GetContactLateral(
  JoltC_WheelWV_t * self
) {
  WheelWV * selfCpp = static_cast<WheelWV *>(self->obj);
  static Vec3 resultValue = selfCpp->GetContactLateral();
  JoltC_Vec3_t* result = new JoltC_Vec3_t();
  result->obj = reinterpret_cast<void*>(&resultValue);
  return result;
};

float JoltC_WheelWV_GetSuspensionLength(
  JoltC_WheelWV_t * self
) {
  WheelWV * selfCpp = static_cast<WheelWV *>(self->obj);
  float result = selfCpp->GetSuspensionLength();
  return result;
};

bool JoltC_WheelWV_HasHitHardPoint(
  JoltC_WheelWV_t * self
) {
  WheelWV * selfCpp = static_cast<WheelWV *>(self->obj);
  bool result = selfCpp->HasHitHardPoint();
  return result;
};

float JoltC_WheelWV_GetSuspensionLambda(
  JoltC_WheelWV_t * self
) {
  WheelWV * selfCpp = static_cast<WheelWV *>(self->obj);
  float result = selfCpp->GetSuspensionLambda();
  return result;
};

float JoltC_WheelWV_GetLongitudinalLambda(
  JoltC_WheelWV_t * self
) {
  WheelWV * selfCpp = static_cast<WheelWV *>(self->obj);
  float result = selfCpp->GetLongitudinalLambda();
  return result;
};

float JoltC_WheelWV_GetLateralLambda(
  JoltC_WheelWV_t * self
) {
  WheelWV * selfCpp = static_cast<WheelWV *>(self->obj);
  float result = selfCpp->GetLateralLambda();
  return result;
};

//endregion

//region properties

float JoltC_WheelWV_mLongitudinalSlip_Get(
  JoltC_WheelWV_t * self
) {
  WheelWV * selfCpp = static_cast<WheelWV *>(self->obj);
  float result = selfCpp->mLongitudinalSlip;
  return result;
};

void JoltC_WheelWV_mLongitudinalSlip_Set(
  JoltC_WheelWV_t * self,
  float mLongitudinalSlip
) {
  WheelWV * selfCpp = static_cast<WheelWV *>(self->obj);
  selfCpp->mLongitudinalSlip = mLongitudinalSlip;
};

float JoltC_WheelWV_mLateralSlip_Get(
  JoltC_WheelWV_t * self
) {
  WheelWV * selfCpp = static_cast<WheelWV *>(self->obj);
  float result = selfCpp->mLateralSlip;
  return result;
};

void JoltC_WheelWV_mLateralSlip_Set(
  JoltC_WheelWV_t * self,
  float mLateralSlip
) {
  WheelWV * selfCpp = static_cast<WheelWV *>(self->obj);
  selfCpp->mLateralSlip = mLateralSlip;
};

float JoltC_WheelWV_mCombinedLongitudinalFriction_Get(
  JoltC_WheelWV_t * self
) {
  WheelWV * selfCpp = static_cast<WheelWV *>(self->obj);
  float result = selfCpp->mCombinedLongitudinalFriction;
  return result;
};

void JoltC_WheelWV_mCombinedLongitudinalFriction_Set(
  JoltC_WheelWV_t * self,
  float mCombinedLongitudinalFriction
) {
  WheelWV * selfCpp = static_cast<WheelWV *>(self->obj);
  selfCpp->mCombinedLongitudinalFriction = mCombinedLongitudinalFriction;
};

float JoltC_WheelWV_mCombinedLateralFriction_Get(
  JoltC_WheelWV_t * self
) {
  WheelWV * selfCpp = static_cast<WheelWV *>(self->obj);
  float result = selfCpp->mCombinedLateralFriction;
  return result;
};

void JoltC_WheelWV_mCombinedLateralFriction_Set(
  JoltC_WheelWV_t * self,
  float mCombinedLateralFriction
) {
  WheelWV * selfCpp = static_cast<WheelWV *>(self->obj);
  selfCpp->mCombinedLateralFriction = mCombinedLateralFriction;
};

float JoltC_WheelWV_mBrakeImpulse_Get(
  JoltC_WheelWV_t * self
) {
  WheelWV * selfCpp = static_cast<WheelWV *>(self->obj);
  float result = selfCpp->mBrakeImpulse;
  return result;
};

void JoltC_WheelWV_mBrakeImpulse_Set(
  JoltC_WheelWV_t * self,
  float mBrakeImpulse
) {
  WheelWV * selfCpp = static_cast<WheelWV *>(self->obj);
  selfCpp->mBrakeImpulse = mBrakeImpulse;
};

//endregion

#ifdef __cplusplus
}
#endif

