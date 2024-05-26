#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_Float3_t * JoltC_Float3_new(
  float inX,
  float inY,
  float inZ
);

//endregion

//region functions

bool JoltC_Float3_Equals(
  JoltC_Float3_t * self,
  JoltC_Float3_t * inV
);

bool JoltC_Float3_NotEquals(
  JoltC_Float3_t * self,
  JoltC_Float3_t * inV
);

//endregion

//region properties

float JoltC_Float3_x_Get(
  JoltC_Float3_t * self
);

void JoltC_Float3_x_Set(
  JoltC_Float3_t * self,
  float x
);

float JoltC_Float3_y_Get(
  JoltC_Float3_t * self
);

void JoltC_Float3_y_Set(
  JoltC_Float3_t * self,
  float y
);

float JoltC_Float3_z_Get(
  JoltC_Float3_t * self
);

void JoltC_Float3_z_Set(
  JoltC_Float3_t * self,
  float z
);

//endregion


#ifdef __cplusplus
}
#endif

