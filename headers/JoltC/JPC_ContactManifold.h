#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JPC_ContactManifold_t * JPC_ContactManifold_new();

//endregion constructors

//region functions

JPC_ContactManifold_t * JPC_ContactManifold_SwapShapes(
  JPC_ContactManifold_t * self
);

JPC_RVec3_t * JPC_ContactManifold_GetWorldSpaceContactPointOn1(
  JPC_ContactManifold_t * self,
  unsigned long inIndex
);

JPC_RVec3_t * JPC_ContactManifold_GetWorldSpaceContactPointOn2(
  JPC_ContactManifold_t * self,
  unsigned long inIndex
);

//endregion functions

//region properties

JPC_RVec3_t * JPC_ContactManifold_mBaseOffset_Get(
  JPC_ContactManifold_t * self
);

void JPC_ContactManifold_mBaseOffset_Set(
  JPC_ContactManifold_t * self,
  JPC_RVec3_t * mBaseOffset
);

JPC_Vec3_t * JPC_ContactManifold_mWorldSpaceNormal_Get(
  JPC_ContactManifold_t * self
);

void JPC_ContactManifold_mWorldSpaceNormal_Set(
  JPC_ContactManifold_t * self,
  JPC_Vec3_t * mWorldSpaceNormal
);

float JPC_ContactManifold_mPenetrationDepth_Get(
  JPC_ContactManifold_t * self
);

void JPC_ContactManifold_mPenetrationDepth_Set(
  JPC_ContactManifold_t * self,
  float mPenetrationDepth
);

JPC_SubShapeID_t * JPC_ContactManifold_mSubShapeID1_Get(
  JPC_ContactManifold_t * self
);

void JPC_ContactManifold_mSubShapeID1_Set(
  JPC_ContactManifold_t * self,
  JPC_SubShapeID_t * mSubShapeID1
);

JPC_SubShapeID_t * JPC_ContactManifold_mSubShapeID2_Get(
  JPC_ContactManifold_t * self
);

void JPC_ContactManifold_mSubShapeID2_Set(
  JPC_ContactManifold_t * self,
  JPC_SubShapeID_t * mSubShapeID2
);

JPC_ContactPoints_t * JPC_ContactManifold_mRelativeContactPointsOn1_Get(
  JPC_ContactManifold_t * self
);

void JPC_ContactManifold_mRelativeContactPointsOn1_Set(
  JPC_ContactManifold_t * self,
  JPC_ContactPoints_t * mRelativeContactPointsOn1
);

JPC_ContactPoints_t * JPC_ContactManifold_mRelativeContactPointsOn2_Get(
  JPC_ContactManifold_t * self
);

void JPC_ContactManifold_mRelativeContactPointsOn2_Set(
  JPC_ContactManifold_t * self,
  JPC_ContactPoints_t * mRelativeContactPointsOn2
);

//endregion properties


#ifdef __cplusplus
}
#endif

