#pragma once
#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_JoltSettings_t * JoltC_JoltSettings_new();

//endregion

//region destructor

void JoltC_JoltSettings_destroy(
  JoltC_JoltSettings_t * self
);

//endregion
//region properties

unsigned long JoltC_JoltSettings_mMaxBodies_Get(
  JoltC_JoltSettings_t * self
);

void JoltC_JoltSettings_mMaxBodies_Set(
  JoltC_JoltSettings_t * self,
  unsigned long mMaxBodies
);

unsigned long JoltC_JoltSettings_mMaxBodyPairs_Get(
  JoltC_JoltSettings_t * self
);

void JoltC_JoltSettings_mMaxBodyPairs_Set(
  JoltC_JoltSettings_t * self,
  unsigned long mMaxBodyPairs
);

unsigned long JoltC_JoltSettings_mMaxContactConstraints_Get(
  JoltC_JoltSettings_t * self
);

void JoltC_JoltSettings_mMaxContactConstraints_Set(
  JoltC_JoltSettings_t * self,
  unsigned long mMaxContactConstraints
);

JoltC_BroadPhaseLayerInterface_t * JoltC_JoltSettings_mBroadPhaseLayerInterface_Get(
  JoltC_JoltSettings_t * self
);

void JoltC_JoltSettings_mBroadPhaseLayerInterface_Set(
  JoltC_JoltSettings_t * self,
  JoltC_BroadPhaseLayerInterface_t * mBroadPhaseLayerInterface
);

JoltC_ObjectVsBroadPhaseLayerFilter_t * JoltC_JoltSettings_mObjectVsBroadPhaseLayerFilter_Get(
  JoltC_JoltSettings_t * self
);

void JoltC_JoltSettings_mObjectVsBroadPhaseLayerFilter_Set(
  JoltC_JoltSettings_t * self,
  JoltC_ObjectVsBroadPhaseLayerFilter_t * mObjectVsBroadPhaseLayerFilter
);

JoltC_ObjectLayerPairFilter_t * JoltC_JoltSettings_mObjectLayerPairFilter_Get(
  JoltC_JoltSettings_t * self
);

void JoltC_JoltSettings_mObjectLayerPairFilter_Set(
  JoltC_JoltSettings_t * self,
  JoltC_ObjectLayerPairFilter_t * mObjectLayerPairFilter
);

//endregion


#ifdef __cplusplus
}
#endif
