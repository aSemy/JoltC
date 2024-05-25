#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_JoltSettings_t * JoltC_JoltSettings_new(
  char** outErrMsg
);

//endregion constructors

//region properties

unsigned long JoltC_JoltSettings_mMaxBodies_Get(
  JoltC_JoltSettings_t * self,
  char** outErrMsg
);

void JoltC_JoltSettings_mMaxBodies_Set(
  JoltC_JoltSettings_t * self,
  unsigned long mMaxBodies,
  char** outErrMsg
);

unsigned long JoltC_JoltSettings_mMaxBodyPairs_Get(
  JoltC_JoltSettings_t * self,
  char** outErrMsg
);

void JoltC_JoltSettings_mMaxBodyPairs_Set(
  JoltC_JoltSettings_t * self,
  unsigned long mMaxBodyPairs,
  char** outErrMsg
);

unsigned long JoltC_JoltSettings_mMaxContactConstraints_Get(
  JoltC_JoltSettings_t * self,
  char** outErrMsg
);

void JoltC_JoltSettings_mMaxContactConstraints_Set(
  JoltC_JoltSettings_t * self,
  unsigned long mMaxContactConstraints,
  char** outErrMsg
);

JoltC_BroadPhaseLayerInterface_t * JoltC_JoltSettings_mBroadPhaseLayerInterface_Get(
  JoltC_JoltSettings_t * self,
  char** outErrMsg
);

void JoltC_JoltSettings_mBroadPhaseLayerInterface_Set(
  JoltC_JoltSettings_t * self,
  JoltC_BroadPhaseLayerInterface_t * mBroadPhaseLayerInterface,
  char** outErrMsg
);

JoltC_ObjectVsBroadPhaseLayerFilter_t * JoltC_JoltSettings_mObjectVsBroadPhaseLayerFilter_Get(
  JoltC_JoltSettings_t * self,
  char** outErrMsg
);

void JoltC_JoltSettings_mObjectVsBroadPhaseLayerFilter_Set(
  JoltC_JoltSettings_t * self,
  JoltC_ObjectVsBroadPhaseLayerFilter_t * mObjectVsBroadPhaseLayerFilter,
  char** outErrMsg
);

JoltC_ObjectLayerPairFilter_t * JoltC_JoltSettings_mObjectLayerPairFilter_Get(
  JoltC_JoltSettings_t * self,
  char** outErrMsg
);

void JoltC_JoltSettings_mObjectLayerPairFilter_Set(
  JoltC_JoltSettings_t * self,
  JoltC_ObjectLayerPairFilter_t * mObjectLayerPairFilter,
  char** outErrMsg
);

//endregion properties


#ifdef __cplusplus
}
#endif

