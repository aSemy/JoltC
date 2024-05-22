#include "JoltC/JPC_WheelWV.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JPC_WheelWV_t * JPC_WheelWV_new(
  const JPC_WheelSettingsWV_t * inWheel
) {
  JPC_WheelWV_t * cInstance = new JPC_WheelWV_t();
  WheelWV * cppInstance = new WheelWV(
    *reinterpret_cast<WheelSettingsWV *>(inWheel->obj)
  );
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion constructors

//region functions

const JPC_WheelSettingsWV_t * JPC_WheelWV_GetSettings_0(
  JPC_WheelWV_t * self
) {
  WheelWV * selfCpp = static_cast<WheelWV *>(self->obj);
  const WheelSettingsWV * result = selfCpp->GetSettings();
  return reinterpret_cast<const JPC_WheelSettingsWV_t *>(result);
};

const JPC_WheelSettings_t * JPC_WheelWV_GetSettings_1(
  JPC_WheelWV_t * self
) {
  WheelWV * selfCpp = static_cast<WheelWV *>(self->obj);
  const WheelSettings * result = selfCpp->GetSettings();
  return reinterpret_cast<const JPC_WheelSettings_t *>(result);
};

float JPC_WheelWV_GetAngularVelocity(
  JPC_WheelWV_t * self
) {
  WheelWV * selfCpp = static_cast<WheelWV *>(self->obj);
  float result = selfCpp->GetAngularVelocity();
  return result;
};

void JPC_WheelWV_SetAngularVelocity(
  JPC_WheelWV_t * self,
  float inVel
) {
  WheelWV * selfCpp = static_cast<WheelWV *>(self->obj);
  
  selfCpp->SetAngularVelocity(
  inVel
  );
};

float JPC_WheelWV_GetRotationAngle(
  JPC_WheelWV_t * self
) {
  WheelWV * selfCpp = static_cast<WheelWV *>(self->obj);
  float result = selfCpp->GetRotationAngle();
  return result;
};

void JPC_WheelWV_SetRotationAngle(
  JPC_WheelWV_t * self,
  float inAngle
) {
  WheelWV * selfCpp = static_cast<WheelWV *>(self->obj);
  
  selfCpp->SetRotationAngle(
  inAngle
  );
};

float JPC_WheelWV_GetSteerAngle(
  JPC_WheelWV_t * self
) {
  WheelWV * selfCpp = static_cast<WheelWV *>(self->obj);
  float result = selfCpp->GetSteerAngle();
  return result;
};

void JPC_WheelWV_SetSteerAngle(
  JPC_WheelWV_t * self,
  float inAngle
) {
  WheelWV * selfCpp = static_cast<WheelWV *>(self->obj);
  
  selfCpp->SetSteerAngle(
  inAngle
  );
};

bool JPC_WheelWV_HasContact(
  JPC_WheelWV_t * self
) {
  WheelWV * selfCpp = static_cast<WheelWV *>(self->obj);
  bool result = selfCpp->HasContact();
  return result;
};

JPC_BodyID_t * JPC_WheelWV_GetContactBodyID(
  JPC_WheelWV_t * self
) {
  WheelWV * selfCpp = static_cast<WheelWV *>(self->obj);
  BodyID resultValue = selfCpp->GetContactBodyID();
  BodyID* result = new BodyID(resultValue);
  return reinterpret_cast<JPC_BodyID_t *>(result);
};

JPC_RVec3_t * JPC_WheelWV_GetContactPosition(
  JPC_WheelWV_t * self
) {
  WheelWV * selfCpp = static_cast<WheelWV *>(self->obj);
  RVec3 resultValue = selfCpp->GetContactPosition();
  RVec3* result = new RVec3(resultValue);
  return reinterpret_cast<JPC_RVec3_t *>(result);
};

JPC_Vec3_t * JPC_WheelWV_GetContactPointVelocity(
  JPC_WheelWV_t * self
) {
  WheelWV * selfCpp = static_cast<WheelWV *>(self->obj);
  Vec3 resultValue = selfCpp->GetContactPointVelocity();
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JPC_Vec3_t *>(result);
};

JPC_Vec3_t * JPC_WheelWV_GetContactNormal(
  JPC_WheelWV_t * self
) {
  WheelWV * selfCpp = static_cast<WheelWV *>(self->obj);
  Vec3 resultValue = selfCpp->GetContactNormal();
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JPC_Vec3_t *>(result);
};

JPC_Vec3_t * JPC_WheelWV_GetContactLongitudinal(
  JPC_WheelWV_t * self
) {
  WheelWV * selfCpp = static_cast<WheelWV *>(self->obj);
  Vec3 resultValue = selfCpp->GetContactLongitudinal();
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JPC_Vec3_t *>(result);
};

JPC_Vec3_t * JPC_WheelWV_GetContactLateral(
  JPC_WheelWV_t * self
) {
  WheelWV * selfCpp = static_cast<WheelWV *>(self->obj);
  Vec3 resultValue = selfCpp->GetContactLateral();
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JPC_Vec3_t *>(result);
};

float JPC_WheelWV_GetSuspensionLength(
  JPC_WheelWV_t * self
) {
  WheelWV * selfCpp = static_cast<WheelWV *>(self->obj);
  float result = selfCpp->GetSuspensionLength();
  return result;
};

bool JPC_WheelWV_HasHitHardPoint(
  JPC_WheelWV_t * self
) {
  WheelWV * selfCpp = static_cast<WheelWV *>(self->obj);
  bool result = selfCpp->HasHitHardPoint();
  return result;
};

float JPC_WheelWV_GetSuspensionLambda(
  JPC_WheelWV_t * self
) {
  WheelWV * selfCpp = static_cast<WheelWV *>(self->obj);
  float result = selfCpp->GetSuspensionLambda();
  return result;
};

float JPC_WheelWV_GetLongitudinalLambda(
  JPC_WheelWV_t * self
) {
  WheelWV * selfCpp = static_cast<WheelWV *>(self->obj);
  float result = selfCpp->GetLongitudinalLambda();
  return result;
};

float JPC_WheelWV_GetLateralLambda(
  JPC_WheelWV_t * self
) {
  WheelWV * selfCpp = static_cast<WheelWV *>(self->obj);
  float result = selfCpp->GetLateralLambda();
  return result;
};

//endregion functions

//region properties

float JPC_WheelWV_mLongitudinalSlip_Get(
  JPC_WheelWV_t * self
) {
  WheelWV * selfCpp = static_cast<WheelWV *>(self->obj);
  float result = selfCpp->mLongitudinalSlip;
  return result;
};

void JPC_WheelWV_mLongitudinalSlip_Set(
  JPC_WheelWV_t * self,
  float mLongitudinalSlip
) {
  WheelWV * selfCpp = static_cast<WheelWV *>(self->obj);
  selfCpp->mLongitudinalSlip = mLongitudinalSlip;
};

float JPC_WheelWV_mLateralSlip_Get(
  JPC_WheelWV_t * self
) {
  WheelWV * selfCpp = static_cast<WheelWV *>(self->obj);
  float result = selfCpp->mLateralSlip;
  return result;
};

void JPC_WheelWV_mLateralSlip_Set(
  JPC_WheelWV_t * self,
  float mLateralSlip
) {
  WheelWV * selfCpp = static_cast<WheelWV *>(self->obj);
  selfCpp->mLateralSlip = mLateralSlip;
};

float JPC_WheelWV_mCombinedLongitudinalFriction_Get(
  JPC_WheelWV_t * self
) {
  WheelWV * selfCpp = static_cast<WheelWV *>(self->obj);
  float result = selfCpp->mCombinedLongitudinalFriction;
  return result;
};

void JPC_WheelWV_mCombinedLongitudinalFriction_Set(
  JPC_WheelWV_t * self,
  float mCombinedLongitudinalFriction
) {
  WheelWV * selfCpp = static_cast<WheelWV *>(self->obj);
  selfCpp->mCombinedLongitudinalFriction = mCombinedLongitudinalFriction;
};

float JPC_WheelWV_mCombinedLateralFriction_Get(
  JPC_WheelWV_t * self
) {
  WheelWV * selfCpp = static_cast<WheelWV *>(self->obj);
  float result = selfCpp->mCombinedLateralFriction;
  return result;
};

void JPC_WheelWV_mCombinedLateralFriction_Set(
  JPC_WheelWV_t * self,
  float mCombinedLateralFriction
) {
  WheelWV * selfCpp = static_cast<WheelWV *>(self->obj);
  selfCpp->mCombinedLateralFriction = mCombinedLateralFriction;
};

float JPC_WheelWV_mBrakeImpulse_Get(
  JPC_WheelWV_t * self
) {
  WheelWV * selfCpp = static_cast<WheelWV *>(self->obj);
  float result = selfCpp->mBrakeImpulse;
  return result;
};

void JPC_WheelWV_mBrakeImpulse_Set(
  JPC_WheelWV_t * self,
  float mBrakeImpulse
) {
  WheelWV * selfCpp = static_cast<WheelWV *>(self->obj);
  selfCpp->mBrakeImpulse = mBrakeImpulse;
};

//endregion properties

#ifdef __cplusplus
}
#endif

