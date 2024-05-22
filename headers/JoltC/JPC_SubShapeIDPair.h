#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JPC_SubShapeIDPair_t * JPC_SubShapeIDPair_new();

//endregion constructors

//region functions

const JPC_BodyID_t * JPC_SubShapeIDPair_GetBody1ID(
  JPC_SubShapeIDPair_t * self
);

const JPC_SubShapeID_t * JPC_SubShapeIDPair_GetSubShapeID1(
  JPC_SubShapeIDPair_t * self
);

const JPC_BodyID_t * JPC_SubShapeIDPair_GetBody2ID(
  JPC_SubShapeIDPair_t * self
);

const JPC_SubShapeID_t * JPC_SubShapeIDPair_GetSubShapeID2(
  JPC_SubShapeIDPair_t * self
);

//endregion functions


#ifdef __cplusplus
}
#endif

