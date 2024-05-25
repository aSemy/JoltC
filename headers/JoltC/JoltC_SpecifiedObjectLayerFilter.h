#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_SpecifiedObjectLayerFilter_t * JoltC_SpecifiedObjectLayerFilter_new(
  unsigned long inObjectLayer,
  char** outErrMsg
);

//endregion constructors


#ifdef __cplusplus
}
#endif

