#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JPC_ShapeCastSettings_t * JPC_ShapeCastSettings_new();

//endregion constructors

//region properties

JPC_EBackFaceMode JPC_ShapeCastSettings_mBackFaceModeTriangles_Get(
  JPC_ShapeCastSettings_t * self
);

void JPC_ShapeCastSettings_mBackFaceModeTriangles_Set(
  JPC_ShapeCastSettings_t * self,
  JPC_EBackFaceMode mBackFaceModeTriangles
);

JPC_EBackFaceMode JPC_ShapeCastSettings_mBackFaceModeConvex_Get(
  JPC_ShapeCastSettings_t * self
);

void JPC_ShapeCastSettings_mBackFaceModeConvex_Set(
  JPC_ShapeCastSettings_t * self,
  JPC_EBackFaceMode mBackFaceModeConvex
);

bool JPC_ShapeCastSettings_mUseShrunkenShapeAndConvexRadius_Get(
  JPC_ShapeCastSettings_t * self
);

void JPC_ShapeCastSettings_mUseShrunkenShapeAndConvexRadius_Set(
  JPC_ShapeCastSettings_t * self,
  bool mUseShrunkenShapeAndConvexRadius
);

bool JPC_ShapeCastSettings_mReturnDeepestPoint_Get(
  JPC_ShapeCastSettings_t * self
);

void JPC_ShapeCastSettings_mReturnDeepestPoint_Set(
  JPC_ShapeCastSettings_t * self,
  bool mReturnDeepestPoint
);

JPC_EActiveEdgeMode JPC_ShapeCastSettings_mActiveEdgeMode_Get(
  JPC_ShapeCastSettings_t * self
);

void JPC_ShapeCastSettings_mActiveEdgeMode_Set(
  JPC_ShapeCastSettings_t * self,
  JPC_EActiveEdgeMode mActiveEdgeMode
);

JPC_ECollectFacesMode JPC_ShapeCastSettings_mCollectFacesMode_Get(
  JPC_ShapeCastSettings_t * self
);

void JPC_ShapeCastSettings_mCollectFacesMode_Set(
  JPC_ShapeCastSettings_t * self,
  JPC_ECollectFacesMode mCollectFacesMode
);

float JPC_ShapeCastSettings_mCollisionTolerance_Get(
  JPC_ShapeCastSettings_t * self
);

void JPC_ShapeCastSettings_mCollisionTolerance_Set(
  JPC_ShapeCastSettings_t * self,
  float mCollisionTolerance
);

float JPC_ShapeCastSettings_mPenetrationTolerance_Get(
  JPC_ShapeCastSettings_t * self
);

void JPC_ShapeCastSettings_mPenetrationTolerance_Set(
  JPC_ShapeCastSettings_t * self,
  float mPenetrationTolerance
);

JPC_Vec3_t * JPC_ShapeCastSettings_mActiveEdgeMovementDirection_Get(
  JPC_ShapeCastSettings_t * self
);

void JPC_ShapeCastSettings_mActiveEdgeMovementDirection_Set(
  JPC_ShapeCastSettings_t * self,
  JPC_Vec3_t * mActiveEdgeMovementDirection
);

//endregion properties


#ifdef __cplusplus
}
#endif

