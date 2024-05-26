#include "JoltC/JoltC_RagdollPart.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region functions

const JoltC_ShapeSettings_t * JoltC_RagdollPart_GetShapeSettings(
  JoltC_RagdollPart_t * self
) {
  RagdollPart * selfCpp = static_cast<RagdollPart *>(self->obj);
  const ShapeSettings * result = selfCpp->GetShapeSettings();
  return reinterpret_cast<const JoltC_ShapeSettings_t *>(result);
};

void JoltC_RagdollPart_SetShapeSettings(
  JoltC_RagdollPart_t * self,
  const JoltC_ShapeSettings_t * inShape
) {
  RagdollPart * selfCpp = static_cast<RagdollPart *>(self->obj);
  
  selfCpp->SetShapeSettings(
  reinterpret_cast<ShapeSettings *>(inShape->obj)
  );
};

JoltC_Shape_ShapeResult_t * JoltC_RagdollPart_ConvertShapeSettings(
  JoltC_RagdollPart_t * self
) {
  RagdollPart * selfCpp = static_cast<RagdollPart *>(self->obj);
  Shape::ShapeResult resultValue = selfCpp->ConvertShapeSettings();
  Shape::ShapeResult* result = new Shape::ShapeResult(resultValue);
  return reinterpret_cast<JoltC_Shape_ShapeResult_t *>(result);
};

const JoltC_Shape_t * JoltC_RagdollPart_GetShape(
  JoltC_RagdollPart_t * self
) {
  RagdollPart * selfCpp = static_cast<RagdollPart *>(self->obj);
  const Shape * result = selfCpp->GetShape();
  return reinterpret_cast<const JoltC_Shape_t *>(result);
};

void JoltC_RagdollPart_SetShape(
  JoltC_RagdollPart_t * self,
  const JoltC_Shape_t * inShape
) {
  RagdollPart * selfCpp = static_cast<RagdollPart *>(self->obj);
  
  selfCpp->SetShape(
  reinterpret_cast<Shape *>(inShape->obj)
  );
};

bool JoltC_RagdollPart_HasMassProperties(
  JoltC_RagdollPart_t * self
) {
  RagdollPart * selfCpp = static_cast<RagdollPart *>(self->obj);
  bool result = selfCpp->HasMassProperties();
  return result;
};

JoltC_MassProperties_t * JoltC_RagdollPart_GetMassProperties(
  JoltC_RagdollPart_t * self
) {
  RagdollPart * selfCpp = static_cast<RagdollPart *>(self->obj);
  MassProperties resultValue = selfCpp->GetMassProperties();
  MassProperties* result = new MassProperties(resultValue);
  return reinterpret_cast<JoltC_MassProperties_t *>(result);
};

//endregion

//region properties

JoltC_TwoBodyConstraintSettings_t * JoltC_RagdollPart_mToParent_Get(
  JoltC_RagdollPart_t * self
) {
  RagdollPart * selfCpp = static_cast<RagdollPart *>(self->obj);
  TwoBodyConstraintSettings * result = selfCpp->mToParent;
  return reinterpret_cast<JoltC_TwoBodyConstraintSettings_t *>(result);
};

void JoltC_RagdollPart_mToParent_Set(
  JoltC_RagdollPart_t * self,
  JoltC_TwoBodyConstraintSettings_t * mToParent
) {
  RagdollPart * selfCpp = static_cast<RagdollPart *>(self->obj);
  selfCpp->mToParent = reinterpret_cast<TwoBodyConstraintSettings *>(mToParent->obj);
};

JoltC_RVec3_t * JoltC_RagdollPart_mPosition_Get(
  JoltC_RagdollPart_t * self
) {
  RagdollPart * selfCpp = static_cast<RagdollPart *>(self->obj);
  RVec3 resultValue = selfCpp->mPosition;
  RVec3* result = new RVec3(resultValue);
  return reinterpret_cast<JoltC_RVec3_t *>(result);
};

void JoltC_RagdollPart_mPosition_Set(
  JoltC_RagdollPart_t * self,
  JoltC_RVec3_t * mPosition
) {
  RagdollPart * selfCpp = static_cast<RagdollPart *>(self->obj);
  selfCpp->mPosition = *reinterpret_cast<RVec3 *>(mPosition->obj);
};

JoltC_Quat_t * JoltC_RagdollPart_mRotation_Get(
  JoltC_RagdollPart_t * self
) {
  RagdollPart * selfCpp = static_cast<RagdollPart *>(self->obj);
  Quat resultValue = selfCpp->mRotation;
  Quat* result = new Quat(resultValue);
  return reinterpret_cast<JoltC_Quat_t *>(result);
};

void JoltC_RagdollPart_mRotation_Set(
  JoltC_RagdollPart_t * self,
  JoltC_Quat_t * mRotation
) {
  RagdollPart * selfCpp = static_cast<RagdollPart *>(self->obj);
  selfCpp->mRotation = *reinterpret_cast<Quat *>(mRotation->obj);
};

JoltC_Vec3_t * JoltC_RagdollPart_mLinearVelocity_Get(
  JoltC_RagdollPart_t * self
) {
  RagdollPart * selfCpp = static_cast<RagdollPart *>(self->obj);
  Vec3 resultValue = selfCpp->mLinearVelocity;
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JoltC_Vec3_t *>(result);
};

void JoltC_RagdollPart_mLinearVelocity_Set(
  JoltC_RagdollPart_t * self,
  JoltC_Vec3_t * mLinearVelocity
) {
  RagdollPart * selfCpp = static_cast<RagdollPart *>(self->obj);
  selfCpp->mLinearVelocity = *reinterpret_cast<Vec3 *>(mLinearVelocity->obj);
};

JoltC_Vec3_t * JoltC_RagdollPart_mAngularVelocity_Get(
  JoltC_RagdollPart_t * self
) {
  RagdollPart * selfCpp = static_cast<RagdollPart *>(self->obj);
  Vec3 resultValue = selfCpp->mAngularVelocity;
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JoltC_Vec3_t *>(result);
};

void JoltC_RagdollPart_mAngularVelocity_Set(
  JoltC_RagdollPart_t * self,
  JoltC_Vec3_t * mAngularVelocity
) {
  RagdollPart * selfCpp = static_cast<RagdollPart *>(self->obj);
  selfCpp->mAngularVelocity = *reinterpret_cast<Vec3 *>(mAngularVelocity->obj);
};

unsigned long long int JoltC_RagdollPart_mUserData_Get(
  JoltC_RagdollPart_t * self
) {
  RagdollPart * selfCpp = static_cast<RagdollPart *>(self->obj);
  unsigned long long int result = selfCpp->mUserData;
  return result;
};

void JoltC_RagdollPart_mUserData_Set(
  JoltC_RagdollPart_t * self,
  unsigned long long int mUserData
) {
  RagdollPart * selfCpp = static_cast<RagdollPart *>(self->obj);
  selfCpp->mUserData = mUserData;
};

unsigned long JoltC_RagdollPart_mObjectLayer_Get(
  JoltC_RagdollPart_t * self
) {
  RagdollPart * selfCpp = static_cast<RagdollPart *>(self->obj);
  unsigned long result = selfCpp->mObjectLayer;
  return result;
};

void JoltC_RagdollPart_mObjectLayer_Set(
  JoltC_RagdollPart_t * self,
  unsigned long mObjectLayer
) {
  RagdollPart * selfCpp = static_cast<RagdollPart *>(self->obj);
  selfCpp->mObjectLayer = mObjectLayer;
};

JoltC_CollisionGroup_t * JoltC_RagdollPart_mCollisionGroup_Get(
  JoltC_RagdollPart_t * self
) {
  RagdollPart * selfCpp = static_cast<RagdollPart *>(self->obj);
  CollisionGroup resultValue = selfCpp->mCollisionGroup;
  CollisionGroup* result = new CollisionGroup(resultValue);
  return reinterpret_cast<JoltC_CollisionGroup_t *>(result);
};

void JoltC_RagdollPart_mCollisionGroup_Set(
  JoltC_RagdollPart_t * self,
  JoltC_CollisionGroup_t * mCollisionGroup
) {
  RagdollPart * selfCpp = static_cast<RagdollPart *>(self->obj);
  selfCpp->mCollisionGroup = *reinterpret_cast<CollisionGroup *>(mCollisionGroup->obj);
};

JoltC_EMotionType JoltC_RagdollPart_mMotionType_Get(
  JoltC_RagdollPart_t * self
) {
  RagdollPart * selfCpp = static_cast<RagdollPart *>(self->obj);
  EMotionType result = selfCpp->mMotionType;
  return static_cast<JoltC_EMotionType>(static_cast<int>(result));
};

void JoltC_RagdollPart_mMotionType_Set(
  JoltC_RagdollPart_t * self,
  JoltC_EMotionType mMotionType
) {
  RagdollPart * selfCpp = static_cast<RagdollPart *>(self->obj);
  selfCpp->mMotionType = static_cast<EMotionType>(static_cast<int>(mMotionType));
};

JoltC_EAllowedDOFs JoltC_RagdollPart_mAllowedDOFs_Get(
  JoltC_RagdollPart_t * self
) {
  RagdollPart * selfCpp = static_cast<RagdollPart *>(self->obj);
  EAllowedDOFs result = selfCpp->mAllowedDOFs;
  return static_cast<JoltC_EAllowedDOFs>(static_cast<int>(result));
};

void JoltC_RagdollPart_mAllowedDOFs_Set(
  JoltC_RagdollPart_t * self,
  JoltC_EAllowedDOFs mAllowedDOFs
) {
  RagdollPart * selfCpp = static_cast<RagdollPart *>(self->obj);
  selfCpp->mAllowedDOFs = static_cast<EAllowedDOFs>(static_cast<int>(mAllowedDOFs));
};

bool JoltC_RagdollPart_mAllowDynamicOrKinematic_Get(
  JoltC_RagdollPart_t * self
) {
  RagdollPart * selfCpp = static_cast<RagdollPart *>(self->obj);
  bool result = selfCpp->mAllowDynamicOrKinematic;
  return result;
};

void JoltC_RagdollPart_mAllowDynamicOrKinematic_Set(
  JoltC_RagdollPart_t * self,
  bool mAllowDynamicOrKinematic
) {
  RagdollPart * selfCpp = static_cast<RagdollPart *>(self->obj);
  selfCpp->mAllowDynamicOrKinematic = mAllowDynamicOrKinematic;
};

bool JoltC_RagdollPart_mIsSensor_Get(
  JoltC_RagdollPart_t * self
) {
  RagdollPart * selfCpp = static_cast<RagdollPart *>(self->obj);
  bool result = selfCpp->mIsSensor;
  return result;
};

void JoltC_RagdollPart_mIsSensor_Set(
  JoltC_RagdollPart_t * self,
  bool mIsSensor
) {
  RagdollPart * selfCpp = static_cast<RagdollPart *>(self->obj);
  selfCpp->mIsSensor = mIsSensor;
};

bool JoltC_RagdollPart_mUseManifoldReduction_Get(
  JoltC_RagdollPart_t * self
) {
  RagdollPart * selfCpp = static_cast<RagdollPart *>(self->obj);
  bool result = selfCpp->mUseManifoldReduction;
  return result;
};

void JoltC_RagdollPart_mUseManifoldReduction_Set(
  JoltC_RagdollPart_t * self,
  bool mUseManifoldReduction
) {
  RagdollPart * selfCpp = static_cast<RagdollPart *>(self->obj);
  selfCpp->mUseManifoldReduction = mUseManifoldReduction;
};

bool JoltC_RagdollPart_mCollideKinematicVsNonDynamic_Get(
  JoltC_RagdollPart_t * self
) {
  RagdollPart * selfCpp = static_cast<RagdollPart *>(self->obj);
  bool result = selfCpp->mCollideKinematicVsNonDynamic;
  return result;
};

void JoltC_RagdollPart_mCollideKinematicVsNonDynamic_Set(
  JoltC_RagdollPart_t * self,
  bool mCollideKinematicVsNonDynamic
) {
  RagdollPart * selfCpp = static_cast<RagdollPart *>(self->obj);
  selfCpp->mCollideKinematicVsNonDynamic = mCollideKinematicVsNonDynamic;
};

bool JoltC_RagdollPart_mApplyGyroscopicForce_Get(
  JoltC_RagdollPart_t * self
) {
  RagdollPart * selfCpp = static_cast<RagdollPart *>(self->obj);
  bool result = selfCpp->mApplyGyroscopicForce;
  return result;
};

void JoltC_RagdollPart_mApplyGyroscopicForce_Set(
  JoltC_RagdollPart_t * self,
  bool mApplyGyroscopicForce
) {
  RagdollPart * selfCpp = static_cast<RagdollPart *>(self->obj);
  selfCpp->mApplyGyroscopicForce = mApplyGyroscopicForce;
};

JoltC_EMotionQuality JoltC_RagdollPart_mMotionQuality_Get(
  JoltC_RagdollPart_t * self
) {
  RagdollPart * selfCpp = static_cast<RagdollPart *>(self->obj);
  EMotionQuality result = selfCpp->mMotionQuality;
  return static_cast<JoltC_EMotionQuality>(static_cast<int>(result));
};

void JoltC_RagdollPart_mMotionQuality_Set(
  JoltC_RagdollPart_t * self,
  JoltC_EMotionQuality mMotionQuality
) {
  RagdollPart * selfCpp = static_cast<RagdollPart *>(self->obj);
  selfCpp->mMotionQuality = static_cast<EMotionQuality>(static_cast<int>(mMotionQuality));
};

bool JoltC_RagdollPart_mEnhancedInternalEdgeRemoval_Get(
  JoltC_RagdollPart_t * self
) {
  RagdollPart * selfCpp = static_cast<RagdollPart *>(self->obj);
  bool result = selfCpp->mEnhancedInternalEdgeRemoval;
  return result;
};

void JoltC_RagdollPart_mEnhancedInternalEdgeRemoval_Set(
  JoltC_RagdollPart_t * self,
  bool mEnhancedInternalEdgeRemoval
) {
  RagdollPart * selfCpp = static_cast<RagdollPart *>(self->obj);
  selfCpp->mEnhancedInternalEdgeRemoval = mEnhancedInternalEdgeRemoval;
};

bool JoltC_RagdollPart_mAllowSleeping_Get(
  JoltC_RagdollPart_t * self
) {
  RagdollPart * selfCpp = static_cast<RagdollPart *>(self->obj);
  bool result = selfCpp->mAllowSleeping;
  return result;
};

void JoltC_RagdollPart_mAllowSleeping_Set(
  JoltC_RagdollPart_t * self,
  bool mAllowSleeping
) {
  RagdollPart * selfCpp = static_cast<RagdollPart *>(self->obj);
  selfCpp->mAllowSleeping = mAllowSleeping;
};

float JoltC_RagdollPart_mFriction_Get(
  JoltC_RagdollPart_t * self
) {
  RagdollPart * selfCpp = static_cast<RagdollPart *>(self->obj);
  float result = selfCpp->mFriction;
  return result;
};

void JoltC_RagdollPart_mFriction_Set(
  JoltC_RagdollPart_t * self,
  float mFriction
) {
  RagdollPart * selfCpp = static_cast<RagdollPart *>(self->obj);
  selfCpp->mFriction = mFriction;
};

float JoltC_RagdollPart_mRestitution_Get(
  JoltC_RagdollPart_t * self
) {
  RagdollPart * selfCpp = static_cast<RagdollPart *>(self->obj);
  float result = selfCpp->mRestitution;
  return result;
};

void JoltC_RagdollPart_mRestitution_Set(
  JoltC_RagdollPart_t * self,
  float mRestitution
) {
  RagdollPart * selfCpp = static_cast<RagdollPart *>(self->obj);
  selfCpp->mRestitution = mRestitution;
};

float JoltC_RagdollPart_mLinearDamping_Get(
  JoltC_RagdollPart_t * self
) {
  RagdollPart * selfCpp = static_cast<RagdollPart *>(self->obj);
  float result = selfCpp->mLinearDamping;
  return result;
};

void JoltC_RagdollPart_mLinearDamping_Set(
  JoltC_RagdollPart_t * self,
  float mLinearDamping
) {
  RagdollPart * selfCpp = static_cast<RagdollPart *>(self->obj);
  selfCpp->mLinearDamping = mLinearDamping;
};

float JoltC_RagdollPart_mAngularDamping_Get(
  JoltC_RagdollPart_t * self
) {
  RagdollPart * selfCpp = static_cast<RagdollPart *>(self->obj);
  float result = selfCpp->mAngularDamping;
  return result;
};

void JoltC_RagdollPart_mAngularDamping_Set(
  JoltC_RagdollPart_t * self,
  float mAngularDamping
) {
  RagdollPart * selfCpp = static_cast<RagdollPart *>(self->obj);
  selfCpp->mAngularDamping = mAngularDamping;
};

float JoltC_RagdollPart_mMaxLinearVelocity_Get(
  JoltC_RagdollPart_t * self
) {
  RagdollPart * selfCpp = static_cast<RagdollPart *>(self->obj);
  float result = selfCpp->mMaxLinearVelocity;
  return result;
};

void JoltC_RagdollPart_mMaxLinearVelocity_Set(
  JoltC_RagdollPart_t * self,
  float mMaxLinearVelocity
) {
  RagdollPart * selfCpp = static_cast<RagdollPart *>(self->obj);
  selfCpp->mMaxLinearVelocity = mMaxLinearVelocity;
};

float JoltC_RagdollPart_mMaxAngularVelocity_Get(
  JoltC_RagdollPart_t * self
) {
  RagdollPart * selfCpp = static_cast<RagdollPart *>(self->obj);
  float result = selfCpp->mMaxAngularVelocity;
  return result;
};

void JoltC_RagdollPart_mMaxAngularVelocity_Set(
  JoltC_RagdollPart_t * self,
  float mMaxAngularVelocity
) {
  RagdollPart * selfCpp = static_cast<RagdollPart *>(self->obj);
  selfCpp->mMaxAngularVelocity = mMaxAngularVelocity;
};

float JoltC_RagdollPart_mGravityFactor_Get(
  JoltC_RagdollPart_t * self
) {
  RagdollPart * selfCpp = static_cast<RagdollPart *>(self->obj);
  float result = selfCpp->mGravityFactor;
  return result;
};

void JoltC_RagdollPart_mGravityFactor_Set(
  JoltC_RagdollPart_t * self,
  float mGravityFactor
) {
  RagdollPart * selfCpp = static_cast<RagdollPart *>(self->obj);
  selfCpp->mGravityFactor = mGravityFactor;
};

unsigned long JoltC_RagdollPart_mNumVelocityStepsOverride_Get(
  JoltC_RagdollPart_t * self
) {
  RagdollPart * selfCpp = static_cast<RagdollPart *>(self->obj);
  unsigned long result = selfCpp->mNumVelocityStepsOverride;
  return result;
};

void JoltC_RagdollPart_mNumVelocityStepsOverride_Set(
  JoltC_RagdollPart_t * self,
  unsigned long mNumVelocityStepsOverride
) {
  RagdollPart * selfCpp = static_cast<RagdollPart *>(self->obj);
  selfCpp->mNumVelocityStepsOverride = mNumVelocityStepsOverride;
};

unsigned long JoltC_RagdollPart_mNumPositionStepsOverride_Get(
  JoltC_RagdollPart_t * self
) {
  RagdollPart * selfCpp = static_cast<RagdollPart *>(self->obj);
  unsigned long result = selfCpp->mNumPositionStepsOverride;
  return result;
};

void JoltC_RagdollPart_mNumPositionStepsOverride_Set(
  JoltC_RagdollPart_t * self,
  unsigned long mNumPositionStepsOverride
) {
  RagdollPart * selfCpp = static_cast<RagdollPart *>(self->obj);
  selfCpp->mNumPositionStepsOverride = mNumPositionStepsOverride;
};

JoltC_EOverrideMassProperties JoltC_RagdollPart_mOverrideMassProperties_Get(
  JoltC_RagdollPart_t * self
) {
  RagdollPart * selfCpp = static_cast<RagdollPart *>(self->obj);
  EOverrideMassProperties result = selfCpp->mOverrideMassProperties;
  return static_cast<JoltC_EOverrideMassProperties>(static_cast<int>(result));
};

void JoltC_RagdollPart_mOverrideMassProperties_Set(
  JoltC_RagdollPart_t * self,
  JoltC_EOverrideMassProperties mOverrideMassProperties
) {
  RagdollPart * selfCpp = static_cast<RagdollPart *>(self->obj);
  selfCpp->mOverrideMassProperties = static_cast<EOverrideMassProperties>(static_cast<int>(mOverrideMassProperties));
};

float JoltC_RagdollPart_mInertiaMultiplier_Get(
  JoltC_RagdollPart_t * self
) {
  RagdollPart * selfCpp = static_cast<RagdollPart *>(self->obj);
  float result = selfCpp->mInertiaMultiplier;
  return result;
};

void JoltC_RagdollPart_mInertiaMultiplier_Set(
  JoltC_RagdollPart_t * self,
  float mInertiaMultiplier
) {
  RagdollPart * selfCpp = static_cast<RagdollPart *>(self->obj);
  selfCpp->mInertiaMultiplier = mInertiaMultiplier;
};

JoltC_MassProperties_t * JoltC_RagdollPart_mMassPropertiesOverride_Get(
  JoltC_RagdollPart_t * self
) {
  RagdollPart * selfCpp = static_cast<RagdollPart *>(self->obj);
  MassProperties resultValue = selfCpp->mMassPropertiesOverride;
  MassProperties* result = new MassProperties(resultValue);
  return reinterpret_cast<JoltC_MassProperties_t *>(result);
};

void JoltC_RagdollPart_mMassPropertiesOverride_Set(
  JoltC_RagdollPart_t * self,
  JoltC_MassProperties_t * mMassPropertiesOverride
) {
  RagdollPart * selfCpp = static_cast<RagdollPart *>(self->obj);
  selfCpp->mMassPropertiesOverride = *reinterpret_cast<MassProperties *>(mMassPropertiesOverride->obj);
};

//endregion

#ifdef __cplusplus
}
#endif

