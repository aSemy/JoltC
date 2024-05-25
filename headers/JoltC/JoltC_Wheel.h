#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JPC_Wheel_t * JPC_Wheel_new(
  const JPC_WheelSettings_t * inSettings
);

//endregion constructors

//region functions

const JPC_WheelSettings_t * JPC_Wheel_GetSettings(
  JPC_Wheel_t * self
);

float JPC_Wheel_GetAngularVelocity(
  JPC_Wheel_t * self
);

void JPC_Wheel_SetAngularVelocity(
  JPC_Wheel_t * self,
  float inVel
);

float JPC_Wheel_GetRotationAngle(
  JPC_Wheel_t * self
);

void JPC_Wheel_SetRotationAngle(
  JPC_Wheel_t * self,
  float inAngle
);

float JPC_Wheel_GetSteerAngle(
  JPC_Wheel_t * self
);

void JPC_Wheel_SetSteerAngle(
  JPC_Wheel_t * self,
  float inAngle
);

bool JPC_Wheel_HasContact(
  JPC_Wheel_t * self
);

JPC_BodyID_t * JPC_Wheel_GetContactBodyID(
  JPC_Wheel_t * self
);

JPC_RVec3_t * JPC_Wheel_GetContactPosition(
  JPC_Wheel_t * self
);

JPC_Vec3_t * JPC_Wheel_GetContactPointVelocity(
  JPC_Wheel_t * self
);

JPC_Vec3_t * JPC_Wheel_GetContactNormal(
  JPC_Wheel_t * self
);

JPC_Vec3_t * JPC_Wheel_GetContactLongitudinal(
  JPC_Wheel_t * self
);

JPC_Vec3_t * JPC_Wheel_GetContactLateral(
  JPC_Wheel_t * self
);

float JPC_Wheel_GetSuspensionLength(
  JPC_Wheel_t * self
);

bool JPC_Wheel_HasHitHardPoint(
  JPC_Wheel_t * self
);

float JPC_Wheel_GetSuspensionLambda(
  JPC_Wheel_t * self
);

float JPC_Wheel_GetLongitudinalLambda(
  JPC_Wheel_t * self
);

float JPC_Wheel_GetLateralLambda(
  JPC_Wheel_t * self
);

//endregion functions


#ifdef __cplusplus
}
#endif

