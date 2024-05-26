#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region converters

/**
 * Convert an instance of JoltC_GroupFilterTable_t into JoltC_GroupFilter_t.
 */
JoltC_GroupFilter_t * JoltC_GroupFilter_From_GroupFilterTable(
  JoltC_GroupFilterTable_t * subtype
);

//endregion

//region functions

unsigned long JoltC_GroupFilter_GetRefCount(
  JoltC_GroupFilter_t * self
);

void JoltC_GroupFilter_AddRef(
  JoltC_GroupFilter_t * self
);

void JoltC_GroupFilter_Release(
  JoltC_GroupFilter_t * self
);

//endregion


#ifdef __cplusplus
}
#endif

