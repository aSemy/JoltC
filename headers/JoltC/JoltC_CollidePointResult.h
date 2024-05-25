#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_CollidePointResult_t * JoltC_CollidePointResult_new(
  char** outErrMsg
);

//endregion constructors

//region properties

JoltC_BodyID_t * JoltC_CollidePointResult_mBodyID_Get(
  JoltC_CollidePointResult_t * self,
  char** outErrMsg
);

void JoltC_CollidePointResult_mBodyID_Set(
  JoltC_CollidePointResult_t * self,
  JoltC_BodyID_t * mBodyID,
  char** outErrMsg
);

JoltC_SubShapeID_t * JoltC_CollidePointResult_mSubShapeID2_Get(
  JoltC_CollidePointResult_t * self,
  char** outErrMsg
);

void JoltC_CollidePointResult_mSubShapeID2_Set(
  JoltC_CollidePointResult_t * self,
  JoltC_SubShapeID_t * mSubShapeID2,
  char** outErrMsg
);

//endregion properties


#ifdef __cplusplus
}
#endif

