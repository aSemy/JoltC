#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JPC_TrackedVehicleControllerSettings_t * JPC_TrackedVehicleControllerSettings_new();

//endregion constructors

//region properties

JPC_VehicleEngineSettings_t * JPC_TrackedVehicleControllerSettings_mEngine_Get(
  JPC_TrackedVehicleControllerSettings_t * self
);

void JPC_TrackedVehicleControllerSettings_mEngine_Set(
  JPC_TrackedVehicleControllerSettings_t * self,
  JPC_VehicleEngineSettings_t * mEngine
);

JPC_VehicleTransmissionSettings_t * JPC_TrackedVehicleControllerSettings_mTransmission_Get(
  JPC_TrackedVehicleControllerSettings_t * self
);

void JPC_TrackedVehicleControllerSettings_mTransmission_Set(
  JPC_TrackedVehicleControllerSettings_t * self,
  JPC_VehicleTransmissionSettings_t * mTransmission
);

size_t JPC_TrackedVehicleControllerSettings_mTracks_Get(
  JPC_TrackedVehicleControllerSettings_t * self,
  JPC_VehicleTrackSettings_t * * outValue
);

void JPC_TrackedVehicleControllerSettings_mTracks_Set(
  JPC_TrackedVehicleControllerSettings_t * self,
  JPC_VehicleTrackSettings_t * * mTracks,
  size_t mTracksSize
);

//endregion properties


#ifdef __cplusplus
}
#endif

