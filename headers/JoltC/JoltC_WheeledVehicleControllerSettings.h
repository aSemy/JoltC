#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_WheeledVehicleControllerSettings_t * JoltC_WheeledVehicleControllerSettings_new(
  char** outErrMsg
);

//endregion constructors

//region properties

JoltC_VehicleEngineSettings_t * JoltC_WheeledVehicleControllerSettings_mEngine_Get(
  JoltC_WheeledVehicleControllerSettings_t * self,
  char** outErrMsg
);

void JoltC_WheeledVehicleControllerSettings_mEngine_Set(
  JoltC_WheeledVehicleControllerSettings_t * self,
  JoltC_VehicleEngineSettings_t * mEngine,
  char** outErrMsg
);

JoltC_VehicleTransmissionSettings_t * JoltC_WheeledVehicleControllerSettings_mTransmission_Get(
  JoltC_WheeledVehicleControllerSettings_t * self,
  char** outErrMsg
);

void JoltC_WheeledVehicleControllerSettings_mTransmission_Set(
  JoltC_WheeledVehicleControllerSettings_t * self,
  JoltC_VehicleTransmissionSettings_t * mTransmission,
  char** outErrMsg
);

JoltC_ArrayVehicleDifferentialSettings_t * JoltC_WheeledVehicleControllerSettings_mDifferentials_Get(
  JoltC_WheeledVehicleControllerSettings_t * self,
  char** outErrMsg
);

void JoltC_WheeledVehicleControllerSettings_mDifferentials_Set(
  JoltC_WheeledVehicleControllerSettings_t * self,
  JoltC_ArrayVehicleDifferentialSettings_t * mDifferentials,
  char** outErrMsg
);

float JoltC_WheeledVehicleControllerSettings_mDifferentialLimitedSlipRatio_Get(
  JoltC_WheeledVehicleControllerSettings_t * self,
  char** outErrMsg
);

void JoltC_WheeledVehicleControllerSettings_mDifferentialLimitedSlipRatio_Set(
  JoltC_WheeledVehicleControllerSettings_t * self,
  float mDifferentialLimitedSlipRatio,
  char** outErrMsg
);

//endregion properties


#ifdef __cplusplus
}
#endif

