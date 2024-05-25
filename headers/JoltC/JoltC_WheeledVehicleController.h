#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_WheeledVehicleController_t * JoltC_WheeledVehicleController_new(
  const JoltC_WheeledVehicleControllerSettings_t * inSettings,
  JoltC_VehicleConstraint_t * inConstraint,
  char** outErrMsg
);

//endregion constructors

//region functions

void JoltC_WheeledVehicleController_SetDriverInput(
  JoltC_WheeledVehicleController_t * self,
  float inForward,
  float inRight,
  float inBrake,
  float inHandBrake,
  char** outErrMsg
);

void JoltC_WheeledVehicleController_SetForwardInput(
  JoltC_WheeledVehicleController_t * self,
  float inForward,
  char** outErrMsg
);

float JoltC_WheeledVehicleController_GetForwardInput(
  JoltC_WheeledVehicleController_t * self,
  char** outErrMsg
);

void JoltC_WheeledVehicleController_SetRightInput(
  JoltC_WheeledVehicleController_t * self,
  float inRight,
  char** outErrMsg
);

float JoltC_WheeledVehicleController_GetRightInput(
  JoltC_WheeledVehicleController_t * self,
  char** outErrMsg
);

void JoltC_WheeledVehicleController_SetBrakeInput(
  JoltC_WheeledVehicleController_t * self,
  float inBrake,
  char** outErrMsg
);

float JoltC_WheeledVehicleController_GetBrakeInput(
  JoltC_WheeledVehicleController_t * self,
  char** outErrMsg
);

void JoltC_WheeledVehicleController_SetHandBrakeInput(
  JoltC_WheeledVehicleController_t * self,
  float inHandBrake,
  char** outErrMsg
);

float JoltC_WheeledVehicleController_GetHandBrakeInput(
  JoltC_WheeledVehicleController_t * self,
  char** outErrMsg
);

JoltC_VehicleEngine_t * JoltC_WheeledVehicleController_GetEngine(
  JoltC_WheeledVehicleController_t * self,
  char** outErrMsg
);

JoltC_VehicleTransmission_t * JoltC_WheeledVehicleController_GetTransmission(
  JoltC_WheeledVehicleController_t * self,
  char** outErrMsg
);

JoltC_ArrayVehicleDifferentialSettings_t * JoltC_WheeledVehicleController_GetDifferentials(
  JoltC_WheeledVehicleController_t * self,
  char** outErrMsg
);

float JoltC_WheeledVehicleController_GetDifferentialLimitedSlipRatio(
  JoltC_WheeledVehicleController_t * self,
  char** outErrMsg
);

void JoltC_WheeledVehicleController_SetDifferentialLimitedSlipRatio(
  JoltC_WheeledVehicleController_t * self,
  float inV,
  char** outErrMsg
);

float JoltC_WheeledVehicleController_GetWheelSpeedAtClutch(
  JoltC_WheeledVehicleController_t * self,
  char** outErrMsg
);

unsigned long JoltC_WheeledVehicleController_GetRefCount(
  JoltC_WheeledVehicleController_t * self,
  char** outErrMsg
);

void JoltC_WheeledVehicleController_AddRef(
  JoltC_WheeledVehicleController_t * self,
  char** outErrMsg
);

void JoltC_WheeledVehicleController_Release(
  JoltC_WheeledVehicleController_t * self,
  char** outErrMsg
);

//endregion functions


#ifdef __cplusplus
}
#endif

