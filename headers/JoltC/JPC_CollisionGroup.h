#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JPC_CollisionGroup_t * JPC_CollisionGroup_new_0();

JPC_CollisionGroup_t * JPC_CollisionGroup_new_1(
  JPC_GroupFilter_t * inFilter,
  unsigned long inGroupID,
  unsigned long inSubGroupID
);

//endregion constructors

//region functions

void JPC_CollisionGroup_SetGroupFilter(
  JPC_CollisionGroup_t * self,
  JPC_GroupFilter_t * inFilter
);

const JPC_GroupFilter_t * JPC_CollisionGroup_GetGroupFilter(
  JPC_CollisionGroup_t * self
);

void JPC_CollisionGroup_SetGroupID(
  JPC_CollisionGroup_t * self,
  unsigned long inGroupID
);

unsigned long JPC_CollisionGroup_GetGroupID(
  JPC_CollisionGroup_t * self
);

void JPC_CollisionGroup_SetSubGroupID(
  JPC_CollisionGroup_t * self,
  unsigned long inSubGroupID
);

unsigned long JPC_CollisionGroup_GetSubGroupID(
  JPC_CollisionGroup_t * self
);

//endregion functions


#ifdef __cplusplus
}
#endif

