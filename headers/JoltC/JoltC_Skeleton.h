#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JPC_Skeleton_t * JPC_Skeleton_new();

//endregion constructors

//region functions

long JPC_Skeleton_AddJoint(
  JPC_Skeleton_t * self,
  const JPC_JPHString_t * inName,
  long inParentIndex
);

long JPC_Skeleton_GetJointCount(
  JPC_Skeleton_t * self
);

bool JPC_Skeleton_AreJointsCorrectlyOrdered(
  JPC_Skeleton_t * self
);

void JPC_Skeleton_CalculateParentJointIndices(
  JPC_Skeleton_t * self
);

//endregion functions


#ifdef __cplusplus
}
#endif

