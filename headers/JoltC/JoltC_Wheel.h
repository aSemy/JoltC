#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_Wheel_t * JoltC_Wheel_new(
  const JoltC_WheelSettings_t * inSettings,
  char** outErrMsg
);

//endregion constructors

//region functions

const JoltC_WheelSettings_t * JoltC_Wheel_GetSettings(
  JoltC_Wheel_t * self,
  char** outErrMsg
);

float JoltC_Wheel_GetAngularVelocity(
  JoltC_Wheel_t * self,
  char** outErrMsg
);

void JoltC_Wheel_SetAngularVelocity(
  JoltC_Wheel_t * self,
  float inVel,
  char** outErrMsg
);

float JoltC_Wheel_GetRotationAngle(
  JoltC_Wheel_t * self,
  char** outErrMsg
);

void JoltC_Wheel_SetRotationAngle(
  JoltC_Wheel_t * self,
  float inAngle,
  char** outErrMsg
);

float JoltC_Wheel_GetSteerAngle(
  JoltC_Wheel_t * self,
  char** outErrMsg
);

void JoltC_Wheel_SetSteerAngle(
  JoltC_Wheel_t * self,
  float inAngle,
  char** outErrMsg
);

bool JoltC_Wheel_HasContact(
  JoltC_Wheel_t * self,
  char** outErrMsg
);

JoltC_BodyID_t * JoltC_Wheel_GetContactBodyID(
  JoltC_Wheel_t * self,
  char** outErrMsg
);

JoltC_RVec3_t * JoltC_Wheel_GetContactPosition(
  JoltC_Wheel_t * self,
  char** outErrMsg
);

JoltC_Vec3_t * JoltC_Wheel_GetContactPointVelocity(
  JoltC_Wheel_t * self,
  char** outErrMsg
);

JoltC_Vec3_t * JoltC_Wheel_GetContactNormal(
  JoltC_Wheel_t * self,
  char** outErrMsg
);

JoltC_Vec3_t * JoltC_Wheel_GetContactLongitudinal(
  JoltC_Wheel_t * self,
  char** outErrMsg
);

JoltC_Vec3_t * JoltC_Wheel_GetContactLateral(
  JoltC_Wheel_t * self,
  char** outErrMsg
);

float JoltC_Wheel_GetSuspensionLength(
  JoltC_Wheel_t * self,
  char** outErrMsg
);

bool JoltC_Wheel_HasHitHardPoint(
  JoltC_Wheel_t * self,
  char** outErrMsg
);

float JoltC_Wheel_GetSuspensionLambda(
  JoltC_Wheel_t * self,
  char** outErrMsg
);

float JoltC_Wheel_GetLongitudinalLambda(
  JoltC_Wheel_t * self,
  char** outErrMsg
);

float JoltC_Wheel_GetLateralLambda(
  JoltC_Wheel_t * self,
  char** outErrMsg
);

//endregion functions


#ifdef __cplusplus
}
#endif

