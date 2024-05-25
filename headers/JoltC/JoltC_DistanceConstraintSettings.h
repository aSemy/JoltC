#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_DistanceConstraintSettings_t * JoltC_DistanceConstraintSettings_new(
  char** outErrMsg
);

//endregion constructors

//region functions

JoltC_Constraint_t * JoltC_DistanceConstraintSettings_Create(
  JoltC_DistanceConstraintSettings_t * self,
  JoltC_Body_t * inBody1,
  JoltC_Body_t * inBody2,
  char** outErrMsg
);

unsigned long JoltC_DistanceConstraintSettings_GetRefCount(
  JoltC_DistanceConstraintSettings_t * self,
  char** outErrMsg
);

void JoltC_DistanceConstraintSettings_AddRef(
  JoltC_DistanceConstraintSettings_t * self,
  char** outErrMsg
);

void JoltC_DistanceConstraintSettings_Release(
  JoltC_DistanceConstraintSettings_t * self,
  char** outErrMsg
);

//endregion functions

//region properties

JoltC_EConstraintSpace JoltC_DistanceConstraintSettings_mSpace_Get(
  JoltC_DistanceConstraintSettings_t * self,
  char** outErrMsg
);

void JoltC_DistanceConstraintSettings_mSpace_Set(
  JoltC_DistanceConstraintSettings_t * self,
  JoltC_EConstraintSpace mSpace,
  char** outErrMsg
);

JoltC_RVec3_t * JoltC_DistanceConstraintSettings_mPoint1_Get(
  JoltC_DistanceConstraintSettings_t * self,
  char** outErrMsg
);

void JoltC_DistanceConstraintSettings_mPoint1_Set(
  JoltC_DistanceConstraintSettings_t * self,
  JoltC_RVec3_t * mPoint1,
  char** outErrMsg
);

JoltC_RVec3_t * JoltC_DistanceConstraintSettings_mPoint2_Get(
  JoltC_DistanceConstraintSettings_t * self,
  char** outErrMsg
);

void JoltC_DistanceConstraintSettings_mPoint2_Set(
  JoltC_DistanceConstraintSettings_t * self,
  JoltC_RVec3_t * mPoint2,
  char** outErrMsg
);

float JoltC_DistanceConstraintSettings_mMinDistance_Get(
  JoltC_DistanceConstraintSettings_t * self,
  char** outErrMsg
);

void JoltC_DistanceConstraintSettings_mMinDistance_Set(
  JoltC_DistanceConstraintSettings_t * self,
  float mMinDistance,
  char** outErrMsg
);

float JoltC_DistanceConstraintSettings_mMaxDistance_Get(
  JoltC_DistanceConstraintSettings_t * self,
  char** outErrMsg
);

void JoltC_DistanceConstraintSettings_mMaxDistance_Set(
  JoltC_DistanceConstraintSettings_t * self,
  float mMaxDistance,
  char** outErrMsg
);

JoltC_SpringSettings_t * JoltC_DistanceConstraintSettings_mLimitsSpringSettings_Get(
  JoltC_DistanceConstraintSettings_t * self,
  char** outErrMsg
);

void JoltC_DistanceConstraintSettings_mLimitsSpringSettings_Set(
  JoltC_DistanceConstraintSettings_t * self,
  JoltC_SpringSettings_t * mLimitsSpringSettings,
  char** outErrMsg
);

bool JoltC_DistanceConstraintSettings_mEnabled_Get(
  JoltC_DistanceConstraintSettings_t * self,
  char** outErrMsg
);

void JoltC_DistanceConstraintSettings_mEnabled_Set(
  JoltC_DistanceConstraintSettings_t * self,
  bool mEnabled,
  char** outErrMsg
);

long JoltC_DistanceConstraintSettings_mNumVelocityStepsOverride_Get(
  JoltC_DistanceConstraintSettings_t * self,
  char** outErrMsg
);

void JoltC_DistanceConstraintSettings_mNumVelocityStepsOverride_Set(
  JoltC_DistanceConstraintSettings_t * self,
  long mNumVelocityStepsOverride,
  char** outErrMsg
);

long JoltC_DistanceConstraintSettings_mNumPositionStepsOverride_Get(
  JoltC_DistanceConstraintSettings_t * self,
  char** outErrMsg
);

void JoltC_DistanceConstraintSettings_mNumPositionStepsOverride_Set(
  JoltC_DistanceConstraintSettings_t * self,
  long mNumPositionStepsOverride,
  char** outErrMsg
);

//endregion properties


#ifdef __cplusplus
}
#endif

