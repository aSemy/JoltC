#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JPC_CollideShapeResult_t * JPC_CollideShapeResult_new();

//endregion constructors

//region properties

JPC_Vec3_t * JPC_CollideShapeResult_mContactPointOn1_Get(
  JPC_CollideShapeResult_t * self
);

void JPC_CollideShapeResult_mContactPointOn1_Set(
  JPC_CollideShapeResult_t * self,
  JPC_Vec3_t * mContactPointOn1
);

JPC_Vec3_t * JPC_CollideShapeResult_mContactPointOn2_Get(
  JPC_CollideShapeResult_t * self
);

void JPC_CollideShapeResult_mContactPointOn2_Set(
  JPC_CollideShapeResult_t * self,
  JPC_Vec3_t * mContactPointOn2
);

JPC_Vec3_t * JPC_CollideShapeResult_mPenetrationAxis_Get(
  JPC_CollideShapeResult_t * self
);

void JPC_CollideShapeResult_mPenetrationAxis_Set(
  JPC_CollideShapeResult_t * self,
  JPC_Vec3_t * mPenetrationAxis
);

float JPC_CollideShapeResult_mPenetrationDepth_Get(
  JPC_CollideShapeResult_t * self
);

void JPC_CollideShapeResult_mPenetrationDepth_Set(
  JPC_CollideShapeResult_t * self,
  float mPenetrationDepth
);

JPC_SubShapeID_t * JPC_CollideShapeResult_mSubShapeID1_Get(
  JPC_CollideShapeResult_t * self
);

void JPC_CollideShapeResult_mSubShapeID1_Set(
  JPC_CollideShapeResult_t * self,
  JPC_SubShapeID_t * mSubShapeID1
);

JPC_SubShapeID_t * JPC_CollideShapeResult_mSubShapeID2_Get(
  JPC_CollideShapeResult_t * self
);

void JPC_CollideShapeResult_mSubShapeID2_Set(
  JPC_CollideShapeResult_t * self,
  JPC_SubShapeID_t * mSubShapeID2
);

JPC_BodyID_t * JPC_CollideShapeResult_mBodyID2_Get(
  JPC_CollideShapeResult_t * self
);

void JPC_CollideShapeResult_mBodyID2_Set(
  JPC_CollideShapeResult_t * self,
  JPC_BodyID_t * mBodyID2
);

JPC_CollideShapeResultFace_t * JPC_CollideShapeResult_mShape1Face_Get(
  JPC_CollideShapeResult_t * self
);

void JPC_CollideShapeResult_mShape1Face_Set(
  JPC_CollideShapeResult_t * self,
  JPC_CollideShapeResultFace_t * mShape1Face
);

JPC_CollideShapeResultFace_t * JPC_CollideShapeResult_mShape2Face_Get(
  JPC_CollideShapeResult_t * self
);

void JPC_CollideShapeResult_mShape2Face_Set(
  JPC_CollideShapeResult_t * self,
  JPC_CollideShapeResultFace_t * mShape2Face
);

//endregion properties


#ifdef __cplusplus
}
#endif

