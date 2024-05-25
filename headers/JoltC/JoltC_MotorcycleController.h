#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JPC_MotorcycleController_t * JPC_MotorcycleController_new(
  const JPC_MotorcycleControllerSettings_t * inSettings,
  JPC_VehicleConstraint_t * inConstraint
);

//endregion constructors

//region functions

float JPC_MotorcycleController_GetWheelBase(
  JPC_MotorcycleController_t * self
);

void JPC_MotorcycleController_EnableLeanController(
  JPC_MotorcycleController_t * self,
  bool inEnable
);

bool JPC_MotorcycleController_IsLeanControllerEnabled(
  JPC_MotorcycleController_t * self
);

void JPC_MotorcycleController_SetDriverInput(
  JPC_MotorcycleController_t * self,
  float inForward,
  float inRight,
  float inBrake,
  float inHandBrake
);

void JPC_MotorcycleController_SetForwardInput(
  JPC_MotorcycleController_t * self,
  float inForward
);

float JPC_MotorcycleController_GetForwardInput(
  JPC_MotorcycleController_t * self
);

void JPC_MotorcycleController_SetRightInput(
  JPC_MotorcycleController_t * self,
  float inRight
);

float JPC_MotorcycleController_GetRightInput(
  JPC_MotorcycleController_t * self
);

void JPC_MotorcycleController_SetBrakeInput(
  JPC_MotorcycleController_t * self,
  float inBrake
);

float JPC_MotorcycleController_GetBrakeInput(
  JPC_MotorcycleController_t * self
);

void JPC_MotorcycleController_SetHandBrakeInput(
  JPC_MotorcycleController_t * self,
  float inHandBrake
);

float JPC_MotorcycleController_GetHandBrakeInput(
  JPC_MotorcycleController_t * self
);

JPC_VehicleEngine_t * JPC_MotorcycleController_GetEngine(
  JPC_MotorcycleController_t * self
);

JPC_VehicleTransmission_t * JPC_MotorcycleController_GetTransmission(
  JPC_MotorcycleController_t * self
);

JPC_ArrayVehicleDifferentialSettings_t * JPC_MotorcycleController_GetDifferentials(
  JPC_MotorcycleController_t * self
);

float JPC_MotorcycleController_GetDifferentialLimitedSlipRatio(
  JPC_MotorcycleController_t * self
);

void JPC_MotorcycleController_SetDifferentialLimitedSlipRatio(
  JPC_MotorcycleController_t * self,
  float inV
);

float JPC_MotorcycleController_GetWheelSpeedAtClutch(
  JPC_MotorcycleController_t * self
);

unsigned long JPC_MotorcycleController_GetRefCount(
  JPC_MotorcycleController_t * self
);

void JPC_MotorcycleController_AddRef(
  JPC_MotorcycleController_t * self
);

void JPC_MotorcycleController_Release(
  JPC_MotorcycleController_t * self
);

//endregion functions


#ifdef __cplusplus
}
#endif

