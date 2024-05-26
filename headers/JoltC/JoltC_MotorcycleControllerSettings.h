#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_MotorcycleControllerSettings_t * JoltC_MotorcycleControllerSettings_new();

//endregion

//region properties

float JoltC_MotorcycleControllerSettings_mMaxLeanAngle_Get(
  JoltC_MotorcycleControllerSettings_t * self
);

void JoltC_MotorcycleControllerSettings_mMaxLeanAngle_Set(
  JoltC_MotorcycleControllerSettings_t * self,
  float mMaxLeanAngle
);

float JoltC_MotorcycleControllerSettings_mLeanSpringConstant_Get(
  JoltC_MotorcycleControllerSettings_t * self
);

void JoltC_MotorcycleControllerSettings_mLeanSpringConstant_Set(
  JoltC_MotorcycleControllerSettings_t * self,
  float mLeanSpringConstant
);

float JoltC_MotorcycleControllerSettings_mLeanSpringDamping_Get(
  JoltC_MotorcycleControllerSettings_t * self
);

void JoltC_MotorcycleControllerSettings_mLeanSpringDamping_Set(
  JoltC_MotorcycleControllerSettings_t * self,
  float mLeanSpringDamping
);

float JoltC_MotorcycleControllerSettings_mLeanSpringIntegrationCoefficient_Get(
  JoltC_MotorcycleControllerSettings_t * self
);

void JoltC_MotorcycleControllerSettings_mLeanSpringIntegrationCoefficient_Set(
  JoltC_MotorcycleControllerSettings_t * self,
  float mLeanSpringIntegrationCoefficient
);

float JoltC_MotorcycleControllerSettings_mLeanSpringIntegrationCoefficientDecay_Get(
  JoltC_MotorcycleControllerSettings_t * self
);

void JoltC_MotorcycleControllerSettings_mLeanSpringIntegrationCoefficientDecay_Set(
  JoltC_MotorcycleControllerSettings_t * self,
  float mLeanSpringIntegrationCoefficientDecay
);

float JoltC_MotorcycleControllerSettings_mLeanSmoothingFactor_Get(
  JoltC_MotorcycleControllerSettings_t * self
);

void JoltC_MotorcycleControllerSettings_mLeanSmoothingFactor_Set(
  JoltC_MotorcycleControllerSettings_t * self,
  float mLeanSmoothingFactor
);

JoltC_VehicleEngineSettings_t * JoltC_MotorcycleControllerSettings_mEngine_Get(
  JoltC_MotorcycleControllerSettings_t * self
);

void JoltC_MotorcycleControllerSettings_mEngine_Set(
  JoltC_MotorcycleControllerSettings_t * self,
  JoltC_VehicleEngineSettings_t * mEngine
);

JoltC_VehicleTransmissionSettings_t * JoltC_MotorcycleControllerSettings_mTransmission_Get(
  JoltC_MotorcycleControllerSettings_t * self
);

void JoltC_MotorcycleControllerSettings_mTransmission_Set(
  JoltC_MotorcycleControllerSettings_t * self,
  JoltC_VehicleTransmissionSettings_t * mTransmission
);

JoltC_ArrayVehicleDifferentialSettings_t * JoltC_MotorcycleControllerSettings_mDifferentials_Get(
  JoltC_MotorcycleControllerSettings_t * self
);

void JoltC_MotorcycleControllerSettings_mDifferentials_Set(
  JoltC_MotorcycleControllerSettings_t * self,
  JoltC_ArrayVehicleDifferentialSettings_t * mDifferentials
);

float JoltC_MotorcycleControllerSettings_mDifferentialLimitedSlipRatio_Get(
  JoltC_MotorcycleControllerSettings_t * self
);

void JoltC_MotorcycleControllerSettings_mDifferentialLimitedSlipRatio_Set(
  JoltC_MotorcycleControllerSettings_t * self,
  float mDifferentialLimitedSlipRatio
);

//endregion


#ifdef __cplusplus
}
#endif

