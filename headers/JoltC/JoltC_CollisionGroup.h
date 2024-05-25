#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_CollisionGroup_t * JoltC_CollisionGroup_new_0(
  char** outErrMsg
);

JoltC_CollisionGroup_t * JoltC_CollisionGroup_new_1(
  JoltC_GroupFilter_t * inFilter,
  unsigned long inGroupID,
  unsigned long inSubGroupID,
  char** outErrMsg
);

//endregion constructors

//region functions

void JoltC_CollisionGroup_SetGroupFilter(
  JoltC_CollisionGroup_t * self,
  JoltC_GroupFilter_t * inFilter,
  char** outErrMsg
);

const JoltC_GroupFilter_t * JoltC_CollisionGroup_GetGroupFilter(
  JoltC_CollisionGroup_t * self,
  char** outErrMsg
);

void JoltC_CollisionGroup_SetGroupID(
  JoltC_CollisionGroup_t * self,
  unsigned long inGroupID,
  char** outErrMsg
);

unsigned long JoltC_CollisionGroup_GetGroupID(
  JoltC_CollisionGroup_t * self,
  char** outErrMsg
);

void JoltC_CollisionGroup_SetSubGroupID(
  JoltC_CollisionGroup_t * self,
  unsigned long inSubGroupID,
  char** outErrMsg
);

unsigned long JoltC_CollisionGroup_GetSubGroupID(
  JoltC_CollisionGroup_t * self,
  char** outErrMsg
);

//endregion functions


#ifdef __cplusplus
}
#endif

