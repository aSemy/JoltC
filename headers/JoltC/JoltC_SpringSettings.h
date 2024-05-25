#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_SpringSettings_t * JoltC_SpringSettings_new(
  char** outErrMsg
);

//endregion constructors

//region functions

bool JoltC_SpringSettings_HasStiffness(
  JoltC_SpringSettings_t * self,
  char** outErrMsg
);

//endregion functions

//region properties

JoltC_ESpringMode JoltC_SpringSettings_mMode_Get(
  JoltC_SpringSettings_t * self,
  char** outErrMsg
);

void JoltC_SpringSettings_mMode_Set(
  JoltC_SpringSettings_t * self,
  JoltC_ESpringMode mMode,
  char** outErrMsg
);

float JoltC_SpringSettings_mFrequency_Get(
  JoltC_SpringSettings_t * self,
  char** outErrMsg
);

void JoltC_SpringSettings_mFrequency_Set(
  JoltC_SpringSettings_t * self,
  float mFrequency,
  char** outErrMsg
);

float JoltC_SpringSettings_mStiffness_Get(
  JoltC_SpringSettings_t * self,
  char** outErrMsg
);

void JoltC_SpringSettings_mStiffness_Set(
  JoltC_SpringSettings_t * self,
  float mStiffness,
  char** outErrMsg
);

float JoltC_SpringSettings_mDamping_Get(
  JoltC_SpringSettings_t * self,
  char** outErrMsg
);

void JoltC_SpringSettings_mDamping_Set(
  JoltC_SpringSettings_t * self,
  float mDamping,
  char** outErrMsg
);

//endregion properties


#ifdef __cplusplus
}
#endif

