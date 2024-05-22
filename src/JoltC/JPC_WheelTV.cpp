#include "JoltC/JPC_WheelTV.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JPC_WheelTV_t * JPC_WheelTV_new(
  const JPC_WheelSettingsTV_t * inWheel
) {
  JPC_WheelTV_t * cInstance = new JPC_WheelTV_t();
  WheelTV * cppInstance = new WheelTV(
    *reinterpret_cast<WheelSettingsTV *>(inWheel->obj)
  );
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion constructors

//region functions

const JPC_WheelSettingsTV_t * JPC_WheelTV_GetSettings_0(
  JPC_WheelTV_t * self
) {
  WheelTV * selfCpp = static_cast<WheelTV *>(self->obj);
  const WheelSettingsTV * result = selfCpp->GetSettings();
  return reinterpret_cast<const JPC_WheelSettingsTV_t *>(result);
};

const JPC_WheelSettings_t * JPC_WheelTV_GetSettings_1(
  JPC_WheelTV_t * self
) {
  WheelTV * selfCpp = static_cast<WheelTV *>(self->obj);
  const WheelSettings * result = selfCpp->GetSettings();
  return reinterpret_cast<const JPC_WheelSettings_t *>(result);
};

float JPC_WheelTV_GetAngularVelocity(
  JPC_WheelTV_t * self
) {
  WheelTV * selfCpp = static_cast<WheelTV *>(self->obj);
  float result = selfCpp->GetAngularVelocity();
  return result;
};

void JPC_WheelTV_SetAngularVelocity(
  JPC_WheelTV_t * self,
  float inVel
) {
  WheelTV * selfCpp = static_cast<WheelTV *>(self->obj);
  
  selfCpp->SetAngularVelocity(
  inVel
  );
};

float JPC_WheelTV_GetRotationAngle(
  JPC_WheelTV_t * self
) {
  WheelTV * selfCpp = static_cast<WheelTV *>(self->obj);
  float result = selfCpp->GetRotationAngle();
  return result;
};

void JPC_WheelTV_SetRotationAngle(
  JPC_WheelTV_t * self,
  float inAngle
) {
  WheelTV * selfCpp = static_cast<WheelTV *>(self->obj);
  
  selfCpp->SetRotationAngle(
  inAngle
  );
};

float JPC_WheelTV_GetSteerAngle(
  JPC_WheelTV_t * self
) {
  WheelTV * selfCpp = static_cast<WheelTV *>(self->obj);
  float result = selfCpp->GetSteerAngle();
  return result;
};

void JPC_WheelTV_SetSteerAngle(
  JPC_WheelTV_t * self,
  float inAngle
) {
  WheelTV * selfCpp = static_cast<WheelTV *>(self->obj);
  
  selfCpp->SetSteerAngle(
  inAngle
  );
};

bool JPC_WheelTV_HasContact(
  JPC_WheelTV_t * self
) {
  WheelTV * selfCpp = static_cast<WheelTV *>(self->obj);
  bool result = selfCpp->HasContact();
  return result;
};

JPC_BodyID_t * JPC_WheelTV_GetContactBodyID(
  JPC_WheelTV_t * self
) {
  WheelTV * selfCpp = static_cast<WheelTV *>(self->obj);
  BodyID resultValue = selfCpp->GetContactBodyID();
  BodyID* result = new BodyID(resultValue);
  return reinterpret_cast<JPC_BodyID_t *>(result);
};

JPC_RVec3_t * JPC_WheelTV_GetContactPosition(
  JPC_WheelTV_t * self
) {
  WheelTV * selfCpp = static_cast<WheelTV *>(self->obj);
  RVec3 resultValue = selfCpp->GetContactPosition();
  RVec3* result = new RVec3(resultValue);
  return reinterpret_cast<JPC_RVec3_t *>(result);
};

JPC_Vec3_t * JPC_WheelTV_GetContactPointVelocity(
  JPC_WheelTV_t * self
) {
  WheelTV * selfCpp = static_cast<WheelTV *>(self->obj);
  Vec3 resultValue = selfCpp->GetContactPointVelocity();
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JPC_Vec3_t *>(result);
};

JPC_Vec3_t * JPC_WheelTV_GetContactNormal(
  JPC_WheelTV_t * self
) {
  WheelTV * selfCpp = static_cast<WheelTV *>(self->obj);
  Vec3 resultValue = selfCpp->GetContactNormal();
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JPC_Vec3_t *>(result);
};

JPC_Vec3_t * JPC_WheelTV_GetContactLongitudinal(
  JPC_WheelTV_t * self
) {
  WheelTV * selfCpp = static_cast<WheelTV *>(self->obj);
  Vec3 resultValue = selfCpp->GetContactLongitudinal();
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JPC_Vec3_t *>(result);
};

JPC_Vec3_t * JPC_WheelTV_GetContactLateral(
  JPC_WheelTV_t * self
) {
  WheelTV * selfCpp = static_cast<WheelTV *>(self->obj);
  Vec3 resultValue = selfCpp->GetContactLateral();
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JPC_Vec3_t *>(result);
};

float JPC_WheelTV_GetSuspensionLength(
  JPC_WheelTV_t * self
) {
  WheelTV * selfCpp = static_cast<WheelTV *>(self->obj);
  float result = selfCpp->GetSuspensionLength();
  return result;
};

bool JPC_WheelTV_HasHitHardPoint(
  JPC_WheelTV_t * self
) {
  WheelTV * selfCpp = static_cast<WheelTV *>(self->obj);
  bool result = selfCpp->HasHitHardPoint();
  return result;
};

float JPC_WheelTV_GetSuspensionLambda(
  JPC_WheelTV_t * self
) {
  WheelTV * selfCpp = static_cast<WheelTV *>(self->obj);
  float result = selfCpp->GetSuspensionLambda();
  return result;
};

float JPC_WheelTV_GetLongitudinalLambda(
  JPC_WheelTV_t * self
) {
  WheelTV * selfCpp = static_cast<WheelTV *>(self->obj);
  float result = selfCpp->GetLongitudinalLambda();
  return result;
};

float JPC_WheelTV_GetLateralLambda(
  JPC_WheelTV_t * self
) {
  WheelTV * selfCpp = static_cast<WheelTV *>(self->obj);
  float result = selfCpp->GetLateralLambda();
  return result;
};

//endregion functions

//region properties

long JPC_WheelTV_mTrackIndex_Get(
  JPC_WheelTV_t * self
) {
  WheelTV * selfCpp = static_cast<WheelTV *>(self->obj);
  long result = selfCpp->mTrackIndex;
  return result;
};

void JPC_WheelTV_mTrackIndex_Set(
  JPC_WheelTV_t * self,
  long mTrackIndex
) {
  WheelTV * selfCpp = static_cast<WheelTV *>(self->obj);
  selfCpp->mTrackIndex = mTrackIndex;
};

float JPC_WheelTV_mCombinedLongitudinalFriction_Get(
  JPC_WheelTV_t * self
) {
  WheelTV * selfCpp = static_cast<WheelTV *>(self->obj);
  float result = selfCpp->mCombinedLongitudinalFriction;
  return result;
};

void JPC_WheelTV_mCombinedLongitudinalFriction_Set(
  JPC_WheelTV_t * self,
  float mCombinedLongitudinalFriction
) {
  WheelTV * selfCpp = static_cast<WheelTV *>(self->obj);
  selfCpp->mCombinedLongitudinalFriction = mCombinedLongitudinalFriction;
};

float JPC_WheelTV_mCombinedLateralFriction_Get(
  JPC_WheelTV_t * self
) {
  WheelTV * selfCpp = static_cast<WheelTV *>(self->obj);
  float result = selfCpp->mCombinedLateralFriction;
  return result;
};

void JPC_WheelTV_mCombinedLateralFriction_Set(
  JPC_WheelTV_t * self,
  float mCombinedLateralFriction
) {
  WheelTV * selfCpp = static_cast<WheelTV *>(self->obj);
  selfCpp->mCombinedLateralFriction = mCombinedLateralFriction;
};

float JPC_WheelTV_mBrakeImpulse_Get(
  JPC_WheelTV_t * self
) {
  WheelTV * selfCpp = static_cast<WheelTV *>(self->obj);
  float result = selfCpp->mBrakeImpulse;
  return result;
};

void JPC_WheelTV_mBrakeImpulse_Set(
  JPC_WheelTV_t * self,
  float mBrakeImpulse
) {
  WheelTV * selfCpp = static_cast<WheelTV *>(self->obj);
  selfCpp->mBrakeImpulse = mBrakeImpulse;
};

//endregion properties

#ifdef __cplusplus
}
#endif

