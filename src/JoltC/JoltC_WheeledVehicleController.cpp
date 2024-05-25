#include "JoltC/JPC_WheeledVehicleController.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JPC_WheeledVehicleController_t * JPC_WheeledVehicleController_new(
  const JPC_WheeledVehicleControllerSettings_t * inSettings,
  JPC_VehicleConstraint_t * inConstraint
) {
  JPC_WheeledVehicleController_t * cInstance = new JPC_WheeledVehicleController_t();
  WheeledVehicleController * cppInstance = new WheeledVehicleController(
    *reinterpret_cast<WheeledVehicleControllerSettings *>(inSettings->obj),
    *reinterpret_cast<VehicleConstraint *>(inConstraint->obj)
  );
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion constructors

//region functions

void JPC_WheeledVehicleController_SetDriverInput(
  JPC_WheeledVehicleController_t * self,
  float inForward,
  float inRight,
  float inBrake,
  float inHandBrake
) {
  WheeledVehicleController * selfCpp = static_cast<WheeledVehicleController *>(self->obj);
  
  selfCpp->SetDriverInput(
  inForward,
  inRight,
  inBrake,
  inHandBrake
  );
};

void JPC_WheeledVehicleController_SetForwardInput(
  JPC_WheeledVehicleController_t * self,
  float inForward
) {
  WheeledVehicleController * selfCpp = static_cast<WheeledVehicleController *>(self->obj);
  
  selfCpp->SetForwardInput(
  inForward
  );
};

float JPC_WheeledVehicleController_GetForwardInput(
  JPC_WheeledVehicleController_t * self
) {
  WheeledVehicleController * selfCpp = static_cast<WheeledVehicleController *>(self->obj);
  float result = selfCpp->GetForwardInput();
  return result;
};

void JPC_WheeledVehicleController_SetRightInput(
  JPC_WheeledVehicleController_t * self,
  float inRight
) {
  WheeledVehicleController * selfCpp = static_cast<WheeledVehicleController *>(self->obj);
  
  selfCpp->SetRightInput(
  inRight
  );
};

float JPC_WheeledVehicleController_GetRightInput(
  JPC_WheeledVehicleController_t * self
) {
  WheeledVehicleController * selfCpp = static_cast<WheeledVehicleController *>(self->obj);
  float result = selfCpp->GetRightInput();
  return result;
};

void JPC_WheeledVehicleController_SetBrakeInput(
  JPC_WheeledVehicleController_t * self,
  float inBrake
) {
  WheeledVehicleController * selfCpp = static_cast<WheeledVehicleController *>(self->obj);
  
  selfCpp->SetBrakeInput(
  inBrake
  );
};

float JPC_WheeledVehicleController_GetBrakeInput(
  JPC_WheeledVehicleController_t * self
) {
  WheeledVehicleController * selfCpp = static_cast<WheeledVehicleController *>(self->obj);
  float result = selfCpp->GetBrakeInput();
  return result;
};

void JPC_WheeledVehicleController_SetHandBrakeInput(
  JPC_WheeledVehicleController_t * self,
  float inHandBrake
) {
  WheeledVehicleController * selfCpp = static_cast<WheeledVehicleController *>(self->obj);
  
  selfCpp->SetHandBrakeInput(
  inHandBrake
  );
};

float JPC_WheeledVehicleController_GetHandBrakeInput(
  JPC_WheeledVehicleController_t * self
) {
  WheeledVehicleController * selfCpp = static_cast<WheeledVehicleController *>(self->obj);
  float result = selfCpp->GetHandBrakeInput();
  return result;
};

JPC_VehicleEngine_t * JPC_WheeledVehicleController_GetEngine(
  JPC_WheeledVehicleController_t * self
) {
  WheeledVehicleController * selfCpp = static_cast<WheeledVehicleController *>(self->obj);
  VehicleEngine& resultRef = selfCpp->GetEngine();
  VehicleEngine * result = &resultRef;
  return reinterpret_cast<JPC_VehicleEngine_t *>(result);
};

JPC_VehicleTransmission_t * JPC_WheeledVehicleController_GetTransmission(
  JPC_WheeledVehicleController_t * self
) {
  WheeledVehicleController * selfCpp = static_cast<WheeledVehicleController *>(self->obj);
  VehicleTransmission& resultRef = selfCpp->GetTransmission();
  VehicleTransmission * result = &resultRef;
  return reinterpret_cast<JPC_VehicleTransmission_t *>(result);
};

JPC_ArrayVehicleDifferentialSettings_t * JPC_WheeledVehicleController_GetDifferentials(
  JPC_WheeledVehicleController_t * self
) {
  WheeledVehicleController * selfCpp = static_cast<WheeledVehicleController *>(self->obj);
  ArrayVehicleDifferentialSettings& resultRef = selfCpp->GetDifferentials();
  ArrayVehicleDifferentialSettings * result = &resultRef;
  return reinterpret_cast<JPC_ArrayVehicleDifferentialSettings_t *>(result);
};

float JPC_WheeledVehicleController_GetDifferentialLimitedSlipRatio(
  JPC_WheeledVehicleController_t * self
) {
  WheeledVehicleController * selfCpp = static_cast<WheeledVehicleController *>(self->obj);
  float result = selfCpp->GetDifferentialLimitedSlipRatio();
  return result;
};

void JPC_WheeledVehicleController_SetDifferentialLimitedSlipRatio(
  JPC_WheeledVehicleController_t * self,
  float inV
) {
  WheeledVehicleController * selfCpp = static_cast<WheeledVehicleController *>(self->obj);
  
  selfCpp->SetDifferentialLimitedSlipRatio(
  inV
  );
};

float JPC_WheeledVehicleController_GetWheelSpeedAtClutch(
  JPC_WheeledVehicleController_t * self
) {
  WheeledVehicleController * selfCpp = static_cast<WheeledVehicleController *>(self->obj);
  float result = selfCpp->GetWheelSpeedAtClutch();
  return result;
};

unsigned long JPC_WheeledVehicleController_GetRefCount(
  JPC_WheeledVehicleController_t * self
) {
  WheeledVehicleController * selfCpp = static_cast<WheeledVehicleController *>(self->obj);
  unsigned long result = selfCpp->GetRefCount();
  return result;
};

void JPC_WheeledVehicleController_AddRef(
  JPC_WheeledVehicleController_t * self
) {
  WheeledVehicleController * selfCpp = static_cast<WheeledVehicleController *>(self->obj);
  
  selfCpp->AddRef();
};

void JPC_WheeledVehicleController_Release(
  JPC_WheeledVehicleController_t * self
) {
  WheeledVehicleController * selfCpp = static_cast<WheeledVehicleController *>(self->obj);
  
  selfCpp->Release();
};

//endregion functions

#ifdef __cplusplus
}
#endif

