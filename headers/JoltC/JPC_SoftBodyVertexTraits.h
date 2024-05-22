#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region properties

unsigned long JPC_SoftBodyVertexTraits_mPreviousPositionOffset_Get(
  JPC_SoftBodyVertexTraits_t * self
);

unsigned long JPC_SoftBodyVertexTraits_mPositionOffset_Get(
  JPC_SoftBodyVertexTraits_t * self
);

unsigned long JPC_SoftBodyVertexTraits_mVelocityOffset_Get(
  JPC_SoftBodyVertexTraits_t * self
);

//endregion properties


#ifdef __cplusplus
}
#endif

