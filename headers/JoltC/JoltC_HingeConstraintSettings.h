#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JPC_HingeConstraintSettings_t * JPC_HingeConstraintSettings_new();

//endregion constructors

//region functions

JPC_Constraint_t * JPC_HingeConstraintSettings_Create(
  JPC_HingeConstraintSettings_t * self,
  JPC_Body_t * inBody1,
  JPC_Body_t * inBody2
);

unsigned long JPC_HingeConstraintSettings_GetRefCount(
  JPC_HingeConstraintSettings_t * self
);

void JPC_HingeConstraintSettings_AddRef(
  JPC_HingeConstraintSettings_t * self
);

void JPC_HingeConstraintSettings_Release(
  JPC_HingeConstraintSettings_t * self
);

//endregion functions

//region properties

JPC_EConstraintSpace JPC_HingeConstraintSettings_mSpace_Get(
  JPC_HingeConstraintSettings_t * self
);

void JPC_HingeConstraintSettings_mSpace_Set(
  JPC_HingeConstraintSettings_t * self,
  JPC_EConstraintSpace mSpace
);

JPC_RVec3_t * JPC_HingeConstraintSettings_mPoint1_Get(
  JPC_HingeConstraintSettings_t * self
);

void JPC_HingeConstraintSettings_mPoint1_Set(
  JPC_HingeConstraintSettings_t * self,
  JPC_RVec3_t * mPoint1
);

JPC_Vec3_t * JPC_HingeConstraintSettings_mHingeAxis1_Get(
  JPC_HingeConstraintSettings_t * self
);

void JPC_HingeConstraintSettings_mHingeAxis1_Set(
  JPC_HingeConstraintSettings_t * self,
  JPC_Vec3_t * mHingeAxis1
);

JPC_Vec3_t * JPC_HingeConstraintSettings_mNormalAxis1_Get(
  JPC_HingeConstraintSettings_t * self
);

void JPC_HingeConstraintSettings_mNormalAxis1_Set(
  JPC_HingeConstraintSettings_t * self,
  JPC_Vec3_t * mNormalAxis1
);

JPC_RVec3_t * JPC_HingeConstraintSettings_mPoint2_Get(
  JPC_HingeConstraintSettings_t * self
);

void JPC_HingeConstraintSettings_mPoint2_Set(
  JPC_HingeConstraintSettings_t * self,
  JPC_RVec3_t * mPoint2
);

JPC_Vec3_t * JPC_HingeConstraintSettings_mHingeAxis2_Get(
  JPC_HingeConstraintSettings_t * self
);

void JPC_HingeConstraintSettings_mHingeAxis2_Set(
  JPC_HingeConstraintSettings_t * self,
  JPC_Vec3_t * mHingeAxis2
);

JPC_Vec3_t * JPC_HingeConstraintSettings_mNormalAxis2_Get(
  JPC_HingeConstraintSettings_t * self
);

void JPC_HingeConstraintSettings_mNormalAxis2_Set(
  JPC_HingeConstraintSettings_t * self,
  JPC_Vec3_t * mNormalAxis2
);

float JPC_HingeConstraintSettings_mLimitsMin_Get(
  JPC_HingeConstraintSettings_t * self
);

void JPC_HingeConstraintSettings_mLimitsMin_Set(
  JPC_HingeConstraintSettings_t * self,
  float mLimitsMin
);

float JPC_HingeConstraintSettings_mLimitsMax_Get(
  JPC_HingeConstraintSettings_t * self
);

void JPC_HingeConstraintSettings_mLimitsMax_Set(
  JPC_HingeConstraintSettings_t * self,
  float mLimitsMax
);

JPC_SpringSettings_t * JPC_HingeConstraintSettings_mLimitsSpringSettings_Get(
  JPC_HingeConstraintSettings_t * self
);

void JPC_HingeConstraintSettings_mLimitsSpringSettings_Set(
  JPC_HingeConstraintSettings_t * self,
  JPC_SpringSettings_t * mLimitsSpringSettings
);

float JPC_HingeConstraintSettings_mMaxFrictionTorque_Get(
  JPC_HingeConstraintSettings_t * self
);

void JPC_HingeConstraintSettings_mMaxFrictionTorque_Set(
  JPC_HingeConstraintSettings_t * self,
  float mMaxFrictionTorque
);

JPC_MotorSettings_t * JPC_HingeConstraintSettings_mMotorSettings_Get(
  JPC_HingeConstraintSettings_t * self
);

void JPC_HingeConstraintSettings_mMotorSettings_Set(
  JPC_HingeConstraintSettings_t * self,
  JPC_MotorSettings_t * mMotorSettings
);

bool JPC_HingeConstraintSettings_mEnabled_Get(
  JPC_HingeConstraintSettings_t * self
);

void JPC_HingeConstraintSettings_mEnabled_Set(
  JPC_HingeConstraintSettings_t * self,
  bool mEnabled
);

long JPC_HingeConstraintSettings_mNumVelocityStepsOverride_Get(
  JPC_HingeConstraintSettings_t * self
);

void JPC_HingeConstraintSettings_mNumVelocityStepsOverride_Set(
  JPC_HingeConstraintSettings_t * self,
  long mNumVelocityStepsOverride
);

long JPC_HingeConstraintSettings_mNumPositionStepsOverride_Get(
  JPC_HingeConstraintSettings_t * self
);

void JPC_HingeConstraintSettings_mNumPositionStepsOverride_Set(
  JPC_HingeConstraintSettings_t * self,
  long mNumPositionStepsOverride
);

//endregion properties


#ifdef __cplusplus
}
#endif

