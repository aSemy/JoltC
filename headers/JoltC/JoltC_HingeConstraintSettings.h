#pragma once
#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_HingeConstraintSettings_t * JoltC_HingeConstraintSettings_new();

//endregion

//region destructor

void JoltC_HingeConstraintSettings_destroy(
  JoltC_HingeConstraintSettings_t * self
);

//endregion
//region functions

JoltC_Constraint_t * JoltC_HingeConstraintSettings_Create(
  JoltC_HingeConstraintSettings_t * self,
  JoltC_Body_t * inBody1,
  JoltC_Body_t * inBody2
);

unsigned long JoltC_HingeConstraintSettings_GetRefCount(
  JoltC_HingeConstraintSettings_t * self
);

void JoltC_HingeConstraintSettings_AddRef(
  JoltC_HingeConstraintSettings_t * self
);

void JoltC_HingeConstraintSettings_Release(
  JoltC_HingeConstraintSettings_t * self
);

//endregion

//region properties

JoltC_EConstraintSpace JoltC_HingeConstraintSettings_mSpace_Get(
  JoltC_HingeConstraintSettings_t * self
);

void JoltC_HingeConstraintSettings_mSpace_Set(
  JoltC_HingeConstraintSettings_t * self,
  JoltC_EConstraintSpace mSpace
);

JoltC_RVec3_t * JoltC_HingeConstraintSettings_mPoint1_Get(
  JoltC_HingeConstraintSettings_t * self
);

void JoltC_HingeConstraintSettings_mPoint1_Set(
  JoltC_HingeConstraintSettings_t * self,
  JoltC_RVec3_t * mPoint1
);

JoltC_Vec3_t * JoltC_HingeConstraintSettings_mHingeAxis1_Get(
  JoltC_HingeConstraintSettings_t * self
);

void JoltC_HingeConstraintSettings_mHingeAxis1_Set(
  JoltC_HingeConstraintSettings_t * self,
  JoltC_Vec3_t * mHingeAxis1
);

JoltC_Vec3_t * JoltC_HingeConstraintSettings_mNormalAxis1_Get(
  JoltC_HingeConstraintSettings_t * self
);

void JoltC_HingeConstraintSettings_mNormalAxis1_Set(
  JoltC_HingeConstraintSettings_t * self,
  JoltC_Vec3_t * mNormalAxis1
);

JoltC_RVec3_t * JoltC_HingeConstraintSettings_mPoint2_Get(
  JoltC_HingeConstraintSettings_t * self
);

void JoltC_HingeConstraintSettings_mPoint2_Set(
  JoltC_HingeConstraintSettings_t * self,
  JoltC_RVec3_t * mPoint2
);

JoltC_Vec3_t * JoltC_HingeConstraintSettings_mHingeAxis2_Get(
  JoltC_HingeConstraintSettings_t * self
);

void JoltC_HingeConstraintSettings_mHingeAxis2_Set(
  JoltC_HingeConstraintSettings_t * self,
  JoltC_Vec3_t * mHingeAxis2
);

JoltC_Vec3_t * JoltC_HingeConstraintSettings_mNormalAxis2_Get(
  JoltC_HingeConstraintSettings_t * self
);

void JoltC_HingeConstraintSettings_mNormalAxis2_Set(
  JoltC_HingeConstraintSettings_t * self,
  JoltC_Vec3_t * mNormalAxis2
);

float JoltC_HingeConstraintSettings_mLimitsMin_Get(
  JoltC_HingeConstraintSettings_t * self
);

void JoltC_HingeConstraintSettings_mLimitsMin_Set(
  JoltC_HingeConstraintSettings_t * self,
  float mLimitsMin
);

float JoltC_HingeConstraintSettings_mLimitsMax_Get(
  JoltC_HingeConstraintSettings_t * self
);

void JoltC_HingeConstraintSettings_mLimitsMax_Set(
  JoltC_HingeConstraintSettings_t * self,
  float mLimitsMax
);

JoltC_SpringSettings_t * JoltC_HingeConstraintSettings_mLimitsSpringSettings_Get(
  JoltC_HingeConstraintSettings_t * self
);

void JoltC_HingeConstraintSettings_mLimitsSpringSettings_Set(
  JoltC_HingeConstraintSettings_t * self,
  JoltC_SpringSettings_t * mLimitsSpringSettings
);

float JoltC_HingeConstraintSettings_mMaxFrictionTorque_Get(
  JoltC_HingeConstraintSettings_t * self
);

void JoltC_HingeConstraintSettings_mMaxFrictionTorque_Set(
  JoltC_HingeConstraintSettings_t * self,
  float mMaxFrictionTorque
);

JoltC_MotorSettings_t * JoltC_HingeConstraintSettings_mMotorSettings_Get(
  JoltC_HingeConstraintSettings_t * self
);

void JoltC_HingeConstraintSettings_mMotorSettings_Set(
  JoltC_HingeConstraintSettings_t * self,
  JoltC_MotorSettings_t * mMotorSettings
);

bool JoltC_HingeConstraintSettings_mEnabled_Get(
  JoltC_HingeConstraintSettings_t * self
);

void JoltC_HingeConstraintSettings_mEnabled_Set(
  JoltC_HingeConstraintSettings_t * self,
  bool mEnabled
);

long JoltC_HingeConstraintSettings_mNumVelocityStepsOverride_Get(
  JoltC_HingeConstraintSettings_t * self
);

void JoltC_HingeConstraintSettings_mNumVelocityStepsOverride_Set(
  JoltC_HingeConstraintSettings_t * self,
  long mNumVelocityStepsOverride
);

long JoltC_HingeConstraintSettings_mNumPositionStepsOverride_Get(
  JoltC_HingeConstraintSettings_t * self
);

void JoltC_HingeConstraintSettings_mNumPositionStepsOverride_Set(
  JoltC_HingeConstraintSettings_t * self,
  long mNumPositionStepsOverride
);

//endregion


#ifdef __cplusplus
}
#endif
