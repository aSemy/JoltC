#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_ObjectLayerPairFilter_t * JoltC_ObjectLayerPairFilter_new(
  char** outErrMsg
);

//endregion constructors

//region functions

bool JoltC_ObjectLayerPairFilter_ShouldCollide(
  JoltC_ObjectLayerPairFilter_t * self,
  unsigned long inLayer1,
  unsigned long inLayer2,
  char** outErrMsg
);

//endregion functions


#ifdef __cplusplus
}
#endif

