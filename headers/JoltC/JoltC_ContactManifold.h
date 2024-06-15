#pragma once
#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_ContactManifold_t * JoltC_ContactManifold_new();

//endregion

//region destructor

void JoltC_ContactManifold_destroy(
  JoltC_ContactManifold_t * self
);

//endregion
//region functions

JoltC_ContactManifold_t * JoltC_ContactManifold_SwapShapes(
  JoltC_ContactManifold_t * self
);

JoltC_RVec3_t * JoltC_ContactManifold_GetWorldSpaceContactPointOn1(
  JoltC_ContactManifold_t * self,
  unsigned long inIndex
);

JoltC_RVec3_t * JoltC_ContactManifold_GetWorldSpaceContactPointOn2(
  JoltC_ContactManifold_t * self,
  unsigned long inIndex
);

//endregion

//region properties

JoltC_RVec3_t * JoltC_ContactManifold_mBaseOffset_Get(
  JoltC_ContactManifold_t * self
);

void JoltC_ContactManifold_mBaseOffset_Set(
  JoltC_ContactManifold_t * self,
  JoltC_RVec3_t * mBaseOffset
);

JoltC_Vec3_t * JoltC_ContactManifold_mWorldSpaceNormal_Get(
  JoltC_ContactManifold_t * self
);

void JoltC_ContactManifold_mWorldSpaceNormal_Set(
  JoltC_ContactManifold_t * self,
  JoltC_Vec3_t * mWorldSpaceNormal
);

float JoltC_ContactManifold_mPenetrationDepth_Get(
  JoltC_ContactManifold_t * self
);

void JoltC_ContactManifold_mPenetrationDepth_Set(
  JoltC_ContactManifold_t * self,
  float mPenetrationDepth
);

JoltC_SubShapeID_t * JoltC_ContactManifold_mSubShapeID1_Get(
  JoltC_ContactManifold_t * self
);

void JoltC_ContactManifold_mSubShapeID1_Set(
  JoltC_ContactManifold_t * self,
  JoltC_SubShapeID_t * mSubShapeID1
);

JoltC_SubShapeID_t * JoltC_ContactManifold_mSubShapeID2_Get(
  JoltC_ContactManifold_t * self
);

void JoltC_ContactManifold_mSubShapeID2_Set(
  JoltC_ContactManifold_t * self,
  JoltC_SubShapeID_t * mSubShapeID2
);

JoltC_ContactPoints_t * JoltC_ContactManifold_mRelativeContactPointsOn1_Get(
  JoltC_ContactManifold_t * self
);

void JoltC_ContactManifold_mRelativeContactPointsOn1_Set(
  JoltC_ContactManifold_t * self,
  JoltC_ContactPoints_t * mRelativeContactPointsOn1
);

JoltC_ContactPoints_t * JoltC_ContactManifold_mRelativeContactPointsOn2_Get(
  JoltC_ContactManifold_t * self
);

void JoltC_ContactManifold_mRelativeContactPointsOn2_Set(
  JoltC_ContactManifold_t * self,
  JoltC_ContactPoints_t * mRelativeContactPointsOn2
);

//endregion


#ifdef __cplusplus
}
#endif
