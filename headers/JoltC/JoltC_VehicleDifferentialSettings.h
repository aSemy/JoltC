#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_VehicleDifferentialSettings_t * JoltC_VehicleDifferentialSettings_new(
  char** outErrMsg
);

//endregion constructors

//region properties

long JoltC_VehicleDifferentialSettings_mLeftWheel_Get(
  JoltC_VehicleDifferentialSettings_t * self,
  char** outErrMsg
);

void JoltC_VehicleDifferentialSettings_mLeftWheel_Set(
  JoltC_VehicleDifferentialSettings_t * self,
  long mLeftWheel,
  char** outErrMsg
);

long JoltC_VehicleDifferentialSettings_mRightWheel_Get(
  JoltC_VehicleDifferentialSettings_t * self,
  char** outErrMsg
);

void JoltC_VehicleDifferentialSettings_mRightWheel_Set(
  JoltC_VehicleDifferentialSettings_t * self,
  long mRightWheel,
  char** outErrMsg
);

float JoltC_VehicleDifferentialSettings_mDifferentialRatio_Get(
  JoltC_VehicleDifferentialSettings_t * self,
  char** outErrMsg
);

void JoltC_VehicleDifferentialSettings_mDifferentialRatio_Set(
  JoltC_VehicleDifferentialSettings_t * self,
  float mDifferentialRatio,
  char** outErrMsg
);

float JoltC_VehicleDifferentialSettings_mLeftRightSplit_Get(
  JoltC_VehicleDifferentialSettings_t * self,
  char** outErrMsg
);

void JoltC_VehicleDifferentialSettings_mLeftRightSplit_Set(
  JoltC_VehicleDifferentialSettings_t * self,
  float mLeftRightSplit,
  char** outErrMsg
);

float JoltC_VehicleDifferentialSettings_mLimitedSlipRatio_Get(
  JoltC_VehicleDifferentialSettings_t * self,
  char** outErrMsg
);

void JoltC_VehicleDifferentialSettings_mLimitedSlipRatio_Set(
  JoltC_VehicleDifferentialSettings_t * self,
  float mLimitedSlipRatio,
  char** outErrMsg
);

float JoltC_VehicleDifferentialSettings_mEngineTorqueRatio_Get(
  JoltC_VehicleDifferentialSettings_t * self,
  char** outErrMsg
);

void JoltC_VehicleDifferentialSettings_mEngineTorqueRatio_Set(
  JoltC_VehicleDifferentialSettings_t * self,
  float mEngineTorqueRatio,
  char** outErrMsg
);

//endregion properties


#ifdef __cplusplus
}
#endif

