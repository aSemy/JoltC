#pragma once
#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_SixDOFConstraintSettings_t * JoltC_SixDOFConstraintSettings_new();

//endregion

//region destructor

void JoltC_SixDOFConstraintSettings_destroy(
  JoltC_SixDOFConstraintSettings_t * self
);

//endregion
//region functions

void JoltC_SixDOFConstraintSettings_MakeFreeAxis(
  JoltC_SixDOFConstraintSettings_t * self,
  JoltC_SixDOFConstraintSettings_EAxis inAxis
);

bool JoltC_SixDOFConstraintSettings_IsFreeAxis(
  JoltC_SixDOFConstraintSettings_t * self,
  JoltC_SixDOFConstraintSettings_EAxis inAxis
);

void JoltC_SixDOFConstraintSettings_MakeFixedAxis(
  JoltC_SixDOFConstraintSettings_t * self,
  JoltC_SixDOFConstraintSettings_EAxis inAxis
);

bool JoltC_SixDOFConstraintSettings_IsFixedAxis(
  JoltC_SixDOFConstraintSettings_t * self,
  JoltC_SixDOFConstraintSettings_EAxis inAxis
);

void JoltC_SixDOFConstraintSettings_SetLimitedAxis(
  JoltC_SixDOFConstraintSettings_t * self,
  JoltC_SixDOFConstraintSettings_EAxis inAxis,
  float inMin,
  float inMax
);

JoltC_Constraint_t * JoltC_SixDOFConstraintSettings_Create(
  JoltC_SixDOFConstraintSettings_t * self,
  JoltC_Body_t * inBody1,
  JoltC_Body_t * inBody2
);

unsigned long JoltC_SixDOFConstraintSettings_GetRefCount(
  JoltC_SixDOFConstraintSettings_t * self
);

void JoltC_SixDOFConstraintSettings_AddRef(
  JoltC_SixDOFConstraintSettings_t * self
);

void JoltC_SixDOFConstraintSettings_Release(
  JoltC_SixDOFConstraintSettings_t * self
);

//endregion

//region properties

JoltC_EConstraintSpace JoltC_SixDOFConstraintSettings_mSpace_Get(
  JoltC_SixDOFConstraintSettings_t * self
);

void JoltC_SixDOFConstraintSettings_mSpace_Set(
  JoltC_SixDOFConstraintSettings_t * self,
  JoltC_EConstraintSpace mSpace
);

JoltC_RVec3_t * JoltC_SixDOFConstraintSettings_mPosition1_Get(
  JoltC_SixDOFConstraintSettings_t * self
);

void JoltC_SixDOFConstraintSettings_mPosition1_Set(
  JoltC_SixDOFConstraintSettings_t * self,
  JoltC_RVec3_t * mPosition1
);

JoltC_Vec3_t * JoltC_SixDOFConstraintSettings_mAxisX1_Get(
  JoltC_SixDOFConstraintSettings_t * self
);

void JoltC_SixDOFConstraintSettings_mAxisX1_Set(
  JoltC_SixDOFConstraintSettings_t * self,
  JoltC_Vec3_t * mAxisX1
);

JoltC_Vec3_t * JoltC_SixDOFConstraintSettings_mAxisY1_Get(
  JoltC_SixDOFConstraintSettings_t * self
);

void JoltC_SixDOFConstraintSettings_mAxisY1_Set(
  JoltC_SixDOFConstraintSettings_t * self,
  JoltC_Vec3_t * mAxisY1
);

JoltC_RVec3_t * JoltC_SixDOFConstraintSettings_mPosition2_Get(
  JoltC_SixDOFConstraintSettings_t * self
);

void JoltC_SixDOFConstraintSettings_mPosition2_Set(
  JoltC_SixDOFConstraintSettings_t * self,
  JoltC_RVec3_t * mPosition2
);

JoltC_Vec3_t * JoltC_SixDOFConstraintSettings_mAxisX2_Get(
  JoltC_SixDOFConstraintSettings_t * self
);

void JoltC_SixDOFConstraintSettings_mAxisX2_Set(
  JoltC_SixDOFConstraintSettings_t * self,
  JoltC_Vec3_t * mAxisX2
);

JoltC_Vec3_t * JoltC_SixDOFConstraintSettings_mAxisY2_Get(
  JoltC_SixDOFConstraintSettings_t * self
);

void JoltC_SixDOFConstraintSettings_mAxisY2_Set(
  JoltC_SixDOFConstraintSettings_t * self,
  JoltC_Vec3_t * mAxisY2
);

size_t JoltC_SixDOFConstraintSettings_mMaxFriction_Get(
  JoltC_SixDOFConstraintSettings_t * self,
  float * outValue
);

void JoltC_SixDOFConstraintSettings_mMaxFriction_Set(
  JoltC_SixDOFConstraintSettings_t * self,
  float * mMaxFriction,
  size_t mMaxFrictionSize
);

JoltC_ESwingType JoltC_SixDOFConstraintSettings_mSwingType_Get(
  JoltC_SixDOFConstraintSettings_t * self
);

void JoltC_SixDOFConstraintSettings_mSwingType_Set(
  JoltC_SixDOFConstraintSettings_t * self,
  JoltC_ESwingType mSwingType
);

size_t JoltC_SixDOFConstraintSettings_mLimitMin_Get(
  JoltC_SixDOFConstraintSettings_t * self,
  float * outValue
);

void JoltC_SixDOFConstraintSettings_mLimitMin_Set(
  JoltC_SixDOFConstraintSettings_t * self,
  float * mLimitMin,
  size_t mLimitMinSize
);

size_t JoltC_SixDOFConstraintSettings_mLimitMax_Get(
  JoltC_SixDOFConstraintSettings_t * self,
  float * outValue
);

void JoltC_SixDOFConstraintSettings_mLimitMax_Set(
  JoltC_SixDOFConstraintSettings_t * self,
  float * mLimitMax,
  size_t mLimitMaxSize
);

size_t JoltC_SixDOFConstraintSettings_mLimitsSpringSettings_Get(
  JoltC_SixDOFConstraintSettings_t * self,
  JoltC_SpringSettings_t * * outValue
);

void JoltC_SixDOFConstraintSettings_mLimitsSpringSettings_Set(
  JoltC_SixDOFConstraintSettings_t * self,
  JoltC_SpringSettings_t * * mLimitsSpringSettings,
  size_t mLimitsSpringSettingsSize
);

size_t JoltC_SixDOFConstraintSettings_mMotorSettings_Get(
  JoltC_SixDOFConstraintSettings_t * self,
  JoltC_MotorSettings_t * * outValue
);

void JoltC_SixDOFConstraintSettings_mMotorSettings_Set(
  JoltC_SixDOFConstraintSettings_t * self,
  JoltC_MotorSettings_t * * mMotorSettings,
  size_t mMotorSettingsSize
);

bool JoltC_SixDOFConstraintSettings_mEnabled_Get(
  JoltC_SixDOFConstraintSettings_t * self
);

void JoltC_SixDOFConstraintSettings_mEnabled_Set(
  JoltC_SixDOFConstraintSettings_t * self,
  bool mEnabled
);

long JoltC_SixDOFConstraintSettings_mNumVelocityStepsOverride_Get(
  JoltC_SixDOFConstraintSettings_t * self
);

void JoltC_SixDOFConstraintSettings_mNumVelocityStepsOverride_Set(
  JoltC_SixDOFConstraintSettings_t * self,
  long mNumVelocityStepsOverride
);

long JoltC_SixDOFConstraintSettings_mNumPositionStepsOverride_Get(
  JoltC_SixDOFConstraintSettings_t * self
);

void JoltC_SixDOFConstraintSettings_mNumPositionStepsOverride_Set(
  JoltC_SixDOFConstraintSettings_t * self,
  long mNumPositionStepsOverride
);

//endregion


#ifdef __cplusplus
}
#endif
