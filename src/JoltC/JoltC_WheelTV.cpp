#include "JoltC/JoltC_WheelTV.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_WheelTV_t * JoltC_WheelTV_new(
  JoltC_WheelSettingsTV_t * inWheel
) {
  JoltC_WheelTV_t * cInstance = new JoltC_WheelTV_t();
  WheelTV * cppInstance = new WheelTV(
    *reinterpret_cast<WheelSettingsTV *>(inWheel->obj)
  );
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion

//region functions

JoltC_WheelSettingsTV_t * JoltC_WheelTV_GetSettings_0(
  JoltC_WheelTV_t * self
) {
  WheelTV * selfCpp = static_cast<WheelTV *>(self->obj);
  const WheelSettingsTV * resultValue = selfCpp->GetSettings();
  JoltC_WheelSettingsTV_t* result = new JoltC_WheelSettingsTV_t();
  result->obj = const_cast<void*>(reinterpret_cast<const void*>(&resultValue));
  return result;
};

JoltC_WheelSettings_t * JoltC_WheelTV_GetSettings_1(
  JoltC_WheelTV_t * self
) {
  WheelTV * selfCpp = static_cast<WheelTV *>(self->obj);
  const WheelSettings * resultValue = selfCpp->GetSettings();
  JoltC_WheelSettings_t* result = new JoltC_WheelSettings_t();
  result->obj = const_cast<void*>(reinterpret_cast<const void*>(&resultValue));
  return result;
};

float JoltC_WheelTV_GetAngularVelocity(
  JoltC_WheelTV_t * self
) {
  WheelTV * selfCpp = static_cast<WheelTV *>(self->obj);
  float result = selfCpp->GetAngularVelocity();
  return result;
};

void JoltC_WheelTV_SetAngularVelocity(
  JoltC_WheelTV_t * self,
  float inVel
) {
  WheelTV * selfCpp = static_cast<WheelTV *>(self->obj);
  selfCpp->SetAngularVelocity(
    inVel
  );
};

float JoltC_WheelTV_GetRotationAngle(
  JoltC_WheelTV_t * self
) {
  WheelTV * selfCpp = static_cast<WheelTV *>(self->obj);
  float result = selfCpp->GetRotationAngle();
  return result;
};

void JoltC_WheelTV_SetRotationAngle(
  JoltC_WheelTV_t * self,
  float inAngle
) {
  WheelTV * selfCpp = static_cast<WheelTV *>(self->obj);
  selfCpp->SetRotationAngle(
    inAngle
  );
};

float JoltC_WheelTV_GetSteerAngle(
  JoltC_WheelTV_t * self
) {
  WheelTV * selfCpp = static_cast<WheelTV *>(self->obj);
  float result = selfCpp->GetSteerAngle();
  return result;
};

void JoltC_WheelTV_SetSteerAngle(
  JoltC_WheelTV_t * self,
  float inAngle
) {
  WheelTV * selfCpp = static_cast<WheelTV *>(self->obj);
  selfCpp->SetSteerAngle(
    inAngle
  );
};

bool JoltC_WheelTV_HasContact(
  JoltC_WheelTV_t * self
) {
  WheelTV * selfCpp = static_cast<WheelTV *>(self->obj);
  bool result = selfCpp->HasContact();
  return result;
};

JoltC_BodyID_t * JoltC_WheelTV_GetContactBodyID(
  JoltC_WheelTV_t * self
) {
  WheelTV * selfCpp = static_cast<WheelTV *>(self->obj);
  const BodyID& resultValue = selfCpp->GetContactBodyID();
  JoltC_BodyID_t* result = new JoltC_BodyID_t();
  result->obj = const_cast<void*>(reinterpret_cast<const void*>(&resultValue));
  return result;
};

JoltC_RVec3_t * JoltC_WheelTV_GetContactPosition(
  JoltC_WheelTV_t * self
) {
  WheelTV * selfCpp = static_cast<WheelTV *>(self->obj);
  const RVec3& resultValue = selfCpp->GetContactPosition();
  JoltC_RVec3_t* result = new JoltC_RVec3_t();
  result->obj = const_cast<void*>(reinterpret_cast<const void*>(&resultValue));
  return result;
};

JoltC_Vec3_t * JoltC_WheelTV_GetContactPointVelocity(
  JoltC_WheelTV_t * self
) {
  WheelTV * selfCpp = static_cast<WheelTV *>(self->obj);
  const Vec3& resultValue = selfCpp->GetContactPointVelocity();
  JoltC_Vec3_t* result = new JoltC_Vec3_t();
  result->obj = const_cast<void*>(reinterpret_cast<const void*>(&resultValue));
  return result;
};

JoltC_Vec3_t * JoltC_WheelTV_GetContactNormal(
  JoltC_WheelTV_t * self
) {
  WheelTV * selfCpp = static_cast<WheelTV *>(self->obj);
  const Vec3& resultValue = selfCpp->GetContactNormal();
  JoltC_Vec3_t* result = new JoltC_Vec3_t();
  result->obj = const_cast<void*>(reinterpret_cast<const void*>(&resultValue));
  return result;
};

JoltC_Vec3_t * JoltC_WheelTV_GetContactLongitudinal(
  JoltC_WheelTV_t * self
) {
  WheelTV * selfCpp = static_cast<WheelTV *>(self->obj);
  const Vec3& resultValue = selfCpp->GetContactLongitudinal();
  JoltC_Vec3_t* result = new JoltC_Vec3_t();
  result->obj = const_cast<void*>(reinterpret_cast<const void*>(&resultValue));
  return result;
};

JoltC_Vec3_t * JoltC_WheelTV_GetContactLateral(
  JoltC_WheelTV_t * self
) {
  WheelTV * selfCpp = static_cast<WheelTV *>(self->obj);
  const Vec3& resultValue = selfCpp->GetContactLateral();
  JoltC_Vec3_t* result = new JoltC_Vec3_t();
  result->obj = const_cast<void*>(reinterpret_cast<const void*>(&resultValue));
  return result;
};

float JoltC_WheelTV_GetSuspensionLength(
  JoltC_WheelTV_t * self
) {
  WheelTV * selfCpp = static_cast<WheelTV *>(self->obj);
  float result = selfCpp->GetSuspensionLength();
  return result;
};

bool JoltC_WheelTV_HasHitHardPoint(
  JoltC_WheelTV_t * self
) {
  WheelTV * selfCpp = static_cast<WheelTV *>(self->obj);
  bool result = selfCpp->HasHitHardPoint();
  return result;
};

float JoltC_WheelTV_GetSuspensionLambda(
  JoltC_WheelTV_t * self
) {
  WheelTV * selfCpp = static_cast<WheelTV *>(self->obj);
  float result = selfCpp->GetSuspensionLambda();
  return result;
};

float JoltC_WheelTV_GetLongitudinalLambda(
  JoltC_WheelTV_t * self
) {
  WheelTV * selfCpp = static_cast<WheelTV *>(self->obj);
  float result = selfCpp->GetLongitudinalLambda();
  return result;
};

float JoltC_WheelTV_GetLateralLambda(
  JoltC_WheelTV_t * self
) {
  WheelTV * selfCpp = static_cast<WheelTV *>(self->obj);
  float result = selfCpp->GetLateralLambda();
  return result;
};

//endregion

//region properties

long JoltC_WheelTV_mTrackIndex_Get(
  JoltC_WheelTV_t * self
) {
  WheelTV * selfCpp = static_cast<WheelTV *>(self->obj);
  long result = selfCpp->mTrackIndex;
  return result;
};

void JoltC_WheelTV_mTrackIndex_Set(
  JoltC_WheelTV_t * self,
  long mTrackIndex
) {
  WheelTV * selfCpp = static_cast<WheelTV *>(self->obj);
  selfCpp->mTrackIndex = mTrackIndex;
};

float JoltC_WheelTV_mCombinedLongitudinalFriction_Get(
  JoltC_WheelTV_t * self
) {
  WheelTV * selfCpp = static_cast<WheelTV *>(self->obj);
  float result = selfCpp->mCombinedLongitudinalFriction;
  return result;
};

void JoltC_WheelTV_mCombinedLongitudinalFriction_Set(
  JoltC_WheelTV_t * self,
  float mCombinedLongitudinalFriction
) {
  WheelTV * selfCpp = static_cast<WheelTV *>(self->obj);
  selfCpp->mCombinedLongitudinalFriction = mCombinedLongitudinalFriction;
};

float JoltC_WheelTV_mCombinedLateralFriction_Get(
  JoltC_WheelTV_t * self
) {
  WheelTV * selfCpp = static_cast<WheelTV *>(self->obj);
  float result = selfCpp->mCombinedLateralFriction;
  return result;
};

void JoltC_WheelTV_mCombinedLateralFriction_Set(
  JoltC_WheelTV_t * self,
  float mCombinedLateralFriction
) {
  WheelTV * selfCpp = static_cast<WheelTV *>(self->obj);
  selfCpp->mCombinedLateralFriction = mCombinedLateralFriction;
};

float JoltC_WheelTV_mBrakeImpulse_Get(
  JoltC_WheelTV_t * self
) {
  WheelTV * selfCpp = static_cast<WheelTV *>(self->obj);
  float result = selfCpp->mBrakeImpulse;
  return result;
};

void JoltC_WheelTV_mBrakeImpulse_Set(
  JoltC_WheelTV_t * self,
  float mBrakeImpulse
) {
  WheelTV * selfCpp = static_cast<WheelTV *>(self->obj);
  selfCpp->mBrakeImpulse = mBrakeImpulse;
};

//endregion

#ifdef __cplusplus
}
#endif

