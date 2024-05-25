#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JPC_CollideShapeSettings_t * JPC_CollideShapeSettings_new();

//endregion constructors

//region properties

float JPC_CollideShapeSettings_mMaxSeparationDistance_Get(
  JPC_CollideShapeSettings_t * self
);

void JPC_CollideShapeSettings_mMaxSeparationDistance_Set(
  JPC_CollideShapeSettings_t * self,
  float mMaxSeparationDistance
);

JPC_EBackFaceMode JPC_CollideShapeSettings_mBackFaceMode_Get(
  JPC_CollideShapeSettings_t * self
);

void JPC_CollideShapeSettings_mBackFaceMode_Set(
  JPC_CollideShapeSettings_t * self,
  JPC_EBackFaceMode mBackFaceMode
);

JPC_EActiveEdgeMode JPC_CollideShapeSettings_mActiveEdgeMode_Get(
  JPC_CollideShapeSettings_t * self
);

void JPC_CollideShapeSettings_mActiveEdgeMode_Set(
  JPC_CollideShapeSettings_t * self,
  JPC_EActiveEdgeMode mActiveEdgeMode
);

JPC_ECollectFacesMode JPC_CollideShapeSettings_mCollectFacesMode_Get(
  JPC_CollideShapeSettings_t * self
);

void JPC_CollideShapeSettings_mCollectFacesMode_Set(
  JPC_CollideShapeSettings_t * self,
  JPC_ECollectFacesMode mCollectFacesMode
);

float JPC_CollideShapeSettings_mCollisionTolerance_Get(
  JPC_CollideShapeSettings_t * self
);

void JPC_CollideShapeSettings_mCollisionTolerance_Set(
  JPC_CollideShapeSettings_t * self,
  float mCollisionTolerance
);

float JPC_CollideShapeSettings_mPenetrationTolerance_Get(
  JPC_CollideShapeSettings_t * self
);

void JPC_CollideShapeSettings_mPenetrationTolerance_Set(
  JPC_CollideShapeSettings_t * self,
  float mPenetrationTolerance
);

JPC_Vec3_t * JPC_CollideShapeSettings_mActiveEdgeMovementDirection_Get(
  JPC_CollideShapeSettings_t * self
);

void JPC_CollideShapeSettings_mActiveEdgeMovementDirection_Set(
  JPC_CollideShapeSettings_t * self,
  JPC_Vec3_t * mActiveEdgeMovementDirection
);

//endregion properties


#ifdef __cplusplus
}
#endif

