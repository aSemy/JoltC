#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region functions

const JoltC_ShapeSettings_t * JoltC_RagdollPart_GetShapeSettings(
  JoltC_RagdollPart_t * self,
  char** outErrMsg
);

void JoltC_RagdollPart_SetShapeSettings(
  JoltC_RagdollPart_t * self,
  const JoltC_ShapeSettings_t * inShape,
  char** outErrMsg
);

JoltC_Shape_ShapeResult_t * JoltC_RagdollPart_ConvertShapeSettings(
  JoltC_RagdollPart_t * self,
  char** outErrMsg
);

const JoltC_Shape_t * JoltC_RagdollPart_GetShape(
  JoltC_RagdollPart_t * self,
  char** outErrMsg
);

void JoltC_RagdollPart_SetShape(
  JoltC_RagdollPart_t * self,
  const JoltC_Shape_t * inShape,
  char** outErrMsg
);

bool JoltC_RagdollPart_HasMassProperties(
  JoltC_RagdollPart_t * self,
  char** outErrMsg
);

JoltC_MassProperties_t * JoltC_RagdollPart_GetMassProperties(
  JoltC_RagdollPart_t * self,
  char** outErrMsg
);

//endregion functions

//region properties

JoltC_TwoBodyConstraintSettings_t * JoltC_RagdollPart_mToParent_Get(
  JoltC_RagdollPart_t * self,
  char** outErrMsg
);

void JoltC_RagdollPart_mToParent_Set(
  JoltC_RagdollPart_t * self,
  JoltC_TwoBodyConstraintSettings_t * mToParent,
  char** outErrMsg
);

JoltC_RVec3_t * JoltC_RagdollPart_mPosition_Get(
  JoltC_RagdollPart_t * self,
  char** outErrMsg
);

void JoltC_RagdollPart_mPosition_Set(
  JoltC_RagdollPart_t * self,
  JoltC_RVec3_t * mPosition,
  char** outErrMsg
);

JoltC_Quat_t * JoltC_RagdollPart_mRotation_Get(
  JoltC_RagdollPart_t * self,
  char** outErrMsg
);

void JoltC_RagdollPart_mRotation_Set(
  JoltC_RagdollPart_t * self,
  JoltC_Quat_t * mRotation,
  char** outErrMsg
);

JoltC_Vec3_t * JoltC_RagdollPart_mLinearVelocity_Get(
  JoltC_RagdollPart_t * self,
  char** outErrMsg
);

void JoltC_RagdollPart_mLinearVelocity_Set(
  JoltC_RagdollPart_t * self,
  JoltC_Vec3_t * mLinearVelocity,
  char** outErrMsg
);

JoltC_Vec3_t * JoltC_RagdollPart_mAngularVelocity_Get(
  JoltC_RagdollPart_t * self,
  char** outErrMsg
);

void JoltC_RagdollPart_mAngularVelocity_Set(
  JoltC_RagdollPart_t * self,
  JoltC_Vec3_t * mAngularVelocity,
  char** outErrMsg
);

unsigned long long int JoltC_RagdollPart_mUserData_Get(
  JoltC_RagdollPart_t * self,
  char** outErrMsg
);

void JoltC_RagdollPart_mUserData_Set(
  JoltC_RagdollPart_t * self,
  unsigned long long int mUserData,
  char** outErrMsg
);

unsigned long JoltC_RagdollPart_mObjectLayer_Get(
  JoltC_RagdollPart_t * self,
  char** outErrMsg
);

void JoltC_RagdollPart_mObjectLayer_Set(
  JoltC_RagdollPart_t * self,
  unsigned long mObjectLayer,
  char** outErrMsg
);

JoltC_CollisionGroup_t * JoltC_RagdollPart_mCollisionGroup_Get(
  JoltC_RagdollPart_t * self,
  char** outErrMsg
);

void JoltC_RagdollPart_mCollisionGroup_Set(
  JoltC_RagdollPart_t * self,
  JoltC_CollisionGroup_t * mCollisionGroup,
  char** outErrMsg
);

JoltC_EMotionType JoltC_RagdollPart_mMotionType_Get(
  JoltC_RagdollPart_t * self,
  char** outErrMsg
);

void JoltC_RagdollPart_mMotionType_Set(
  JoltC_RagdollPart_t * self,
  JoltC_EMotionType mMotionType,
  char** outErrMsg
);

JoltC_EAllowedDOFs JoltC_RagdollPart_mAllowedDOFs_Get(
  JoltC_RagdollPart_t * self,
  char** outErrMsg
);

void JoltC_RagdollPart_mAllowedDOFs_Set(
  JoltC_RagdollPart_t * self,
  JoltC_EAllowedDOFs mAllowedDOFs,
  char** outErrMsg
);

bool JoltC_RagdollPart_mAllowDynamicOrKinematic_Get(
  JoltC_RagdollPart_t * self,
  char** outErrMsg
);

void JoltC_RagdollPart_mAllowDynamicOrKinematic_Set(
  JoltC_RagdollPart_t * self,
  bool mAllowDynamicOrKinematic,
  char** outErrMsg
);

bool JoltC_RagdollPart_mIsSensor_Get(
  JoltC_RagdollPart_t * self,
  char** outErrMsg
);

void JoltC_RagdollPart_mIsSensor_Set(
  JoltC_RagdollPart_t * self,
  bool mIsSensor,
  char** outErrMsg
);

bool JoltC_RagdollPart_mUseManifoldReduction_Get(
  JoltC_RagdollPart_t * self,
  char** outErrMsg
);

void JoltC_RagdollPart_mUseManifoldReduction_Set(
  JoltC_RagdollPart_t * self,
  bool mUseManifoldReduction,
  char** outErrMsg
);

bool JoltC_RagdollPart_mCollideKinematicVsNonDynamic_Get(
  JoltC_RagdollPart_t * self,
  char** outErrMsg
);

void JoltC_RagdollPart_mCollideKinematicVsNonDynamic_Set(
  JoltC_RagdollPart_t * self,
  bool mCollideKinematicVsNonDynamic,
  char** outErrMsg
);

bool JoltC_RagdollPart_mApplyGyroscopicForce_Get(
  JoltC_RagdollPart_t * self,
  char** outErrMsg
);

void JoltC_RagdollPart_mApplyGyroscopicForce_Set(
  JoltC_RagdollPart_t * self,
  bool mApplyGyroscopicForce,
  char** outErrMsg
);

JoltC_EMotionQuality JoltC_RagdollPart_mMotionQuality_Get(
  JoltC_RagdollPart_t * self,
  char** outErrMsg
);

void JoltC_RagdollPart_mMotionQuality_Set(
  JoltC_RagdollPart_t * self,
  JoltC_EMotionQuality mMotionQuality,
  char** outErrMsg
);

bool JoltC_RagdollPart_mEnhancedInternalEdgeRemoval_Get(
  JoltC_RagdollPart_t * self,
  char** outErrMsg
);

void JoltC_RagdollPart_mEnhancedInternalEdgeRemoval_Set(
  JoltC_RagdollPart_t * self,
  bool mEnhancedInternalEdgeRemoval,
  char** outErrMsg
);

bool JoltC_RagdollPart_mAllowSleeping_Get(
  JoltC_RagdollPart_t * self,
  char** outErrMsg
);

void JoltC_RagdollPart_mAllowSleeping_Set(
  JoltC_RagdollPart_t * self,
  bool mAllowSleeping,
  char** outErrMsg
);

float JoltC_RagdollPart_mFriction_Get(
  JoltC_RagdollPart_t * self,
  char** outErrMsg
);

void JoltC_RagdollPart_mFriction_Set(
  JoltC_RagdollPart_t * self,
  float mFriction,
  char** outErrMsg
);

float JoltC_RagdollPart_mRestitution_Get(
  JoltC_RagdollPart_t * self,
  char** outErrMsg
);

void JoltC_RagdollPart_mRestitution_Set(
  JoltC_RagdollPart_t * self,
  float mRestitution,
  char** outErrMsg
);

float JoltC_RagdollPart_mLinearDamping_Get(
  JoltC_RagdollPart_t * self,
  char** outErrMsg
);

void JoltC_RagdollPart_mLinearDamping_Set(
  JoltC_RagdollPart_t * self,
  float mLinearDamping,
  char** outErrMsg
);

float JoltC_RagdollPart_mAngularDamping_Get(
  JoltC_RagdollPart_t * self,
  char** outErrMsg
);

void JoltC_RagdollPart_mAngularDamping_Set(
  JoltC_RagdollPart_t * self,
  float mAngularDamping,
  char** outErrMsg
);

float JoltC_RagdollPart_mMaxLinearVelocity_Get(
  JoltC_RagdollPart_t * self,
  char** outErrMsg
);

void JoltC_RagdollPart_mMaxLinearVelocity_Set(
  JoltC_RagdollPart_t * self,
  float mMaxLinearVelocity,
  char** outErrMsg
);

float JoltC_RagdollPart_mMaxAngularVelocity_Get(
  JoltC_RagdollPart_t * self,
  char** outErrMsg
);

void JoltC_RagdollPart_mMaxAngularVelocity_Set(
  JoltC_RagdollPart_t * self,
  float mMaxAngularVelocity,
  char** outErrMsg
);

float JoltC_RagdollPart_mGravityFactor_Get(
  JoltC_RagdollPart_t * self,
  char** outErrMsg
);

void JoltC_RagdollPart_mGravityFactor_Set(
  JoltC_RagdollPart_t * self,
  float mGravityFactor,
  char** outErrMsg
);

unsigned long JoltC_RagdollPart_mNumVelocityStepsOverride_Get(
  JoltC_RagdollPart_t * self,
  char** outErrMsg
);

void JoltC_RagdollPart_mNumVelocityStepsOverride_Set(
  JoltC_RagdollPart_t * self,
  unsigned long mNumVelocityStepsOverride,
  char** outErrMsg
);

unsigned long JoltC_RagdollPart_mNumPositionStepsOverride_Get(
  JoltC_RagdollPart_t * self,
  char** outErrMsg
);

void JoltC_RagdollPart_mNumPositionStepsOverride_Set(
  JoltC_RagdollPart_t * self,
  unsigned long mNumPositionStepsOverride,
  char** outErrMsg
);

JoltC_EOverrideMassProperties JoltC_RagdollPart_mOverrideMassProperties_Get(
  JoltC_RagdollPart_t * self,
  char** outErrMsg
);

void JoltC_RagdollPart_mOverrideMassProperties_Set(
  JoltC_RagdollPart_t * self,
  JoltC_EOverrideMassProperties mOverrideMassProperties,
  char** outErrMsg
);

float JoltC_RagdollPart_mInertiaMultiplier_Get(
  JoltC_RagdollPart_t * self,
  char** outErrMsg
);

void JoltC_RagdollPart_mInertiaMultiplier_Set(
  JoltC_RagdollPart_t * self,
  float mInertiaMultiplier,
  char** outErrMsg
);

JoltC_MassProperties_t * JoltC_RagdollPart_mMassPropertiesOverride_Get(
  JoltC_RagdollPart_t * self,
  char** outErrMsg
);

void JoltC_RagdollPart_mMassPropertiesOverride_Set(
  JoltC_RagdollPart_t * self,
  JoltC_MassProperties_t * mMassPropertiesOverride,
  char** outErrMsg
);

//endregion properties


#ifdef __cplusplus
}
#endif

