#include "JoltC/JPC_TrackedVehicleControllerSettings.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JPC_TrackedVehicleControllerSettings_t * JPC_TrackedVehicleControllerSettings_new() {
  JPC_TrackedVehicleControllerSettings_t * cInstance = new JPC_TrackedVehicleControllerSettings_t();
  TrackedVehicleControllerSettings * cppInstance = new TrackedVehicleControllerSettings();
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion constructors

//region properties

JPC_VehicleEngineSettings_t * JPC_TrackedVehicleControllerSettings_mEngine_Get(
  JPC_TrackedVehicleControllerSettings_t * self
) {
  TrackedVehicleControllerSettings * selfCpp = static_cast<TrackedVehicleControllerSettings *>(self->obj);
  VehicleEngineSettings resultValue = selfCpp->mEngine;
  VehicleEngineSettings* result = new VehicleEngineSettings(resultValue);
  return reinterpret_cast<JPC_VehicleEngineSettings_t *>(result);
};

void JPC_TrackedVehicleControllerSettings_mEngine_Set(
  JPC_TrackedVehicleControllerSettings_t * self,
  JPC_VehicleEngineSettings_t * mEngine
) {
  TrackedVehicleControllerSettings * selfCpp = static_cast<TrackedVehicleControllerSettings *>(self->obj);
  selfCpp->mEngine = *reinterpret_cast<VehicleEngineSettings *>(mEngine->obj);
};

JPC_VehicleTransmissionSettings_t * JPC_TrackedVehicleControllerSettings_mTransmission_Get(
  JPC_TrackedVehicleControllerSettings_t * self
) {
  TrackedVehicleControllerSettings * selfCpp = static_cast<TrackedVehicleControllerSettings *>(self->obj);
  VehicleTransmissionSettings resultValue = selfCpp->mTransmission;
  VehicleTransmissionSettings* result = new VehicleTransmissionSettings(resultValue);
  return reinterpret_cast<JPC_VehicleTransmissionSettings_t *>(result);
};

void JPC_TrackedVehicleControllerSettings_mTransmission_Set(
  JPC_TrackedVehicleControllerSettings_t * self,
  JPC_VehicleTransmissionSettings_t * mTransmission
) {
  TrackedVehicleControllerSettings * selfCpp = static_cast<TrackedVehicleControllerSettings *>(self->obj);
  selfCpp->mTransmission = *reinterpret_cast<VehicleTransmissionSettings *>(mTransmission->obj);
};

size_t JPC_TrackedVehicleControllerSettings_mTracks_Get(
  JPC_TrackedVehicleControllerSettings_t * self,
  JPC_VehicleTrackSettings_t * * outValue
) {
  TrackedVehicleControllerSettings * selfCpp = static_cast<TrackedVehicleControllerSettings *>(self->obj);
  size_t resultSize = std::size(selfCpp->mTracks);
  // TODO get result array...
  return resultSize;
};

void JPC_TrackedVehicleControllerSettings_mTracks_Set(
  JPC_TrackedVehicleControllerSettings_t * self,
  JPC_VehicleTrackSettings_t * * mTracks,
  size_t mTracksSize
) {
  TrackedVehicleControllerSettings * selfCpp = static_cast<TrackedVehicleControllerSettings *>(self->obj);
  for (size_t i = 0; i < mTracksSize; i++) {
    selfCpp->mTracks[i] = *(reinterpret_cast<VehicleTrackSettings *>(mTracks[i]->obj));
  };
};

//endregion properties

#ifdef __cplusplus
}
#endif

