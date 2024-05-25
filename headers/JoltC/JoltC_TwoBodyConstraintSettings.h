#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region functions

JoltC_Constraint_t * JoltC_TwoBodyConstraintSettings_Create(
  JoltC_TwoBodyConstraintSettings_t * self,
  JoltC_Body_t * inBody1,
  JoltC_Body_t * inBody2,
  char** outErrMsg
);

unsigned long JoltC_TwoBodyConstraintSettings_GetRefCount(
  JoltC_TwoBodyConstraintSettings_t * self,
  char** outErrMsg
);

void JoltC_TwoBodyConstraintSettings_AddRef(
  JoltC_TwoBodyConstraintSettings_t * self,
  char** outErrMsg
);

void JoltC_TwoBodyConstraintSettings_Release(
  JoltC_TwoBodyConstraintSettings_t * self,
  char** outErrMsg
);

//endregion functions

//region properties

bool JoltC_TwoBodyConstraintSettings_mEnabled_Get(
  JoltC_TwoBodyConstraintSettings_t * self,
  char** outErrMsg
);

void JoltC_TwoBodyConstraintSettings_mEnabled_Set(
  JoltC_TwoBodyConstraintSettings_t * self,
  bool mEnabled,
  char** outErrMsg
);

long JoltC_TwoBodyConstraintSettings_mNumVelocityStepsOverride_Get(
  JoltC_TwoBodyConstraintSettings_t * self,
  char** outErrMsg
);

void JoltC_TwoBodyConstraintSettings_mNumVelocityStepsOverride_Set(
  JoltC_TwoBodyConstraintSettings_t * self,
  long mNumVelocityStepsOverride,
  char** outErrMsg
);

long JoltC_TwoBodyConstraintSettings_mNumPositionStepsOverride_Get(
  JoltC_TwoBodyConstraintSettings_t * self,
  char** outErrMsg
);

void JoltC_TwoBodyConstraintSettings_mNumPositionStepsOverride_Set(
  JoltC_TwoBodyConstraintSettings_t * self,
  long mNumPositionStepsOverride,
  char** outErrMsg
);

//endregion properties


#ifdef __cplusplus
}
#endif

