#pragma once
#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_WheeledVehicleController_t * JoltC_WheeledVehicleController_new(
  JoltC_WheeledVehicleControllerSettings_t * inSettings,
  JoltC_VehicleConstraint_t * inConstraint
);

//endregion

//region destructor

void JoltC_WheeledVehicleController_destroy(
  JoltC_WheeledVehicleController_t * self
);

//endregion
//region converters

/**
 * Convert an instance of JoltC_MotorcycleController_t into JoltC_WheeledVehicleController_t.
 */
JoltC_WheeledVehicleController_t * JoltC_WheeledVehicleController_From_MotorcycleController(
  JoltC_MotorcycleController_t * subtype
);

//endregion

//region functions

void JoltC_WheeledVehicleController_SetDriverInput(
  JoltC_WheeledVehicleController_t * self,
  float inForward,
  float inRight,
  float inBrake,
  float inHandBrake
);

void JoltC_WheeledVehicleController_SetForwardInput(
  JoltC_WheeledVehicleController_t * self,
  float inForward
);

float JoltC_WheeledVehicleController_GetForwardInput(
  JoltC_WheeledVehicleController_t * self
);

void JoltC_WheeledVehicleController_SetRightInput(
  JoltC_WheeledVehicleController_t * self,
  float inRight
);

float JoltC_WheeledVehicleController_GetRightInput(
  JoltC_WheeledVehicleController_t * self
);

void JoltC_WheeledVehicleController_SetBrakeInput(
  JoltC_WheeledVehicleController_t * self,
  float inBrake
);

float JoltC_WheeledVehicleController_GetBrakeInput(
  JoltC_WheeledVehicleController_t * self
);

void JoltC_WheeledVehicleController_SetHandBrakeInput(
  JoltC_WheeledVehicleController_t * self,
  float inHandBrake
);

float JoltC_WheeledVehicleController_GetHandBrakeInput(
  JoltC_WheeledVehicleController_t * self
);

JoltC_VehicleEngine_t * JoltC_WheeledVehicleController_GetEngine(
  JoltC_WheeledVehicleController_t * self
);

JoltC_VehicleTransmission_t * JoltC_WheeledVehicleController_GetTransmission(
  JoltC_WheeledVehicleController_t * self
);

JoltC_ArrayVehicleDifferentialSettings_t * JoltC_WheeledVehicleController_GetDifferentials(
  JoltC_WheeledVehicleController_t * self
);

float JoltC_WheeledVehicleController_GetDifferentialLimitedSlipRatio(
  JoltC_WheeledVehicleController_t * self
);

void JoltC_WheeledVehicleController_SetDifferentialLimitedSlipRatio(
  JoltC_WheeledVehicleController_t * self,
  float inV
);

float JoltC_WheeledVehicleController_GetWheelSpeedAtClutch(
  JoltC_WheeledVehicleController_t * self
);

unsigned long JoltC_WheeledVehicleController_GetRefCount(
  JoltC_WheeledVehicleController_t * self
);

void JoltC_WheeledVehicleController_AddRef(
  JoltC_WheeledVehicleController_t * self
);

void JoltC_WheeledVehicleController_Release(
  JoltC_WheeledVehicleController_t * self
);

//endregion


#ifdef __cplusplus
}
#endif
