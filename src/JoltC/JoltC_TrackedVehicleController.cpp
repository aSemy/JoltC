#include "JoltC/JPC_TrackedVehicleController.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JPC_TrackedVehicleController_t * JPC_TrackedVehicleController_new(
  const JPC_TrackedVehicleControllerSettings_t * inSettings,
  JPC_VehicleConstraint_t * inConstraint
) {
  JPC_TrackedVehicleController_t * cInstance = new JPC_TrackedVehicleController_t();
  TrackedVehicleController * cppInstance = new TrackedVehicleController(
    *reinterpret_cast<TrackedVehicleControllerSettings *>(inSettings->obj),
    *reinterpret_cast<VehicleConstraint *>(inConstraint->obj)
  );
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion constructors

//region functions

void JPC_TrackedVehicleController_SetDriverInput(
  JPC_TrackedVehicleController_t * self,
  float inForward,
  float inLeftRatio,
  float inRightRatio,
  float inBrake
) {
  TrackedVehicleController * selfCpp = static_cast<TrackedVehicleController *>(self->obj);
  
  selfCpp->SetDriverInput(
  inForward,
  inLeftRatio,
  inRightRatio,
  inBrake
  );
};

void JPC_TrackedVehicleController_SetForwardInput(
  JPC_TrackedVehicleController_t * self,
  float inForward
) {
  TrackedVehicleController * selfCpp = static_cast<TrackedVehicleController *>(self->obj);
  
  selfCpp->SetForwardInput(
  inForward
  );
};

float JPC_TrackedVehicleController_GetForwardInput(
  JPC_TrackedVehicleController_t * self
) {
  TrackedVehicleController * selfCpp = static_cast<TrackedVehicleController *>(self->obj);
  float result = selfCpp->GetForwardInput();
  return result;
};

void JPC_TrackedVehicleController_SetLeftRatio(
  JPC_TrackedVehicleController_t * self,
  float inLeftRatio
) {
  TrackedVehicleController * selfCpp = static_cast<TrackedVehicleController *>(self->obj);
  
  selfCpp->SetLeftRatio(
  inLeftRatio
  );
};

float JPC_TrackedVehicleController_GetLeftRatio(
  JPC_TrackedVehicleController_t * self
) {
  TrackedVehicleController * selfCpp = static_cast<TrackedVehicleController *>(self->obj);
  float result = selfCpp->GetLeftRatio();
  return result;
};

void JPC_TrackedVehicleController_SetRightRatio(
  JPC_TrackedVehicleController_t * self,
  float inRightRatio
) {
  TrackedVehicleController * selfCpp = static_cast<TrackedVehicleController *>(self->obj);
  
  selfCpp->SetRightRatio(
  inRightRatio
  );
};

float JPC_TrackedVehicleController_GetRightRatio(
  JPC_TrackedVehicleController_t * self
) {
  TrackedVehicleController * selfCpp = static_cast<TrackedVehicleController *>(self->obj);
  float result = selfCpp->GetRightRatio();
  return result;
};

void JPC_TrackedVehicleController_SetBrakeInput(
  JPC_TrackedVehicleController_t * self,
  float inBrake
) {
  TrackedVehicleController * selfCpp = static_cast<TrackedVehicleController *>(self->obj);
  
  selfCpp->SetBrakeInput(
  inBrake
  );
};

float JPC_TrackedVehicleController_GetBrakeInput(
  JPC_TrackedVehicleController_t * self
) {
  TrackedVehicleController * selfCpp = static_cast<TrackedVehicleController *>(self->obj);
  float result = selfCpp->GetBrakeInput();
  return result;
};

JPC_VehicleEngine_t * JPC_TrackedVehicleController_GetEngine(
  JPC_TrackedVehicleController_t * self
) {
  TrackedVehicleController * selfCpp = static_cast<TrackedVehicleController *>(self->obj);
  VehicleEngine& resultRef = selfCpp->GetEngine();
  VehicleEngine * result = &resultRef;
  return reinterpret_cast<JPC_VehicleEngine_t *>(result);
};

JPC_VehicleTransmission_t * JPC_TrackedVehicleController_GetTransmission(
  JPC_TrackedVehicleController_t * self
) {
  TrackedVehicleController * selfCpp = static_cast<TrackedVehicleController *>(self->obj);
  VehicleTransmission& resultRef = selfCpp->GetTransmission();
  VehicleTransmission * result = &resultRef;
  return reinterpret_cast<JPC_VehicleTransmission_t *>(result);
};

size_t JPC_TrackedVehicleController_GetTracks(
  JPC_TrackedVehicleController_t * self,
  JPC_VehicleTrack_t * * outValue
) {
  TrackedVehicleController * selfCpp = static_cast<TrackedVehicleController *>(self->obj);
  VehicleTrack * values = selfCpp->GetTracks();
  size_t resultSize = std::size(selfCpp->GetTracks());
  for (size_t i = 0; i < resultSize; ++i) {
    JPC_VehicleTrack_t * element = new JPC_VehicleTrack_t();
    element->obj = &(selfCpp->GetTracks()[i]);
    outValue[i] = element;
  };
  return resultSize;
};

unsigned long JPC_TrackedVehicleController_GetRefCount(
  JPC_TrackedVehicleController_t * self
) {
  TrackedVehicleController * selfCpp = static_cast<TrackedVehicleController *>(self->obj);
  unsigned long result = selfCpp->GetRefCount();
  return result;
};

void JPC_TrackedVehicleController_AddRef(
  JPC_TrackedVehicleController_t * self
) {
  TrackedVehicleController * selfCpp = static_cast<TrackedVehicleController *>(self->obj);
  
  selfCpp->AddRef();
};

void JPC_TrackedVehicleController_Release(
  JPC_TrackedVehicleController_t * self
) {
  TrackedVehicleController * selfCpp = static_cast<TrackedVehicleController *>(self->obj);
  
  selfCpp->Release();
};

//endregion functions

#ifdef __cplusplus
}
#endif

