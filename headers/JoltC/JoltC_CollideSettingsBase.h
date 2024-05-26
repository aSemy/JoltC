#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region converters

/**
 * Convert an instance of JoltC_CollideShapeSettings_t into JoltC_CollideSettingsBase_t.
 */
JoltC_CollideSettingsBase_t * JoltC_CollideSettingsBase_From_CollideShapeSettings(
  JoltC_CollideShapeSettings_t * subtype
);

/**
 * Convert an instance of JoltC_ShapeCastSettings_t into JoltC_CollideSettingsBase_t.
 */
JoltC_CollideSettingsBase_t * JoltC_CollideSettingsBase_From_ShapeCastSettings(
  JoltC_ShapeCastSettings_t * subtype
);

//endregion

//region properties

JoltC_EActiveEdgeMode JoltC_CollideSettingsBase_mActiveEdgeMode_Get(
  JoltC_CollideSettingsBase_t * self
);

void JoltC_CollideSettingsBase_mActiveEdgeMode_Set(
  JoltC_CollideSettingsBase_t * self,
  JoltC_EActiveEdgeMode mActiveEdgeMode
);

JoltC_ECollectFacesMode JoltC_CollideSettingsBase_mCollectFacesMode_Get(
  JoltC_CollideSettingsBase_t * self
);

void JoltC_CollideSettingsBase_mCollectFacesMode_Set(
  JoltC_CollideSettingsBase_t * self,
  JoltC_ECollectFacesMode mCollectFacesMode
);

float JoltC_CollideSettingsBase_mCollisionTolerance_Get(
  JoltC_CollideSettingsBase_t * self
);

void JoltC_CollideSettingsBase_mCollisionTolerance_Set(
  JoltC_CollideSettingsBase_t * self,
  float mCollisionTolerance
);

float JoltC_CollideSettingsBase_mPenetrationTolerance_Get(
  JoltC_CollideSettingsBase_t * self
);

void JoltC_CollideSettingsBase_mPenetrationTolerance_Set(
  JoltC_CollideSettingsBase_t * self,
  float mPenetrationTolerance
);

JoltC_Vec3_t * JoltC_CollideSettingsBase_mActiveEdgeMovementDirection_Get(
  JoltC_CollideSettingsBase_t * self
);

void JoltC_CollideSettingsBase_mActiveEdgeMovementDirection_Set(
  JoltC_CollideSettingsBase_t * self,
  JoltC_Vec3_t * mActiveEdgeMovementDirection
);

//endregion


#ifdef __cplusplus
}
#endif

