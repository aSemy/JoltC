#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_CastShapeAnyHitCollisionCollector_t * JoltC_CastShapeAnyHitCollisionCollector_new(
  char** outErrMsg
);

//endregion constructors

//region functions

bool JoltC_CastShapeAnyHitCollisionCollector_HadHit(
  JoltC_CastShapeAnyHitCollisionCollector_t * self,
  char** outErrMsg
);

void JoltC_CastShapeAnyHitCollisionCollector_Reset(
  JoltC_CastShapeAnyHitCollisionCollector_t * self,
  char** outErrMsg
);

void JoltC_CastShapeAnyHitCollisionCollector_SetContext(
  JoltC_CastShapeAnyHitCollisionCollector_t * self,
  const JoltC_TransformedShape_t * inContext,
  char** outErrMsg
);

const JoltC_TransformedShape_t * JoltC_CastShapeAnyHitCollisionCollector_GetContext(
  JoltC_CastShapeAnyHitCollisionCollector_t * self,
  char** outErrMsg
);

void JoltC_CastShapeAnyHitCollisionCollector_UpdateEarlyOutFraction(
  JoltC_CastShapeAnyHitCollisionCollector_t * self,
  float inFraction,
  char** outErrMsg
);

void JoltC_CastShapeAnyHitCollisionCollector_ResetEarlyOutFraction(
  JoltC_CastShapeAnyHitCollisionCollector_t * self,
  float inFraction,
  char** outErrMsg
);

void JoltC_CastShapeAnyHitCollisionCollector_ForceEarlyOut(
  JoltC_CastShapeAnyHitCollisionCollector_t * self,
  char** outErrMsg
);

bool JoltC_CastShapeAnyHitCollisionCollector_ShouldEarlyOut(
  JoltC_CastShapeAnyHitCollisionCollector_t * self,
  char** outErrMsg
);

float JoltC_CastShapeAnyHitCollisionCollector_GetEarlyOutFraction(
  JoltC_CastShapeAnyHitCollisionCollector_t * self,
  char** outErrMsg
);

float JoltC_CastShapeAnyHitCollisionCollector_GetPositiveEarlyOutFraction(
  JoltC_CastShapeAnyHitCollisionCollector_t * self,
  char** outErrMsg
);

//endregion functions

//region properties

JoltC_ShapeCastResult_t * JoltC_CastShapeAnyHitCollisionCollector_mHit_Get(
  JoltC_CastShapeAnyHitCollisionCollector_t * self,
  char** outErrMsg
);

void JoltC_CastShapeAnyHitCollisionCollector_mHit_Set(
  JoltC_CastShapeAnyHitCollisionCollector_t * self,
  JoltC_ShapeCastResult_t * mHit,
  char** outErrMsg
);

//endregion properties


#ifdef __cplusplus
}
#endif

