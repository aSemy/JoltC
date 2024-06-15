#pragma once
#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_CollideShapeSettings_t * JoltC_CollideShapeSettings_new();

//endregion

//region destructor

void JoltC_CollideShapeSettings_destroy(
  JoltC_CollideShapeSettings_t * self
);

//endregion
//region properties

float JoltC_CollideShapeSettings_mMaxSeparationDistance_Get(
  JoltC_CollideShapeSettings_t * self
);

void JoltC_CollideShapeSettings_mMaxSeparationDistance_Set(
  JoltC_CollideShapeSettings_t * self,
  float mMaxSeparationDistance
);

JoltC_EBackFaceMode JoltC_CollideShapeSettings_mBackFaceMode_Get(
  JoltC_CollideShapeSettings_t * self
);

void JoltC_CollideShapeSettings_mBackFaceMode_Set(
  JoltC_CollideShapeSettings_t * self,
  JoltC_EBackFaceMode mBackFaceMode
);

JoltC_EActiveEdgeMode JoltC_CollideShapeSettings_mActiveEdgeMode_Get(
  JoltC_CollideShapeSettings_t * self
);

void JoltC_CollideShapeSettings_mActiveEdgeMode_Set(
  JoltC_CollideShapeSettings_t * self,
  JoltC_EActiveEdgeMode mActiveEdgeMode
);

JoltC_ECollectFacesMode JoltC_CollideShapeSettings_mCollectFacesMode_Get(
  JoltC_CollideShapeSettings_t * self
);

void JoltC_CollideShapeSettings_mCollectFacesMode_Set(
  JoltC_CollideShapeSettings_t * self,
  JoltC_ECollectFacesMode mCollectFacesMode
);

float JoltC_CollideShapeSettings_mCollisionTolerance_Get(
  JoltC_CollideShapeSettings_t * self
);

void JoltC_CollideShapeSettings_mCollisionTolerance_Set(
  JoltC_CollideShapeSettings_t * self,
  float mCollisionTolerance
);

float JoltC_CollideShapeSettings_mPenetrationTolerance_Get(
  JoltC_CollideShapeSettings_t * self
);

void JoltC_CollideShapeSettings_mPenetrationTolerance_Set(
  JoltC_CollideShapeSettings_t * self,
  float mPenetrationTolerance
);

JoltC_Vec3_t * JoltC_CollideShapeSettings_mActiveEdgeMovementDirection_Get(
  JoltC_CollideShapeSettings_t * self
);

void JoltC_CollideShapeSettings_mActiveEdgeMovementDirection_Set(
  JoltC_CollideShapeSettings_t * self,
  JoltC_Vec3_t * mActiveEdgeMovementDirection
);

//endregion


#ifdef __cplusplus
}
#endif
