#include "JoltC/JoltC_WheelTV.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

/**
  Construct a new `WheelTV` instance.
 */
JoltC_WheelTV_t * JoltC_WheelTV_new(
  JoltC_WheelSettingsTV_t * inWheel
) {
  const WheelSettingsTV * inWheelCpp = static_cast<const WheelSettingsTV *>(inWheel->obj);
  JoltC_WheelTV_t * cInstance = new JoltC_WheelTV_t();
  WheelTV * cppInstance = new WheelTV(
    *inWheelCpp
  );
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion

//region destructor

void JoltC_WheelTV_destroy(
  JoltC_WheelTV_t * self
){
  if (self == NULL) return;
  delete static_cast<WheelTV *>(self->obj);
  free(self);
}

//endregion
//region functions

JoltC_WheelSettingsTV_t * JoltC_WheelTV_GetSettings_0(
  JoltC_WheelTV_t * self
) {
  WheelTV * selfCpp = static_cast<WheelTV *>(self->obj);
  const WheelSettingsTV * resultPtr = selfCpp->GetSettings();
  JoltC_WheelSettingsTV_t * result = new JoltC_WheelSettingsTV_t();
  result->obj = const_cast<void *>(reinterpret_cast<const void *>(resultPtr));
  return result;
}

JoltC_WheelSettings_t * JoltC_WheelTV_GetSettings_1(
  JoltC_WheelTV_t * self
) {
  WheelTV * selfCpp = static_cast<WheelTV *>(self->obj);
  const WheelSettings * resultPtr = selfCpp->GetSettings();
  JoltC_WheelSettings_t * result = new JoltC_WheelSettings_t();
  result->obj = const_cast<void *>(reinterpret_cast<const void *>(resultPtr));
  return result;
}

float JoltC_WheelTV_GetAngularVelocity(
  JoltC_WheelTV_t * self
) {
  WheelTV * selfCpp = static_cast<WheelTV *>(self->obj);
  return selfCpp->GetAngularVelocity();
}

void JoltC_WheelTV_SetAngularVelocity(
  JoltC_WheelTV_t * self,
  float inVel
) {
  WheelTV * selfCpp = static_cast<WheelTV *>(self->obj);
  selfCpp->SetAngularVelocity(
    inVel
  );
}

float JoltC_WheelTV_GetRotationAngle(
  JoltC_WheelTV_t * self
) {
  WheelTV * selfCpp = static_cast<WheelTV *>(self->obj);
  return selfCpp->GetRotationAngle();
}

void JoltC_WheelTV_SetRotationAngle(
  JoltC_WheelTV_t * self,
  float inAngle
) {
  WheelTV * selfCpp = static_cast<WheelTV *>(self->obj);
  selfCpp->SetRotationAngle(
    inAngle
  );
}

float JoltC_WheelTV_GetSteerAngle(
  JoltC_WheelTV_t * self
) {
  WheelTV * selfCpp = static_cast<WheelTV *>(self->obj);
  return selfCpp->GetSteerAngle();
}

void JoltC_WheelTV_SetSteerAngle(
  JoltC_WheelTV_t * self,
  float inAngle
) {
  WheelTV * selfCpp = static_cast<WheelTV *>(self->obj);
  selfCpp->SetSteerAngle(
    inAngle
  );
}

bool JoltC_WheelTV_HasContact(
  JoltC_WheelTV_t * self
) {
  WheelTV * selfCpp = static_cast<WheelTV *>(self->obj);
  return selfCpp->HasContact();
}

JoltC_BodyID_t * JoltC_WheelTV_GetContactBodyID(
  JoltC_WheelTV_t * self
) {
  WheelTV * selfCpp = static_cast<WheelTV *>(self->obj);
  BodyID * resultPtr = new BodyID();
  *resultPtr = selfCpp->GetContactBodyID();
  JoltC_BodyID_t * result = new JoltC_BodyID_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

JoltC_RVec3_t * JoltC_WheelTV_GetContactPosition(
  JoltC_WheelTV_t * self
) {
  WheelTV * selfCpp = static_cast<WheelTV *>(self->obj);
  RVec3 * resultPtr = new RVec3();
  *resultPtr = selfCpp->GetContactPosition();
  JoltC_RVec3_t * result = new JoltC_RVec3_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

JoltC_Vec3_t * JoltC_WheelTV_GetContactPointVelocity(
  JoltC_WheelTV_t * self
) {
  WheelTV * selfCpp = static_cast<WheelTV *>(self->obj);
  Vec3 * resultPtr = new Vec3();
  *resultPtr = selfCpp->GetContactPointVelocity();
  JoltC_Vec3_t * result = new JoltC_Vec3_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

JoltC_Vec3_t * JoltC_WheelTV_GetContactNormal(
  JoltC_WheelTV_t * self
) {
  WheelTV * selfCpp = static_cast<WheelTV *>(self->obj);
  Vec3 * resultPtr = new Vec3();
  *resultPtr = selfCpp->GetContactNormal();
  JoltC_Vec3_t * result = new JoltC_Vec3_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

JoltC_Vec3_t * JoltC_WheelTV_GetContactLongitudinal(
  JoltC_WheelTV_t * self
) {
  WheelTV * selfCpp = static_cast<WheelTV *>(self->obj);
  Vec3 * resultPtr = new Vec3();
  *resultPtr = selfCpp->GetContactLongitudinal();
  JoltC_Vec3_t * result = new JoltC_Vec3_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

JoltC_Vec3_t * JoltC_WheelTV_GetContactLateral(
  JoltC_WheelTV_t * self
) {
  WheelTV * selfCpp = static_cast<WheelTV *>(self->obj);
  Vec3 * resultPtr = new Vec3();
  *resultPtr = selfCpp->GetContactLateral();
  JoltC_Vec3_t * result = new JoltC_Vec3_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

float JoltC_WheelTV_GetSuspensionLength(
  JoltC_WheelTV_t * self
) {
  WheelTV * selfCpp = static_cast<WheelTV *>(self->obj);
  return selfCpp->GetSuspensionLength();
}

bool JoltC_WheelTV_HasHitHardPoint(
  JoltC_WheelTV_t * self
) {
  WheelTV * selfCpp = static_cast<WheelTV *>(self->obj);
  return selfCpp->HasHitHardPoint();
}

float JoltC_WheelTV_GetSuspensionLambda(
  JoltC_WheelTV_t * self
) {
  WheelTV * selfCpp = static_cast<WheelTV *>(self->obj);
  return selfCpp->GetSuspensionLambda();
}

float JoltC_WheelTV_GetLongitudinalLambda(
  JoltC_WheelTV_t * self
) {
  WheelTV * selfCpp = static_cast<WheelTV *>(self->obj);
  return selfCpp->GetLongitudinalLambda();
}

float JoltC_WheelTV_GetLateralLambda(
  JoltC_WheelTV_t * self
) {
  WheelTV * selfCpp = static_cast<WheelTV *>(self->obj);
  return selfCpp->GetLateralLambda();
}

//endregion

//region properties

long JoltC_WheelTV_mTrackIndex_Get(
  JoltC_WheelTV_t * self
) {
  WheelTV * selfCpp = static_cast<WheelTV *>(self->obj);
  return selfCpp->mTrackIndex;
}

void JoltC_WheelTV_mTrackIndex_Set(
  JoltC_WheelTV_t * self,
  long mTrackIndex
) {
  WheelTV * selfCpp = static_cast<WheelTV *>(self->obj);
  selfCpp->mTrackIndex = mTrackIndex;
}

float JoltC_WheelTV_mCombinedLongitudinalFriction_Get(
  JoltC_WheelTV_t * self
) {
  WheelTV * selfCpp = static_cast<WheelTV *>(self->obj);
  return selfCpp->mCombinedLongitudinalFriction;
}

void JoltC_WheelTV_mCombinedLongitudinalFriction_Set(
  JoltC_WheelTV_t * self,
  float mCombinedLongitudinalFriction
) {
  WheelTV * selfCpp = static_cast<WheelTV *>(self->obj);
  selfCpp->mCombinedLongitudinalFriction = mCombinedLongitudinalFriction;
}

float JoltC_WheelTV_mCombinedLateralFriction_Get(
  JoltC_WheelTV_t * self
) {
  WheelTV * selfCpp = static_cast<WheelTV *>(self->obj);
  return selfCpp->mCombinedLateralFriction;
}

void JoltC_WheelTV_mCombinedLateralFriction_Set(
  JoltC_WheelTV_t * self,
  float mCombinedLateralFriction
) {
  WheelTV * selfCpp = static_cast<WheelTV *>(self->obj);
  selfCpp->mCombinedLateralFriction = mCombinedLateralFriction;
}

float JoltC_WheelTV_mBrakeImpulse_Get(
  JoltC_WheelTV_t * self
) {
  WheelTV * selfCpp = static_cast<WheelTV *>(self->obj);
  return selfCpp->mBrakeImpulse;
}

void JoltC_WheelTV_mBrakeImpulse_Set(
  JoltC_WheelTV_t * self,
  float mBrakeImpulse
) {
  WheelTV * selfCpp = static_cast<WheelTV *>(self->obj);
  selfCpp->mBrakeImpulse = mBrakeImpulse;
}

//endregion


#ifdef __cplusplus
}
#endif
