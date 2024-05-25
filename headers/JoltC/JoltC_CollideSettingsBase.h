#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region properties

JPC_EActiveEdgeMode JPC_CollideSettingsBase_mActiveEdgeMode_Get(
  JPC_CollideSettingsBase_t * self
);

void JPC_CollideSettingsBase_mActiveEdgeMode_Set(
  JPC_CollideSettingsBase_t * self,
  JPC_EActiveEdgeMode mActiveEdgeMode
);

JPC_ECollectFacesMode JPC_CollideSettingsBase_mCollectFacesMode_Get(
  JPC_CollideSettingsBase_t * self
);

void JPC_CollideSettingsBase_mCollectFacesMode_Set(
  JPC_CollideSettingsBase_t * self,
  JPC_ECollectFacesMode mCollectFacesMode
);

float JPC_CollideSettingsBase_mCollisionTolerance_Get(
  JPC_CollideSettingsBase_t * self
);

void JPC_CollideSettingsBase_mCollisionTolerance_Set(
  JPC_CollideSettingsBase_t * self,
  float mCollisionTolerance
);

float JPC_CollideSettingsBase_mPenetrationTolerance_Get(
  JPC_CollideSettingsBase_t * self
);

void JPC_CollideSettingsBase_mPenetrationTolerance_Set(
  JPC_CollideSettingsBase_t * self,
  float mPenetrationTolerance
);

JPC_Vec3_t * JPC_CollideSettingsBase_mActiveEdgeMovementDirection_Get(
  JPC_CollideSettingsBase_t * self
);

void JPC_CollideSettingsBase_mActiveEdgeMovementDirection_Set(
  JPC_CollideSettingsBase_t * self,
  JPC_Vec3_t * mActiveEdgeMovementDirection
);

//endregion properties


#ifdef __cplusplus
}
#endif

