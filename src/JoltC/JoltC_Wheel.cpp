#include "JoltC/JPC_Wheel.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JPC_Wheel_t * JPC_Wheel_new(
  const JPC_WheelSettings_t * inSettings
) {
  JPC_Wheel_t * cInstance = new JPC_Wheel_t();
  Wheel * cppInstance = new Wheel(
    *reinterpret_cast<WheelSettings *>(inSettings->obj)
  );
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion constructors

//region functions

const JPC_WheelSettings_t * JPC_Wheel_GetSettings(
  JPC_Wheel_t * self
) {
  Wheel * selfCpp = static_cast<Wheel *>(self->obj);
  const WheelSettings * result = selfCpp->GetSettings();
  return reinterpret_cast<const JPC_WheelSettings_t *>(result);
};

float JPC_Wheel_GetAngularVelocity(
  JPC_Wheel_t * self
) {
  Wheel * selfCpp = static_cast<Wheel *>(self->obj);
  float result = selfCpp->GetAngularVelocity();
  return result;
};

void JPC_Wheel_SetAngularVelocity(
  JPC_Wheel_t * self,
  float inVel
) {
  Wheel * selfCpp = static_cast<Wheel *>(self->obj);
  
  selfCpp->SetAngularVelocity(
  inVel
  );
};

float JPC_Wheel_GetRotationAngle(
  JPC_Wheel_t * self
) {
  Wheel * selfCpp = static_cast<Wheel *>(self->obj);
  float result = selfCpp->GetRotationAngle();
  return result;
};

void JPC_Wheel_SetRotationAngle(
  JPC_Wheel_t * self,
  float inAngle
) {
  Wheel * selfCpp = static_cast<Wheel *>(self->obj);
  
  selfCpp->SetRotationAngle(
  inAngle
  );
};

float JPC_Wheel_GetSteerAngle(
  JPC_Wheel_t * self
) {
  Wheel * selfCpp = static_cast<Wheel *>(self->obj);
  float result = selfCpp->GetSteerAngle();
  return result;
};

void JPC_Wheel_SetSteerAngle(
  JPC_Wheel_t * self,
  float inAngle
) {
  Wheel * selfCpp = static_cast<Wheel *>(self->obj);
  
  selfCpp->SetSteerAngle(
  inAngle
  );
};

bool JPC_Wheel_HasContact(
  JPC_Wheel_t * self
) {
  Wheel * selfCpp = static_cast<Wheel *>(self->obj);
  bool result = selfCpp->HasContact();
  return result;
};

JPC_BodyID_t * JPC_Wheel_GetContactBodyID(
  JPC_Wheel_t * self
) {
  Wheel * selfCpp = static_cast<Wheel *>(self->obj);
  BodyID resultValue = selfCpp->GetContactBodyID();
  BodyID* result = new BodyID(resultValue);
  return reinterpret_cast<JPC_BodyID_t *>(result);
};

JPC_RVec3_t * JPC_Wheel_GetContactPosition(
  JPC_Wheel_t * self
) {
  Wheel * selfCpp = static_cast<Wheel *>(self->obj);
  RVec3 resultValue = selfCpp->GetContactPosition();
  RVec3* result = new RVec3(resultValue);
  return reinterpret_cast<JPC_RVec3_t *>(result);
};

JPC_Vec3_t * JPC_Wheel_GetContactPointVelocity(
  JPC_Wheel_t * self
) {
  Wheel * selfCpp = static_cast<Wheel *>(self->obj);
  Vec3 resultValue = selfCpp->GetContactPointVelocity();
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JPC_Vec3_t *>(result);
};

JPC_Vec3_t * JPC_Wheel_GetContactNormal(
  JPC_Wheel_t * self
) {
  Wheel * selfCpp = static_cast<Wheel *>(self->obj);
  Vec3 resultValue = selfCpp->GetContactNormal();
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JPC_Vec3_t *>(result);
};

JPC_Vec3_t * JPC_Wheel_GetContactLongitudinal(
  JPC_Wheel_t * self
) {
  Wheel * selfCpp = static_cast<Wheel *>(self->obj);
  Vec3 resultValue = selfCpp->GetContactLongitudinal();
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JPC_Vec3_t *>(result);
};

JPC_Vec3_t * JPC_Wheel_GetContactLateral(
  JPC_Wheel_t * self
) {
  Wheel * selfCpp = static_cast<Wheel *>(self->obj);
  Vec3 resultValue = selfCpp->GetContactLateral();
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JPC_Vec3_t *>(result);
};

float JPC_Wheel_GetSuspensionLength(
  JPC_Wheel_t * self
) {
  Wheel * selfCpp = static_cast<Wheel *>(self->obj);
  float result = selfCpp->GetSuspensionLength();
  return result;
};

bool JPC_Wheel_HasHitHardPoint(
  JPC_Wheel_t * self
) {
  Wheel * selfCpp = static_cast<Wheel *>(self->obj);
  bool result = selfCpp->HasHitHardPoint();
  return result;
};

float JPC_Wheel_GetSuspensionLambda(
  JPC_Wheel_t * self
) {
  Wheel * selfCpp = static_cast<Wheel *>(self->obj);
  float result = selfCpp->GetSuspensionLambda();
  return result;
};

float JPC_Wheel_GetLongitudinalLambda(
  JPC_Wheel_t * self
) {
  Wheel * selfCpp = static_cast<Wheel *>(self->obj);
  float result = selfCpp->GetLongitudinalLambda();
  return result;
};

float JPC_Wheel_GetLateralLambda(
  JPC_Wheel_t * self
) {
  Wheel * selfCpp = static_cast<Wheel *>(self->obj);
  float result = selfCpp->GetLateralLambda();
  return result;
};

//endregion functions

#ifdef __cplusplus
}
#endif

