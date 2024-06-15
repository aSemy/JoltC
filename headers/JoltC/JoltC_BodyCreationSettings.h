#pragma once
#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_BodyCreationSettings_t * JoltC_BodyCreationSettings_new_0();

JoltC_BodyCreationSettings_t * JoltC_BodyCreationSettings_new_1(
  JoltC_Shape_t * inShape,
  JoltC_RVec3_t * inPosition,
  JoltC_Quat_t * inRotation,
  JoltC_EMotionType inMotionType,
  unsigned long inObjectLayer
);

//endregion

//region destructor

void JoltC_BodyCreationSettings_destroy(
  JoltC_BodyCreationSettings_t * self
);

//endregion
//region converters

/**
 * Convert an instance of JoltC_RagdollPart_t into JoltC_BodyCreationSettings_t.
 */
JoltC_BodyCreationSettings_t * JoltC_BodyCreationSettings_From_RagdollPart(
  JoltC_RagdollPart_t * subtype
);

//endregion

//region functions

JoltC_ShapeSettings_t * JoltC_BodyCreationSettings_GetShapeSettings(
  JoltC_BodyCreationSettings_t * self
);

void JoltC_BodyCreationSettings_SetShapeSettings(
  JoltC_BodyCreationSettings_t * self,
  JoltC_ShapeSettings_t * inShape
);

JoltC_Shape_ShapeResult_t * JoltC_BodyCreationSettings_ConvertShapeSettings(
  JoltC_BodyCreationSettings_t * self
);

JoltC_Shape_t * JoltC_BodyCreationSettings_GetShape(
  JoltC_BodyCreationSettings_t * self
);

void JoltC_BodyCreationSettings_SetShape(
  JoltC_BodyCreationSettings_t * self,
  JoltC_Shape_t * inShape
);

bool JoltC_BodyCreationSettings_HasMassProperties(
  JoltC_BodyCreationSettings_t * self
);

JoltC_MassProperties_t * JoltC_BodyCreationSettings_GetMassProperties(
  JoltC_BodyCreationSettings_t * self
);

//endregion

//region properties

JoltC_RVec3_t * JoltC_BodyCreationSettings_mPosition_Get(
  JoltC_BodyCreationSettings_t * self
);

void JoltC_BodyCreationSettings_mPosition_Set(
  JoltC_BodyCreationSettings_t * self,
  JoltC_RVec3_t * mPosition
);

JoltC_Quat_t * JoltC_BodyCreationSettings_mRotation_Get(
  JoltC_BodyCreationSettings_t * self
);

void JoltC_BodyCreationSettings_mRotation_Set(
  JoltC_BodyCreationSettings_t * self,
  JoltC_Quat_t * mRotation
);

JoltC_Vec3_t * JoltC_BodyCreationSettings_mLinearVelocity_Get(
  JoltC_BodyCreationSettings_t * self
);

void JoltC_BodyCreationSettings_mLinearVelocity_Set(
  JoltC_BodyCreationSettings_t * self,
  JoltC_Vec3_t * mLinearVelocity
);

JoltC_Vec3_t * JoltC_BodyCreationSettings_mAngularVelocity_Get(
  JoltC_BodyCreationSettings_t * self
);

void JoltC_BodyCreationSettings_mAngularVelocity_Set(
  JoltC_BodyCreationSettings_t * self,
  JoltC_Vec3_t * mAngularVelocity
);

unsigned long long int JoltC_BodyCreationSettings_mUserData_Get(
  JoltC_BodyCreationSettings_t * self
);

void JoltC_BodyCreationSettings_mUserData_Set(
  JoltC_BodyCreationSettings_t * self,
  unsigned long long int mUserData
);

unsigned long JoltC_BodyCreationSettings_mObjectLayer_Get(
  JoltC_BodyCreationSettings_t * self
);

void JoltC_BodyCreationSettings_mObjectLayer_Set(
  JoltC_BodyCreationSettings_t * self,
  unsigned long mObjectLayer
);

JoltC_CollisionGroup_t * JoltC_BodyCreationSettings_mCollisionGroup_Get(
  JoltC_BodyCreationSettings_t * self
);

void JoltC_BodyCreationSettings_mCollisionGroup_Set(
  JoltC_BodyCreationSettings_t * self,
  JoltC_CollisionGroup_t * mCollisionGroup
);

JoltC_EMotionType JoltC_BodyCreationSettings_mMotionType_Get(
  JoltC_BodyCreationSettings_t * self
);

void JoltC_BodyCreationSettings_mMotionType_Set(
  JoltC_BodyCreationSettings_t * self,
  JoltC_EMotionType mMotionType
);

JoltC_EAllowedDOFs JoltC_BodyCreationSettings_mAllowedDOFs_Get(
  JoltC_BodyCreationSettings_t * self
);

void JoltC_BodyCreationSettings_mAllowedDOFs_Set(
  JoltC_BodyCreationSettings_t * self,
  JoltC_EAllowedDOFs mAllowedDOFs
);

bool JoltC_BodyCreationSettings_mAllowDynamicOrKinematic_Get(
  JoltC_BodyCreationSettings_t * self
);

void JoltC_BodyCreationSettings_mAllowDynamicOrKinematic_Set(
  JoltC_BodyCreationSettings_t * self,
  bool mAllowDynamicOrKinematic
);

bool JoltC_BodyCreationSettings_mIsSensor_Get(
  JoltC_BodyCreationSettings_t * self
);

void JoltC_BodyCreationSettings_mIsSensor_Set(
  JoltC_BodyCreationSettings_t * self,
  bool mIsSensor
);

bool JoltC_BodyCreationSettings_mUseManifoldReduction_Get(
  JoltC_BodyCreationSettings_t * self
);

void JoltC_BodyCreationSettings_mUseManifoldReduction_Set(
  JoltC_BodyCreationSettings_t * self,
  bool mUseManifoldReduction
);

bool JoltC_BodyCreationSettings_mCollideKinematicVsNonDynamic_Get(
  JoltC_BodyCreationSettings_t * self
);

void JoltC_BodyCreationSettings_mCollideKinematicVsNonDynamic_Set(
  JoltC_BodyCreationSettings_t * self,
  bool mCollideKinematicVsNonDynamic
);

bool JoltC_BodyCreationSettings_mApplyGyroscopicForce_Get(
  JoltC_BodyCreationSettings_t * self
);

void JoltC_BodyCreationSettings_mApplyGyroscopicForce_Set(
  JoltC_BodyCreationSettings_t * self,
  bool mApplyGyroscopicForce
);

JoltC_EMotionQuality JoltC_BodyCreationSettings_mMotionQuality_Get(
  JoltC_BodyCreationSettings_t * self
);

void JoltC_BodyCreationSettings_mMotionQuality_Set(
  JoltC_BodyCreationSettings_t * self,
  JoltC_EMotionQuality mMotionQuality
);

bool JoltC_BodyCreationSettings_mEnhancedInternalEdgeRemoval_Get(
  JoltC_BodyCreationSettings_t * self
);

void JoltC_BodyCreationSettings_mEnhancedInternalEdgeRemoval_Set(
  JoltC_BodyCreationSettings_t * self,
  bool mEnhancedInternalEdgeRemoval
);

bool JoltC_BodyCreationSettings_mAllowSleeping_Get(
  JoltC_BodyCreationSettings_t * self
);

void JoltC_BodyCreationSettings_mAllowSleeping_Set(
  JoltC_BodyCreationSettings_t * self,
  bool mAllowSleeping
);

float JoltC_BodyCreationSettings_mFriction_Get(
  JoltC_BodyCreationSettings_t * self
);

void JoltC_BodyCreationSettings_mFriction_Set(
  JoltC_BodyCreationSettings_t * self,
  float mFriction
);

float JoltC_BodyCreationSettings_mRestitution_Get(
  JoltC_BodyCreationSettings_t * self
);

void JoltC_BodyCreationSettings_mRestitution_Set(
  JoltC_BodyCreationSettings_t * self,
  float mRestitution
);

float JoltC_BodyCreationSettings_mLinearDamping_Get(
  JoltC_BodyCreationSettings_t * self
);

void JoltC_BodyCreationSettings_mLinearDamping_Set(
  JoltC_BodyCreationSettings_t * self,
  float mLinearDamping
);

float JoltC_BodyCreationSettings_mAngularDamping_Get(
  JoltC_BodyCreationSettings_t * self
);

void JoltC_BodyCreationSettings_mAngularDamping_Set(
  JoltC_BodyCreationSettings_t * self,
  float mAngularDamping
);

float JoltC_BodyCreationSettings_mMaxLinearVelocity_Get(
  JoltC_BodyCreationSettings_t * self
);

void JoltC_BodyCreationSettings_mMaxLinearVelocity_Set(
  JoltC_BodyCreationSettings_t * self,
  float mMaxLinearVelocity
);

float JoltC_BodyCreationSettings_mMaxAngularVelocity_Get(
  JoltC_BodyCreationSettings_t * self
);

void JoltC_BodyCreationSettings_mMaxAngularVelocity_Set(
  JoltC_BodyCreationSettings_t * self,
  float mMaxAngularVelocity
);

float JoltC_BodyCreationSettings_mGravityFactor_Get(
  JoltC_BodyCreationSettings_t * self
);

void JoltC_BodyCreationSettings_mGravityFactor_Set(
  JoltC_BodyCreationSettings_t * self,
  float mGravityFactor
);

unsigned long JoltC_BodyCreationSettings_mNumVelocityStepsOverride_Get(
  JoltC_BodyCreationSettings_t * self
);

void JoltC_BodyCreationSettings_mNumVelocityStepsOverride_Set(
  JoltC_BodyCreationSettings_t * self,
  unsigned long mNumVelocityStepsOverride
);

unsigned long JoltC_BodyCreationSettings_mNumPositionStepsOverride_Get(
  JoltC_BodyCreationSettings_t * self
);

void JoltC_BodyCreationSettings_mNumPositionStepsOverride_Set(
  JoltC_BodyCreationSettings_t * self,
  unsigned long mNumPositionStepsOverride
);

JoltC_EOverrideMassProperties JoltC_BodyCreationSettings_mOverrideMassProperties_Get(
  JoltC_BodyCreationSettings_t * self
);

void JoltC_BodyCreationSettings_mOverrideMassProperties_Set(
  JoltC_BodyCreationSettings_t * self,
  JoltC_EOverrideMassProperties mOverrideMassProperties
);

float JoltC_BodyCreationSettings_mInertiaMultiplier_Get(
  JoltC_BodyCreationSettings_t * self
);

void JoltC_BodyCreationSettings_mInertiaMultiplier_Set(
  JoltC_BodyCreationSettings_t * self,
  float mInertiaMultiplier
);

JoltC_MassProperties_t * JoltC_BodyCreationSettings_mMassPropertiesOverride_Get(
  JoltC_BodyCreationSettings_t * self
);

void JoltC_BodyCreationSettings_mMassPropertiesOverride_Set(
  JoltC_BodyCreationSettings_t * self,
  JoltC_MassProperties_t * mMassPropertiesOverride
);

//endregion


#ifdef __cplusplus
}
#endif
