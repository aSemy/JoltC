#include "JoltC/JoltC_MotorcycleController.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

/**
  Construct a new `MotorcycleController` instance.
 */
JoltC_MotorcycleController_t * JoltC_MotorcycleController_new(
  JoltC_MotorcycleControllerSettings_t * inSettings,
  JoltC_VehicleConstraint_t * inConstraint
) {
  const MotorcycleControllerSettings * inSettingsCpp = static_cast<const MotorcycleControllerSettings *>(inSettings->obj);
  VehicleConstraint * inConstraintCpp = static_cast<VehicleConstraint *>(inConstraint->obj);
  JoltC_MotorcycleController_t * cInstance = new JoltC_MotorcycleController_t();
  MotorcycleController * cppInstance = new MotorcycleController(
    *inSettingsCpp,
    *inConstraintCpp
  );
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion

//region destructor

void JoltC_MotorcycleController_destroy(
  JoltC_MotorcycleController_t * self
){
  if (self == NULL) return;
  delete static_cast<MotorcycleController *>(self->obj);
  free(self);
}

//endregion
//region functions

float JoltC_MotorcycleController_GetWheelBase(
  JoltC_MotorcycleController_t * self
) {
  MotorcycleController * selfCpp = static_cast<MotorcycleController *>(self->obj);
  return selfCpp->GetWheelBase();
}

void JoltC_MotorcycleController_EnableLeanController(
  JoltC_MotorcycleController_t * self,
  bool inEnable
) {
  MotorcycleController * selfCpp = static_cast<MotorcycleController *>(self->obj);
  selfCpp->EnableLeanController(
    inEnable
  );
}

bool JoltC_MotorcycleController_IsLeanControllerEnabled(
  JoltC_MotorcycleController_t * self
) {
  MotorcycleController * selfCpp = static_cast<MotorcycleController *>(self->obj);
  return selfCpp->IsLeanControllerEnabled();
}

void JoltC_MotorcycleController_SetDriverInput(
  JoltC_MotorcycleController_t * self,
  float inForward,
  float inRight,
  float inBrake,
  float inHandBrake
) {
  MotorcycleController * selfCpp = static_cast<MotorcycleController *>(self->obj);
  selfCpp->SetDriverInput(
    inForward,
    inRight,
    inBrake,
    inHandBrake
  );
}

void JoltC_MotorcycleController_SetForwardInput(
  JoltC_MotorcycleController_t * self,
  float inForward
) {
  MotorcycleController * selfCpp = static_cast<MotorcycleController *>(self->obj);
  selfCpp->SetForwardInput(
    inForward
  );
}

float JoltC_MotorcycleController_GetForwardInput(
  JoltC_MotorcycleController_t * self
) {
  MotorcycleController * selfCpp = static_cast<MotorcycleController *>(self->obj);
  return selfCpp->GetForwardInput();
}

void JoltC_MotorcycleController_SetRightInput(
  JoltC_MotorcycleController_t * self,
  float inRight
) {
  MotorcycleController * selfCpp = static_cast<MotorcycleController *>(self->obj);
  selfCpp->SetRightInput(
    inRight
  );
}

float JoltC_MotorcycleController_GetRightInput(
  JoltC_MotorcycleController_t * self
) {
  MotorcycleController * selfCpp = static_cast<MotorcycleController *>(self->obj);
  return selfCpp->GetRightInput();
}

void JoltC_MotorcycleController_SetBrakeInput(
  JoltC_MotorcycleController_t * self,
  float inBrake
) {
  MotorcycleController * selfCpp = static_cast<MotorcycleController *>(self->obj);
  selfCpp->SetBrakeInput(
    inBrake
  );
}

float JoltC_MotorcycleController_GetBrakeInput(
  JoltC_MotorcycleController_t * self
) {
  MotorcycleController * selfCpp = static_cast<MotorcycleController *>(self->obj);
  return selfCpp->GetBrakeInput();
}

void JoltC_MotorcycleController_SetHandBrakeInput(
  JoltC_MotorcycleController_t * self,
  float inHandBrake
) {
  MotorcycleController * selfCpp = static_cast<MotorcycleController *>(self->obj);
  selfCpp->SetHandBrakeInput(
    inHandBrake
  );
}

float JoltC_MotorcycleController_GetHandBrakeInput(
  JoltC_MotorcycleController_t * self
) {
  MotorcycleController * selfCpp = static_cast<MotorcycleController *>(self->obj);
  return selfCpp->GetHandBrakeInput();
}

JoltC_VehicleEngine_t * JoltC_MotorcycleController_GetEngine(
  JoltC_MotorcycleController_t * self
) {
  MotorcycleController * selfCpp = static_cast<MotorcycleController *>(self->obj);
  VehicleEngine* resultRef = &selfCpp->GetEngine();
  JoltC_VehicleEngine_t* result = new JoltC_VehicleEngine_t();
  result->obj = reinterpret_cast<void*>(resultRef);
  return result;
}

JoltC_VehicleTransmission_t * JoltC_MotorcycleController_GetTransmission(
  JoltC_MotorcycleController_t * self
) {
  MotorcycleController * selfCpp = static_cast<MotorcycleController *>(self->obj);
  VehicleTransmission* resultRef = &selfCpp->GetTransmission();
  JoltC_VehicleTransmission_t* result = new JoltC_VehicleTransmission_t();
  result->obj = reinterpret_cast<void*>(resultRef);
  return result;
}

JoltC_ArrayVehicleDifferentialSettings_t * JoltC_MotorcycleController_GetDifferentials(
  JoltC_MotorcycleController_t * self
) {
  MotorcycleController * selfCpp = static_cast<MotorcycleController *>(self->obj);
  ArrayVehicleDifferentialSettings* resultRef = &selfCpp->GetDifferentials();
  JoltC_ArrayVehicleDifferentialSettings_t* result = new JoltC_ArrayVehicleDifferentialSettings_t();
  result->obj = reinterpret_cast<void*>(resultRef);
  return result;
}

float JoltC_MotorcycleController_GetDifferentialLimitedSlipRatio(
  JoltC_MotorcycleController_t * self
) {
  MotorcycleController * selfCpp = static_cast<MotorcycleController *>(self->obj);
  return selfCpp->GetDifferentialLimitedSlipRatio();
}

void JoltC_MotorcycleController_SetDifferentialLimitedSlipRatio(
  JoltC_MotorcycleController_t * self,
  float inV
) {
  MotorcycleController * selfCpp = static_cast<MotorcycleController *>(self->obj);
  selfCpp->SetDifferentialLimitedSlipRatio(
    inV
  );
}

float JoltC_MotorcycleController_GetWheelSpeedAtClutch(
  JoltC_MotorcycleController_t * self
) {
  MotorcycleController * selfCpp = static_cast<MotorcycleController *>(self->obj);
  return selfCpp->GetWheelSpeedAtClutch();
}

unsigned long JoltC_MotorcycleController_GetRefCount(
  JoltC_MotorcycleController_t * self
) {
  MotorcycleController * selfCpp = static_cast<MotorcycleController *>(self->obj);
  return selfCpp->GetRefCount();
}

void JoltC_MotorcycleController_AddRef(
  JoltC_MotorcycleController_t * self
) {
  MotorcycleController * selfCpp = static_cast<MotorcycleController *>(self->obj);
  selfCpp->AddRef();
}

void JoltC_MotorcycleController_Release(
  JoltC_MotorcycleController_t * self
) {
  MotorcycleController * selfCpp = static_cast<MotorcycleController *>(self->obj);
  selfCpp->Release();
}

//endregion


#ifdef __cplusplus
}
#endif
