#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JPC_WheeledVehicleController_t * JPC_WheeledVehicleController_new(
  const JPC_WheeledVehicleControllerSettings_t * inSettings,
  JPC_VehicleConstraint_t * inConstraint
);

//endregion constructors

//region functions

void JPC_WheeledVehicleController_SetDriverInput(
  JPC_WheeledVehicleController_t * self,
  float inForward,
  float inRight,
  float inBrake,
  float inHandBrake
);

void JPC_WheeledVehicleController_SetForwardInput(
  JPC_WheeledVehicleController_t * self,
  float inForward
);

float JPC_WheeledVehicleController_GetForwardInput(
  JPC_WheeledVehicleController_t * self
);

void JPC_WheeledVehicleController_SetRightInput(
  JPC_WheeledVehicleController_t * self,
  float inRight
);

float JPC_WheeledVehicleController_GetRightInput(
  JPC_WheeledVehicleController_t * self
);

void JPC_WheeledVehicleController_SetBrakeInput(
  JPC_WheeledVehicleController_t * self,
  float inBrake
);

float JPC_WheeledVehicleController_GetBrakeInput(
  JPC_WheeledVehicleController_t * self
);

void JPC_WheeledVehicleController_SetHandBrakeInput(
  JPC_WheeledVehicleController_t * self,
  float inHandBrake
);

float JPC_WheeledVehicleController_GetHandBrakeInput(
  JPC_WheeledVehicleController_t * self
);

JPC_VehicleEngine_t * JPC_WheeledVehicleController_GetEngine(
  JPC_WheeledVehicleController_t * self
);

JPC_VehicleTransmission_t * JPC_WheeledVehicleController_GetTransmission(
  JPC_WheeledVehicleController_t * self
);

JPC_ArrayVehicleDifferentialSettings_t * JPC_WheeledVehicleController_GetDifferentials(
  JPC_WheeledVehicleController_t * self
);

float JPC_WheeledVehicleController_GetDifferentialLimitedSlipRatio(
  JPC_WheeledVehicleController_t * self
);

void JPC_WheeledVehicleController_SetDifferentialLimitedSlipRatio(
  JPC_WheeledVehicleController_t * self,
  float inV
);

float JPC_WheeledVehicleController_GetWheelSpeedAtClutch(
  JPC_WheeledVehicleController_t * self
);

unsigned long JPC_WheeledVehicleController_GetRefCount(
  JPC_WheeledVehicleController_t * self
);

void JPC_WheeledVehicleController_AddRef(
  JPC_WheeledVehicleController_t * self
);

void JPC_WheeledVehicleController_Release(
  JPC_WheeledVehicleController_t * self
);

//endregion functions


#ifdef __cplusplus
}
#endif

