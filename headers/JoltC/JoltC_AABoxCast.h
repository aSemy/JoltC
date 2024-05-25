#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_AABoxCast_t * JoltC_AABoxCast_new(
  char** outErrMsg
);

//endregion constructors

//region properties

JoltC_AABox_t * JoltC_AABoxCast_mBox_Get(
  JoltC_AABoxCast_t * self,
  char** outErrMsg
);

void JoltC_AABoxCast_mBox_Set(
  JoltC_AABoxCast_t * self,
  JoltC_AABox_t * mBox,
  char** outErrMsg
);

JoltC_Vec3_t * JoltC_AABoxCast_mDirection_Get(
  JoltC_AABoxCast_t * self,
  char** outErrMsg
);

void JoltC_AABoxCast_mDirection_Set(
  JoltC_AABoxCast_t * self,
  JoltC_Vec3_t * mDirection,
  char** outErrMsg
);

//endregion properties


#ifdef __cplusplus
}
#endif

