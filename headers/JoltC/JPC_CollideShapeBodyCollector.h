#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region functions

void JPC_CollideShapeBodyCollector_Reset(
  JPC_CollideShapeBodyCollector_t * self
);

void JPC_CollideShapeBodyCollector_SetContext(
  JPC_CollideShapeBodyCollector_t * self,
  const JPC_TransformedShape_t * inContext
);

const JPC_TransformedShape_t * JPC_CollideShapeBodyCollector_GetContext(
  JPC_CollideShapeBodyCollector_t * self
);

void JPC_CollideShapeBodyCollector_UpdateEarlyOutFraction(
  JPC_CollideShapeBodyCollector_t * self,
  float inFraction
);

void JPC_CollideShapeBodyCollector_ResetEarlyOutFraction(
  JPC_CollideShapeBodyCollector_t * self,
  float inFraction
);

void JPC_CollideShapeBodyCollector_ForceEarlyOut(
  JPC_CollideShapeBodyCollector_t * self
);

bool JPC_CollideShapeBodyCollector_ShouldEarlyOut(
  JPC_CollideShapeBodyCollector_t * self
);

float JPC_CollideShapeBodyCollector_GetEarlyOutFraction(
  JPC_CollideShapeBodyCollector_t * self
);

float JPC_CollideShapeBodyCollector_GetPositiveEarlyOutFraction(
  JPC_CollideShapeBodyCollector_t * self
);

//endregion functions


#ifdef __cplusplus
}
#endif

