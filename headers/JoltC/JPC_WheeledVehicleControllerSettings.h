#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JPC_WheeledVehicleControllerSettings_t * JPC_WheeledVehicleControllerSettings_new();

//endregion constructors

//region properties

JPC_VehicleEngineSettings_t * JPC_WheeledVehicleControllerSettings_mEngine_Get(
  JPC_WheeledVehicleControllerSettings_t * self
);

void JPC_WheeledVehicleControllerSettings_mEngine_Set(
  JPC_WheeledVehicleControllerSettings_t * self,
  JPC_VehicleEngineSettings_t * mEngine
);

JPC_VehicleTransmissionSettings_t * JPC_WheeledVehicleControllerSettings_mTransmission_Get(
  JPC_WheeledVehicleControllerSettings_t * self
);

void JPC_WheeledVehicleControllerSettings_mTransmission_Set(
  JPC_WheeledVehicleControllerSettings_t * self,
  JPC_VehicleTransmissionSettings_t * mTransmission
);

JPC_ArrayVehicleDifferentialSettings_t * JPC_WheeledVehicleControllerSettings_mDifferentials_Get(
  JPC_WheeledVehicleControllerSettings_t * self
);

void JPC_WheeledVehicleControllerSettings_mDifferentials_Set(
  JPC_WheeledVehicleControllerSettings_t * self,
  JPC_ArrayVehicleDifferentialSettings_t * mDifferentials
);

float JPC_WheeledVehicleControllerSettings_mDifferentialLimitedSlipRatio_Get(
  JPC_WheeledVehicleControllerSettings_t * self
);

void JPC_WheeledVehicleControllerSettings_mDifferentialLimitedSlipRatio_Set(
  JPC_WheeledVehicleControllerSettings_t * self,
  float mDifferentialLimitedSlipRatio
);

//endregion properties


#ifdef __cplusplus
}
#endif

