#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_CollideShapeSettings_t * JoltC_CollideShapeSettings_new(
  char** outErrMsg
);

//endregion constructors

//region properties

float JoltC_CollideShapeSettings_mMaxSeparationDistance_Get(
  JoltC_CollideShapeSettings_t * self,
  char** outErrMsg
);

void JoltC_CollideShapeSettings_mMaxSeparationDistance_Set(
  JoltC_CollideShapeSettings_t * self,
  float mMaxSeparationDistance,
  char** outErrMsg
);

JoltC_EBackFaceMode JoltC_CollideShapeSettings_mBackFaceMode_Get(
  JoltC_CollideShapeSettings_t * self,
  char** outErrMsg
);

void JoltC_CollideShapeSettings_mBackFaceMode_Set(
  JoltC_CollideShapeSettings_t * self,
  JoltC_EBackFaceMode mBackFaceMode,
  char** outErrMsg
);

JoltC_EActiveEdgeMode JoltC_CollideShapeSettings_mActiveEdgeMode_Get(
  JoltC_CollideShapeSettings_t * self,
  char** outErrMsg
);

void JoltC_CollideShapeSettings_mActiveEdgeMode_Set(
  JoltC_CollideShapeSettings_t * self,
  JoltC_EActiveEdgeMode mActiveEdgeMode,
  char** outErrMsg
);

JoltC_ECollectFacesMode JoltC_CollideShapeSettings_mCollectFacesMode_Get(
  JoltC_CollideShapeSettings_t * self,
  char** outErrMsg
);

void JoltC_CollideShapeSettings_mCollectFacesMode_Set(
  JoltC_CollideShapeSettings_t * self,
  JoltC_ECollectFacesMode mCollectFacesMode,
  char** outErrMsg
);

float JoltC_CollideShapeSettings_mCollisionTolerance_Get(
  JoltC_CollideShapeSettings_t * self,
  char** outErrMsg
);

void JoltC_CollideShapeSettings_mCollisionTolerance_Set(
  JoltC_CollideShapeSettings_t * self,
  float mCollisionTolerance,
  char** outErrMsg
);

float JoltC_CollideShapeSettings_mPenetrationTolerance_Get(
  JoltC_CollideShapeSettings_t * self,
  char** outErrMsg
);

void JoltC_CollideShapeSettings_mPenetrationTolerance_Set(
  JoltC_CollideShapeSettings_t * self,
  float mPenetrationTolerance,
  char** outErrMsg
);

JoltC_Vec3_t * JoltC_CollideShapeSettings_mActiveEdgeMovementDirection_Get(
  JoltC_CollideShapeSettings_t * self,
  char** outErrMsg
);

void JoltC_CollideShapeSettings_mActiveEdgeMovementDirection_Set(
  JoltC_CollideShapeSettings_t * self,
  JoltC_Vec3_t * mActiveEdgeMovementDirection,
  char** outErrMsg
);

//endregion properties


#ifdef __cplusplus
}
#endif

