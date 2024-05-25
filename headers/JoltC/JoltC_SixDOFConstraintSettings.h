#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JPC_SixDOFConstraintSettings_t * JPC_SixDOFConstraintSettings_new();

//endregion constructors

//region functions

void JPC_SixDOFConstraintSettings_MakeFreeAxis(
  JPC_SixDOFConstraintSettings_t * self,
  JPC_SixDOFConstraintSettings_EAxis inAxis
);

bool JPC_SixDOFConstraintSettings_IsFreeAxis(
  JPC_SixDOFConstraintSettings_t * self,
  JPC_SixDOFConstraintSettings_EAxis inAxis
);

void JPC_SixDOFConstraintSettings_MakeFixedAxis(
  JPC_SixDOFConstraintSettings_t * self,
  JPC_SixDOFConstraintSettings_EAxis inAxis
);

bool JPC_SixDOFConstraintSettings_IsFixedAxis(
  JPC_SixDOFConstraintSettings_t * self,
  JPC_SixDOFConstraintSettings_EAxis inAxis
);

void JPC_SixDOFConstraintSettings_SetLimitedAxis(
  JPC_SixDOFConstraintSettings_t * self,
  JPC_SixDOFConstraintSettings_EAxis inAxis,
  float inMin,
  float inMax
);

JPC_Constraint_t * JPC_SixDOFConstraintSettings_Create(
  JPC_SixDOFConstraintSettings_t * self,
  JPC_Body_t * inBody1,
  JPC_Body_t * inBody2
);

unsigned long JPC_SixDOFConstraintSettings_GetRefCount(
  JPC_SixDOFConstraintSettings_t * self
);

void JPC_SixDOFConstraintSettings_AddRef(
  JPC_SixDOFConstraintSettings_t * self
);

void JPC_SixDOFConstraintSettings_Release(
  JPC_SixDOFConstraintSettings_t * self
);

//endregion functions

//region properties

JPC_EConstraintSpace JPC_SixDOFConstraintSettings_mSpace_Get(
  JPC_SixDOFConstraintSettings_t * self
);

void JPC_SixDOFConstraintSettings_mSpace_Set(
  JPC_SixDOFConstraintSettings_t * self,
  JPC_EConstraintSpace mSpace
);

JPC_RVec3_t * JPC_SixDOFConstraintSettings_mPosition1_Get(
  JPC_SixDOFConstraintSettings_t * self
);

void JPC_SixDOFConstraintSettings_mPosition1_Set(
  JPC_SixDOFConstraintSettings_t * self,
  JPC_RVec3_t * mPosition1
);

JPC_Vec3_t * JPC_SixDOFConstraintSettings_mAxisX1_Get(
  JPC_SixDOFConstraintSettings_t * self
);

void JPC_SixDOFConstraintSettings_mAxisX1_Set(
  JPC_SixDOFConstraintSettings_t * self,
  JPC_Vec3_t * mAxisX1
);

JPC_Vec3_t * JPC_SixDOFConstraintSettings_mAxisY1_Get(
  JPC_SixDOFConstraintSettings_t * self
);

void JPC_SixDOFConstraintSettings_mAxisY1_Set(
  JPC_SixDOFConstraintSettings_t * self,
  JPC_Vec3_t * mAxisY1
);

JPC_RVec3_t * JPC_SixDOFConstraintSettings_mPosition2_Get(
  JPC_SixDOFConstraintSettings_t * self
);

void JPC_SixDOFConstraintSettings_mPosition2_Set(
  JPC_SixDOFConstraintSettings_t * self,
  JPC_RVec3_t * mPosition2
);

JPC_Vec3_t * JPC_SixDOFConstraintSettings_mAxisX2_Get(
  JPC_SixDOFConstraintSettings_t * self
);

void JPC_SixDOFConstraintSettings_mAxisX2_Set(
  JPC_SixDOFConstraintSettings_t * self,
  JPC_Vec3_t * mAxisX2
);

JPC_Vec3_t * JPC_SixDOFConstraintSettings_mAxisY2_Get(
  JPC_SixDOFConstraintSettings_t * self
);

void JPC_SixDOFConstraintSettings_mAxisY2_Set(
  JPC_SixDOFConstraintSettings_t * self,
  JPC_Vec3_t * mAxisY2
);

size_t JPC_SixDOFConstraintSettings_mMaxFriction_Get(
  JPC_SixDOFConstraintSettings_t * self,
  float * outValue
);

void JPC_SixDOFConstraintSettings_mMaxFriction_Set(
  JPC_SixDOFConstraintSettings_t * self,
  float * mMaxFriction,
  size_t mMaxFrictionSize
);

JPC_ESwingType JPC_SixDOFConstraintSettings_mSwingType_Get(
  JPC_SixDOFConstraintSettings_t * self
);

void JPC_SixDOFConstraintSettings_mSwingType_Set(
  JPC_SixDOFConstraintSettings_t * self,
  JPC_ESwingType mSwingType
);

size_t JPC_SixDOFConstraintSettings_mLimitMin_Get(
  JPC_SixDOFConstraintSettings_t * self,
  float * outValue
);

void JPC_SixDOFConstraintSettings_mLimitMin_Set(
  JPC_SixDOFConstraintSettings_t * self,
  float * mLimitMin,
  size_t mLimitMinSize
);

size_t JPC_SixDOFConstraintSettings_mLimitMax_Get(
  JPC_SixDOFConstraintSettings_t * self,
  float * outValue
);

void JPC_SixDOFConstraintSettings_mLimitMax_Set(
  JPC_SixDOFConstraintSettings_t * self,
  float * mLimitMax,
  size_t mLimitMaxSize
);

size_t JPC_SixDOFConstraintSettings_mLimitsSpringSettings_Get(
  JPC_SixDOFConstraintSettings_t * self,
  JPC_SpringSettings_t * * outValue
);

void JPC_SixDOFConstraintSettings_mLimitsSpringSettings_Set(
  JPC_SixDOFConstraintSettings_t * self,
  JPC_SpringSettings_t * * mLimitsSpringSettings,
  size_t mLimitsSpringSettingsSize
);

size_t JPC_SixDOFConstraintSettings_mMotorSettings_Get(
  JPC_SixDOFConstraintSettings_t * self,
  JPC_MotorSettings_t * * outValue
);

void JPC_SixDOFConstraintSettings_mMotorSettings_Set(
  JPC_SixDOFConstraintSettings_t * self,
  JPC_MotorSettings_t * * mMotorSettings,
  size_t mMotorSettingsSize
);

bool JPC_SixDOFConstraintSettings_mEnabled_Get(
  JPC_SixDOFConstraintSettings_t * self
);

void JPC_SixDOFConstraintSettings_mEnabled_Set(
  JPC_SixDOFConstraintSettings_t * self,
  bool mEnabled
);

long JPC_SixDOFConstraintSettings_mNumVelocityStepsOverride_Get(
  JPC_SixDOFConstraintSettings_t * self
);

void JPC_SixDOFConstraintSettings_mNumVelocityStepsOverride_Set(
  JPC_SixDOFConstraintSettings_t * self,
  long mNumVelocityStepsOverride
);

long JPC_SixDOFConstraintSettings_mNumPositionStepsOverride_Get(
  JPC_SixDOFConstraintSettings_t * self
);

void JPC_SixDOFConstraintSettings_mNumPositionStepsOverride_Set(
  JPC_SixDOFConstraintSettings_t * self,
  long mNumPositionStepsOverride
);

//endregion properties


#ifdef __cplusplus
}
#endif

