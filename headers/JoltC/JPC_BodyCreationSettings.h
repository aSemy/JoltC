#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JPC_BodyCreationSettings_t * JPC_BodyCreationSettings_new_0();

JPC_BodyCreationSettings_t * JPC_BodyCreationSettings_new_1(
  const JPC_Shape_t * inShape,
  JPC_RVec3_t * inPosition,
  JPC_Quat_t * inRotation,
  JPC_EMotionType inMotionType,
  unsigned long inObjectLayer
);

//endregion constructors

//region functions

const JPC_ShapeSettings_t * JPC_BodyCreationSettings_GetShapeSettings(
  JPC_BodyCreationSettings_t * self
);

void JPC_BodyCreationSettings_SetShapeSettings(
  JPC_BodyCreationSettings_t * self,
  const JPC_ShapeSettings_t * inShape
);

JPC_Shape_ShapeResult_t * JPC_BodyCreationSettings_ConvertShapeSettings(
  JPC_BodyCreationSettings_t * self
);

const JPC_Shape_t * JPC_BodyCreationSettings_GetShape(
  JPC_BodyCreationSettings_t * self
);

void JPC_BodyCreationSettings_SetShape(
  JPC_BodyCreationSettings_t * self,
  const JPC_Shape_t * inShape
);

bool JPC_BodyCreationSettings_HasMassProperties(
  JPC_BodyCreationSettings_t * self
);

JPC_MassProperties_t * JPC_BodyCreationSettings_GetMassProperties(
  JPC_BodyCreationSettings_t * self
);

//endregion functions

//region properties

JPC_RVec3_t * JPC_BodyCreationSettings_mPosition_Get(
  JPC_BodyCreationSettings_t * self
);

void JPC_BodyCreationSettings_mPosition_Set(
  JPC_BodyCreationSettings_t * self,
  JPC_RVec3_t * mPosition
);

JPC_Quat_t * JPC_BodyCreationSettings_mRotation_Get(
  JPC_BodyCreationSettings_t * self
);

void JPC_BodyCreationSettings_mRotation_Set(
  JPC_BodyCreationSettings_t * self,
  JPC_Quat_t * mRotation
);

JPC_Vec3_t * JPC_BodyCreationSettings_mLinearVelocity_Get(
  JPC_BodyCreationSettings_t * self
);

void JPC_BodyCreationSettings_mLinearVelocity_Set(
  JPC_BodyCreationSettings_t * self,
  JPC_Vec3_t * mLinearVelocity
);

JPC_Vec3_t * JPC_BodyCreationSettings_mAngularVelocity_Get(
  JPC_BodyCreationSettings_t * self
);

void JPC_BodyCreationSettings_mAngularVelocity_Set(
  JPC_BodyCreationSettings_t * self,
  JPC_Vec3_t * mAngularVelocity
);

unsigned long long int JPC_BodyCreationSettings_mUserData_Get(
  JPC_BodyCreationSettings_t * self
);

void JPC_BodyCreationSettings_mUserData_Set(
  JPC_BodyCreationSettings_t * self,
  unsigned long long int mUserData
);

unsigned long JPC_BodyCreationSettings_mObjectLayer_Get(
  JPC_BodyCreationSettings_t * self
);

void JPC_BodyCreationSettings_mObjectLayer_Set(
  JPC_BodyCreationSettings_t * self,
  unsigned long mObjectLayer
);

JPC_CollisionGroup_t * JPC_BodyCreationSettings_mCollisionGroup_Get(
  JPC_BodyCreationSettings_t * self
);

void JPC_BodyCreationSettings_mCollisionGroup_Set(
  JPC_BodyCreationSettings_t * self,
  JPC_CollisionGroup_t * mCollisionGroup
);

JPC_EMotionType JPC_BodyCreationSettings_mMotionType_Get(
  JPC_BodyCreationSettings_t * self
);

void JPC_BodyCreationSettings_mMotionType_Set(
  JPC_BodyCreationSettings_t * self,
  JPC_EMotionType mMotionType
);

JPC_EAllowedDOFs JPC_BodyCreationSettings_mAllowedDOFs_Get(
  JPC_BodyCreationSettings_t * self
);

void JPC_BodyCreationSettings_mAllowedDOFs_Set(
  JPC_BodyCreationSettings_t * self,
  JPC_EAllowedDOFs mAllowedDOFs
);

bool JPC_BodyCreationSettings_mAllowDynamicOrKinematic_Get(
  JPC_BodyCreationSettings_t * self
);

void JPC_BodyCreationSettings_mAllowDynamicOrKinematic_Set(
  JPC_BodyCreationSettings_t * self,
  bool mAllowDynamicOrKinematic
);

bool JPC_BodyCreationSettings_mIsSensor_Get(
  JPC_BodyCreationSettings_t * self
);

void JPC_BodyCreationSettings_mIsSensor_Set(
  JPC_BodyCreationSettings_t * self,
  bool mIsSensor
);

bool JPC_BodyCreationSettings_mUseManifoldReduction_Get(
  JPC_BodyCreationSettings_t * self
);

void JPC_BodyCreationSettings_mUseManifoldReduction_Set(
  JPC_BodyCreationSettings_t * self,
  bool mUseManifoldReduction
);

bool JPC_BodyCreationSettings_mCollideKinematicVsNonDynamic_Get(
  JPC_BodyCreationSettings_t * self
);

void JPC_BodyCreationSettings_mCollideKinematicVsNonDynamic_Set(
  JPC_BodyCreationSettings_t * self,
  bool mCollideKinematicVsNonDynamic
);

bool JPC_BodyCreationSettings_mApplyGyroscopicForce_Get(
  JPC_BodyCreationSettings_t * self
);

void JPC_BodyCreationSettings_mApplyGyroscopicForce_Set(
  JPC_BodyCreationSettings_t * self,
  bool mApplyGyroscopicForce
);

JPC_EMotionQuality JPC_BodyCreationSettings_mMotionQuality_Get(
  JPC_BodyCreationSettings_t * self
);

void JPC_BodyCreationSettings_mMotionQuality_Set(
  JPC_BodyCreationSettings_t * self,
  JPC_EMotionQuality mMotionQuality
);

bool JPC_BodyCreationSettings_mEnhancedInternalEdgeRemoval_Get(
  JPC_BodyCreationSettings_t * self
);

void JPC_BodyCreationSettings_mEnhancedInternalEdgeRemoval_Set(
  JPC_BodyCreationSettings_t * self,
  bool mEnhancedInternalEdgeRemoval
);

bool JPC_BodyCreationSettings_mAllowSleeping_Get(
  JPC_BodyCreationSettings_t * self
);

void JPC_BodyCreationSettings_mAllowSleeping_Set(
  JPC_BodyCreationSettings_t * self,
  bool mAllowSleeping
);

float JPC_BodyCreationSettings_mFriction_Get(
  JPC_BodyCreationSettings_t * self
);

void JPC_BodyCreationSettings_mFriction_Set(
  JPC_BodyCreationSettings_t * self,
  float mFriction
);

float JPC_BodyCreationSettings_mRestitution_Get(
  JPC_BodyCreationSettings_t * self
);

void JPC_BodyCreationSettings_mRestitution_Set(
  JPC_BodyCreationSettings_t * self,
  float mRestitution
);

float JPC_BodyCreationSettings_mLinearDamping_Get(
  JPC_BodyCreationSettings_t * self
);

void JPC_BodyCreationSettings_mLinearDamping_Set(
  JPC_BodyCreationSettings_t * self,
  float mLinearDamping
);

float JPC_BodyCreationSettings_mAngularDamping_Get(
  JPC_BodyCreationSettings_t * self
);

void JPC_BodyCreationSettings_mAngularDamping_Set(
  JPC_BodyCreationSettings_t * self,
  float mAngularDamping
);

float JPC_BodyCreationSettings_mMaxLinearVelocity_Get(
  JPC_BodyCreationSettings_t * self
);

void JPC_BodyCreationSettings_mMaxLinearVelocity_Set(
  JPC_BodyCreationSettings_t * self,
  float mMaxLinearVelocity
);

float JPC_BodyCreationSettings_mMaxAngularVelocity_Get(
  JPC_BodyCreationSettings_t * self
);

void JPC_BodyCreationSettings_mMaxAngularVelocity_Set(
  JPC_BodyCreationSettings_t * self,
  float mMaxAngularVelocity
);

float JPC_BodyCreationSettings_mGravityFactor_Get(
  JPC_BodyCreationSettings_t * self
);

void JPC_BodyCreationSettings_mGravityFactor_Set(
  JPC_BodyCreationSettings_t * self,
  float mGravityFactor
);

unsigned long JPC_BodyCreationSettings_mNumVelocityStepsOverride_Get(
  JPC_BodyCreationSettings_t * self
);

void JPC_BodyCreationSettings_mNumVelocityStepsOverride_Set(
  JPC_BodyCreationSettings_t * self,
  unsigned long mNumVelocityStepsOverride
);

unsigned long JPC_BodyCreationSettings_mNumPositionStepsOverride_Get(
  JPC_BodyCreationSettings_t * self
);

void JPC_BodyCreationSettings_mNumPositionStepsOverride_Set(
  JPC_BodyCreationSettings_t * self,
  unsigned long mNumPositionStepsOverride
);

JPC_EOverrideMassProperties JPC_BodyCreationSettings_mOverrideMassProperties_Get(
  JPC_BodyCreationSettings_t * self
);

void JPC_BodyCreationSettings_mOverrideMassProperties_Set(
  JPC_BodyCreationSettings_t * self,
  JPC_EOverrideMassProperties mOverrideMassProperties
);

float JPC_BodyCreationSettings_mInertiaMultiplier_Get(
  JPC_BodyCreationSettings_t * self
);

void JPC_BodyCreationSettings_mInertiaMultiplier_Set(
  JPC_BodyCreationSettings_t * self,
  float mInertiaMultiplier
);

JPC_MassProperties_t * JPC_BodyCreationSettings_mMassPropertiesOverride_Get(
  JPC_BodyCreationSettings_t * self
);

void JPC_BodyCreationSettings_mMassPropertiesOverride_Set(
  JPC_BodyCreationSettings_t * self,
  JPC_MassProperties_t * mMassPropertiesOverride
);

//endregion properties


#ifdef __cplusplus
}
#endif

