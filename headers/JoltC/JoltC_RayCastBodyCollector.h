#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region functions

void JPC_RayCastBodyCollector_Reset(
  JPC_RayCastBodyCollector_t * self
);

void JPC_RayCastBodyCollector_SetContext(
  JPC_RayCastBodyCollector_t * self,
  const JPC_TransformedShape_t * inContext
);

const JPC_TransformedShape_t * JPC_RayCastBodyCollector_GetContext(
  JPC_RayCastBodyCollector_t * self
);

void JPC_RayCastBodyCollector_UpdateEarlyOutFraction(
  JPC_RayCastBodyCollector_t * self,
  float inFraction
);

void JPC_RayCastBodyCollector_ResetEarlyOutFraction(
  JPC_RayCastBodyCollector_t * self,
  float inFraction
);

void JPC_RayCastBodyCollector_ForceEarlyOut(
  JPC_RayCastBodyCollector_t * self
);

bool JPC_RayCastBodyCollector_ShouldEarlyOut(
  JPC_RayCastBodyCollector_t * self
);

float JPC_RayCastBodyCollector_GetEarlyOutFraction(
  JPC_RayCastBodyCollector_t * self
);

float JPC_RayCastBodyCollector_GetPositiveEarlyOutFraction(
  JPC_RayCastBodyCollector_t * self
);

//endregion functions


#ifdef __cplusplus
}
#endif

