#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_ShapeCastSettings_t * JoltC_ShapeCastSettings_new();

//endregion

//region properties

JoltC_EBackFaceMode JoltC_ShapeCastSettings_mBackFaceModeTriangles_Get(
  JoltC_ShapeCastSettings_t * self
);

void JoltC_ShapeCastSettings_mBackFaceModeTriangles_Set(
  JoltC_ShapeCastSettings_t * self,
  JoltC_EBackFaceMode mBackFaceModeTriangles
);

JoltC_EBackFaceMode JoltC_ShapeCastSettings_mBackFaceModeConvex_Get(
  JoltC_ShapeCastSettings_t * self
);

void JoltC_ShapeCastSettings_mBackFaceModeConvex_Set(
  JoltC_ShapeCastSettings_t * self,
  JoltC_EBackFaceMode mBackFaceModeConvex
);

bool JoltC_ShapeCastSettings_mUseShrunkenShapeAndConvexRadius_Get(
  JoltC_ShapeCastSettings_t * self
);

void JoltC_ShapeCastSettings_mUseShrunkenShapeAndConvexRadius_Set(
  JoltC_ShapeCastSettings_t * self,
  bool mUseShrunkenShapeAndConvexRadius
);

bool JoltC_ShapeCastSettings_mReturnDeepestPoint_Get(
  JoltC_ShapeCastSettings_t * self
);

void JoltC_ShapeCastSettings_mReturnDeepestPoint_Set(
  JoltC_ShapeCastSettings_t * self,
  bool mReturnDeepestPoint
);

JoltC_EActiveEdgeMode JoltC_ShapeCastSettings_mActiveEdgeMode_Get(
  JoltC_ShapeCastSettings_t * self
);

void JoltC_ShapeCastSettings_mActiveEdgeMode_Set(
  JoltC_ShapeCastSettings_t * self,
  JoltC_EActiveEdgeMode mActiveEdgeMode
);

JoltC_ECollectFacesMode JoltC_ShapeCastSettings_mCollectFacesMode_Get(
  JoltC_ShapeCastSettings_t * self
);

void JoltC_ShapeCastSettings_mCollectFacesMode_Set(
  JoltC_ShapeCastSettings_t * self,
  JoltC_ECollectFacesMode mCollectFacesMode
);

float JoltC_ShapeCastSettings_mCollisionTolerance_Get(
  JoltC_ShapeCastSettings_t * self
);

void JoltC_ShapeCastSettings_mCollisionTolerance_Set(
  JoltC_ShapeCastSettings_t * self,
  float mCollisionTolerance
);

float JoltC_ShapeCastSettings_mPenetrationTolerance_Get(
  JoltC_ShapeCastSettings_t * self
);

void JoltC_ShapeCastSettings_mPenetrationTolerance_Set(
  JoltC_ShapeCastSettings_t * self,
  float mPenetrationTolerance
);

JoltC_Vec3_t * JoltC_ShapeCastSettings_mActiveEdgeMovementDirection_Get(
  JoltC_ShapeCastSettings_t * self
);

void JoltC_ShapeCastSettings_mActiveEdgeMovementDirection_Set(
  JoltC_ShapeCastSettings_t * self,
  JoltC_Vec3_t * mActiveEdgeMovementDirection
);

//endregion


#ifdef __cplusplus
}
#endif

