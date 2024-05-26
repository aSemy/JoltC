#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region functions

void JoltC_CollideShapeBodyCollector_Reset(
  JoltC_CollideShapeBodyCollector_t * self
);

void JoltC_CollideShapeBodyCollector_SetContext(
  JoltC_CollideShapeBodyCollector_t * self,
  JoltC_TransformedShape_t * inContext
);

JoltC_TransformedShape_t * JoltC_CollideShapeBodyCollector_GetContext(
  JoltC_CollideShapeBodyCollector_t * self
);

void JoltC_CollideShapeBodyCollector_UpdateEarlyOutFraction(
  JoltC_CollideShapeBodyCollector_t * self,
  float inFraction
);

void JoltC_CollideShapeBodyCollector_ResetEarlyOutFraction(
  JoltC_CollideShapeBodyCollector_t * self,
  float inFraction
);

void JoltC_CollideShapeBodyCollector_ForceEarlyOut(
  JoltC_CollideShapeBodyCollector_t * self
);

bool JoltC_CollideShapeBodyCollector_ShouldEarlyOut(
  JoltC_CollideShapeBodyCollector_t * self
);

float JoltC_CollideShapeBodyCollector_GetEarlyOutFraction(
  JoltC_CollideShapeBodyCollector_t * self
);

float JoltC_CollideShapeBodyCollector_GetPositiveEarlyOutFraction(
  JoltC_CollideShapeBodyCollector_t * self
);

//endregion


#ifdef __cplusplus
}
#endif

