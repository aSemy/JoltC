#include "JoltC/JoltC_Wheel.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_Wheel_t * JoltC_Wheel_new(
  JoltC_WheelSettings_t * inSettings
) {
  JoltC_Wheel_t * cInstance = new JoltC_Wheel_t();
  Wheel * cppInstance = new Wheel(
    *reinterpret_cast<WheelSettings *>(inSettings->obj)
  );
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion

//region converters

/**
 * Convert an instance of JoltC_WheelWV_t into JoltC_Wheel_t.
 */
JoltC_Wheel_t * JoltC_Wheel_From_WheelWV(
  JoltC_WheelWV_t * subtype
) {
  return (JoltC_Wheel_t*) subtype;
};

/**
 * Convert an instance of JoltC_WheelTV_t into JoltC_Wheel_t.
 */
JoltC_Wheel_t * JoltC_Wheel_From_WheelTV(
  JoltC_WheelTV_t * subtype
) {
  return (JoltC_Wheel_t*) subtype;
};

//endregion

//region functions

JoltC_WheelSettings_t * JoltC_Wheel_GetSettings(
  JoltC_Wheel_t * self
) {
  Wheel * selfCpp = static_cast<Wheel *>(self->obj);
  const WheelSettings * resultValue = selfCpp->GetSettings();
  JoltC_WheelSettings_t* result = new JoltC_WheelSettings_t();
  result->obj = const_cast<void*>(reinterpret_cast<const void*>(&resultValue));
  return result;
};

float JoltC_Wheel_GetAngularVelocity(
  JoltC_Wheel_t * self
) {
  Wheel * selfCpp = static_cast<Wheel *>(self->obj);
  float result = selfCpp->GetAngularVelocity();
  return result;
};

void JoltC_Wheel_SetAngularVelocity(
  JoltC_Wheel_t * self,
  float inVel
) {
  Wheel * selfCpp = static_cast<Wheel *>(self->obj);
  selfCpp->SetAngularVelocity(
    inVel
  );
};

float JoltC_Wheel_GetRotationAngle(
  JoltC_Wheel_t * self
) {
  Wheel * selfCpp = static_cast<Wheel *>(self->obj);
  float result = selfCpp->GetRotationAngle();
  return result;
};

void JoltC_Wheel_SetRotationAngle(
  JoltC_Wheel_t * self,
  float inAngle
) {
  Wheel * selfCpp = static_cast<Wheel *>(self->obj);
  selfCpp->SetRotationAngle(
    inAngle
  );
};

float JoltC_Wheel_GetSteerAngle(
  JoltC_Wheel_t * self
) {
  Wheel * selfCpp = static_cast<Wheel *>(self->obj);
  float result = selfCpp->GetSteerAngle();
  return result;
};

void JoltC_Wheel_SetSteerAngle(
  JoltC_Wheel_t * self,
  float inAngle
) {
  Wheel * selfCpp = static_cast<Wheel *>(self->obj);
  selfCpp->SetSteerAngle(
    inAngle
  );
};

bool JoltC_Wheel_HasContact(
  JoltC_Wheel_t * self
) {
  Wheel * selfCpp = static_cast<Wheel *>(self->obj);
  bool result = selfCpp->HasContact();
  return result;
};

JoltC_BodyID_t * JoltC_Wheel_GetContactBodyID(
  JoltC_Wheel_t * self
) {
  Wheel * selfCpp = static_cast<Wheel *>(self->obj);
  const BodyID& resultValue = selfCpp->GetContactBodyID();
  JoltC_BodyID_t* result = new JoltC_BodyID_t();
  result->obj = const_cast<void*>(reinterpret_cast<const void*>(&resultValue));
  return result;
};

JoltC_RVec3_t * JoltC_Wheel_GetContactPosition(
  JoltC_Wheel_t * self
) {
  Wheel * selfCpp = static_cast<Wheel *>(self->obj);
  const RVec3& resultValue = selfCpp->GetContactPosition();
  JoltC_RVec3_t* result = new JoltC_RVec3_t();
  result->obj = const_cast<void*>(reinterpret_cast<const void*>(&resultValue));
  return result;
};

JoltC_Vec3_t * JoltC_Wheel_GetContactPointVelocity(
  JoltC_Wheel_t * self
) {
  Wheel * selfCpp = static_cast<Wheel *>(self->obj);
  const Vec3& resultValue = selfCpp->GetContactPointVelocity();
  JoltC_Vec3_t* result = new JoltC_Vec3_t();
  result->obj = const_cast<void*>(reinterpret_cast<const void*>(&resultValue));
  return result;
};

JoltC_Vec3_t * JoltC_Wheel_GetContactNormal(
  JoltC_Wheel_t * self
) {
  Wheel * selfCpp = static_cast<Wheel *>(self->obj);
  const Vec3& resultValue = selfCpp->GetContactNormal();
  JoltC_Vec3_t* result = new JoltC_Vec3_t();
  result->obj = const_cast<void*>(reinterpret_cast<const void*>(&resultValue));
  return result;
};

JoltC_Vec3_t * JoltC_Wheel_GetContactLongitudinal(
  JoltC_Wheel_t * self
) {
  Wheel * selfCpp = static_cast<Wheel *>(self->obj);
  const Vec3& resultValue = selfCpp->GetContactLongitudinal();
  JoltC_Vec3_t* result = new JoltC_Vec3_t();
  result->obj = const_cast<void*>(reinterpret_cast<const void*>(&resultValue));
  return result;
};

JoltC_Vec3_t * JoltC_Wheel_GetContactLateral(
  JoltC_Wheel_t * self
) {
  Wheel * selfCpp = static_cast<Wheel *>(self->obj);
  const Vec3& resultValue = selfCpp->GetContactLateral();
  JoltC_Vec3_t* result = new JoltC_Vec3_t();
  result->obj = const_cast<void*>(reinterpret_cast<const void*>(&resultValue));
  return result;
};

float JoltC_Wheel_GetSuspensionLength(
  JoltC_Wheel_t * self
) {
  Wheel * selfCpp = static_cast<Wheel *>(self->obj);
  float result = selfCpp->GetSuspensionLength();
  return result;
};

bool JoltC_Wheel_HasHitHardPoint(
  JoltC_Wheel_t * self
) {
  Wheel * selfCpp = static_cast<Wheel *>(self->obj);
  bool result = selfCpp->HasHitHardPoint();
  return result;
};

float JoltC_Wheel_GetSuspensionLambda(
  JoltC_Wheel_t * self
) {
  Wheel * selfCpp = static_cast<Wheel *>(self->obj);
  float result = selfCpp->GetSuspensionLambda();
  return result;
};

float JoltC_Wheel_GetLongitudinalLambda(
  JoltC_Wheel_t * self
) {
  Wheel * selfCpp = static_cast<Wheel *>(self->obj);
  float result = selfCpp->GetLongitudinalLambda();
  return result;
};

float JoltC_Wheel_GetLateralLambda(
  JoltC_Wheel_t * self
) {
  Wheel * selfCpp = static_cast<Wheel *>(self->obj);
  float result = selfCpp->GetLateralLambda();
  return result;
};

//endregion

#ifdef __cplusplus
}
#endif

