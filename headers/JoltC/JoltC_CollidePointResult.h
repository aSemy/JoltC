#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JPC_CollidePointResult_t * JPC_CollidePointResult_new();

//endregion constructors

//region properties

JPC_BodyID_t * JPC_CollidePointResult_mBodyID_Get(
  JPC_CollidePointResult_t * self
);

void JPC_CollidePointResult_mBodyID_Set(
  JPC_CollidePointResult_t * self,
  JPC_BodyID_t * mBodyID
);

JPC_SubShapeID_t * JPC_CollidePointResult_mSubShapeID2_Get(
  JPC_CollidePointResult_t * self
);

void JPC_CollidePointResult_mSubShapeID2_Set(
  JPC_CollidePointResult_t * self,
  JPC_SubShapeID_t * mSubShapeID2
);

//endregion properties


#ifdef __cplusplus
}
#endif

