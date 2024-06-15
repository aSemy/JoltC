#pragma once
#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region destructor

void JoltC_RayCastBodyCollector_destroy(
  JoltC_RayCastBodyCollector_t * self
);

//endregion
//region functions

void JoltC_RayCastBodyCollector_Reset(
  JoltC_RayCastBodyCollector_t * self
);

void JoltC_RayCastBodyCollector_SetContext(
  JoltC_RayCastBodyCollector_t * self,
  JoltC_TransformedShape_t * inContext
);

JoltC_TransformedShape_t * JoltC_RayCastBodyCollector_GetContext(
  JoltC_RayCastBodyCollector_t * self
);

void JoltC_RayCastBodyCollector_UpdateEarlyOutFraction(
  JoltC_RayCastBodyCollector_t * self,
  float inFraction
);

void JoltC_RayCastBodyCollector_ResetEarlyOutFraction(
  JoltC_RayCastBodyCollector_t * self,
  float inFraction
);

void JoltC_RayCastBodyCollector_ForceEarlyOut(
  JoltC_RayCastBodyCollector_t * self
);

bool JoltC_RayCastBodyCollector_ShouldEarlyOut(
  JoltC_RayCastBodyCollector_t * self
);

float JoltC_RayCastBodyCollector_GetEarlyOutFraction(
  JoltC_RayCastBodyCollector_t * self
);

float JoltC_RayCastBodyCollector_GetPositiveEarlyOutFraction(
  JoltC_RayCastBodyCollector_t * self
);

//endregion


#ifdef __cplusplus
}
#endif
