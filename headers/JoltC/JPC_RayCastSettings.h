#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JPC_RayCastSettings_t * JPC_RayCastSettings_new();

//endregion constructors

//region properties

JPC_EBackFaceMode JPC_RayCastSettings_mBackFaceMode_Get(
  JPC_RayCastSettings_t * self
);

void JPC_RayCastSettings_mBackFaceMode_Set(
  JPC_RayCastSettings_t * self,
  JPC_EBackFaceMode mBackFaceMode
);

bool JPC_RayCastSettings_mTreatConvexAsSolid_Get(
  JPC_RayCastSettings_t * self
);

void JPC_RayCastSettings_mTreatConvexAsSolid_Set(
  JPC_RayCastSettings_t * self,
  bool mTreatConvexAsSolid
);

//endregion properties


#ifdef __cplusplus
}
#endif

