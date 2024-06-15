#include "JoltC/JoltC_Wheel.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

/**
  Construct a new `Wheel` instance.
 */
JoltC_Wheel_t * JoltC_Wheel_new(
  JoltC_WheelSettings_t * inSettings
) {
  const WheelSettings * inSettingsCpp = static_cast<const WheelSettings *>(inSettings->obj);
  JoltC_Wheel_t * cInstance = new JoltC_Wheel_t();
  Wheel * cppInstance = new Wheel(
    *inSettingsCpp
  );
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion

//region destructor

void JoltC_Wheel_destroy(
  JoltC_Wheel_t * self
){
  if (self == NULL) return;
  delete static_cast<Wheel *>(self->obj);
  free(self);
}

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
  const WheelSettings * resultPtr = selfCpp->GetSettings();
  JoltC_WheelSettings_t * result = new JoltC_WheelSettings_t();
  result->obj = const_cast<void *>(reinterpret_cast<const void *>(resultPtr));
  return result;
}

float JoltC_Wheel_GetAngularVelocity(
  JoltC_Wheel_t * self
) {
  Wheel * selfCpp = static_cast<Wheel *>(self->obj);
  return selfCpp->GetAngularVelocity();
}

void JoltC_Wheel_SetAngularVelocity(
  JoltC_Wheel_t * self,
  float inVel
) {
  Wheel * selfCpp = static_cast<Wheel *>(self->obj);
  selfCpp->SetAngularVelocity(
    inVel
  );
}

float JoltC_Wheel_GetRotationAngle(
  JoltC_Wheel_t * self
) {
  Wheel * selfCpp = static_cast<Wheel *>(self->obj);
  return selfCpp->GetRotationAngle();
}

void JoltC_Wheel_SetRotationAngle(
  JoltC_Wheel_t * self,
  float inAngle
) {
  Wheel * selfCpp = static_cast<Wheel *>(self->obj);
  selfCpp->SetRotationAngle(
    inAngle
  );
}

float JoltC_Wheel_GetSteerAngle(
  JoltC_Wheel_t * self
) {
  Wheel * selfCpp = static_cast<Wheel *>(self->obj);
  return selfCpp->GetSteerAngle();
}

void JoltC_Wheel_SetSteerAngle(
  JoltC_Wheel_t * self,
  float inAngle
) {
  Wheel * selfCpp = static_cast<Wheel *>(self->obj);
  selfCpp->SetSteerAngle(
    inAngle
  );
}

bool JoltC_Wheel_HasContact(
  JoltC_Wheel_t * self
) {
  Wheel * selfCpp = static_cast<Wheel *>(self->obj);
  return selfCpp->HasContact();
}

JoltC_BodyID_t * JoltC_Wheel_GetContactBodyID(
  JoltC_Wheel_t * self
) {
  Wheel * selfCpp = static_cast<Wheel *>(self->obj);
  BodyID * resultPtr = new BodyID();
  *resultPtr = selfCpp->GetContactBodyID();
  JoltC_BodyID_t * result = new JoltC_BodyID_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

JoltC_RVec3_t * JoltC_Wheel_GetContactPosition(
  JoltC_Wheel_t * self
) {
  Wheel * selfCpp = static_cast<Wheel *>(self->obj);
  RVec3 * resultPtr = new RVec3();
  *resultPtr = selfCpp->GetContactPosition();
  JoltC_RVec3_t * result = new JoltC_RVec3_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

JoltC_Vec3_t * JoltC_Wheel_GetContactPointVelocity(
  JoltC_Wheel_t * self
) {
  Wheel * selfCpp = static_cast<Wheel *>(self->obj);
  Vec3 * resultPtr = new Vec3();
  *resultPtr = selfCpp->GetContactPointVelocity();
  JoltC_Vec3_t * result = new JoltC_Vec3_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

JoltC_Vec3_t * JoltC_Wheel_GetContactNormal(
  JoltC_Wheel_t * self
) {
  Wheel * selfCpp = static_cast<Wheel *>(self->obj);
  Vec3 * resultPtr = new Vec3();
  *resultPtr = selfCpp->GetContactNormal();
  JoltC_Vec3_t * result = new JoltC_Vec3_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

JoltC_Vec3_t * JoltC_Wheel_GetContactLongitudinal(
  JoltC_Wheel_t * self
) {
  Wheel * selfCpp = static_cast<Wheel *>(self->obj);
  Vec3 * resultPtr = new Vec3();
  *resultPtr = selfCpp->GetContactLongitudinal();
  JoltC_Vec3_t * result = new JoltC_Vec3_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

JoltC_Vec3_t * JoltC_Wheel_GetContactLateral(
  JoltC_Wheel_t * self
) {
  Wheel * selfCpp = static_cast<Wheel *>(self->obj);
  Vec3 * resultPtr = new Vec3();
  *resultPtr = selfCpp->GetContactLateral();
  JoltC_Vec3_t * result = new JoltC_Vec3_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

float JoltC_Wheel_GetSuspensionLength(
  JoltC_Wheel_t * self
) {
  Wheel * selfCpp = static_cast<Wheel *>(self->obj);
  return selfCpp->GetSuspensionLength();
}

bool JoltC_Wheel_HasHitHardPoint(
  JoltC_Wheel_t * self
) {
  Wheel * selfCpp = static_cast<Wheel *>(self->obj);
  return selfCpp->HasHitHardPoint();
}

float JoltC_Wheel_GetSuspensionLambda(
  JoltC_Wheel_t * self
) {
  Wheel * selfCpp = static_cast<Wheel *>(self->obj);
  return selfCpp->GetSuspensionLambda();
}

float JoltC_Wheel_GetLongitudinalLambda(
  JoltC_Wheel_t * self
) {
  Wheel * selfCpp = static_cast<Wheel *>(self->obj);
  return selfCpp->GetLongitudinalLambda();
}

float JoltC_Wheel_GetLateralLambda(
  JoltC_Wheel_t * self
) {
  Wheel * selfCpp = static_cast<Wheel *>(self->obj);
  return selfCpp->GetLateralLambda();
}

//endregion


#ifdef __cplusplus
}
#endif
