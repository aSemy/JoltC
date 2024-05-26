#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_SubShapeIDPair_t * JoltC_SubShapeIDPair_new();

//endregion

//region functions

const JoltC_BodyID_t * JoltC_SubShapeIDPair_GetBody1ID(
  JoltC_SubShapeIDPair_t * self
);

const JoltC_SubShapeID_t * JoltC_SubShapeIDPair_GetSubShapeID1(
  JoltC_SubShapeIDPair_t * self
);

const JoltC_BodyID_t * JoltC_SubShapeIDPair_GetBody2ID(
  JoltC_SubShapeIDPair_t * self
);

const JoltC_SubShapeID_t * JoltC_SubShapeIDPair_GetSubShapeID2(
  JoltC_SubShapeIDPair_t * self
);

//endregion


#ifdef __cplusplus
}
#endif

