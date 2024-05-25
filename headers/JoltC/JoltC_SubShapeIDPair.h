#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_SubShapeIDPair_t * JoltC_SubShapeIDPair_new(
  char** outErrMsg
);

//endregion constructors

//region functions

const JoltC_BodyID_t * JoltC_SubShapeIDPair_GetBody1ID(
  JoltC_SubShapeIDPair_t * self,
  char** outErrMsg
);

const JoltC_SubShapeID_t * JoltC_SubShapeIDPair_GetSubShapeID1(
  JoltC_SubShapeIDPair_t * self,
  char** outErrMsg
);

const JoltC_BodyID_t * JoltC_SubShapeIDPair_GetBody2ID(
  JoltC_SubShapeIDPair_t * self,
  char** outErrMsg
);

const JoltC_SubShapeID_t * JoltC_SubShapeIDPair_GetSubShapeID2(
  JoltC_SubShapeIDPair_t * self,
  char** outErrMsg
);

//endregion functions


#ifdef __cplusplus
}
#endif

