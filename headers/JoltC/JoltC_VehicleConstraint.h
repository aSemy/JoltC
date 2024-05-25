#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JPC_VehicleConstraint_t * JPC_VehicleConstraint_new(
  JPC_Body_t * inVehicleBody,
  const JPC_VehicleConstraintSettings_t * inSettings
);

//endregion constructors

//region functions

void JPC_VehicleConstraint_SetMaxPitchRollAngle(
  JPC_VehicleConstraint_t * self,
  float inMaxPitchRollAngle
);

void JPC_VehicleConstraint_SetVehicleCollisionTester(
  JPC_VehicleConstraint_t * self,
  const JPC_VehicleCollisionTester_t * inTester
);

JPC_Vec3_t * JPC_VehicleConstraint_GetLocalUp(
  JPC_VehicleConstraint_t * self
);

JPC_Vec3_t * JPC_VehicleConstraint_GetLocalForward(
  JPC_VehicleConstraint_t * self
);

JPC_Vec3_t * JPC_VehicleConstraint_GetWorldUp(
  JPC_VehicleConstraint_t * self
);

JPC_Body_t * JPC_VehicleConstraint_GetVehicleBody(
  JPC_VehicleConstraint_t * self
);

JPC_VehicleController_t * JPC_VehicleConstraint_GetController(
  JPC_VehicleConstraint_t * self
);

const JPC_Wheel_t * JPC_VehicleConstraint_GetWheel(
  JPC_VehicleConstraint_t * self,
  unsigned long inIdx
);

JPC_Mat44_t * JPC_VehicleConstraint_GetWheelLocalTransform(
  JPC_VehicleConstraint_t * self,
  unsigned long inWheelIndex,
  JPC_Vec3_t * inWheelRight,
  JPC_Vec3_t * inWheelUp
);

JPC_RMat44_t * JPC_VehicleConstraint_GetWheelWorldTransform(
  JPC_VehicleConstraint_t * self,
  unsigned long inWheelIndex,
  JPC_Vec3_t * inWheelRight,
  JPC_Vec3_t * inWheelUp
);

void JPC_VehicleConstraint_SetNumStepsBetweenCollisionTestActive(
  JPC_VehicleConstraint_t * self,
  unsigned long inSteps
);

const unsigned long JPC_VehicleConstraint_GetNumStepsBetweenCollisionTestActive(
  JPC_VehicleConstraint_t * self
);

void JPC_VehicleConstraint_SetNumStepsBetweenCollisionTestInactive(
  JPC_VehicleConstraint_t * self,
  unsigned long inSteps
);

const unsigned long JPC_VehicleConstraint_GetNumStepsBetweenCollisionTestInactive(
  JPC_VehicleConstraint_t * self
);

unsigned long JPC_VehicleConstraint_GetRefCount(
  JPC_VehicleConstraint_t * self
);

void JPC_VehicleConstraint_AddRef(
  JPC_VehicleConstraint_t * self
);

void JPC_VehicleConstraint_Release(
  JPC_VehicleConstraint_t * self
);

JPC_EConstraintType JPC_VehicleConstraint_GetType(
  JPC_VehicleConstraint_t * self
);

JPC_EConstraintSubType JPC_VehicleConstraint_GetSubType(
  JPC_VehicleConstraint_t * self
);

unsigned long JPC_VehicleConstraint_GetConstraintPriority(
  JPC_VehicleConstraint_t * self
);

void JPC_VehicleConstraint_SetConstraintPriority(
  JPC_VehicleConstraint_t * self,
  unsigned long inPriority
);

void JPC_VehicleConstraint_SetNumVelocityStepsOverride(
  JPC_VehicleConstraint_t * self,
  long inN
);

long JPC_VehicleConstraint_GetNumVelocityStepsOverride(
  JPC_VehicleConstraint_t * self
);

void JPC_VehicleConstraint_SetNumPositionStepsOverride(
  JPC_VehicleConstraint_t * self,
  long inN
);

long JPC_VehicleConstraint_GetNumPositionStepsOverride(
  JPC_VehicleConstraint_t * self
);

void JPC_VehicleConstraint_SetEnabled(
  JPC_VehicleConstraint_t * self,
  bool inEnabled
);

bool JPC_VehicleConstraint_GetEnabled(
  JPC_VehicleConstraint_t * self
);

bool JPC_VehicleConstraint_IsActive(
  JPC_VehicleConstraint_t * self
);

unsigned long long int JPC_VehicleConstraint_GetUserData(
  JPC_VehicleConstraint_t * self
);

void JPC_VehicleConstraint_SetUserData(
  JPC_VehicleConstraint_t * self,
  unsigned long long int inUserData
);

void JPC_VehicleConstraint_ResetWarmStart(
  JPC_VehicleConstraint_t * self
);

//endregion functions


#ifdef __cplusplus
}
#endif

