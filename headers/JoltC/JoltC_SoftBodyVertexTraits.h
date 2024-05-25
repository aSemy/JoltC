#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region properties

unsigned long JoltC_SoftBodyVertexTraits_mPreviousPositionOffset_Get(
  JoltC_SoftBodyVertexTraits_t * self,
  char** outErrMsg
);

unsigned long JoltC_SoftBodyVertexTraits_mPositionOffset_Get(
  JoltC_SoftBodyVertexTraits_t * self,
  char** outErrMsg
);

unsigned long JoltC_SoftBodyVertexTraits_mVelocityOffset_Get(
  JoltC_SoftBodyVertexTraits_t * self,
  char** outErrMsg
);

//endregion properties


#ifdef __cplusplus
}
#endif

