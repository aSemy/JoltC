#include "JoltC/JPC_MotorcycleController.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JPC_MotorcycleController_t * JPC_MotorcycleController_new(
  const JPC_MotorcycleControllerSettings_t * inSettings,
  JPC_VehicleConstraint_t * inConstraint
) {
  JPC_MotorcycleController_t * cInstance = new JPC_MotorcycleController_t();
  MotorcycleController * cppInstance = new MotorcycleController(
    *reinterpret_cast<MotorcycleControllerSettings *>(inSettings->obj),
    *reinterpret_cast<VehicleConstraint *>(inConstraint->obj)
  );
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion constructors

//region functions

float JPC_MotorcycleController_GetWheelBase(
  JPC_MotorcycleController_t * self
) {
  MotorcycleController * selfCpp = static_cast<MotorcycleController *>(self->obj);
  float result = selfCpp->GetWheelBase();
  return result;
};

void JPC_MotorcycleController_EnableLeanController(
  JPC_MotorcycleController_t * self,
  bool inEnable
) {
  MotorcycleController * selfCpp = static_cast<MotorcycleController *>(self->obj);
  
  selfCpp->EnableLeanController(
  inEnable
  );
};

bool JPC_MotorcycleController_IsLeanControllerEnabled(
  JPC_MotorcycleController_t * self
) {
  MotorcycleController * selfCpp = static_cast<MotorcycleController *>(self->obj);
  bool result = selfCpp->IsLeanControllerEnabled();
  return result;
};

void JPC_MotorcycleController_SetDriverInput(
  JPC_MotorcycleController_t * self,
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

void JPC_MotorcycleController_SetForwardInput(
  JPC_MotorcycleController_t * self,
  float inForward
) {
  MotorcycleController * selfCpp = static_cast<MotorcycleController *>(self->obj);
  
  selfCpp->SetForwardInput(
  inForward
  );
};

float JPC_MotorcycleController_GetForwardInput(
  JPC_MotorcycleController_t * self
) {
  MotorcycleController * selfCpp = static_cast<MotorcycleController *>(self->obj);
  float result = selfCpp->GetForwardInput();
  return result;
};

void JPC_MotorcycleController_SetRightInput(
  JPC_MotorcycleController_t * self,
  float inRight
) {
  MotorcycleController * selfCpp = static_cast<MotorcycleController *>(self->obj);
  
  selfCpp->SetRightInput(
  inRight
  );
};

float JPC_MotorcycleController_GetRightInput(
  JPC_MotorcycleController_t * self
) {
  MotorcycleController * selfCpp = static_cast<MotorcycleController *>(self->obj);
  float result = selfCpp->GetRightInput();
  return result;
};

void JPC_MotorcycleController_SetBrakeInput(
  JPC_MotorcycleController_t * self,
  float inBrake
) {
  MotorcycleController * selfCpp = static_cast<MotorcycleController *>(self->obj);
  
  selfCpp->SetBrakeInput(
  inBrake
  );
};

float JPC_MotorcycleController_GetBrakeInput(
  JPC_MotorcycleController_t * self
) {
  MotorcycleController * selfCpp = static_cast<MotorcycleController *>(self->obj);
  float result = selfCpp->GetBrakeInput();
  return result;
};

void JPC_MotorcycleController_SetHandBrakeInput(
  JPC_MotorcycleController_t * self,
  float inHandBrake
) {
  MotorcycleController * selfCpp = static_cast<MotorcycleController *>(self->obj);
  
  selfCpp->SetHandBrakeInput(
  inHandBrake
  );
};

float JPC_MotorcycleController_GetHandBrakeInput(
  JPC_MotorcycleController_t * self
) {
  MotorcycleController * selfCpp = static_cast<MotorcycleController *>(self->obj);
  float result = selfCpp->GetHandBrakeInput();
  return result;
};

JPC_VehicleEngine_t * JPC_MotorcycleController_GetEngine(
  JPC_MotorcycleController_t * self
) {
  MotorcycleController * selfCpp = static_cast<MotorcycleController *>(self->obj);
  VehicleEngine& resultRef = selfCpp->GetEngine();
  VehicleEngine * result = &resultRef;
  return reinterpret_cast<JPC_VehicleEngine_t *>(result);
};

JPC_VehicleTransmission_t * JPC_MotorcycleController_GetTransmission(
  JPC_MotorcycleController_t * self
) {
  MotorcycleController * selfCpp = static_cast<MotorcycleController *>(self->obj);
  VehicleTransmission& resultRef = selfCpp->GetTransmission();
  VehicleTransmission * result = &resultRef;
  return reinterpret_cast<JPC_VehicleTransmission_t *>(result);
};

JPC_ArrayVehicleDifferentialSettings_t * JPC_MotorcycleController_GetDifferentials(
  JPC_MotorcycleController_t * self
) {
  MotorcycleController * selfCpp = static_cast<MotorcycleController *>(self->obj);
  ArrayVehicleDifferentialSettings& resultRef = selfCpp->GetDifferentials();
  ArrayVehicleDifferentialSettings * result = &resultRef;
  return reinterpret_cast<JPC_ArrayVehicleDifferentialSettings_t *>(result);
};

float JPC_MotorcycleController_GetDifferentialLimitedSlipRatio(
  JPC_MotorcycleController_t * self
) {
  MotorcycleController * selfCpp = static_cast<MotorcycleController *>(self->obj);
  float result = selfCpp->GetDifferentialLimitedSlipRatio();
  return result;
};

void JPC_MotorcycleController_SetDifferentialLimitedSlipRatio(
  JPC_MotorcycleController_t * self,
  float inV
) {
  MotorcycleController * selfCpp = static_cast<MotorcycleController *>(self->obj);
  
  selfCpp->SetDifferentialLimitedSlipRatio(
  inV
  );
};

float JPC_MotorcycleController_GetWheelSpeedAtClutch(
  JPC_MotorcycleController_t * self
) {
  MotorcycleController * selfCpp = static_cast<MotorcycleController *>(self->obj);
  float result = selfCpp->GetWheelSpeedAtClutch();
  return result;
};

unsigned long JPC_MotorcycleController_GetRefCount(
  JPC_MotorcycleController_t * self
) {
  MotorcycleController * selfCpp = static_cast<MotorcycleController *>(self->obj);
  unsigned long result = selfCpp->GetRefCount();
  return result;
};

void JPC_MotorcycleController_AddRef(
  JPC_MotorcycleController_t * self
) {
  MotorcycleController * selfCpp = static_cast<MotorcycleController *>(self->obj);
  
  selfCpp->AddRef();
};

void JPC_MotorcycleController_Release(
  JPC_MotorcycleController_t * self
) {
  MotorcycleController * selfCpp = static_cast<MotorcycleController *>(self->obj);
  
  selfCpp->Release();
};

//endregion functions

#ifdef __cplusplus
}
#endif

