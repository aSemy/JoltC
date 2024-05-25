#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_CastShapeClosestHitCollisionCollector_t * JoltC_CastShapeClosestHitCollisionCollector_new(
  char** outErrMsg
);

//endregion constructors

//region functions

bool JoltC_CastShapeClosestHitCollisionCollector_HadHit(
  JoltC_CastShapeClosestHitCollisionCollector_t * self,
  char** outErrMsg
);

void JoltC_CastShapeClosestHitCollisionCollector_Reset(
  JoltC_CastShapeClosestHitCollisionCollector_t * self,
  char** outErrMsg
);

void JoltC_CastShapeClosestHitCollisionCollector_SetContext(
  JoltC_CastShapeClosestHitCollisionCollector_t * self,
  const JoltC_TransformedShape_t * inContext,
  char** outErrMsg
);

const JoltC_TransformedShape_t * JoltC_CastShapeClosestHitCollisionCollector_GetContext(
  JoltC_CastShapeClosestHitCollisionCollector_t * self,
  char** outErrMsg
);

void JoltC_CastShapeClosestHitCollisionCollector_UpdateEarlyOutFraction(
  JoltC_CastShapeClosestHitCollisionCollector_t * self,
  float inFraction,
  char** outErrMsg
);

void JoltC_CastShapeClosestHitCollisionCollector_ResetEarlyOutFraction(
  JoltC_CastShapeClosestHitCollisionCollector_t * self,
  float inFraction,
  char** outErrMsg
);

void JoltC_CastShapeClosestHitCollisionCollector_ForceEarlyOut(
  JoltC_CastShapeClosestHitCollisionCollector_t * self,
  char** outErrMsg
);

bool JoltC_CastShapeClosestHitCollisionCollector_ShouldEarlyOut(
  JoltC_CastShapeClosestHitCollisionCollector_t * self,
  char** outErrMsg
);

float JoltC_CastShapeClosestHitCollisionCollector_GetEarlyOutFraction(
  JoltC_CastShapeClosestHitCollisionCollector_t * self,
  char** outErrMsg
);

float JoltC_CastShapeClosestHitCollisionCollector_GetPositiveEarlyOutFraction(
  JoltC_CastShapeClosestHitCollisionCollector_t * self,
  char** outErrMsg
);

//endregion functions

//region properties

JoltC_ShapeCastResult_t * JoltC_CastShapeClosestHitCollisionCollector_mHit_Get(
  JoltC_CastShapeClosestHitCollisionCollector_t * self,
  char** outErrMsg
);

void JoltC_CastShapeClosestHitCollisionCollector_mHit_Set(
  JoltC_CastShapeClosestHitCollisionCollector_t * self,
  JoltC_ShapeCastResult_t * mHit,
  char** outErrMsg
);

//endregion properties


#ifdef __cplusplus
}
#endif

