#pragma once
#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_CollidePointResult_t * JoltC_CollidePointResult_new();

//endregion

//region destructor

void JoltC_CollidePointResult_destroy(
  JoltC_CollidePointResult_t * self
);

//endregion
//region properties

JoltC_BodyID_t * JoltC_CollidePointResult_mBodyID_Get(
  JoltC_CollidePointResult_t * self
);

void JoltC_CollidePointResult_mBodyID_Set(
  JoltC_CollidePointResult_t * self,
  JoltC_BodyID_t * mBodyID
);

JoltC_SubShapeID_t * JoltC_CollidePointResult_mSubShapeID2_Get(
  JoltC_CollidePointResult_t * self
);

void JoltC_CollidePointResult_mSubShapeID2_Set(
  JoltC_CollidePointResult_t * self,
  JoltC_SubShapeID_t * mSubShapeID2
);

//endregion


#ifdef __cplusplus
}
#endif
