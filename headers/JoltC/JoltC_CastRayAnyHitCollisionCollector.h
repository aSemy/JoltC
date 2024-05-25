#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_CastRayAnyHitCollisionCollector_t * JoltC_CastRayAnyHitCollisionCollector_new(
  char** outErrMsg
);

//endregion constructors

//region functions

bool JoltC_CastRayAnyHitCollisionCollector_HadHit(
  JoltC_CastRayAnyHitCollisionCollector_t * self,
  char** outErrMsg
);

void JoltC_CastRayAnyHitCollisionCollector_Reset(
  JoltC_CastRayAnyHitCollisionCollector_t * self,
  char** outErrMsg
);

void JoltC_CastRayAnyHitCollisionCollector_SetContext(
  JoltC_CastRayAnyHitCollisionCollector_t * self,
  const JoltC_TransformedShape_t * inContext,
  char** outErrMsg
);

const JoltC_TransformedShape_t * JoltC_CastRayAnyHitCollisionCollector_GetContext(
  JoltC_CastRayAnyHitCollisionCollector_t * self,
  char** outErrMsg
);

void JoltC_CastRayAnyHitCollisionCollector_UpdateEarlyOutFraction(
  JoltC_CastRayAnyHitCollisionCollector_t * self,
  float inFraction,
  char** outErrMsg
);

void JoltC_CastRayAnyHitCollisionCollector_ResetEarlyOutFraction(
  JoltC_CastRayAnyHitCollisionCollector_t * self,
  float inFraction,
  char** outErrMsg
);

void JoltC_CastRayAnyHitCollisionCollector_ForceEarlyOut(
  JoltC_CastRayAnyHitCollisionCollector_t * self,
  char** outErrMsg
);

bool JoltC_CastRayAnyHitCollisionCollector_ShouldEarlyOut(
  JoltC_CastRayAnyHitCollisionCollector_t * self,
  char** outErrMsg
);

float JoltC_CastRayAnyHitCollisionCollector_GetEarlyOutFraction(
  JoltC_CastRayAnyHitCollisionCollector_t * self,
  char** outErrMsg
);

float JoltC_CastRayAnyHitCollisionCollector_GetPositiveEarlyOutFraction(
  JoltC_CastRayAnyHitCollisionCollector_t * self,
  char** outErrMsg
);

//endregion functions

//region properties

JoltC_RayCastResult_t * JoltC_CastRayAnyHitCollisionCollector_mHit_Get(
  JoltC_CastRayAnyHitCollisionCollector_t * self,
  char** outErrMsg
);

void JoltC_CastRayAnyHitCollisionCollector_mHit_Set(
  JoltC_CastRayAnyHitCollisionCollector_t * self,
  JoltC_RayCastResult_t * mHit,
  char** outErrMsg
);

//endregion properties


#ifdef __cplusplus
}
#endif

