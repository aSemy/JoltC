#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_AABox_t * JoltC_AABox_new_0(
  char** outErrMsg
);

JoltC_AABox_t * JoltC_AABox_new_1(
  const JoltC_Vec3_t * inMin,
  const JoltC_Vec3_t * inMax,
  char** outErrMsg
);

//endregion constructors

//region functions

JoltC_AABox_t * JoltC_AABox_sBiggest(
  char** outErrMsg
);

bool JoltC_AABox_Overlaps(
  JoltC_AABox_t * self,
  const JoltC_AABox_t * inOther,
  char** outErrMsg
);

//endregion functions

//region properties

JoltC_Vec3_t * JoltC_AABox_mMin_Get(
  JoltC_AABox_t * self,
  char** outErrMsg
);

void JoltC_AABox_mMin_Set(
  JoltC_AABox_t * self,
  JoltC_Vec3_t * mMin,
  char** outErrMsg
);

JoltC_Vec3_t * JoltC_AABox_mMax_Get(
  JoltC_AABox_t * self,
  char** outErrMsg
);

void JoltC_AABox_mMax_Set(
  JoltC_AABox_t * self,
  JoltC_Vec3_t * mMax,
  char** outErrMsg
);

//endregion properties


#ifdef __cplusplus
}
#endif

