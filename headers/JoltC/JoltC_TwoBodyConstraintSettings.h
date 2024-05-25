#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region functions

JPC_Constraint_t * JPC_TwoBodyConstraintSettings_Create(
  JPC_TwoBodyConstraintSettings_t * self,
  JPC_Body_t * inBody1,
  JPC_Body_t * inBody2
);

unsigned long JPC_TwoBodyConstraintSettings_GetRefCount(
  JPC_TwoBodyConstraintSettings_t * self
);

void JPC_TwoBodyConstraintSettings_AddRef(
  JPC_TwoBodyConstraintSettings_t * self
);

void JPC_TwoBodyConstraintSettings_Release(
  JPC_TwoBodyConstraintSettings_t * self
);

//endregion functions

//region properties

bool JPC_TwoBodyConstraintSettings_mEnabled_Get(
  JPC_TwoBodyConstraintSettings_t * self
);

void JPC_TwoBodyConstraintSettings_mEnabled_Set(
  JPC_TwoBodyConstraintSettings_t * self,
  bool mEnabled
);

long JPC_TwoBodyConstraintSettings_mNumVelocityStepsOverride_Get(
  JPC_TwoBodyConstraintSettings_t * self
);

void JPC_TwoBodyConstraintSettings_mNumVelocityStepsOverride_Set(
  JPC_TwoBodyConstraintSettings_t * self,
  long mNumVelocityStepsOverride
);

long JPC_TwoBodyConstraintSettings_mNumPositionStepsOverride_Get(
  JPC_TwoBodyConstraintSettings_t * self
);

void JPC_TwoBodyConstraintSettings_mNumPositionStepsOverride_Set(
  JPC_TwoBodyConstraintSettings_t * self,
  long mNumPositionStepsOverride
);

//endregion properties


#ifdef __cplusplus
}
#endif

