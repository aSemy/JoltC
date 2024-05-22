#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region functions

const JPC_ShapeSettings_t * JPC_RagdollPart_GetShapeSettings(
  JPC_RagdollPart_t * self
);

void JPC_RagdollPart_SetShapeSettings(
  JPC_RagdollPart_t * self,
  const JPC_ShapeSettings_t * inShape
);

JPC_Shape_ShapeResult_t * JPC_RagdollPart_ConvertShapeSettings(
  JPC_RagdollPart_t * self
);

const JPC_Shape_t * JPC_RagdollPart_GetShape(
  JPC_RagdollPart_t * self
);

void JPC_RagdollPart_SetShape(
  JPC_RagdollPart_t * self,
  const JPC_Shape_t * inShape
);

bool JPC_RagdollPart_HasMassProperties(
  JPC_RagdollPart_t * self
);

JPC_MassProperties_t * JPC_RagdollPart_GetMassProperties(
  JPC_RagdollPart_t * self
);

//endregion functions

//region properties

JPC_TwoBodyConstraintSettings_t * JPC_RagdollPart_mToParent_Get(
  JPC_RagdollPart_t * self
);

void JPC_RagdollPart_mToParent_Set(
  JPC_RagdollPart_t * self,
  JPC_TwoBodyConstraintSettings_t * mToParent
);

JPC_RVec3_t * JPC_RagdollPart_mPosition_Get(
  JPC_RagdollPart_t * self
);

void JPC_RagdollPart_mPosition_Set(
  JPC_RagdollPart_t * self,
  JPC_RVec3_t * mPosition
);

JPC_Quat_t * JPC_RagdollPart_mRotation_Get(
  JPC_RagdollPart_t * self
);

void JPC_RagdollPart_mRotation_Set(
  JPC_RagdollPart_t * self,
  JPC_Quat_t * mRotation
);

JPC_Vec3_t * JPC_RagdollPart_mLinearVelocity_Get(
  JPC_RagdollPart_t * self
);

void JPC_RagdollPart_mLinearVelocity_Set(
  JPC_RagdollPart_t * self,
  JPC_Vec3_t * mLinearVelocity
);

JPC_Vec3_t * JPC_RagdollPart_mAngularVelocity_Get(
  JPC_RagdollPart_t * self
);

void JPC_RagdollPart_mAngularVelocity_Set(
  JPC_RagdollPart_t * self,
  JPC_Vec3_t * mAngularVelocity
);

unsigned long long int JPC_RagdollPart_mUserData_Get(
  JPC_RagdollPart_t * self
);

void JPC_RagdollPart_mUserData_Set(
  JPC_RagdollPart_t * self,
  unsigned long long int mUserData
);

unsigned long JPC_RagdollPart_mObjectLayer_Get(
  JPC_RagdollPart_t * self
);

void JPC_RagdollPart_mObjectLayer_Set(
  JPC_RagdollPart_t * self,
  unsigned long mObjectLayer
);

JPC_CollisionGroup_t * JPC_RagdollPart_mCollisionGroup_Get(
  JPC_RagdollPart_t * self
);

void JPC_RagdollPart_mCollisionGroup_Set(
  JPC_RagdollPart_t * self,
  JPC_CollisionGroup_t * mCollisionGroup
);

JPC_EMotionType JPC_RagdollPart_mMotionType_Get(
  JPC_RagdollPart_t * self
);

void JPC_RagdollPart_mMotionType_Set(
  JPC_RagdollPart_t * self,
  JPC_EMotionType mMotionType
);

JPC_EAllowedDOFs JPC_RagdollPart_mAllowedDOFs_Get(
  JPC_RagdollPart_t * self
);

void JPC_RagdollPart_mAllowedDOFs_Set(
  JPC_RagdollPart_t * self,
  JPC_EAllowedDOFs mAllowedDOFs
);

bool JPC_RagdollPart_mAllowDynamicOrKinematic_Get(
  JPC_RagdollPart_t * self
);

void JPC_RagdollPart_mAllowDynamicOrKinematic_Set(
  JPC_RagdollPart_t * self,
  bool mAllowDynamicOrKinematic
);

bool JPC_RagdollPart_mIsSensor_Get(
  JPC_RagdollPart_t * self
);

void JPC_RagdollPart_mIsSensor_Set(
  JPC_RagdollPart_t * self,
  bool mIsSensor
);

bool JPC_RagdollPart_mUseManifoldReduction_Get(
  JPC_RagdollPart_t * self
);

void JPC_RagdollPart_mUseManifoldReduction_Set(
  JPC_RagdollPart_t * self,
  bool mUseManifoldReduction
);

bool JPC_RagdollPart_mCollideKinematicVsNonDynamic_Get(
  JPC_RagdollPart_t * self
);

void JPC_RagdollPart_mCollideKinematicVsNonDynamic_Set(
  JPC_RagdollPart_t * self,
  bool mCollideKinematicVsNonDynamic
);

bool JPC_RagdollPart_mApplyGyroscopicForce_Get(
  JPC_RagdollPart_t * self
);

void JPC_RagdollPart_mApplyGyroscopicForce_Set(
  JPC_RagdollPart_t * self,
  bool mApplyGyroscopicForce
);

JPC_EMotionQuality JPC_RagdollPart_mMotionQuality_Get(
  JPC_RagdollPart_t * self
);

void JPC_RagdollPart_mMotionQuality_Set(
  JPC_RagdollPart_t * self,
  JPC_EMotionQuality mMotionQuality
);

bool JPC_RagdollPart_mEnhancedInternalEdgeRemoval_Get(
  JPC_RagdollPart_t * self
);

void JPC_RagdollPart_mEnhancedInternalEdgeRemoval_Set(
  JPC_RagdollPart_t * self,
  bool mEnhancedInternalEdgeRemoval
);

bool JPC_RagdollPart_mAllowSleeping_Get(
  JPC_RagdollPart_t * self
);

void JPC_RagdollPart_mAllowSleeping_Set(
  JPC_RagdollPart_t * self,
  bool mAllowSleeping
);

float JPC_RagdollPart_mFriction_Get(
  JPC_RagdollPart_t * self
);

void JPC_RagdollPart_mFriction_Set(
  JPC_RagdollPart_t * self,
  float mFriction
);

float JPC_RagdollPart_mRestitution_Get(
  JPC_RagdollPart_t * self
);

void JPC_RagdollPart_mRestitution_Set(
  JPC_RagdollPart_t * self,
  float mRestitution
);

float JPC_RagdollPart_mLinearDamping_Get(
  JPC_RagdollPart_t * self
);

void JPC_RagdollPart_mLinearDamping_Set(
  JPC_RagdollPart_t * self,
  float mLinearDamping
);

float JPC_RagdollPart_mAngularDamping_Get(
  JPC_RagdollPart_t * self
);

void JPC_RagdollPart_mAngularDamping_Set(
  JPC_RagdollPart_t * self,
  float mAngularDamping
);

float JPC_RagdollPart_mMaxLinearVelocity_Get(
  JPC_RagdollPart_t * self
);

void JPC_RagdollPart_mMaxLinearVelocity_Set(
  JPC_RagdollPart_t * self,
  float mMaxLinearVelocity
);

float JPC_RagdollPart_mMaxAngularVelocity_Get(
  JPC_RagdollPart_t * self
);

void JPC_RagdollPart_mMaxAngularVelocity_Set(
  JPC_RagdollPart_t * self,
  float mMaxAngularVelocity
);

float JPC_RagdollPart_mGravityFactor_Get(
  JPC_RagdollPart_t * self
);

void JPC_RagdollPart_mGravityFactor_Set(
  JPC_RagdollPart_t * self,
  float mGravityFactor
);

unsigned long JPC_RagdollPart_mNumVelocityStepsOverride_Get(
  JPC_RagdollPart_t * self
);

void JPC_RagdollPart_mNumVelocityStepsOverride_Set(
  JPC_RagdollPart_t * self,
  unsigned long mNumVelocityStepsOverride
);

unsigned long JPC_RagdollPart_mNumPositionStepsOverride_Get(
  JPC_RagdollPart_t * self
);

void JPC_RagdollPart_mNumPositionStepsOverride_Set(
  JPC_RagdollPart_t * self,
  unsigned long mNumPositionStepsOverride
);

JPC_EOverrideMassProperties JPC_RagdollPart_mOverrideMassProperties_Get(
  JPC_RagdollPart_t * self
);

void JPC_RagdollPart_mOverrideMassProperties_Set(
  JPC_RagdollPart_t * self,
  JPC_EOverrideMassProperties mOverrideMassProperties
);

float JPC_RagdollPart_mInertiaMultiplier_Get(
  JPC_RagdollPart_t * self
);

void JPC_RagdollPart_mInertiaMultiplier_Set(
  JPC_RagdollPart_t * self,
  float mInertiaMultiplier
);

JPC_MassProperties_t * JPC_RagdollPart_mMassPropertiesOverride_Get(
  JPC_RagdollPart_t * self
);

void JPC_RagdollPart_mMassPropertiesOverride_Set(
  JPC_RagdollPart_t * self,
  JPC_MassProperties_t * mMassPropertiesOverride
);

//endregion properties


#ifdef __cplusplus
}
#endif

