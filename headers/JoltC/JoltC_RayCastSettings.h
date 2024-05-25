#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_RayCastSettings_t * JoltC_RayCastSettings_new(
  char** outErrMsg
);

//endregion constructors

//region properties

JoltC_EBackFaceMode JoltC_RayCastSettings_mBackFaceMode_Get(
  JoltC_RayCastSettings_t * self,
  char** outErrMsg
);

void JoltC_RayCastSettings_mBackFaceMode_Set(
  JoltC_RayCastSettings_t * self,
  JoltC_EBackFaceMode mBackFaceMode,
  char** outErrMsg
);

bool JoltC_RayCastSettings_mTreatConvexAsSolid_Get(
  JoltC_RayCastSettings_t * self,
  char** outErrMsg
);

void JoltC_RayCastSettings_mTreatConvexAsSolid_Set(
  JoltC_RayCastSettings_t * self,
  bool mTreatConvexAsSolid,
  char** outErrMsg
);

//endregion properties


#ifdef __cplusplus
}
#endif

