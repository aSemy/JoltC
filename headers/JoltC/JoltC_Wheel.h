#pragma once
#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_Wheel_t * JoltC_Wheel_new(
  JoltC_WheelSettings_t * inSettings
);

//endregion

//region destructor

void JoltC_Wheel_destroy(
  JoltC_Wheel_t * self
);

//endregion
//region converters

/**
 * Convert an instance of JoltC_WheelWV_t into JoltC_Wheel_t.
 */
JoltC_Wheel_t * JoltC_Wheel_From_WheelWV(
  JoltC_WheelWV_t * subtype
);

/**
 * Convert an instance of JoltC_WheelTV_t into JoltC_Wheel_t.
 */
JoltC_Wheel_t * JoltC_Wheel_From_WheelTV(
  JoltC_WheelTV_t * subtype
);

//endregion

//region functions

JoltC_WheelSettings_t * JoltC_Wheel_GetSettings(
  JoltC_Wheel_t * self
);

float JoltC_Wheel_GetAngularVelocity(
  JoltC_Wheel_t * self
);

void JoltC_Wheel_SetAngularVelocity(
  JoltC_Wheel_t * self,
  float inVel
);

float JoltC_Wheel_GetRotationAngle(
  JoltC_Wheel_t * self
);

void JoltC_Wheel_SetRotationAngle(
  JoltC_Wheel_t * self,
  float inAngle
);

float JoltC_Wheel_GetSteerAngle(
  JoltC_Wheel_t * self
);

void JoltC_Wheel_SetSteerAngle(
  JoltC_Wheel_t * self,
  float inAngle
);

bool JoltC_Wheel_HasContact(
  JoltC_Wheel_t * self
);

JoltC_BodyID_t * JoltC_Wheel_GetContactBodyID(
  JoltC_Wheel_t * self
);

JoltC_RVec3_t * JoltC_Wheel_GetContactPosition(
  JoltC_Wheel_t * self
);

JoltC_Vec3_t * JoltC_Wheel_GetContactPointVelocity(
  JoltC_Wheel_t * self
);

JoltC_Vec3_t * JoltC_Wheel_GetContactNormal(
  JoltC_Wheel_t * self
);

JoltC_Vec3_t * JoltC_Wheel_GetContactLongitudinal(
  JoltC_Wheel_t * self
);

JoltC_Vec3_t * JoltC_Wheel_GetContactLateral(
  JoltC_Wheel_t * self
);

float JoltC_Wheel_GetSuspensionLength(
  JoltC_Wheel_t * self
);

bool JoltC_Wheel_HasHitHardPoint(
  JoltC_Wheel_t * self
);

float JoltC_Wheel_GetSuspensionLambda(
  JoltC_Wheel_t * self
);

float JoltC_Wheel_GetLongitudinalLambda(
  JoltC_Wheel_t * self
);

float JoltC_Wheel_GetLateralLambda(
  JoltC_Wheel_t * self
);

//endregion


#ifdef __cplusplus
}
#endif
