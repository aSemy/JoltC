#include "JoltC/JoltC_TrackedVehicleControllerSettings.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_TrackedVehicleControllerSettings_t * JoltC_TrackedVehicleControllerSettings_new() {
  JoltC_TrackedVehicleControllerSettings_t * cInstance = new JoltC_TrackedVehicleControllerSettings_t();
  TrackedVehicleControllerSettings * cppInstance = new TrackedVehicleControllerSettings();
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion

//region properties

JoltC_VehicleEngineSettings_t * JoltC_TrackedVehicleControllerSettings_mEngine_Get(
  JoltC_TrackedVehicleControllerSettings_t * self
) {
  TrackedVehicleControllerSettings * selfCpp = static_cast<TrackedVehicleControllerSettings *>(self->obj);
  VehicleEngineSettings resultValue = selfCpp->mEngine;
  VehicleEngineSettings* result = new VehicleEngineSettings(resultValue);
  return reinterpret_cast<JoltC_VehicleEngineSettings_t *>(result);
};

void JoltC_TrackedVehicleControllerSettings_mEngine_Set(
  JoltC_TrackedVehicleControllerSettings_t * self,
  JoltC_VehicleEngineSettings_t * mEngine
) {
  TrackedVehicleControllerSettings * selfCpp = static_cast<TrackedVehicleControllerSettings *>(self->obj);
  selfCpp->mEngine = *reinterpret_cast<VehicleEngineSettings *>(mEngine->obj);
};

JoltC_VehicleTransmissionSettings_t * JoltC_TrackedVehicleControllerSettings_mTransmission_Get(
  JoltC_TrackedVehicleControllerSettings_t * self
) {
  TrackedVehicleControllerSettings * selfCpp = static_cast<TrackedVehicleControllerSettings *>(self->obj);
  VehicleTransmissionSettings resultValue = selfCpp->mTransmission;
  VehicleTransmissionSettings* result = new VehicleTransmissionSettings(resultValue);
  return reinterpret_cast<JoltC_VehicleTransmissionSettings_t *>(result);
};

void JoltC_TrackedVehicleControllerSettings_mTransmission_Set(
  JoltC_TrackedVehicleControllerSettings_t * self,
  JoltC_VehicleTransmissionSettings_t * mTransmission
) {
  TrackedVehicleControllerSettings * selfCpp = static_cast<TrackedVehicleControllerSettings *>(self->obj);
  selfCpp->mTransmission = *reinterpret_cast<VehicleTransmissionSettings *>(mTransmission->obj);
};

size_t JoltC_TrackedVehicleControllerSettings_mTracks_Get(
  JoltC_TrackedVehicleControllerSettings_t * self,
  JoltC_VehicleTrackSettings_t * * outValue
) {
  TrackedVehicleControllerSettings * selfCpp = static_cast<TrackedVehicleControllerSettings *>(self->obj);
  size_t resultSize = std::size(selfCpp->mTracks);
  // TODO get result array...
  return resultSize;
};

void JoltC_TrackedVehicleControllerSettings_mTracks_Set(
  JoltC_TrackedVehicleControllerSettings_t * self,
  JoltC_VehicleTrackSettings_t * * mTracks,
  size_t mTracksSize
) {
  TrackedVehicleControllerSettings * selfCpp = static_cast<TrackedVehicleControllerSettings *>(self->obj);
  for (size_t i = 0; i < mTracksSize; i++) {
    selfCpp->mTracks[i] = *(reinterpret_cast<VehicleTrackSettings *>(mTracks[i]->obj));
  };
};

//endregion

#ifdef __cplusplus
}
#endif

