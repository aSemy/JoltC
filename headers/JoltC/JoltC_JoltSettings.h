#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JPC_JoltSettings_t * JPC_JoltSettings_new();

//endregion constructors

//region properties

unsigned long JPC_JoltSettings_mMaxBodies_Get(
  JPC_JoltSettings_t * self
);

void JPC_JoltSettings_mMaxBodies_Set(
  JPC_JoltSettings_t * self,
  unsigned long mMaxBodies
);

unsigned long JPC_JoltSettings_mMaxBodyPairs_Get(
  JPC_JoltSettings_t * self
);

void JPC_JoltSettings_mMaxBodyPairs_Set(
  JPC_JoltSettings_t * self,
  unsigned long mMaxBodyPairs
);

unsigned long JPC_JoltSettings_mMaxContactConstraints_Get(
  JPC_JoltSettings_t * self
);

void JPC_JoltSettings_mMaxContactConstraints_Set(
  JPC_JoltSettings_t * self,
  unsigned long mMaxContactConstraints
);

JPC_BroadPhaseLayerInterface_t * JPC_JoltSettings_mBroadPhaseLayerInterface_Get(
  JPC_JoltSettings_t * self
);

void JPC_JoltSettings_mBroadPhaseLayerInterface_Set(
  JPC_JoltSettings_t * self,
  JPC_BroadPhaseLayerInterface_t * mBroadPhaseLayerInterface
);

JPC_ObjectVsBroadPhaseLayerFilter_t * JPC_JoltSettings_mObjectVsBroadPhaseLayerFilter_Get(
  JPC_JoltSettings_t * self
);

void JPC_JoltSettings_mObjectVsBroadPhaseLayerFilter_Set(
  JPC_JoltSettings_t * self,
  JPC_ObjectVsBroadPhaseLayerFilter_t * mObjectVsBroadPhaseLayerFilter
);

JPC_ObjectLayerPairFilter_t * JPC_JoltSettings_mObjectLayerPairFilter_Get(
  JPC_JoltSettings_t * self
);

void JPC_JoltSettings_mObjectLayerPairFilter_Set(
  JPC_JoltSettings_t * self,
  JPC_ObjectLayerPairFilter_t * mObjectLayerPairFilter
);

//endregion properties


#ifdef __cplusplus
}
#endif

