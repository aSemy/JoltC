#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_RayCastResult_t * JoltC_RayCastResult_new(
  char** outErrMsg
);

//endregion constructors

//region functions

void JoltC_RayCastResult_Reset(
  JoltC_RayCastResult_t * self,
  char** outErrMsg
);

//endregion functions

//region properties

JoltC_SubShapeID_t * JoltC_RayCastResult_mSubShapeID2_Get(
  JoltC_RayCastResult_t * self,
  char** outErrMsg
);

void JoltC_RayCastResult_mSubShapeID2_Set(
  JoltC_RayCastResult_t * self,
  JoltC_SubShapeID_t * mSubShapeID2,
  char** outErrMsg
);

JoltC_BodyID_t * JoltC_RayCastResult_mBodyID_Get(
  JoltC_RayCastResult_t * self,
  char** outErrMsg
);

void JoltC_RayCastResult_mBodyID_Set(
  JoltC_RayCastResult_t * self,
  JoltC_BodyID_t * mBodyID,
  char** outErrMsg
);

float JoltC_RayCastResult_mFraction_Get(
  JoltC_RayCastResult_t * self,
  char** outErrMsg
);

void JoltC_RayCastResult_mFraction_Set(
  JoltC_RayCastResult_t * self,
  float mFraction,
  char** outErrMsg
);

//endregion properties


#ifdef __cplusplus
}
#endif

