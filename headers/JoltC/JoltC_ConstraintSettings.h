#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region functions

unsigned long JoltC_ConstraintSettings_GetRefCount(
  JoltC_ConstraintSettings_t * self,
  char** outErrMsg
);

void JoltC_ConstraintSettings_AddRef(
  JoltC_ConstraintSettings_t * self,
  char** outErrMsg
);

void JoltC_ConstraintSettings_Release(
  JoltC_ConstraintSettings_t * self,
  char** outErrMsg
);

//endregion functions

//region properties

bool JoltC_ConstraintSettings_mEnabled_Get(
  JoltC_ConstraintSettings_t * self,
  char** outErrMsg
);

void JoltC_ConstraintSettings_mEnabled_Set(
  JoltC_ConstraintSettings_t * self,
  bool mEnabled,
  char** outErrMsg
);

long JoltC_ConstraintSettings_mNumVelocityStepsOverride_Get(
  JoltC_ConstraintSettings_t * self,
  char** outErrMsg
);

void JoltC_ConstraintSettings_mNumVelocityStepsOverride_Set(
  JoltC_ConstraintSettings_t * self,
  long mNumVelocityStepsOverride,
  char** outErrMsg
);

long JoltC_ConstraintSettings_mNumPositionStepsOverride_Get(
  JoltC_ConstraintSettings_t * self,
  char** outErrMsg
);

void JoltC_ConstraintSettings_mNumPositionStepsOverride_Set(
  JoltC_ConstraintSettings_t * self,
  long mNumPositionStepsOverride,
  char** outErrMsg
);

//endregion properties


#ifdef __cplusplus
}
#endif

