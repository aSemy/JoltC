#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_ShapeCastResult_t * JoltC_ShapeCastResult_new(
  char** outErrMsg
);

//endregion constructors

//region properties

float JoltC_ShapeCastResult_mFraction_Get(
  JoltC_ShapeCastResult_t * self,
  char** outErrMsg
);

void JoltC_ShapeCastResult_mFraction_Set(
  JoltC_ShapeCastResult_t * self,
  float mFraction,
  char** outErrMsg
);

bool JoltC_ShapeCastResult_mIsBackFaceHit_Get(
  JoltC_ShapeCastResult_t * self,
  char** outErrMsg
);

void JoltC_ShapeCastResult_mIsBackFaceHit_Set(
  JoltC_ShapeCastResult_t * self,
  bool mIsBackFaceHit,
  char** outErrMsg
);

JoltC_Vec3_t * JoltC_ShapeCastResult_mContactPointOn1_Get(
  JoltC_ShapeCastResult_t * self,
  char** outErrMsg
);

void JoltC_ShapeCastResult_mContactPointOn1_Set(
  JoltC_ShapeCastResult_t * self,
  JoltC_Vec3_t * mContactPointOn1,
  char** outErrMsg
);

JoltC_Vec3_t * JoltC_ShapeCastResult_mContactPointOn2_Get(
  JoltC_ShapeCastResult_t * self,
  char** outErrMsg
);

void JoltC_ShapeCastResult_mContactPointOn2_Set(
  JoltC_ShapeCastResult_t * self,
  JoltC_Vec3_t * mContactPointOn2,
  char** outErrMsg
);

JoltC_Vec3_t * JoltC_ShapeCastResult_mPenetrationAxis_Get(
  JoltC_ShapeCastResult_t * self,
  char** outErrMsg
);

void JoltC_ShapeCastResult_mPenetrationAxis_Set(
  JoltC_ShapeCastResult_t * self,
  JoltC_Vec3_t * mPenetrationAxis,
  char** outErrMsg
);

float JoltC_ShapeCastResult_mPenetrationDepth_Get(
  JoltC_ShapeCastResult_t * self,
  char** outErrMsg
);

void JoltC_ShapeCastResult_mPenetrationDepth_Set(
  JoltC_ShapeCastResult_t * self,
  float mPenetrationDepth,
  char** outErrMsg
);

JoltC_SubShapeID_t * JoltC_ShapeCastResult_mSubShapeID1_Get(
  JoltC_ShapeCastResult_t * self,
  char** outErrMsg
);

void JoltC_ShapeCastResult_mSubShapeID1_Set(
  JoltC_ShapeCastResult_t * self,
  JoltC_SubShapeID_t * mSubShapeID1,
  char** outErrMsg
);

JoltC_SubShapeID_t * JoltC_ShapeCastResult_mSubShapeID2_Get(
  JoltC_ShapeCastResult_t * self,
  char** outErrMsg
);

void JoltC_ShapeCastResult_mSubShapeID2_Set(
  JoltC_ShapeCastResult_t * self,
  JoltC_SubShapeID_t * mSubShapeID2,
  char** outErrMsg
);

JoltC_BodyID_t * JoltC_ShapeCastResult_mBodyID2_Get(
  JoltC_ShapeCastResult_t * self,
  char** outErrMsg
);

void JoltC_ShapeCastResult_mBodyID2_Set(
  JoltC_ShapeCastResult_t * self,
  JoltC_BodyID_t * mBodyID2,
  char** outErrMsg
);

JoltC_CollideShapeResultFace_t * JoltC_ShapeCastResult_mShape1Face_Get(
  JoltC_ShapeCastResult_t * self,
  char** outErrMsg
);

void JoltC_ShapeCastResult_mShape1Face_Set(
  JoltC_ShapeCastResult_t * self,
  JoltC_CollideShapeResultFace_t * mShape1Face,
  char** outErrMsg
);

JoltC_CollideShapeResultFace_t * JoltC_ShapeCastResult_mShape2Face_Get(
  JoltC_ShapeCastResult_t * self,
  char** outErrMsg
);

void JoltC_ShapeCastResult_mShape2Face_Set(
  JoltC_ShapeCastResult_t * self,
  JoltC_CollideShapeResultFace_t * mShape2Face,
  char** outErrMsg
);

//endregion properties


#ifdef __cplusplus
}
#endif

