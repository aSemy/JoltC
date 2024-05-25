#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_CollideShapeAllHitCollisionCollector_t * JoltC_CollideShapeAllHitCollisionCollector_new(
  char** outErrMsg
);

//endregion constructors

//region functions

void JoltC_CollideShapeAllHitCollisionCollector_Sort(
  JoltC_CollideShapeAllHitCollisionCollector_t * self,
  char** outErrMsg
);

bool JoltC_CollideShapeAllHitCollisionCollector_HadHit(
  JoltC_CollideShapeAllHitCollisionCollector_t * self,
  char** outErrMsg
);

void JoltC_CollideShapeAllHitCollisionCollector_Reset(
  JoltC_CollideShapeAllHitCollisionCollector_t * self,
  char** outErrMsg
);

void JoltC_CollideShapeAllHitCollisionCollector_SetContext(
  JoltC_CollideShapeAllHitCollisionCollector_t * self,
  const JoltC_TransformedShape_t * inContext,
  char** outErrMsg
);

const JoltC_TransformedShape_t * JoltC_CollideShapeAllHitCollisionCollector_GetContext(
  JoltC_CollideShapeAllHitCollisionCollector_t * self,
  char** outErrMsg
);

void JoltC_CollideShapeAllHitCollisionCollector_UpdateEarlyOutFraction(
  JoltC_CollideShapeAllHitCollisionCollector_t * self,
  float inFraction,
  char** outErrMsg
);

void JoltC_CollideShapeAllHitCollisionCollector_ResetEarlyOutFraction(
  JoltC_CollideShapeAllHitCollisionCollector_t * self,
  float inFraction,
  char** outErrMsg
);

void JoltC_CollideShapeAllHitCollisionCollector_ForceEarlyOut(
  JoltC_CollideShapeAllHitCollisionCollector_t * self,
  char** outErrMsg
);

bool JoltC_CollideShapeAllHitCollisionCollector_ShouldEarlyOut(
  JoltC_CollideShapeAllHitCollisionCollector_t * self,
  char** outErrMsg
);

float JoltC_CollideShapeAllHitCollisionCollector_GetEarlyOutFraction(
  JoltC_CollideShapeAllHitCollisionCollector_t * self,
  char** outErrMsg
);

float JoltC_CollideShapeAllHitCollisionCollector_GetPositiveEarlyOutFraction(
  JoltC_CollideShapeAllHitCollisionCollector_t * self,
  char** outErrMsg
);

//endregion functions

//region properties

JoltC_ArrayCollideShapeResult_t * JoltC_CollideShapeAllHitCollisionCollector_mHits_Get(
  JoltC_CollideShapeAllHitCollisionCollector_t * self,
  char** outErrMsg
);

void JoltC_CollideShapeAllHitCollisionCollector_mHits_Set(
  JoltC_CollideShapeAllHitCollisionCollector_t * self,
  JoltC_ArrayCollideShapeResult_t * mHits,
  char** outErrMsg
);

//endregion properties


#ifdef __cplusplus
}
#endif

