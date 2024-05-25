#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JPC_SpringSettings_t * JPC_SpringSettings_new();

//endregion constructors

//region functions

bool JPC_SpringSettings_HasStiffness(
  JPC_SpringSettings_t * self
);

//endregion functions

//region properties

JPC_ESpringMode JPC_SpringSettings_mMode_Get(
  JPC_SpringSettings_t * self
);

void JPC_SpringSettings_mMode_Set(
  JPC_SpringSettings_t * self,
  JPC_ESpringMode mMode
);

float JPC_SpringSettings_mFrequency_Get(
  JPC_SpringSettings_t * self
);

void JPC_SpringSettings_mFrequency_Set(
  JPC_SpringSettings_t * self,
  float mFrequency
);

float JPC_SpringSettings_mStiffness_Get(
  JPC_SpringSettings_t * self
);

void JPC_SpringSettings_mStiffness_Set(
  JPC_SpringSettings_t * self,
  float mStiffness
);

float JPC_SpringSettings_mDamping_Get(
  JPC_SpringSettings_t * self
);

void JPC_SpringSettings_mDamping_Set(
  JPC_SpringSettings_t * self,
  float mDamping
);

//endregion properties


#ifdef __cplusplus
}
#endif

