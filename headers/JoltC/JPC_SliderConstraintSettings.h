#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JPC_SliderConstraintSettings_t * JPC_SliderConstraintSettings_new();

//endregion constructors

//region functions

JPC_Constraint_t * JPC_SliderConstraintSettings_Create(
  JPC_SliderConstraintSettings_t * self,
  JPC_Body_t * inBody1,
  JPC_Body_t * inBody2
);

unsigned long JPC_SliderConstraintSettings_GetRefCount(
  JPC_SliderConstraintSettings_t * self
);

void JPC_SliderConstraintSettings_AddRef(
  JPC_SliderConstraintSettings_t * self
);

void JPC_SliderConstraintSettings_Release(
  JPC_SliderConstraintSettings_t * self
);

//endregion functions

//region properties

JPC_EConstraintSpace JPC_SliderConstraintSettings_mSpace_Get(
  JPC_SliderConstraintSettings_t * self
);

void JPC_SliderConstraintSettings_mSpace_Set(
  JPC_SliderConstraintSettings_t * self,
  JPC_EConstraintSpace mSpace
);

bool JPC_SliderConstraintSettings_mAutoDetectPoint_Get(
  JPC_SliderConstraintSettings_t * self
);

void JPC_SliderConstraintSettings_mAutoDetectPoint_Set(
  JPC_SliderConstraintSettings_t * self,
  bool mAutoDetectPoint
);

JPC_RVec3_t * JPC_SliderConstraintSettings_mPoint1_Get(
  JPC_SliderConstraintSettings_t * self
);

void JPC_SliderConstraintSettings_mPoint1_Set(
  JPC_SliderConstraintSettings_t * self,
  JPC_RVec3_t * mPoint1
);

JPC_Vec3_t * JPC_SliderConstraintSettings_mSliderAxis1_Get(
  JPC_SliderConstraintSettings_t * self
);

void JPC_SliderConstraintSettings_mSliderAxis1_Set(
  JPC_SliderConstraintSettings_t * self,
  JPC_Vec3_t * mSliderAxis1
);

JPC_Vec3_t * JPC_SliderConstraintSettings_mNormalAxis1_Get(
  JPC_SliderConstraintSettings_t * self
);

void JPC_SliderConstraintSettings_mNormalAxis1_Set(
  JPC_SliderConstraintSettings_t * self,
  JPC_Vec3_t * mNormalAxis1
);

JPC_RVec3_t * JPC_SliderConstraintSettings_mPoint2_Get(
  JPC_SliderConstraintSettings_t * self
);

void JPC_SliderConstraintSettings_mPoint2_Set(
  JPC_SliderConstraintSettings_t * self,
  JPC_RVec3_t * mPoint2
);

JPC_Vec3_t * JPC_SliderConstraintSettings_mSliderAxis2_Get(
  JPC_SliderConstraintSettings_t * self
);

void JPC_SliderConstraintSettings_mSliderAxis2_Set(
  JPC_SliderConstraintSettings_t * self,
  JPC_Vec3_t * mSliderAxis2
);

JPC_Vec3_t * JPC_SliderConstraintSettings_mNormalAxis2_Get(
  JPC_SliderConstraintSettings_t * self
);

void JPC_SliderConstraintSettings_mNormalAxis2_Set(
  JPC_SliderConstraintSettings_t * self,
  JPC_Vec3_t * mNormalAxis2
);

float JPC_SliderConstraintSettings_mLimitsMin_Get(
  JPC_SliderConstraintSettings_t * self
);

void JPC_SliderConstraintSettings_mLimitsMin_Set(
  JPC_SliderConstraintSettings_t * self,
  float mLimitsMin
);

float JPC_SliderConstraintSettings_mLimitsMax_Get(
  JPC_SliderConstraintSettings_t * self
);

void JPC_SliderConstraintSettings_mLimitsMax_Set(
  JPC_SliderConstraintSettings_t * self,
  float mLimitsMax
);

JPC_SpringSettings_t * JPC_SliderConstraintSettings_mLimitsSpringSettings_Get(
  JPC_SliderConstraintSettings_t * self
);

void JPC_SliderConstraintSettings_mLimitsSpringSettings_Set(
  JPC_SliderConstraintSettings_t * self,
  JPC_SpringSettings_t * mLimitsSpringSettings
);

float JPC_SliderConstraintSettings_mMaxFrictionForce_Get(
  JPC_SliderConstraintSettings_t * self
);

void JPC_SliderConstraintSettings_mMaxFrictionForce_Set(
  JPC_SliderConstraintSettings_t * self,
  float mMaxFrictionForce
);

JPC_MotorSettings_t * JPC_SliderConstraintSettings_mMotorSettings_Get(
  JPC_SliderConstraintSettings_t * self
);

void JPC_SliderConstraintSettings_mMotorSettings_Set(
  JPC_SliderConstraintSettings_t * self,
  JPC_MotorSettings_t * mMotorSettings
);

bool JPC_SliderConstraintSettings_mEnabled_Get(
  JPC_SliderConstraintSettings_t * self
);

void JPC_SliderConstraintSettings_mEnabled_Set(
  JPC_SliderConstraintSettings_t * self,
  bool mEnabled
);

long JPC_SliderConstraintSettings_mNumVelocityStepsOverride_Get(
  JPC_SliderConstraintSettings_t * self
);

void JPC_SliderConstraintSettings_mNumVelocityStepsOverride_Set(
  JPC_SliderConstraintSettings_t * self,
  long mNumVelocityStepsOverride
);

long JPC_SliderConstraintSettings_mNumPositionStepsOverride_Get(
  JPC_SliderConstraintSettings_t * self
);

void JPC_SliderConstraintSettings_mNumPositionStepsOverride_Set(
  JPC_SliderConstraintSettings_t * self,
  long mNumPositionStepsOverride
);

//endregion properties


#ifdef __cplusplus
}
#endif

