#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_MotorcycleController_t * JoltC_MotorcycleController_new(
  JoltC_MotorcycleControllerSettings_t * inSettings,
  JoltC_VehicleConstraint_t * inConstraint
);

//endregion

//region functions

float JoltC_MotorcycleController_GetWheelBase(
  JoltC_MotorcycleController_t * self
);

void JoltC_MotorcycleController_EnableLeanController(
  JoltC_MotorcycleController_t * self,
  bool inEnable
);

bool JoltC_MotorcycleController_IsLeanControllerEnabled(
  JoltC_MotorcycleController_t * self
);

void JoltC_MotorcycleController_SetDriverInput(
  JoltC_MotorcycleController_t * self,
  float inForward,
  float inRight,
  float inBrake,
  float inHandBrake
);

void JoltC_MotorcycleController_SetForwardInput(
  JoltC_MotorcycleController_t * self,
  float inForward
);

float JoltC_MotorcycleController_GetForwardInput(
  JoltC_MotorcycleController_t * self
);

void JoltC_MotorcycleController_SetRightInput(
  JoltC_MotorcycleController_t * self,
  float inRight
);

float JoltC_MotorcycleController_GetRightInput(
  JoltC_MotorcycleController_t * self
);

void JoltC_MotorcycleController_SetBrakeInput(
  JoltC_MotorcycleController_t * self,
  float inBrake
);

float JoltC_MotorcycleController_GetBrakeInput(
  JoltC_MotorcycleController_t * self
);

void JoltC_MotorcycleController_SetHandBrakeInput(
  JoltC_MotorcycleController_t * self,
  float inHandBrake
);

float JoltC_MotorcycleController_GetHandBrakeInput(
  JoltC_MotorcycleController_t * self
);

JoltC_VehicleEngine_t * JoltC_MotorcycleController_GetEngine(
  JoltC_MotorcycleController_t * self
);

JoltC_VehicleTransmission_t * JoltC_MotorcycleController_GetTransmission(
  JoltC_MotorcycleController_t * self
);

JoltC_ArrayVehicleDifferentialSettings_t * JoltC_MotorcycleController_GetDifferentials(
  JoltC_MotorcycleController_t * self
);

float JoltC_MotorcycleController_GetDifferentialLimitedSlipRatio(
  JoltC_MotorcycleController_t * self
);

void JoltC_MotorcycleController_SetDifferentialLimitedSlipRatio(
  JoltC_MotorcycleController_t * self,
  float inV
);

float JoltC_MotorcycleController_GetWheelSpeedAtClutch(
  JoltC_MotorcycleController_t * self
);

unsigned long JoltC_MotorcycleController_GetRefCount(
  JoltC_MotorcycleController_t * self
);

void JoltC_MotorcycleController_AddRef(
  JoltC_MotorcycleController_t * self
);

void JoltC_MotorcycleController_Release(
  JoltC_MotorcycleController_t * self
);

//endregion


#ifdef __cplusplus
}
#endif

