#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_FixedConstraintSettings_t * JoltC_FixedConstraintSettings_new(
  char** outErrMsg
);

//endregion constructors

//region functions

JoltC_Constraint_t * JoltC_FixedConstraintSettings_Create(
  JoltC_FixedConstraintSettings_t * self,
  JoltC_Body_t * inBody1,
  JoltC_Body_t * inBody2,
  char** outErrMsg
);

unsigned long JoltC_FixedConstraintSettings_GetRefCount(
  JoltC_FixedConstraintSettings_t * self,
  char** outErrMsg
);

void JoltC_FixedConstraintSettings_AddRef(
  JoltC_FixedConstraintSettings_t * self,
  char** outErrMsg
);

void JoltC_FixedConstraintSettings_Release(
  JoltC_FixedConstraintSettings_t * self,
  char** outErrMsg
);

//endregion functions

//region properties

JoltC_EConstraintSpace JoltC_FixedConstraintSettings_mSpace_Get(
  JoltC_FixedConstraintSettings_t * self,
  char** outErrMsg
);

void JoltC_FixedConstraintSettings_mSpace_Set(
  JoltC_FixedConstraintSettings_t * self,
  JoltC_EConstraintSpace mSpace,
  char** outErrMsg
);

bool JoltC_FixedConstraintSettings_mAutoDetectPoint_Get(
  JoltC_FixedConstraintSettings_t * self,
  char** outErrMsg
);

void JoltC_FixedConstraintSettings_mAutoDetectPoint_Set(
  JoltC_FixedConstraintSettings_t * self,
  bool mAutoDetectPoint,
  char** outErrMsg
);

JoltC_RVec3_t * JoltC_FixedConstraintSettings_mPoint1_Get(
  JoltC_FixedConstraintSettings_t * self,
  char** outErrMsg
);

void JoltC_FixedConstraintSettings_mPoint1_Set(
  JoltC_FixedConstraintSettings_t * self,
  JoltC_RVec3_t * mPoint1,
  char** outErrMsg
);

JoltC_Vec3_t * JoltC_FixedConstraintSettings_mAxisX1_Get(
  JoltC_FixedConstraintSettings_t * self,
  char** outErrMsg
);

void JoltC_FixedConstraintSettings_mAxisX1_Set(
  JoltC_FixedConstraintSettings_t * self,
  JoltC_Vec3_t * mAxisX1,
  char** outErrMsg
);

JoltC_Vec3_t * JoltC_FixedConstraintSettings_mAxisY1_Get(
  JoltC_FixedConstraintSettings_t * self,
  char** outErrMsg
);

void JoltC_FixedConstraintSettings_mAxisY1_Set(
  JoltC_FixedConstraintSettings_t * self,
  JoltC_Vec3_t * mAxisY1,
  char** outErrMsg
);

JoltC_RVec3_t * JoltC_FixedConstraintSettings_mPoint2_Get(
  JoltC_FixedConstraintSettings_t * self,
  char** outErrMsg
);

void JoltC_FixedConstraintSettings_mPoint2_Set(
  JoltC_FixedConstraintSettings_t * self,
  JoltC_RVec3_t * mPoint2,
  char** outErrMsg
);

JoltC_Vec3_t * JoltC_FixedConstraintSettings_mAxisX2_Get(
  JoltC_FixedConstraintSettings_t * self,
  char** outErrMsg
);

void JoltC_FixedConstraintSettings_mAxisX2_Set(
  JoltC_FixedConstraintSettings_t * self,
  JoltC_Vec3_t * mAxisX2,
  char** outErrMsg
);

JoltC_Vec3_t * JoltC_FixedConstraintSettings_mAxisY2_Get(
  JoltC_FixedConstraintSettings_t * self,
  char** outErrMsg
);

void JoltC_FixedConstraintSettings_mAxisY2_Set(
  JoltC_FixedConstraintSettings_t * self,
  JoltC_Vec3_t * mAxisY2,
  char** outErrMsg
);

bool JoltC_FixedConstraintSettings_mEnabled_Get(
  JoltC_FixedConstraintSettings_t * self,
  char** outErrMsg
);

void JoltC_FixedConstraintSettings_mEnabled_Set(
  JoltC_FixedConstraintSettings_t * self,
  bool mEnabled,
  char** outErrMsg
);

long JoltC_FixedConstraintSettings_mNumVelocityStepsOverride_Get(
  JoltC_FixedConstraintSettings_t * self,
  char** outErrMsg
);

void JoltC_FixedConstraintSettings_mNumVelocityStepsOverride_Set(
  JoltC_FixedConstraintSettings_t * self,
  long mNumVelocityStepsOverride,
  char** outErrMsg
);

long JoltC_FixedConstraintSettings_mNumPositionStepsOverride_Get(
  JoltC_FixedConstraintSettings_t * self,
  char** outErrMsg
);

void JoltC_FixedConstraintSettings_mNumPositionStepsOverride_Set(
  JoltC_FixedConstraintSettings_t * self,
  long mNumPositionStepsOverride,
  char** outErrMsg
);

//endregion properties


#ifdef __cplusplus
}
#endif

