#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_CollideShapeAnyHitCollisionCollector_t * JoltC_CollideShapeAnyHitCollisionCollector_new(
  char** outErrMsg
);

//endregion constructors

//region functions

bool JoltC_CollideShapeAnyHitCollisionCollector_HadHit(
  JoltC_CollideShapeAnyHitCollisionCollector_t * self,
  char** outErrMsg
);

void JoltC_CollideShapeAnyHitCollisionCollector_Reset(
  JoltC_CollideShapeAnyHitCollisionCollector_t * self,
  char** outErrMsg
);

void JoltC_CollideShapeAnyHitCollisionCollector_SetContext(
  JoltC_CollideShapeAnyHitCollisionCollector_t * self,
  const JoltC_TransformedShape_t * inContext,
  char** outErrMsg
);

const JoltC_TransformedShape_t * JoltC_CollideShapeAnyHitCollisionCollector_GetContext(
  JoltC_CollideShapeAnyHitCollisionCollector_t * self,
  char** outErrMsg
);

void JoltC_CollideShapeAnyHitCollisionCollector_UpdateEarlyOutFraction(
  JoltC_CollideShapeAnyHitCollisionCollector_t * self,
  float inFraction,
  char** outErrMsg
);

void JoltC_CollideShapeAnyHitCollisionCollector_ResetEarlyOutFraction(
  JoltC_CollideShapeAnyHitCollisionCollector_t * self,
  float inFraction,
  char** outErrMsg
);

void JoltC_CollideShapeAnyHitCollisionCollector_ForceEarlyOut(
  JoltC_CollideShapeAnyHitCollisionCollector_t * self,
  char** outErrMsg
);

bool JoltC_CollideShapeAnyHitCollisionCollector_ShouldEarlyOut(
  JoltC_CollideShapeAnyHitCollisionCollector_t * self,
  char** outErrMsg
);

float JoltC_CollideShapeAnyHitCollisionCollector_GetEarlyOutFraction(
  JoltC_CollideShapeAnyHitCollisionCollector_t * self,
  char** outErrMsg
);

float JoltC_CollideShapeAnyHitCollisionCollector_GetPositiveEarlyOutFraction(
  JoltC_CollideShapeAnyHitCollisionCollector_t * self,
  char** outErrMsg
);

//endregion functions

//region properties

JoltC_CollideShapeResult_t * JoltC_CollideShapeAnyHitCollisionCollector_mHit_Get(
  JoltC_CollideShapeAnyHitCollisionCollector_t * self,
  char** outErrMsg
);

void JoltC_CollideShapeAnyHitCollisionCollector_mHit_Set(
  JoltC_CollideShapeAnyHitCollisionCollector_t * self,
  JoltC_CollideShapeResult_t * mHit,
  char** outErrMsg
);

//endregion properties


#ifdef __cplusplus
}
#endif

