#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JPC_Float3_t * JPC_Float3_new(
  float inX,
  float inY,
  float inZ
);

//endregion constructors

//region functions

bool JPC_Float3_Equals(
  JPC_Float3_t * self,
  const JPC_Float3_t * inV
);

bool JPC_Float3_NotEquals(
  JPC_Float3_t * self,
  const JPC_Float3_t * inV
);

//endregion functions

//region properties

float JPC_Float3_x_Get(
  JPC_Float3_t * self
);

void JPC_Float3_x_Set(
  JPC_Float3_t * self,
  float x
);

float JPC_Float3_y_Get(
  JPC_Float3_t * self
);

void JPC_Float3_y_Set(
  JPC_Float3_t * self,
  float y
);

float JPC_Float3_z_Get(
  JPC_Float3_t * self
);

void JPC_Float3_z_Set(
  JPC_Float3_t * self,
  float z
);

//endregion properties


#ifdef __cplusplus
}
#endif

