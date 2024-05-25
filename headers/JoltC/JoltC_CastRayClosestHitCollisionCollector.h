#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_CastRayClosestHitCollisionCollector_t * JoltC_CastRayClosestHitCollisionCollector_new(
  char** outErrMsg
);

//endregion constructors

//region functions

bool JoltC_CastRayClosestHitCollisionCollector_HadHit(
  JoltC_CastRayClosestHitCollisionCollector_t * self,
  char** outErrMsg
);

void JoltC_CastRayClosestHitCollisionCollector_Reset(
  JoltC_CastRayClosestHitCollisionCollector_t * self,
  char** outErrMsg
);

void JoltC_CastRayClosestHitCollisionCollector_SetContext(
  JoltC_CastRayClosestHitCollisionCollector_t * self,
  const JoltC_TransformedShape_t * inContext,
  char** outErrMsg
);

const JoltC_TransformedShape_t * JoltC_CastRayClosestHitCollisionCollector_GetContext(
  JoltC_CastRayClosestHitCollisionCollector_t * self,
  char** outErrMsg
);

void JoltC_CastRayClosestHitCollisionCollector_UpdateEarlyOutFraction(
  JoltC_CastRayClosestHitCollisionCollector_t * self,
  float inFraction,
  char** outErrMsg
);

void JoltC_CastRayClosestHitCollisionCollector_ResetEarlyOutFraction(
  JoltC_CastRayClosestHitCollisionCollector_t * self,
  float inFraction,
  char** outErrMsg
);

void JoltC_CastRayClosestHitCollisionCollector_ForceEarlyOut(
  JoltC_CastRayClosestHitCollisionCollector_t * self,
  char** outErrMsg
);

bool JoltC_CastRayClosestHitCollisionCollector_ShouldEarlyOut(
  JoltC_CastRayClosestHitCollisionCollector_t * self,
  char** outErrMsg
);

float JoltC_CastRayClosestHitCollisionCollector_GetEarlyOutFraction(
  JoltC_CastRayClosestHitCollisionCollector_t * self,
  char** outErrMsg
);

float JoltC_CastRayClosestHitCollisionCollector_GetPositiveEarlyOutFraction(
  JoltC_CastRayClosestHitCollisionCollector_t * self,
  char** outErrMsg
);

//endregion functions

//region properties

JoltC_RayCastResult_t * JoltC_CastRayClosestHitCollisionCollector_mHit_Get(
  JoltC_CastRayClosestHitCollisionCollector_t * self,
  char** outErrMsg
);

void JoltC_CastRayClosestHitCollisionCollector_mHit_Set(
  JoltC_CastRayClosestHitCollisionCollector_t * self,
  JoltC_RayCastResult_t * mHit,
  char** outErrMsg
);

//endregion properties


#ifdef __cplusplus
}
#endif

