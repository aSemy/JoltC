#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_VehicleConstraint_t * JoltC_VehicleConstraint_new(
  JoltC_Body_t * inVehicleBody,
  const JoltC_VehicleConstraintSettings_t * inSettings,
  char** outErrMsg
);

//endregion constructors

//region functions

void JoltC_VehicleConstraint_SetMaxPitchRollAngle(
  JoltC_VehicleConstraint_t * self,
  float inMaxPitchRollAngle,
  char** outErrMsg
);

void JoltC_VehicleConstraint_SetVehicleCollisionTester(
  JoltC_VehicleConstraint_t * self,
  const JoltC_VehicleCollisionTester_t * inTester,
  char** outErrMsg
);

JoltC_Vec3_t * JoltC_VehicleConstraint_GetLocalUp(
  JoltC_VehicleConstraint_t * self,
  char** outErrMsg
);

JoltC_Vec3_t * JoltC_VehicleConstraint_GetLocalForward(
  JoltC_VehicleConstraint_t * self,
  char** outErrMsg
);

JoltC_Vec3_t * JoltC_VehicleConstraint_GetWorldUp(
  JoltC_VehicleConstraint_t * self,
  char** outErrMsg
);

JoltC_Body_t * JoltC_VehicleConstraint_GetVehicleBody(
  JoltC_VehicleConstraint_t * self,
  char** outErrMsg
);

JoltC_VehicleController_t * JoltC_VehicleConstraint_GetController(
  JoltC_VehicleConstraint_t * self,
  char** outErrMsg
);

const JoltC_Wheel_t * JoltC_VehicleConstraint_GetWheel(
  JoltC_VehicleConstraint_t * self,
  unsigned long inIdx,
  char** outErrMsg
);

JoltC_Mat44_t * JoltC_VehicleConstraint_GetWheelLocalTransform(
  JoltC_VehicleConstraint_t * self,
  unsigned long inWheelIndex,
  JoltC_Vec3_t * inWheelRight,
  JoltC_Vec3_t * inWheelUp,
  char** outErrMsg
);

JoltC_RMat44_t * JoltC_VehicleConstraint_GetWheelWorldTransform(
  JoltC_VehicleConstraint_t * self,
  unsigned long inWheelIndex,
  JoltC_Vec3_t * inWheelRight,
  JoltC_Vec3_t * inWheelUp,
  char** outErrMsg
);

void JoltC_VehicleConstraint_SetNumStepsBetweenCollisionTestActive(
  JoltC_VehicleConstraint_t * self,
  unsigned long inSteps,
  char** outErrMsg
);

const unsigned long JoltC_VehicleConstraint_GetNumStepsBetweenCollisionTestActive(
  JoltC_VehicleConstraint_t * self,
  char** outErrMsg
);

void JoltC_VehicleConstraint_SetNumStepsBetweenCollisionTestInactive(
  JoltC_VehicleConstraint_t * self,
  unsigned long inSteps,
  char** outErrMsg
);

const unsigned long JoltC_VehicleConstraint_GetNumStepsBetweenCollisionTestInactive(
  JoltC_VehicleConstraint_t * self,
  char** outErrMsg
);

unsigned long JoltC_VehicleConstraint_GetRefCount(
  JoltC_VehicleConstraint_t * self,
  char** outErrMsg
);

void JoltC_VehicleConstraint_AddRef(
  JoltC_VehicleConstraint_t * self,
  char** outErrMsg
);

void JoltC_VehicleConstraint_Release(
  JoltC_VehicleConstraint_t * self,
  char** outErrMsg
);

JoltC_EConstraintType JoltC_VehicleConstraint_GetType(
  JoltC_VehicleConstraint_t * self,
  char** outErrMsg
);

JoltC_EConstraintSubType JoltC_VehicleConstraint_GetSubType(
  JoltC_VehicleConstraint_t * self,
  char** outErrMsg
);

unsigned long JoltC_VehicleConstraint_GetConstraintPriority(
  JoltC_VehicleConstraint_t * self,
  char** outErrMsg
);

void JoltC_VehicleConstraint_SetConstraintPriority(
  JoltC_VehicleConstraint_t * self,
  unsigned long inPriority,
  char** outErrMsg
);

void JoltC_VehicleConstraint_SetNumVelocityStepsOverride(
  JoltC_VehicleConstraint_t * self,
  long inN,
  char** outErrMsg
);

long JoltC_VehicleConstraint_GetNumVelocityStepsOverride(
  JoltC_VehicleConstraint_t * self,
  char** outErrMsg
);

void JoltC_VehicleConstraint_SetNumPositionStepsOverride(
  JoltC_VehicleConstraint_t * self,
  long inN,
  char** outErrMsg
);

long JoltC_VehicleConstraint_GetNumPositionStepsOverride(
  JoltC_VehicleConstraint_t * self,
  char** outErrMsg
);

void JoltC_VehicleConstraint_SetEnabled(
  JoltC_VehicleConstraint_t * self,
  bool inEnabled,
  char** outErrMsg
);

bool JoltC_VehicleConstraint_GetEnabled(
  JoltC_VehicleConstraint_t * self,
  char** outErrMsg
);

bool JoltC_VehicleConstraint_IsActive(
  JoltC_VehicleConstraint_t * self,
  char** outErrMsg
);

unsigned long long int JoltC_VehicleConstraint_GetUserData(
  JoltC_VehicleConstraint_t * self,
  char** outErrMsg
);

void JoltC_VehicleConstraint_SetUserData(
  JoltC_VehicleConstraint_t * self,
  unsigned long long int inUserData,
  char** outErrMsg
);

void JoltC_VehicleConstraint_ResetWarmStart(
  JoltC_VehicleConstraint_t * self,
  char** outErrMsg
);

//endregion functions


#ifdef __cplusplus
}
#endif

