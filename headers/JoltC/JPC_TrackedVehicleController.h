#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JPC_TrackedVehicleController_t * JPC_TrackedVehicleController_new(
  const JPC_TrackedVehicleControllerSettings_t * inSettings,
  JPC_VehicleConstraint_t * inConstraint
);

//endregion constructors

//region functions

void JPC_TrackedVehicleController_SetDriverInput(
  JPC_TrackedVehicleController_t * self,
  float inForward,
  float inLeftRatio,
  float inRightRatio,
  float inBrake
);

void JPC_TrackedVehicleController_SetForwardInput(
  JPC_TrackedVehicleController_t * self,
  float inForward
);

float JPC_TrackedVehicleController_GetForwardInput(
  JPC_TrackedVehicleController_t * self
);

void JPC_TrackedVehicleController_SetLeftRatio(
  JPC_TrackedVehicleController_t * self,
  float inLeftRatio
);

float JPC_TrackedVehicleController_GetLeftRatio(
  JPC_TrackedVehicleController_t * self
);

void JPC_TrackedVehicleController_SetRightRatio(
  JPC_TrackedVehicleController_t * self,
  float inRightRatio
);

float JPC_TrackedVehicleController_GetRightRatio(
  JPC_TrackedVehicleController_t * self
);

void JPC_TrackedVehicleController_SetBrakeInput(
  JPC_TrackedVehicleController_t * self,
  float inBrake
);

float JPC_TrackedVehicleController_GetBrakeInput(
  JPC_TrackedVehicleController_t * self
);

JPC_VehicleEngine_t * JPC_TrackedVehicleController_GetEngine(
  JPC_TrackedVehicleController_t * self
);

JPC_VehicleTransmission_t * JPC_TrackedVehicleController_GetTransmission(
  JPC_TrackedVehicleController_t * self
);

size_t JPC_TrackedVehicleController_GetTracks(
  JPC_TrackedVehicleController_t * self,
  JPC_VehicleTrack_t * * outValue
);

unsigned long JPC_TrackedVehicleController_GetRefCount(
  JPC_TrackedVehicleController_t * self
);

void JPC_TrackedVehicleController_AddRef(
  JPC_TrackedVehicleController_t * self
);

void JPC_TrackedVehicleController_Release(
  JPC_TrackedVehicleController_t * self
);

//endregion functions


#ifdef __cplusplus
}
#endif

