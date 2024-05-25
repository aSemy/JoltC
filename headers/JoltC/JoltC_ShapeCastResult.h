#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JPC_ShapeCastResult_t * JPC_ShapeCastResult_new();

//endregion constructors

//region properties

float JPC_ShapeCastResult_mFraction_Get(
  JPC_ShapeCastResult_t * self
);

void JPC_ShapeCastResult_mFraction_Set(
  JPC_ShapeCastResult_t * self,
  float mFraction
);

bool JPC_ShapeCastResult_mIsBackFaceHit_Get(
  JPC_ShapeCastResult_t * self
);

void JPC_ShapeCastResult_mIsBackFaceHit_Set(
  JPC_ShapeCastResult_t * self,
  bool mIsBackFaceHit
);

JPC_Vec3_t * JPC_ShapeCastResult_mContactPointOn1_Get(
  JPC_ShapeCastResult_t * self
);

void JPC_ShapeCastResult_mContactPointOn1_Set(
  JPC_ShapeCastResult_t * self,
  JPC_Vec3_t * mContactPointOn1
);

JPC_Vec3_t * JPC_ShapeCastResult_mContactPointOn2_Get(
  JPC_ShapeCastResult_t * self
);

void JPC_ShapeCastResult_mContactPointOn2_Set(
  JPC_ShapeCastResult_t * self,
  JPC_Vec3_t * mContactPointOn2
);

JPC_Vec3_t * JPC_ShapeCastResult_mPenetrationAxis_Get(
  JPC_ShapeCastResult_t * self
);

void JPC_ShapeCastResult_mPenetrationAxis_Set(
  JPC_ShapeCastResult_t * self,
  JPC_Vec3_t * mPenetrationAxis
);

float JPC_ShapeCastResult_mPenetrationDepth_Get(
  JPC_ShapeCastResult_t * self
);

void JPC_ShapeCastResult_mPenetrationDepth_Set(
  JPC_ShapeCastResult_t * self,
  float mPenetrationDepth
);

JPC_SubShapeID_t * JPC_ShapeCastResult_mSubShapeID1_Get(
  JPC_ShapeCastResult_t * self
);

void JPC_ShapeCastResult_mSubShapeID1_Set(
  JPC_ShapeCastResult_t * self,
  JPC_SubShapeID_t * mSubShapeID1
);

JPC_SubShapeID_t * JPC_ShapeCastResult_mSubShapeID2_Get(
  JPC_ShapeCastResult_t * self
);

void JPC_ShapeCastResult_mSubShapeID2_Set(
  JPC_ShapeCastResult_t * self,
  JPC_SubShapeID_t * mSubShapeID2
);

JPC_BodyID_t * JPC_ShapeCastResult_mBodyID2_Get(
  JPC_ShapeCastResult_t * self
);

void JPC_ShapeCastResult_mBodyID2_Set(
  JPC_ShapeCastResult_t * self,
  JPC_BodyID_t * mBodyID2
);

JPC_CollideShapeResultFace_t * JPC_ShapeCastResult_mShape1Face_Get(
  JPC_ShapeCastResult_t * self
);

void JPC_ShapeCastResult_mShape1Face_Set(
  JPC_ShapeCastResult_t * self,
  JPC_CollideShapeResultFace_t * mShape1Face
);

JPC_CollideShapeResultFace_t * JPC_ShapeCastResult_mShape2Face_Get(
  JPC_ShapeCastResult_t * self
);

void JPC_ShapeCastResult_mShape2Face_Set(
  JPC_ShapeCastResult_t * self,
  JPC_CollideShapeResultFace_t * mShape2Face
);

//endregion properties


#ifdef __cplusplus
}
#endif

