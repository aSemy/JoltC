#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_SliderConstraintSettings_t * JoltC_SliderConstraintSettings_new();

//endregion

//region functions

JoltC_Constraint_t * JoltC_SliderConstraintSettings_Create(
  JoltC_SliderConstraintSettings_t * self,
  JoltC_Body_t * inBody1,
  JoltC_Body_t * inBody2
);

unsigned long JoltC_SliderConstraintSettings_GetRefCount(
  JoltC_SliderConstraintSettings_t * self
);

void JoltC_SliderConstraintSettings_AddRef(
  JoltC_SliderConstraintSettings_t * self
);

void JoltC_SliderConstraintSettings_Release(
  JoltC_SliderConstraintSettings_t * self
);

//endregion

//region properties

JoltC_EConstraintSpace JoltC_SliderConstraintSettings_mSpace_Get(
  JoltC_SliderConstraintSettings_t * self
);

void JoltC_SliderConstraintSettings_mSpace_Set(
  JoltC_SliderConstraintSettings_t * self,
  JoltC_EConstraintSpace mSpace
);

bool JoltC_SliderConstraintSettings_mAutoDetectPoint_Get(
  JoltC_SliderConstraintSettings_t * self
);

void JoltC_SliderConstraintSettings_mAutoDetectPoint_Set(
  JoltC_SliderConstraintSettings_t * self,
  bool mAutoDetectPoint
);

JoltC_RVec3_t * JoltC_SliderConstraintSettings_mPoint1_Get(
  JoltC_SliderConstraintSettings_t * self
);

void JoltC_SliderConstraintSettings_mPoint1_Set(
  JoltC_SliderConstraintSettings_t * self,
  JoltC_RVec3_t * mPoint1
);

JoltC_Vec3_t * JoltC_SliderConstraintSettings_mSliderAxis1_Get(
  JoltC_SliderConstraintSettings_t * self
);

void JoltC_SliderConstraintSettings_mSliderAxis1_Set(
  JoltC_SliderConstraintSettings_t * self,
  JoltC_Vec3_t * mSliderAxis1
);

JoltC_Vec3_t * JoltC_SliderConstraintSettings_mNormalAxis1_Get(
  JoltC_SliderConstraintSettings_t * self
);

void JoltC_SliderConstraintSettings_mNormalAxis1_Set(
  JoltC_SliderConstraintSettings_t * self,
  JoltC_Vec3_t * mNormalAxis1
);

JoltC_RVec3_t * JoltC_SliderConstraintSettings_mPoint2_Get(
  JoltC_SliderConstraintSettings_t * self
);

void JoltC_SliderConstraintSettings_mPoint2_Set(
  JoltC_SliderConstraintSettings_t * self,
  JoltC_RVec3_t * mPoint2
);

JoltC_Vec3_t * JoltC_SliderConstraintSettings_mSliderAxis2_Get(
  JoltC_SliderConstraintSettings_t * self
);

void JoltC_SliderConstraintSettings_mSliderAxis2_Set(
  JoltC_SliderConstraintSettings_t * self,
  JoltC_Vec3_t * mSliderAxis2
);

JoltC_Vec3_t * JoltC_SliderConstraintSettings_mNormalAxis2_Get(
  JoltC_SliderConstraintSettings_t * self
);

void JoltC_SliderConstraintSettings_mNormalAxis2_Set(
  JoltC_SliderConstraintSettings_t * self,
  JoltC_Vec3_t * mNormalAxis2
);

float JoltC_SliderConstraintSettings_mLimitsMin_Get(
  JoltC_SliderConstraintSettings_t * self
);

void JoltC_SliderConstraintSettings_mLimitsMin_Set(
  JoltC_SliderConstraintSettings_t * self,
  float mLimitsMin
);

float JoltC_SliderConstraintSettings_mLimitsMax_Get(
  JoltC_SliderConstraintSettings_t * self
);

void JoltC_SliderConstraintSettings_mLimitsMax_Set(
  JoltC_SliderConstraintSettings_t * self,
  float mLimitsMax
);

JoltC_SpringSettings_t * JoltC_SliderConstraintSettings_mLimitsSpringSettings_Get(
  JoltC_SliderConstraintSettings_t * self
);

void JoltC_SliderConstraintSettings_mLimitsSpringSettings_Set(
  JoltC_SliderConstraintSettings_t * self,
  JoltC_SpringSettings_t * mLimitsSpringSettings
);

float JoltC_SliderConstraintSettings_mMaxFrictionForce_Get(
  JoltC_SliderConstraintSettings_t * self
);

void JoltC_SliderConstraintSettings_mMaxFrictionForce_Set(
  JoltC_SliderConstraintSettings_t * self,
  float mMaxFrictionForce
);

JoltC_MotorSettings_t * JoltC_SliderConstraintSettings_mMotorSettings_Get(
  JoltC_SliderConstraintSettings_t * self
);

void JoltC_SliderConstraintSettings_mMotorSettings_Set(
  JoltC_SliderConstraintSettings_t * self,
  JoltC_MotorSettings_t * mMotorSettings
);

bool JoltC_SliderConstraintSettings_mEnabled_Get(
  JoltC_SliderConstraintSettings_t * self
);

void JoltC_SliderConstraintSettings_mEnabled_Set(
  JoltC_SliderConstraintSettings_t * self,
  bool mEnabled
);

long JoltC_SliderConstraintSettings_mNumVelocityStepsOverride_Get(
  JoltC_SliderConstraintSettings_t * self
);

void JoltC_SliderConstraintSettings_mNumVelocityStepsOverride_Set(
  JoltC_SliderConstraintSettings_t * self,
  long mNumVelocityStepsOverride
);

long JoltC_SliderConstraintSettings_mNumPositionStepsOverride_Get(
  JoltC_SliderConstraintSettings_t * self
);

void JoltC_SliderConstraintSettings_mNumPositionStepsOverride_Set(
  JoltC_SliderConstraintSettings_t * self,
  long mNumPositionStepsOverride
);

//endregion


#ifdef __cplusplus
}
#endif

