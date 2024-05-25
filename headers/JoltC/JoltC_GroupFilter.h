#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region functions

unsigned long JPC_GroupFilter_GetRefCount(
  JPC_GroupFilter_t * self
);

void JPC_GroupFilter_AddRef(
  JPC_GroupFilter_t * self
);

void JPC_GroupFilter_Release(
  JPC_GroupFilter_t * self
);

//endregion functions


#ifdef __cplusplus
}
#endif

