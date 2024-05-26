#include "JoltC/JoltC_MotorcycleController.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_MotorcycleController_t * JoltC_MotorcycleController_new(
  const JoltC_MotorcycleControllerSettings_t * inSettings,
  JoltC_VehicleConstraint_t * inConstraint
) {
  JoltC_MotorcycleController_t * cInstance = new JoltC_MotorcycleController_t();
  MotorcycleController * cppInstance = new MotorcycleController(
    *reinterpret_cast<MotorcycleControllerSettings *>(inSettings->obj),
    *reinterpret_cast<VehicleConstraint *>(inConstraint->obj)
  );
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion

//region functions

float JoltC_MotorcycleController_GetWheelBase(
  JoltC_MotorcycleController_t * self
) {
  MotorcycleController * selfCpp = static_cast<MotorcycleController *>(self->obj);
  float result = selfCpp->GetWheelBase();
  return result;
};

void JoltC_MotorcycleController_EnableLeanController(
  JoltC_MotorcycleController_t * self,
  bool inEnable
) {
  MotorcycleController * selfCpp = static_cast<MotorcycleController *>(self->obj);
  
  selfCpp->EnableLeanController(
  inEnable
  );
};

bool JoltC_MotorcycleController_IsLeanControllerEnabled(
  JoltC_MotorcycleController_t * self
) {
  MotorcycleController * selfCpp = static_cast<MotorcycleController *>(self->obj);
  bool result = selfCpp->IsLeanControllerEnabled();
  return result;
};

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
};

void JoltC_MotorcycleController_SetForwardInput(
  JoltC_MotorcycleController_t * self,
  float inForward
) {
  MotorcycleController * selfCpp = static_cast<MotorcycleController *>(self->obj);
  
  selfCpp->SetForwardInput(
  inForward
  );
};

float JoltC_MotorcycleController_GetForwardInput(
  JoltC_MotorcycleController_t * self
) {
  MotorcycleController * selfCpp = static_cast<MotorcycleController *>(self->obj);
  float result = selfCpp->GetForwardInput();
  return result;
};

void JoltC_MotorcycleController_SetRightInput(
  JoltC_MotorcycleController_t * self,
  float inRight
) {
  MotorcycleController * selfCpp = static_cast<MotorcycleController *>(self->obj);
  
  selfCpp->SetRightInput(
  inRight
  );
};

float JoltC_MotorcycleController_GetRightInput(
  JoltC_MotorcycleController_t * self
) {
  MotorcycleController * selfCpp = static_cast<MotorcycleController *>(self->obj);
  float result = selfCpp->GetRightInput();
  return result;
};

void JoltC_MotorcycleController_SetBrakeInput(
  JoltC_MotorcycleController_t * self,
  float inBrake
) {
  MotorcycleController * selfCpp = static_cast<MotorcycleController *>(self->obj);
  
  selfCpp->SetBrakeInput(
  inBrake
  );
};

float JoltC_MotorcycleController_GetBrakeInput(
  JoltC_MotorcycleController_t * self
) {
  MotorcycleController * selfCpp = static_cast<MotorcycleController *>(self->obj);
  float result = selfCpp->GetBrakeInput();
  return result;
};

void JoltC_MotorcycleController_SetHandBrakeInput(
  JoltC_MotorcycleController_t * self,
  float inHandBrake
) {
  MotorcycleController * selfCpp = static_cast<MotorcycleController *>(self->obj);
  
  selfCpp->SetHandBrakeInput(
  inHandBrake
  );
};

float JoltC_MotorcycleController_GetHandBrakeInput(
  JoltC_MotorcycleController_t * self
) {
  MotorcycleController * selfCpp = static_cast<MotorcycleController *>(self->obj);
  float result = selfCpp->GetHandBrakeInput();
  return result;
};

JoltC_VehicleEngine_t * JoltC_MotorcycleController_GetEngine(
  JoltC_MotorcycleController_t * self
) {
  MotorcycleController * selfCpp = static_cast<MotorcycleController *>(self->obj);
  VehicleEngine& resultRef = selfCpp->GetEngine();
  VehicleEngine * result = &resultRef;
  return reinterpret_cast<JoltC_VehicleEngine_t *>(result);
};

JoltC_VehicleTransmission_t * JoltC_MotorcycleController_GetTransmission(
  JoltC_MotorcycleController_t * self
) {
  MotorcycleController * selfCpp = static_cast<MotorcycleController *>(self->obj);
  VehicleTransmission& resultRef = selfCpp->GetTransmission();
  VehicleTransmission * result = &resultRef;
  return reinterpret_cast<JoltC_VehicleTransmission_t *>(result);
};

JoltC_ArrayVehicleDifferentialSettings_t * JoltC_MotorcycleController_GetDifferentials(
  JoltC_MotorcycleController_t * self
) {
  MotorcycleController * selfCpp = static_cast<MotorcycleController *>(self->obj);
  ArrayVehicleDifferentialSettings& resultRef = selfCpp->GetDifferentials();
  ArrayVehicleDifferentialSettings * result = &resultRef;
  return reinterpret_cast<JoltC_ArrayVehicleDifferentialSettings_t *>(result);
};

float JoltC_MotorcycleController_GetDifferentialLimitedSlipRatio(
  JoltC_MotorcycleController_t * self
) {
  MotorcycleController * selfCpp = static_cast<MotorcycleController *>(self->obj);
  float result = selfCpp->GetDifferentialLimitedSlipRatio();
  return result;
};

void JoltC_MotorcycleController_SetDifferentialLimitedSlipRatio(
  JoltC_MotorcycleController_t * self,
  float inV
) {
  MotorcycleController * selfCpp = static_cast<MotorcycleController *>(self->obj);
  
  selfCpp->SetDifferentialLimitedSlipRatio(
  inV
  );
};

float JoltC_MotorcycleController_GetWheelSpeedAtClutch(
  JoltC_MotorcycleController_t * self
) {
  MotorcycleController * selfCpp = static_cast<MotorcycleController *>(self->obj);
  float result = selfCpp->GetWheelSpeedAtClutch();
  return result;
};

unsigned long JoltC_MotorcycleController_GetRefCount(
  JoltC_MotorcycleController_t * self
) {
  MotorcycleController * selfCpp = static_cast<MotorcycleController *>(self->obj);
  unsigned long result = selfCpp->GetRefCount();
  return result;
};

void JoltC_MotorcycleController_AddRef(
  JoltC_MotorcycleController_t * self
) {
  MotorcycleController * selfCpp = static_cast<MotorcycleController *>(self->obj);
  
  selfCpp->AddRef();
};

void JoltC_MotorcycleController_Release(
  JoltC_MotorcycleController_t * self
) {
  MotorcycleController * selfCpp = static_cast<MotorcycleController *>(self->obj);
  
  selfCpp->Release();
};

//endregion

#ifdef __cplusplus
}
#endif

