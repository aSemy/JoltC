#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_GroupFilterTable_t * JoltC_GroupFilterTable_new(
  unsigned long inNumGroups,
  char** outErrMsg
);

//endregion constructors

//region functions

void JoltC_GroupFilterTable_DisableCollision(
  JoltC_GroupFilterTable_t * self,
  unsigned long inSubGroup1,
  unsigned long inSubGroup2,
  char** outErrMsg
);

void JoltC_GroupFilterTable_EnableCollision(
  JoltC_GroupFilterTable_t * self,
  unsigned long inSubGroup1,
  unsigned long inSubGroup2,
  char** outErrMsg
);

bool JoltC_GroupFilterTable_IsCollisionEnabled(
  JoltC_GroupFilterTable_t * self,
  unsigned long inSubGroup1,
  unsigned long inSubGroup2,
  char** outErrMsg
);

unsigned long JoltC_GroupFilterTable_GetRefCount(
  JoltC_GroupFilterTable_t * self,
  char** outErrMsg
);

void JoltC_GroupFilterTable_AddRef(
  JoltC_GroupFilterTable_t * self,
  char** outErrMsg
);

void JoltC_GroupFilterTable_Release(
  JoltC_GroupFilterTable_t * self,
  char** outErrMsg
);

//endregion functions


#ifdef __cplusplus
}
#endif

