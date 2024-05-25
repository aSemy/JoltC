#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region properties

float JoltC_VehicleEngineSettings_mMaxTorque_Get(
  JoltC_VehicleEngineSettings_t * self,
  char** outErrMsg
);

void JoltC_VehicleEngineSettings_mMaxTorque_Set(
  JoltC_VehicleEngineSettings_t * self,
  float mMaxTorque,
  char** outErrMsg
);

float JoltC_VehicleEngineSettings_mMinRPM_Get(
  JoltC_VehicleEngineSettings_t * self,
  char** outErrMsg
);

void JoltC_VehicleEngineSettings_mMinRPM_Set(
  JoltC_VehicleEngineSettings_t * self,
  float mMinRPM,
  char** outErrMsg
);

float JoltC_VehicleEngineSettings_mMaxRPM_Get(
  JoltC_VehicleEngineSettings_t * self,
  char** outErrMsg
);

void JoltC_VehicleEngineSettings_mMaxRPM_Set(
  JoltC_VehicleEngineSettings_t * self,
  float mMaxRPM,
  char** outErrMsg
);

JoltC_LinearCurve_t * JoltC_VehicleEngineSettings_mNormalizedTorque_Get(
  JoltC_VehicleEngineSettings_t * self,
  char** outErrMsg
);

void JoltC_VehicleEngineSettings_mNormalizedTorque_Set(
  JoltC_VehicleEngineSettings_t * self,
  JoltC_LinearCurve_t * mNormalizedTorque,
  char** outErrMsg
);

float JoltC_VehicleEngineSettings_mInertia_Get(
  JoltC_VehicleEngineSettings_t * self,
  char** outErrMsg
);

void JoltC_VehicleEngineSettings_mInertia_Set(
  JoltC_VehicleEngineSettings_t * self,
  float mInertia,
  char** outErrMsg
);

float JoltC_VehicleEngineSettings_mAngularDamping_Get(
  JoltC_VehicleEngineSettings_t * self,
  char** outErrMsg
);

void JoltC_VehicleEngineSettings_mAngularDamping_Set(
  JoltC_VehicleEngineSettings_t * self,
  float mAngularDamping,
  char** outErrMsg
);

//endregion properties


#ifdef __cplusplus
}
#endif

