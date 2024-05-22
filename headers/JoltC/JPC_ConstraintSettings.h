#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region functions

unsigned long JPC_ConstraintSettings_GetRefCount(
  JPC_ConstraintSettings_t * self
);

void JPC_ConstraintSettings_AddRef(
  JPC_ConstraintSettings_t * self
);

void JPC_ConstraintSettings_Release(
  JPC_ConstraintSettings_t * self
);

//endregion functions

//region properties

bool JPC_ConstraintSettings_mEnabled_Get(
  JPC_ConstraintSettings_t * self
);

void JPC_ConstraintSettings_mEnabled_Set(
  JPC_ConstraintSettings_t * self,
  bool mEnabled
);

long JPC_ConstraintSettings_mNumVelocityStepsOverride_Get(
  JPC_ConstraintSettings_t * self
);

void JPC_ConstraintSettings_mNumVelocityStepsOverride_Set(
  JPC_ConstraintSettings_t * self,
  long mNumVelocityStepsOverride
);

long JPC_ConstraintSettings_mNumPositionStepsOverride_Get(
  JPC_ConstraintSettings_t * self
);

void JPC_ConstraintSettings_mNumPositionStepsOverride_Set(
  JPC_ConstraintSettings_t * self,
  long mNumPositionStepsOverride
);

//endregion properties


#ifdef __cplusplus
}
#endif

