#include "JoltC/JoltC_TrackedVehicleControllerSettings.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

/**
  Construct a new `TrackedVehicleControllerSettings` instance.
 */
JoltC_TrackedVehicleControllerSettings_t * JoltC_TrackedVehicleControllerSettings_new() {
  JoltC_TrackedVehicleControllerSettings_t * cInstance = new JoltC_TrackedVehicleControllerSettings_t();
  TrackedVehicleControllerSettings * cppInstance = new TrackedVehicleControllerSettings();
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion

//region destructor

void JoltC_TrackedVehicleControllerSettings_destroy(
  JoltC_TrackedVehicleControllerSettings_t * self
){
  if (self == NULL) return;
  delete static_cast<TrackedVehicleControllerSettings *>(self->obj);
  free(self);
}

//endregion
//region properties

JoltC_VehicleEngineSettings_t * JoltC_TrackedVehicleControllerSettings_mEngine_Get(
  JoltC_TrackedVehicleControllerSettings_t * self
) {
  TrackedVehicleControllerSettings * selfCpp = static_cast<TrackedVehicleControllerSettings *>(self->obj);
  VehicleEngineSettings * resultPtr = new VehicleEngineSettings();
  *resultPtr = selfCpp->mEngine;
  JoltC_VehicleEngineSettings_t * result = new JoltC_VehicleEngineSettings_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

void JoltC_TrackedVehicleControllerSettings_mEngine_Set(
  JoltC_TrackedVehicleControllerSettings_t * self,
  JoltC_VehicleEngineSettings_t * mEngine
) {
  TrackedVehicleControllerSettings * selfCpp = static_cast<TrackedVehicleControllerSettings *>(self->obj);
  selfCpp->mEngine = *static_cast<VehicleEngineSettings *>(mEngine->obj);
}

JoltC_VehicleTransmissionSettings_t * JoltC_TrackedVehicleControllerSettings_mTransmission_Get(
  JoltC_TrackedVehicleControllerSettings_t * self
) {
  TrackedVehicleControllerSettings * selfCpp = static_cast<TrackedVehicleControllerSettings *>(self->obj);
  VehicleTransmissionSettings * resultPtr = new VehicleTransmissionSettings();
  *resultPtr = selfCpp->mTransmission;
  JoltC_VehicleTransmissionSettings_t * result = new JoltC_VehicleTransmissionSettings_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

void JoltC_TrackedVehicleControllerSettings_mTransmission_Set(
  JoltC_TrackedVehicleControllerSettings_t * self,
  JoltC_VehicleTransmissionSettings_t * mTransmission
) {
  TrackedVehicleControllerSettings * selfCpp = static_cast<TrackedVehicleControllerSettings *>(self->obj);
  selfCpp->mTransmission = *static_cast<VehicleTransmissionSettings *>(mTransmission->obj);
}

size_t JoltC_TrackedVehicleControllerSettings_mTracks_Get(
  JoltC_TrackedVehicleControllerSettings_t * self,
  JoltC_VehicleTrackSettings_t * * outValue
) {
  TrackedVehicleControllerSettings * selfCpp = static_cast<TrackedVehicleControllerSettings *>(self->obj);
  size_t resultSize = std::size(selfCpp->mTracks);
  // TODO get result array...
}

void JoltC_TrackedVehicleControllerSettings_mTracks_Set(
  JoltC_TrackedVehicleControllerSettings_t * self,
  JoltC_VehicleTrackSettings_t * * mTracks,
  size_t mTracksSize
) {
  TrackedVehicleControllerSettings * selfCpp = static_cast<TrackedVehicleControllerSettings *>(self->obj);
  for (size_t i = 0; i < mTracksSize; i++) {
    selfCpp->mTracks[i] = *(static_cast<VehicleTrackSettings *>(mTracks[i]->obj));
  };
}

//endregion


#ifdef __cplusplus
}
#endif
