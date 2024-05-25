#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_CastShapeAllHitCollisionCollector_t * JoltC_CastShapeAllHitCollisionCollector_new(
  char** outErrMsg
);

//endregion constructors

//region functions

void JoltC_CastShapeAllHitCollisionCollector_Sort(
  JoltC_CastShapeAllHitCollisionCollector_t * self,
  char** outErrMsg
);

bool JoltC_CastShapeAllHitCollisionCollector_HadHit(
  JoltC_CastShapeAllHitCollisionCollector_t * self,
  char** outErrMsg
);

void JoltC_CastShapeAllHitCollisionCollector_Reset(
  JoltC_CastShapeAllHitCollisionCollector_t * self,
  char** outErrMsg
);

void JoltC_CastShapeAllHitCollisionCollector_SetContext(
  JoltC_CastShapeAllHitCollisionCollector_t * self,
  const JoltC_TransformedShape_t * inContext,
  char** outErrMsg
);

const JoltC_TransformedShape_t * JoltC_CastShapeAllHitCollisionCollector_GetContext(
  JoltC_CastShapeAllHitCollisionCollector_t * self,
  char** outErrMsg
);

void JoltC_CastShapeAllHitCollisionCollector_UpdateEarlyOutFraction(
  JoltC_CastShapeAllHitCollisionCollector_t * self,
  float inFraction,
  char** outErrMsg
);

void JoltC_CastShapeAllHitCollisionCollector_ResetEarlyOutFraction(
  JoltC_CastShapeAllHitCollisionCollector_t * self,
  float inFraction,
  char** outErrMsg
);

void JoltC_CastShapeAllHitCollisionCollector_ForceEarlyOut(
  JoltC_CastShapeAllHitCollisionCollector_t * self,
  char** outErrMsg
);

bool JoltC_CastShapeAllHitCollisionCollector_ShouldEarlyOut(
  JoltC_CastShapeAllHitCollisionCollector_t * self,
  char** outErrMsg
);

float JoltC_CastShapeAllHitCollisionCollector_GetEarlyOutFraction(
  JoltC_CastShapeAllHitCollisionCollector_t * self,
  char** outErrMsg
);

float JoltC_CastShapeAllHitCollisionCollector_GetPositiveEarlyOutFraction(
  JoltC_CastShapeAllHitCollisionCollector_t * self,
  char** outErrMsg
);

//endregion functions

//region properties

JoltC_ArrayShapeCastResult_t * JoltC_CastShapeAllHitCollisionCollector_mHits_Get(
  JoltC_CastShapeAllHitCollisionCollector_t * self,
  char** outErrMsg
);

void JoltC_CastShapeAllHitCollisionCollector_mHits_Set(
  JoltC_CastShapeAllHitCollisionCollector_t * self,
  JoltC_ArrayShapeCastResult_t * mHits,
  char** outErrMsg
);

//endregion properties


#ifdef __cplusplus
}
#endif

