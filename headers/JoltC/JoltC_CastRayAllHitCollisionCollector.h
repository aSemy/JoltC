#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_CastRayAllHitCollisionCollector_t * JoltC_CastRayAllHitCollisionCollector_new(
  char** outErrMsg
);

//endregion constructors

//region functions

void JoltC_CastRayAllHitCollisionCollector_Sort(
  JoltC_CastRayAllHitCollisionCollector_t * self,
  char** outErrMsg
);

bool JoltC_CastRayAllHitCollisionCollector_HadHit(
  JoltC_CastRayAllHitCollisionCollector_t * self,
  char** outErrMsg
);

void JoltC_CastRayAllHitCollisionCollector_Reset(
  JoltC_CastRayAllHitCollisionCollector_t * self,
  char** outErrMsg
);

void JoltC_CastRayAllHitCollisionCollector_SetContext(
  JoltC_CastRayAllHitCollisionCollector_t * self,
  const JoltC_TransformedShape_t * inContext,
  char** outErrMsg
);

const JoltC_TransformedShape_t * JoltC_CastRayAllHitCollisionCollector_GetContext(
  JoltC_CastRayAllHitCollisionCollector_t * self,
  char** outErrMsg
);

void JoltC_CastRayAllHitCollisionCollector_UpdateEarlyOutFraction(
  JoltC_CastRayAllHitCollisionCollector_t * self,
  float inFraction,
  char** outErrMsg
);

void JoltC_CastRayAllHitCollisionCollector_ResetEarlyOutFraction(
  JoltC_CastRayAllHitCollisionCollector_t * self,
  float inFraction,
  char** outErrMsg
);

void JoltC_CastRayAllHitCollisionCollector_ForceEarlyOut(
  JoltC_CastRayAllHitCollisionCollector_t * self,
  char** outErrMsg
);

bool JoltC_CastRayAllHitCollisionCollector_ShouldEarlyOut(
  JoltC_CastRayAllHitCollisionCollector_t * self,
  char** outErrMsg
);

float JoltC_CastRayAllHitCollisionCollector_GetEarlyOutFraction(
  JoltC_CastRayAllHitCollisionCollector_t * self,
  char** outErrMsg
);

float JoltC_CastRayAllHitCollisionCollector_GetPositiveEarlyOutFraction(
  JoltC_CastRayAllHitCollisionCollector_t * self,
  char** outErrMsg
);

//endregion functions

//region properties

JoltC_ArrayRayCastResult_t * JoltC_CastRayAllHitCollisionCollector_mHits_Get(
  JoltC_CastRayAllHitCollisionCollector_t * self,
  char** outErrMsg
);

void JoltC_CastRayAllHitCollisionCollector_mHits_Set(
  JoltC_CastRayAllHitCollisionCollector_t * self,
  JoltC_ArrayRayCastResult_t * mHits,
  char** outErrMsg
);

//endregion properties


#ifdef __cplusplus
}
#endif

