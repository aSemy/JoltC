#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region functions

void JPC_CollideShapeCollector_Reset(
  JPC_CollideShapeCollector_t * self
);

void JPC_CollideShapeCollector_SetContext(
  JPC_CollideShapeCollector_t * self,
  const JPC_TransformedShape_t * inContext
);

const JPC_TransformedShape_t * JPC_CollideShapeCollector_GetContext(
  JPC_CollideShapeCollector_t * self
);

void JPC_CollideShapeCollector_UpdateEarlyOutFraction(
  JPC_CollideShapeCollector_t * self,
  float inFraction
);

void JPC_CollideShapeCollector_ResetEarlyOutFraction(
  JPC_CollideShapeCollector_t * self,
  float inFraction
);

void JPC_CollideShapeCollector_ForceEarlyOut(
  JPC_CollideShapeCollector_t * self
);

bool JPC_CollideShapeCollector_ShouldEarlyOut(
  JPC_CollideShapeCollector_t * self
);

float JPC_CollideShapeCollector_GetEarlyOutFraction(
  JPC_CollideShapeCollector_t * self
);

float JPC_CollideShapeCollector_GetPositiveEarlyOutFraction(
  JPC_CollideShapeCollector_t * self
);

//endregion functions


#ifdef __cplusplus
}
#endif

