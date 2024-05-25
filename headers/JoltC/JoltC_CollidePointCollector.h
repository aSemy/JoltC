#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region functions

void JPC_CollidePointCollector_Reset(
  JPC_CollidePointCollector_t * self
);

void JPC_CollidePointCollector_SetContext(
  JPC_CollidePointCollector_t * self,
  const JPC_TransformedShape_t * inContext
);

const JPC_TransformedShape_t * JPC_CollidePointCollector_GetContext(
  JPC_CollidePointCollector_t * self
);

void JPC_CollidePointCollector_UpdateEarlyOutFraction(
  JPC_CollidePointCollector_t * self,
  float inFraction
);

void JPC_CollidePointCollector_ResetEarlyOutFraction(
  JPC_CollidePointCollector_t * self,
  float inFraction
);

void JPC_CollidePointCollector_ForceEarlyOut(
  JPC_CollidePointCollector_t * self
);

bool JPC_CollidePointCollector_ShouldEarlyOut(
  JPC_CollidePointCollector_t * self
);

float JPC_CollidePointCollector_GetEarlyOutFraction(
  JPC_CollidePointCollector_t * self
);

float JPC_CollidePointCollector_GetPositiveEarlyOutFraction(
  JPC_CollidePointCollector_t * self
);

//endregion functions


#ifdef __cplusplus
}
#endif

