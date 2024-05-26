#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_CollisionGroup_t * JoltC_CollisionGroup_new_0();

JoltC_CollisionGroup_t * JoltC_CollisionGroup_new_1(
  JoltC_GroupFilter_t * inFilter,
  unsigned long inGroupID,
  unsigned long inSubGroupID
);

//endregion

//region functions

void JoltC_CollisionGroup_SetGroupFilter(
  JoltC_CollisionGroup_t * self,
  JoltC_GroupFilter_t * inFilter
);

const JoltC_GroupFilter_t * JoltC_CollisionGroup_GetGroupFilter(
  JoltC_CollisionGroup_t * self
);

void JoltC_CollisionGroup_SetGroupID(
  JoltC_CollisionGroup_t * self,
  unsigned long inGroupID
);

unsigned long JoltC_CollisionGroup_GetGroupID(
  JoltC_CollisionGroup_t * self
);

void JoltC_CollisionGroup_SetSubGroupID(
  JoltC_CollisionGroup_t * self,
  unsigned long inSubGroupID
);

unsigned long JoltC_CollisionGroup_GetSubGroupID(
  JoltC_CollisionGroup_t * self
);

//endregion


#ifdef __cplusplus
}
#endif

