#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_CollideShapeResult_t * JoltC_CollideShapeResult_new();

//endregion

//region converters

/**
 * Convert an instance of JoltC_ShapeCastResult_t into JoltC_CollideShapeResult_t.
 */
JoltC_CollideShapeResult_t * JoltC_CollideShapeResult_From_ShapeCastResult(
  JoltC_ShapeCastResult_t * subtype
);

//endregion

//region properties

JoltC_Vec3_t * JoltC_CollideShapeResult_mContactPointOn1_Get(
  JoltC_CollideShapeResult_t * self
);

void JoltC_CollideShapeResult_mContactPointOn1_Set(
  JoltC_CollideShapeResult_t * self,
  JoltC_Vec3_t * mContactPointOn1
);

JoltC_Vec3_t * JoltC_CollideShapeResult_mContactPointOn2_Get(
  JoltC_CollideShapeResult_t * self
);

void JoltC_CollideShapeResult_mContactPointOn2_Set(
  JoltC_CollideShapeResult_t * self,
  JoltC_Vec3_t * mContactPointOn2
);

JoltC_Vec3_t * JoltC_CollideShapeResult_mPenetrationAxis_Get(
  JoltC_CollideShapeResult_t * self
);

void JoltC_CollideShapeResult_mPenetrationAxis_Set(
  JoltC_CollideShapeResult_t * self,
  JoltC_Vec3_t * mPenetrationAxis
);

float JoltC_CollideShapeResult_mPenetrationDepth_Get(
  JoltC_CollideShapeResult_t * self
);

void JoltC_CollideShapeResult_mPenetrationDepth_Set(
  JoltC_CollideShapeResult_t * self,
  float mPenetrationDepth
);

JoltC_SubShapeID_t * JoltC_CollideShapeResult_mSubShapeID1_Get(
  JoltC_CollideShapeResult_t * self
);

void JoltC_CollideShapeResult_mSubShapeID1_Set(
  JoltC_CollideShapeResult_t * self,
  JoltC_SubShapeID_t * mSubShapeID1
);

JoltC_SubShapeID_t * JoltC_CollideShapeResult_mSubShapeID2_Get(
  JoltC_CollideShapeResult_t * self
);

void JoltC_CollideShapeResult_mSubShapeID2_Set(
  JoltC_CollideShapeResult_t * self,
  JoltC_SubShapeID_t * mSubShapeID2
);

JoltC_BodyID_t * JoltC_CollideShapeResult_mBodyID2_Get(
  JoltC_CollideShapeResult_t * self
);

void JoltC_CollideShapeResult_mBodyID2_Set(
  JoltC_CollideShapeResult_t * self,
  JoltC_BodyID_t * mBodyID2
);

JoltC_CollideShapeResultFace_t * JoltC_CollideShapeResult_mShape1Face_Get(
  JoltC_CollideShapeResult_t * self
);

void JoltC_CollideShapeResult_mShape1Face_Set(
  JoltC_CollideShapeResult_t * self,
  JoltC_CollideShapeResultFace_t * mShape1Face
);

JoltC_CollideShapeResultFace_t * JoltC_CollideShapeResult_mShape2Face_Get(
  JoltC_CollideShapeResult_t * self
);

void JoltC_CollideShapeResult_mShape2Face_Set(
  JoltC_CollideShapeResult_t * self,
  JoltC_CollideShapeResultFace_t * mShape2Face
);

//endregion


#ifdef __cplusplus
}
#endif

