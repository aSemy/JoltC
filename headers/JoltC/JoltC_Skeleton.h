#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_Skeleton_t * JoltC_Skeleton_new(
  char** outErrMsg
);

//endregion constructors

//region functions

long JoltC_Skeleton_AddJoint(
  JoltC_Skeleton_t * self,
  const JoltC_JPHString_t * inName,
  long inParentIndex,
  char** outErrMsg
);

long JoltC_Skeleton_GetJointCount(
  JoltC_Skeleton_t * self,
  char** outErrMsg
);

bool JoltC_Skeleton_AreJointsCorrectlyOrdered(
  JoltC_Skeleton_t * self,
  char** outErrMsg
);

void JoltC_Skeleton_CalculateParentJointIndices(
  JoltC_Skeleton_t * self,
  char** outErrMsg
);

//endregion functions


#ifdef __cplusplus
}
#endif

