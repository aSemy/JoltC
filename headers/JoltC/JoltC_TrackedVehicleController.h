#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_TrackedVehicleController_t * JoltC_TrackedVehicleController_new(
  const JoltC_TrackedVehicleControllerSettings_t * inSettings,
  JoltC_VehicleConstraint_t * inConstraint
);

//endregion

//region functions

void JoltC_TrackedVehicleController_SetDriverInput(
  JoltC_TrackedVehicleController_t * self,
  float inForward,
  float inLeftRatio,
  float inRightRatio,
  float inBrake
);

void JoltC_TrackedVehicleController_SetForwardInput(
  JoltC_TrackedVehicleController_t * self,
  float inForward
);

float JoltC_TrackedVehicleController_GetForwardInput(
  JoltC_TrackedVehicleController_t * self
);

void JoltC_TrackedVehicleController_SetLeftRatio(
  JoltC_TrackedVehicleController_t * self,
  float inLeftRatio
);

float JoltC_TrackedVehicleController_GetLeftRatio(
  JoltC_TrackedVehicleController_t * self
);

void JoltC_TrackedVehicleController_SetRightRatio(
  JoltC_TrackedVehicleController_t * self,
  float inRightRatio
);

float JoltC_TrackedVehicleController_GetRightRatio(
  JoltC_TrackedVehicleController_t * self
);

void JoltC_TrackedVehicleController_SetBrakeInput(
  JoltC_TrackedVehicleController_t * self,
  float inBrake
);

float JoltC_TrackedVehicleController_GetBrakeInput(
  JoltC_TrackedVehicleController_t * self
);

JoltC_VehicleEngine_t * JoltC_TrackedVehicleController_GetEngine(
  JoltC_TrackedVehicleController_t * self
);

JoltC_VehicleTransmission_t * JoltC_TrackedVehicleController_GetTransmission(
  JoltC_TrackedVehicleController_t * self
);

size_t JoltC_TrackedVehicleController_GetTracks(
  JoltC_TrackedVehicleController_t * self,
  JoltC_VehicleTrack_t * * outValue
);

unsigned long JoltC_TrackedVehicleController_GetRefCount(
  JoltC_TrackedVehicleController_t * self
);

void JoltC_TrackedVehicleController_AddRef(
  JoltC_TrackedVehicleController_t * self
);

void JoltC_TrackedVehicleController_Release(
  JoltC_TrackedVehicleController_t * self
);

//endregion


#ifdef __cplusplus
}
#endif

