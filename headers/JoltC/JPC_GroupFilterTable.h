#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JPC_GroupFilterTable_t * JPC_GroupFilterTable_new(
  unsigned long inNumGroups
);

//endregion constructors

//region functions

void JPC_GroupFilterTable_DisableCollision(
  JPC_GroupFilterTable_t * self,
  unsigned long inSubGroup1,
  unsigned long inSubGroup2
);

void JPC_GroupFilterTable_EnableCollision(
  JPC_GroupFilterTable_t * self,
  unsigned long inSubGroup1,
  unsigned long inSubGroup2
);

bool JPC_GroupFilterTable_IsCollisionEnabled(
  JPC_GroupFilterTable_t * self,
  unsigned long inSubGroup1,
  unsigned long inSubGroup2
);

unsigned long JPC_GroupFilterTable_GetRefCount(
  JPC_GroupFilterTable_t * self
);

void JPC_GroupFilterTable_AddRef(
  JPC_GroupFilterTable_t * self
);

void JPC_GroupFilterTable_Release(
  JPC_GroupFilterTable_t * self
);

//endregion functions


#ifdef __cplusplus
}
#endif

