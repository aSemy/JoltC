#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_ContactManifold_t * JoltC_ContactManifold_new(
  char** outErrMsg
);

//endregion constructors

//region functions

JoltC_ContactManifold_t * JoltC_ContactManifold_SwapShapes(
  JoltC_ContactManifold_t * self,
  char** outErrMsg
);

JoltC_RVec3_t * JoltC_ContactManifold_GetWorldSpaceContactPointOn1(
  JoltC_ContactManifold_t * self,
  unsigned long inIndex,
  char** outErrMsg
);

JoltC_RVec3_t * JoltC_ContactManifold_GetWorldSpaceContactPointOn2(
  JoltC_ContactManifold_t * self,
  unsigned long inIndex,
  char** outErrMsg
);

//endregion functions

//region properties

JoltC_RVec3_t * JoltC_ContactManifold_mBaseOffset_Get(
  JoltC_ContactManifold_t * self,
  char** outErrMsg
);

void JoltC_ContactManifold_mBaseOffset_Set(
  JoltC_ContactManifold_t * self,
  JoltC_RVec3_t * mBaseOffset,
  char** outErrMsg
);

JoltC_Vec3_t * JoltC_ContactManifold_mWorldSpaceNormal_Get(
  JoltC_ContactManifold_t * self,
  char** outErrMsg
);

void JoltC_ContactManifold_mWorldSpaceNormal_Set(
  JoltC_ContactManifold_t * self,
  JoltC_Vec3_t * mWorldSpaceNormal,
  char** outErrMsg
);

float JoltC_ContactManifold_mPenetrationDepth_Get(
  JoltC_ContactManifold_t * self,
  char** outErrMsg
);

void JoltC_ContactManifold_mPenetrationDepth_Set(
  JoltC_ContactManifold_t * self,
  float mPenetrationDepth,
  char** outErrMsg
);

JoltC_SubShapeID_t * JoltC_ContactManifold_mSubShapeID1_Get(
  JoltC_ContactManifold_t * self,
  char** outErrMsg
);

void JoltC_ContactManifold_mSubShapeID1_Set(
  JoltC_ContactManifold_t * self,
  JoltC_SubShapeID_t * mSubShapeID1,
  char** outErrMsg
);

JoltC_SubShapeID_t * JoltC_ContactManifold_mSubShapeID2_Get(
  JoltC_ContactManifold_t * self,
  char** outErrMsg
);

void JoltC_ContactManifold_mSubShapeID2_Set(
  JoltC_ContactManifold_t * self,
  JoltC_SubShapeID_t * mSubShapeID2,
  char** outErrMsg
);

JoltC_ContactPoints_t * JoltC_ContactManifold_mRelativeContactPointsOn1_Get(
  JoltC_ContactManifold_t * self,
  char** outErrMsg
);

void JoltC_ContactManifold_mRelativeContactPointsOn1_Set(
  JoltC_ContactManifold_t * self,
  JoltC_ContactPoints_t * mRelativeContactPointsOn1,
  char** outErrMsg
);

JoltC_ContactPoints_t * JoltC_ContactManifold_mRelativeContactPointsOn2_Get(
  JoltC_ContactManifold_t * self,
  char** outErrMsg
);

void JoltC_ContactManifold_mRelativeContactPointsOn2_Set(
  JoltC_ContactManifold_t * self,
  JoltC_ContactPoints_t * mRelativeContactPointsOn2,
  char** outErrMsg
);

//endregion properties


#ifdef __cplusplus
}
#endif

