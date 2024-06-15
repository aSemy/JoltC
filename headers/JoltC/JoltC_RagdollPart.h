#pragma once
#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region destructor

void JoltC_RagdollPart_destroy(
  JoltC_RagdollPart_t * self
);

//endregion
//region functions

JoltC_ShapeSettings_t * JoltC_RagdollPart_GetShapeSettings(
  JoltC_RagdollPart_t * self
);

void JoltC_RagdollPart_SetShapeSettings(
  JoltC_RagdollPart_t * self,
  JoltC_ShapeSettings_t * inShape
);

JoltC_Shape_ShapeResult_t * JoltC_RagdollPart_ConvertShapeSettings(
  JoltC_RagdollPart_t * self
);

JoltC_Shape_t * JoltC_RagdollPart_GetShape(
  JoltC_RagdollPart_t * self
);

void JoltC_RagdollPart_SetShape(
  JoltC_RagdollPart_t * self,
  JoltC_Shape_t * inShape
);

bool JoltC_RagdollPart_HasMassProperties(
  JoltC_RagdollPart_t * self
);

JoltC_MassProperties_t * JoltC_RagdollPart_GetMassProperties(
  JoltC_RagdollPart_t * self
);

//endregion

//region properties

JoltC_TwoBodyConstraintSettings_t * JoltC_RagdollPart_mToParent_Get(
  JoltC_RagdollPart_t * self
);

void JoltC_RagdollPart_mToParent_Set(
  JoltC_RagdollPart_t * self,
  JoltC_TwoBodyConstraintSettings_t * mToParent
);

JoltC_RVec3_t * JoltC_RagdollPart_mPosition_Get(
  JoltC_RagdollPart_t * self
);

void JoltC_RagdollPart_mPosition_Set(
  JoltC_RagdollPart_t * self,
  JoltC_RVec3_t * mPosition
);

JoltC_Quat_t * JoltC_RagdollPart_mRotation_Get(
  JoltC_RagdollPart_t * self
);

void JoltC_RagdollPart_mRotation_Set(
  JoltC_RagdollPart_t * self,
  JoltC_Quat_t * mRotation
);

JoltC_Vec3_t * JoltC_RagdollPart_mLinearVelocity_Get(
  JoltC_RagdollPart_t * self
);

void JoltC_RagdollPart_mLinearVelocity_Set(
  JoltC_RagdollPart_t * self,
  JoltC_Vec3_t * mLinearVelocity
);

JoltC_Vec3_t * JoltC_RagdollPart_mAngularVelocity_Get(
  JoltC_RagdollPart_t * self
);

void JoltC_RagdollPart_mAngularVelocity_Set(
  JoltC_RagdollPart_t * self,
  JoltC_Vec3_t * mAngularVelocity
);

unsigned long long int JoltC_RagdollPart_mUserData_Get(
  JoltC_RagdollPart_t * self
);

void JoltC_RagdollPart_mUserData_Set(
  JoltC_RagdollPart_t * self,
  unsigned long long int mUserData
);

unsigned long JoltC_RagdollPart_mObjectLayer_Get(
  JoltC_RagdollPart_t * self
);

void JoltC_RagdollPart_mObjectLayer_Set(
  JoltC_RagdollPart_t * self,
  unsigned long mObjectLayer
);

JoltC_CollisionGroup_t * JoltC_RagdollPart_mCollisionGroup_Get(
  JoltC_RagdollPart_t * self
);

void JoltC_RagdollPart_mCollisionGroup_Set(
  JoltC_RagdollPart_t * self,
  JoltC_CollisionGroup_t * mCollisionGroup
);

JoltC_EMotionType JoltC_RagdollPart_mMotionType_Get(
  JoltC_RagdollPart_t * self
);

void JoltC_RagdollPart_mMotionType_Set(
  JoltC_RagdollPart_t * self,
  JoltC_EMotionType mMotionType
);

JoltC_EAllowedDOFs JoltC_RagdollPart_mAllowedDOFs_Get(
  JoltC_RagdollPart_t * self
);

void JoltC_RagdollPart_mAllowedDOFs_Set(
  JoltC_RagdollPart_t * self,
  JoltC_EAllowedDOFs mAllowedDOFs
);

bool JoltC_RagdollPart_mAllowDynamicOrKinematic_Get(
  JoltC_RagdollPart_t * self
);

void JoltC_RagdollPart_mAllowDynamicOrKinematic_Set(
  JoltC_RagdollPart_t * self,
  bool mAllowDynamicOrKinematic
);

bool JoltC_RagdollPart_mIsSensor_Get(
  JoltC_RagdollPart_t * self
);

void JoltC_RagdollPart_mIsSensor_Set(
  JoltC_RagdollPart_t * self,
  bool mIsSensor
);

bool JoltC_RagdollPart_mUseManifoldReduction_Get(
  JoltC_RagdollPart_t * self
);

void JoltC_RagdollPart_mUseManifoldReduction_Set(
  JoltC_RagdollPart_t * self,
  bool mUseManifoldReduction
);

bool JoltC_RagdollPart_mCollideKinematicVsNonDynamic_Get(
  JoltC_RagdollPart_t * self
);

void JoltC_RagdollPart_mCollideKinematicVsNonDynamic_Set(
  JoltC_RagdollPart_t * self,
  bool mCollideKinematicVsNonDynamic
);

bool JoltC_RagdollPart_mApplyGyroscopicForce_Get(
  JoltC_RagdollPart_t * self
);

void JoltC_RagdollPart_mApplyGyroscopicForce_Set(
  JoltC_RagdollPart_t * self,
  bool mApplyGyroscopicForce
);

JoltC_EMotionQuality JoltC_RagdollPart_mMotionQuality_Get(
  JoltC_RagdollPart_t * self
);

void JoltC_RagdollPart_mMotionQuality_Set(
  JoltC_RagdollPart_t * self,
  JoltC_EMotionQuality mMotionQuality
);

bool JoltC_RagdollPart_mEnhancedInternalEdgeRemoval_Get(
  JoltC_RagdollPart_t * self
);

void JoltC_RagdollPart_mEnhancedInternalEdgeRemoval_Set(
  JoltC_RagdollPart_t * self,
  bool mEnhancedInternalEdgeRemoval
);

bool JoltC_RagdollPart_mAllowSleeping_Get(
  JoltC_RagdollPart_t * self
);

void JoltC_RagdollPart_mAllowSleeping_Set(
  JoltC_RagdollPart_t * self,
  bool mAllowSleeping
);

float JoltC_RagdollPart_mFriction_Get(
  JoltC_RagdollPart_t * self
);

void JoltC_RagdollPart_mFriction_Set(
  JoltC_RagdollPart_t * self,
  float mFriction
);

float JoltC_RagdollPart_mRestitution_Get(
  JoltC_RagdollPart_t * self
);

void JoltC_RagdollPart_mRestitution_Set(
  JoltC_RagdollPart_t * self,
  float mRestitution
);

float JoltC_RagdollPart_mLinearDamping_Get(
  JoltC_RagdollPart_t * self
);

void JoltC_RagdollPart_mLinearDamping_Set(
  JoltC_RagdollPart_t * self,
  float mLinearDamping
);

float JoltC_RagdollPart_mAngularDamping_Get(
  JoltC_RagdollPart_t * self
);

void JoltC_RagdollPart_mAngularDamping_Set(
  JoltC_RagdollPart_t * self,
  float mAngularDamping
);

float JoltC_RagdollPart_mMaxLinearVelocity_Get(
  JoltC_RagdollPart_t * self
);

void JoltC_RagdollPart_mMaxLinearVelocity_Set(
  JoltC_RagdollPart_t * self,
  float mMaxLinearVelocity
);

float JoltC_RagdollPart_mMaxAngularVelocity_Get(
  JoltC_RagdollPart_t * self
);

void JoltC_RagdollPart_mMaxAngularVelocity_Set(
  JoltC_RagdollPart_t * self,
  float mMaxAngularVelocity
);

float JoltC_RagdollPart_mGravityFactor_Get(
  JoltC_RagdollPart_t * self
);

void JoltC_RagdollPart_mGravityFactor_Set(
  JoltC_RagdollPart_t * self,
  float mGravityFactor
);

unsigned long JoltC_RagdollPart_mNumVelocityStepsOverride_Get(
  JoltC_RagdollPart_t * self
);

void JoltC_RagdollPart_mNumVelocityStepsOverride_Set(
  JoltC_RagdollPart_t * self,
  unsigned long mNumVelocityStepsOverride
);

unsigned long JoltC_RagdollPart_mNumPositionStepsOverride_Get(
  JoltC_RagdollPart_t * self
);

void JoltC_RagdollPart_mNumPositionStepsOverride_Set(
  JoltC_RagdollPart_t * self,
  unsigned long mNumPositionStepsOverride
);

JoltC_EOverrideMassProperties JoltC_RagdollPart_mOverrideMassProperties_Get(
  JoltC_RagdollPart_t * self
);

void JoltC_RagdollPart_mOverrideMassProperties_Set(
  JoltC_RagdollPart_t * self,
  JoltC_EOverrideMassProperties mOverrideMassProperties
);

float JoltC_RagdollPart_mInertiaMultiplier_Get(
  JoltC_RagdollPart_t * self
);

void JoltC_RagdollPart_mInertiaMultiplier_Set(
  JoltC_RagdollPart_t * self,
  float mInertiaMultiplier
);

JoltC_MassProperties_t * JoltC_RagdollPart_mMassPropertiesOverride_Get(
  JoltC_RagdollPart_t * self
);

void JoltC_RagdollPart_mMassPropertiesOverride_Set(
  JoltC_RagdollPart_t * self,
  JoltC_MassProperties_t * mMassPropertiesOverride
);

//endregion


#ifdef __cplusplus
}
#endif
