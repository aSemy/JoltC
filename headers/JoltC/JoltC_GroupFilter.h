#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region functions

unsigned long JoltC_GroupFilter_GetRefCount(
  JoltC_GroupFilter_t * self,
  char** outErrMsg
);

void JoltC_GroupFilter_AddRef(
  JoltC_GroupFilter_t * self,
  char** outErrMsg
);

void JoltC_GroupFilter_Release(
  JoltC_GroupFilter_t * self,
  char** outErrMsg
);

//endregion functions


#ifdef __cplusplus
}
#endif

