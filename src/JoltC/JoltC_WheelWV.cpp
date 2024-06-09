#include "JoltC/JoltC_WheelWV.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

/**
  Construct a new `WheelWV` instance.
 */
JoltC_WheelWV_t * JoltC_WheelWV_new(
  JoltC_WheelSettingsWV_t * inWheel
) {
  const WheelSettingsWV * inWheelCpp = static_cast<const WheelSettingsWV *>(inWheel->obj);
  JoltC_WheelWV_t * cInstance = new JoltC_WheelWV_t();
  WheelWV * cppInstance = new WheelWV(
    *inWheelCpp
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
  const WheelSettingsWV * resultPtr = selfCpp->GetSettings();
  JoltC_WheelSettingsWV_t * result = new JoltC_WheelSettingsWV_t();
  result->obj = const_cast<void *>(reinterpret_cast<const void *>(resultPtr));
  return result;
}

JoltC_WheelSettings_t * JoltC_WheelWV_GetSettings_1(
  JoltC_WheelWV_t * self
) {
  WheelWV * selfCpp = static_cast<WheelWV *>(self->obj);
  const WheelSettings * resultPtr = selfCpp->GetSettings();
  JoltC_WheelSettings_t * result = new JoltC_WheelSettings_t();
  result->obj = const_cast<void *>(reinterpret_cast<const void *>(resultPtr));
  return result;
}

float JoltC_WheelWV_GetAngularVelocity(
  JoltC_WheelWV_t * self
) {
  WheelWV * selfCpp = static_cast<WheelWV *>(self->obj);
  return selfCpp->GetAngularVelocity();
}

void JoltC_WheelWV_SetAngularVelocity(
  JoltC_WheelWV_t * self,
  float inVel
) {
  WheelWV * selfCpp = static_cast<WheelWV *>(self->obj);
  selfCpp->SetAngularVelocity(
    inVel
  );
}

float JoltC_WheelWV_GetRotationAngle(
  JoltC_WheelWV_t * self
) {
  WheelWV * selfCpp = static_cast<WheelWV *>(self->obj);
  return selfCpp->GetRotationAngle();
}

void JoltC_WheelWV_SetRotationAngle(
  JoltC_WheelWV_t * self,
  float inAngle
) {
  WheelWV * selfCpp = static_cast<WheelWV *>(self->obj);
  selfCpp->SetRotationAngle(
    inAngle
  );
}

float JoltC_WheelWV_GetSteerAngle(
  JoltC_WheelWV_t * self
) {
  WheelWV * selfCpp = static_cast<WheelWV *>(self->obj);
  return selfCpp->GetSteerAngle();
}

void JoltC_WheelWV_SetSteerAngle(
  JoltC_WheelWV_t * self,
  float inAngle
) {
  WheelWV * selfCpp = static_cast<WheelWV *>(self->obj);
  selfCpp->SetSteerAngle(
    inAngle
  );
}

bool JoltC_WheelWV_HasContact(
  JoltC_WheelWV_t * self
) {
  WheelWV * selfCpp = static_cast<WheelWV *>(self->obj);
  return selfCpp->HasContact();
}

JoltC_BodyID_t * JoltC_WheelWV_GetContactBodyID(
  JoltC_WheelWV_t * self
) {
  WheelWV * selfCpp = static_cast<WheelWV *>(self->obj);
  BodyID * resultPtr = new BodyID();
  *resultPtr = selfCpp->GetContactBodyID();
  JoltC_BodyID_t * result = new JoltC_BodyID_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

JoltC_RVec3_t * JoltC_WheelWV_GetContactPosition(
  JoltC_WheelWV_t * self
) {
  WheelWV * selfCpp = static_cast<WheelWV *>(self->obj);
  RVec3 * resultPtr = new RVec3();
  *resultPtr = selfCpp->GetContactPosition();
  JoltC_RVec3_t * result = new JoltC_RVec3_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

JoltC_Vec3_t * JoltC_WheelWV_GetContactPointVelocity(
  JoltC_WheelWV_t * self
) {
  WheelWV * selfCpp = static_cast<WheelWV *>(self->obj);
  Vec3 * resultPtr = new Vec3();
  *resultPtr = selfCpp->GetContactPointVelocity();
  JoltC_Vec3_t * result = new JoltC_Vec3_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

JoltC_Vec3_t * JoltC_WheelWV_GetContactNormal(
  JoltC_WheelWV_t * self
) {
  WheelWV * selfCpp = static_cast<WheelWV *>(self->obj);
  Vec3 * resultPtr = new Vec3();
  *resultPtr = selfCpp->GetContactNormal();
  JoltC_Vec3_t * result = new JoltC_Vec3_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

JoltC_Vec3_t * JoltC_WheelWV_GetContactLongitudinal(
  JoltC_WheelWV_t * self
) {
  WheelWV * selfCpp = static_cast<WheelWV *>(self->obj);
  Vec3 * resultPtr = new Vec3();
  *resultPtr = selfCpp->GetContactLongitudinal();
  JoltC_Vec3_t * result = new JoltC_Vec3_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

JoltC_Vec3_t * JoltC_WheelWV_GetContactLateral(
  JoltC_WheelWV_t * self
) {
  WheelWV * selfCpp = static_cast<WheelWV *>(self->obj);
  Vec3 * resultPtr = new Vec3();
  *resultPtr = selfCpp->GetContactLateral();
  JoltC_Vec3_t * result = new JoltC_Vec3_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

float JoltC_WheelWV_GetSuspensionLength(
  JoltC_WheelWV_t * self
) {
  WheelWV * selfCpp = static_cast<WheelWV *>(self->obj);
  return selfCpp->GetSuspensionLength();
}

bool JoltC_WheelWV_HasHitHardPoint(
  JoltC_WheelWV_t * self
) {
  WheelWV * selfCpp = static_cast<WheelWV *>(self->obj);
  return selfCpp->HasHitHardPoint();
}

float JoltC_WheelWV_GetSuspensionLambda(
  JoltC_WheelWV_t * self
) {
  WheelWV * selfCpp = static_cast<WheelWV *>(self->obj);
  return selfCpp->GetSuspensionLambda();
}

float JoltC_WheelWV_GetLongitudinalLambda(
  JoltC_WheelWV_t * self
) {
  WheelWV * selfCpp = static_cast<WheelWV *>(self->obj);
  return selfCpp->GetLongitudinalLambda();
}

float JoltC_WheelWV_GetLateralLambda(
  JoltC_WheelWV_t * self
) {
  WheelWV * selfCpp = static_cast<WheelWV *>(self->obj);
  return selfCpp->GetLateralLambda();
}

//endregion

//region properties

float JoltC_WheelWV_mLongitudinalSlip_Get(
  JoltC_WheelWV_t * self
) {
  WheelWV * selfCpp = static_cast<WheelWV *>(self->obj);
  return selfCpp->mLongitudinalSlip;
}

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
  return selfCpp->mLateralSlip;
}

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
  return selfCpp->mCombinedLongitudinalFriction;
}

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
  return selfCpp->mCombinedLateralFriction;
}

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
  return selfCpp->mBrakeImpulse;
}

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

