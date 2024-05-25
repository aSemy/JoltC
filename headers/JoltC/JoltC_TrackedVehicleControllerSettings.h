#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_TrackedVehicleControllerSettings_t * JoltC_TrackedVehicleControllerSettings_new(
  char** outErrMsg
);

//endregion constructors

//region properties

JoltC_VehicleEngineSettings_t * JoltC_TrackedVehicleControllerSettings_mEngine_Get(
  JoltC_TrackedVehicleControllerSettings_t * self,
  char** outErrMsg
);

void JoltC_TrackedVehicleControllerSettings_mEngine_Set(
  JoltC_TrackedVehicleControllerSettings_t * self,
  JoltC_VehicleEngineSettings_t * mEngine,
  char** outErrMsg
);

JoltC_VehicleTransmissionSettings_t * JoltC_TrackedVehicleControllerSettings_mTransmission_Get(
  JoltC_TrackedVehicleControllerSettings_t * self,
  char** outErrMsg
);

void JoltC_TrackedVehicleControllerSettings_mTransmission_Set(
  JoltC_TrackedVehicleControllerSettings_t * self,
  JoltC_VehicleTransmissionSettings_t * mTransmission,
  char** outErrMsg
);

size_t JoltC_TrackedVehicleControllerSettings_mTracks_Get(
  JoltC_TrackedVehicleControllerSettings_t * self,
  JoltC_VehicleTrackSettings_t * * outValue,
  char** outErrMsg
);

void JoltC_TrackedVehicleControllerSettings_mTracks_Set(
  JoltC_TrackedVehicleControllerSettings_t * self,
  JoltC_VehicleTrackSettings_t * * mTracks,
  size_t mTracksSize,
  char** outErrMsg
);

//endregion properties


#ifdef __cplusplus
}
#endif

