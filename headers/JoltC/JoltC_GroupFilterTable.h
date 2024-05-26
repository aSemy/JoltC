#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_GroupFilterTable_t * JoltC_GroupFilterTable_new(
  unsigned long inNumGroups
);

//endregion

//region functions

void JoltC_GroupFilterTable_DisableCollision(
  JoltC_GroupFilterTable_t * self,
  unsigned long inSubGroup1,
  unsigned long inSubGroup2
);

void JoltC_GroupFilterTable_EnableCollision(
  JoltC_GroupFilterTable_t * self,
  unsigned long inSubGroup1,
  unsigned long inSubGroup2
);

bool JoltC_GroupFilterTable_IsCollisionEnabled(
  JoltC_GroupFilterTable_t * self,
  unsigned long inSubGroup1,
  unsigned long inSubGroup2
);

unsigned long JoltC_GroupFilterTable_GetRefCount(
  JoltC_GroupFilterTable_t * self
);

void JoltC_GroupFilterTable_AddRef(
  JoltC_GroupFilterTable_t * self
);

void JoltC_GroupFilterTable_Release(
  JoltC_GroupFilterTable_t * self
);

//endregion


#ifdef __cplusplus
}
#endif

