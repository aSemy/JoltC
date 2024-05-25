#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_Float3_t * JoltC_Float3_new(
  float inX,
  float inY,
  float inZ,
  char** outErrMsg
);

//endregion constructors

//region functions

bool JoltC_Float3_Equals(
  JoltC_Float3_t * self,
  const JoltC_Float3_t * inV,
  char** outErrMsg
);

bool JoltC_Float3_NotEquals(
  JoltC_Float3_t * self,
  const JoltC_Float3_t * inV,
  char** outErrMsg
);

//endregion functions

//region properties

float JoltC_Float3_x_Get(
  JoltC_Float3_t * self,
  char** outErrMsg
);

void JoltC_Float3_x_Set(
  JoltC_Float3_t * self,
  float x,
  char** outErrMsg
);

float JoltC_Float3_y_Get(
  JoltC_Float3_t * self,
  char** outErrMsg
);

void JoltC_Float3_y_Set(
  JoltC_Float3_t * self,
  float y,
  char** outErrMsg
);

float JoltC_Float3_z_Get(
  JoltC_Float3_t * self,
  char** outErrMsg
);

void JoltC_Float3_z_Set(
  JoltC_Float3_t * self,
  float z,
  char** outErrMsg
);

//endregion properties


#ifdef __cplusplus
}
#endif

