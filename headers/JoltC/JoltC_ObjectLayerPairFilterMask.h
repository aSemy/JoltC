#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_ObjectLayerPairFilterMask_t * JoltC_ObjectLayerPairFilterMask_new(
  char** outErrMsg
);

//endregion constructors

//region functions

unsigned long JoltC_ObjectLayerPairFilterMask_sGetObjectLayer(
  unsigned long inGroup,
  unsigned long inMask,
  char** outErrMsg
);

unsigned long JoltC_ObjectLayerPairFilterMask_sGetGroup(
  unsigned long inObjectLayer,
  char** outErrMsg
);

unsigned long JoltC_ObjectLayerPairFilterMask_sGetMask(
  unsigned long inObjectLayer,
  char** outErrMsg
);

bool JoltC_ObjectLayerPairFilterMask_ShouldCollide(
  JoltC_ObjectLayerPairFilterMask_t * self,
  unsigned long inLayer1,
  unsigned long inLayer2,
  char** outErrMsg
);

//endregion functions


#ifdef __cplusplus
}
#endif

