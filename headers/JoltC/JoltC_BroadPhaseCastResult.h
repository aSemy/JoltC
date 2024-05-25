#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_BroadPhaseCastResult_t * JoltC_BroadPhaseCastResult_new(
  char** outErrMsg
);

//endregion constructors

//region functions

void JoltC_BroadPhaseCastResult_Reset(
  JoltC_BroadPhaseCastResult_t * self,
  char** outErrMsg
);

//endregion functions

//region properties

JoltC_BodyID_t * JoltC_BroadPhaseCastResult_mBodyID_Get(
  JoltC_BroadPhaseCastResult_t * self,
  char** outErrMsg
);

void JoltC_BroadPhaseCastResult_mBodyID_Set(
  JoltC_BroadPhaseCastResult_t * self,
  JoltC_BodyID_t * mBodyID,
  char** outErrMsg
);

float JoltC_BroadPhaseCastResult_mFraction_Get(
  JoltC_BroadPhaseCastResult_t * self,
  char** outErrMsg
);

void JoltC_BroadPhaseCastResult_mFraction_Set(
  JoltC_BroadPhaseCastResult_t * self,
  float mFraction,
  char** outErrMsg
);

//endregion properties


#ifdef __cplusplus
}
#endif

