#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JPC_MotorcycleControllerSettings_t * JPC_MotorcycleControllerSettings_new();

//endregion constructors

//region properties

float JPC_MotorcycleControllerSettings_mMaxLeanAngle_Get(
  JPC_MotorcycleControllerSettings_t * self
);

void JPC_MotorcycleControllerSettings_mMaxLeanAngle_Set(
  JPC_MotorcycleControllerSettings_t * self,
  float mMaxLeanAngle
);

float JPC_MotorcycleControllerSettings_mLeanSpringConstant_Get(
  JPC_MotorcycleControllerSettings_t * self
);

void JPC_MotorcycleControllerSettings_mLeanSpringConstant_Set(
  JPC_MotorcycleControllerSettings_t * self,
  float mLeanSpringConstant
);

float JPC_MotorcycleControllerSettings_mLeanSpringDamping_Get(
  JPC_MotorcycleControllerSettings_t * self
);

void JPC_MotorcycleControllerSettings_mLeanSpringDamping_Set(
  JPC_MotorcycleControllerSettings_t * self,
  float mLeanSpringDamping
);

float JPC_MotorcycleControllerSettings_mLeanSpringIntegrationCoefficient_Get(
  JPC_MotorcycleControllerSettings_t * self
);

void JPC_MotorcycleControllerSettings_mLeanSpringIntegrationCoefficient_Set(
  JPC_MotorcycleControllerSettings_t * self,
  float mLeanSpringIntegrationCoefficient
);

float JPC_MotorcycleControllerSettings_mLeanSpringIntegrationCoefficientDecay_Get(
  JPC_MotorcycleControllerSettings_t * self
);

void JPC_MotorcycleControllerSettings_mLeanSpringIntegrationCoefficientDecay_Set(
  JPC_MotorcycleControllerSettings_t * self,
  float mLeanSpringIntegrationCoefficientDecay
);

float JPC_MotorcycleControllerSettings_mLeanSmoothingFactor_Get(
  JPC_MotorcycleControllerSettings_t * self
);

void JPC_MotorcycleControllerSettings_mLeanSmoothingFactor_Set(
  JPC_MotorcycleControllerSettings_t * self,
  float mLeanSmoothingFactor
);

JPC_VehicleEngineSettings_t * JPC_MotorcycleControllerSettings_mEngine_Get(
  JPC_MotorcycleControllerSettings_t * self
);

void JPC_MotorcycleControllerSettings_mEngine_Set(
  JPC_MotorcycleControllerSettings_t * self,
  JPC_VehicleEngineSettings_t * mEngine
);

JPC_VehicleTransmissionSettings_t * JPC_MotorcycleControllerSettings_mTransmission_Get(
  JPC_MotorcycleControllerSettings_t * self
);

void JPC_MotorcycleControllerSettings_mTransmission_Set(
  JPC_MotorcycleControllerSettings_t * self,
  JPC_VehicleTransmissionSettings_t * mTransmission
);

JPC_ArrayVehicleDifferentialSettings_t * JPC_MotorcycleControllerSettings_mDifferentials_Get(
  JPC_MotorcycleControllerSettings_t * self
);

void JPC_MotorcycleControllerSettings_mDifferentials_Set(
  JPC_MotorcycleControllerSettings_t * self,
  JPC_ArrayVehicleDifferentialSettings_t * mDifferentials
);

float JPC_MotorcycleControllerSettings_mDifferentialLimitedSlipRatio_Get(
  JPC_MotorcycleControllerSettings_t * self
);

void JPC_MotorcycleControllerSettings_mDifferentialLimitedSlipRatio_Set(
  JPC_MotorcycleControllerSettings_t * self,
  float mDifferentialLimitedSlipRatio
);

//endregion properties


#ifdef __cplusplus
}
#endif

