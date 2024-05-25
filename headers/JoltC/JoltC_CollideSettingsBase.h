#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region properties

JoltC_EActiveEdgeMode JoltC_CollideSettingsBase_mActiveEdgeMode_Get(
  JoltC_CollideSettingsBase_t * self,
  char** outErrMsg
);

void JoltC_CollideSettingsBase_mActiveEdgeMode_Set(
  JoltC_CollideSettingsBase_t * self,
  JoltC_EActiveEdgeMode mActiveEdgeMode,
  char** outErrMsg
);

JoltC_ECollectFacesMode JoltC_CollideSettingsBase_mCollectFacesMode_Get(
  JoltC_CollideSettingsBase_t * self,
  char** outErrMsg
);

void JoltC_CollideSettingsBase_mCollectFacesMode_Set(
  JoltC_CollideSettingsBase_t * self,
  JoltC_ECollectFacesMode mCollectFacesMode,
  char** outErrMsg
);

float JoltC_CollideSettingsBase_mCollisionTolerance_Get(
  JoltC_CollideSettingsBase_t * self,
  char** outErrMsg
);

void JoltC_CollideSettingsBase_mCollisionTolerance_Set(
  JoltC_CollideSettingsBase_t * self,
  float mCollisionTolerance,
  char** outErrMsg
);

float JoltC_CollideSettingsBase_mPenetrationTolerance_Get(
  JoltC_CollideSettingsBase_t * self,
  char** outErrMsg
);

void JoltC_CollideSettingsBase_mPenetrationTolerance_Set(
  JoltC_CollideSettingsBase_t * self,
  float mPenetrationTolerance,
  char** outErrMsg
);

JoltC_Vec3_t * JoltC_CollideSettingsBase_mActiveEdgeMovementDirection_Get(
  JoltC_CollideSettingsBase_t * self,
  char** outErrMsg
);

void JoltC_CollideSettingsBase_mActiveEdgeMovementDirection_Set(
  JoltC_CollideSettingsBase_t * self,
  JoltC_Vec3_t * mActiveEdgeMovementDirection,
  char** outErrMsg
);

//endregion properties


#ifdef __cplusplus
}
#endif

