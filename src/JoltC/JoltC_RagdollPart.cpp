#include "JoltC/JoltC_RagdollPart.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region destructor

void JoltC_RagdollPart_destroy(
  JoltC_RagdollPart_t * self
){
  if (self == NULL) return;
  delete static_cast<RagdollPart *>(self->obj);
  free(self);
}

//endregion
//region functions

JoltC_ShapeSettings_t * JoltC_RagdollPart_GetShapeSettings(
  JoltC_RagdollPart_t * self
) {
  RagdollPart * selfCpp = static_cast<RagdollPart *>(self->obj);
  const ShapeSettings * resultPtr = selfCpp->GetShapeSettings();
  JoltC_ShapeSettings_t * result = new JoltC_ShapeSettings_t();
  result->obj = const_cast<void *>(reinterpret_cast<const void *>(resultPtr));
  return result;
}

void JoltC_RagdollPart_SetShapeSettings(
  JoltC_RagdollPart_t * self,
  JoltC_ShapeSettings_t * inShape
) {
  RagdollPart * selfCpp = static_cast<RagdollPart *>(self->obj);
  const ShapeSettings * inShapeCpp = static_cast<const ShapeSettings *>(inShape->obj);
  selfCpp->SetShapeSettings(
    inShapeCpp
  );
}

JoltC_Shape_ShapeResult_t * JoltC_RagdollPart_ConvertShapeSettings(
  JoltC_RagdollPart_t * self
) {
  RagdollPart * selfCpp = static_cast<RagdollPart *>(self->obj);
  Shape::ShapeResult * resultPtr = new Shape::ShapeResult();
  *resultPtr = selfCpp->ConvertShapeSettings();
  JoltC_Shape_ShapeResult_t * result = new JoltC_Shape_ShapeResult_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

JoltC_Shape_t * JoltC_RagdollPart_GetShape(
  JoltC_RagdollPart_t * self
) {
  RagdollPart * selfCpp = static_cast<RagdollPart *>(self->obj);
  const Shape * resultPtr = selfCpp->GetShape();
  JoltC_Shape_t * result = new JoltC_Shape_t();
  result->obj = const_cast<void *>(reinterpret_cast<const void *>(resultPtr));
  return result;
}

void JoltC_RagdollPart_SetShape(
  JoltC_RagdollPart_t * self,
  JoltC_Shape_t * inShape
) {
  RagdollPart * selfCpp = static_cast<RagdollPart *>(self->obj);
  const Shape * inShapeCpp = static_cast<const Shape *>(inShape->obj);
  selfCpp->SetShape(
    inShapeCpp
  );
}

bool JoltC_RagdollPart_HasMassProperties(
  JoltC_RagdollPart_t * self
) {
  RagdollPart * selfCpp = static_cast<RagdollPart *>(self->obj);
  return selfCpp->HasMassProperties();
}

JoltC_MassProperties_t * JoltC_RagdollPart_GetMassProperties(
  JoltC_RagdollPart_t * self
) {
  RagdollPart * selfCpp = static_cast<RagdollPart *>(self->obj);
  MassProperties * resultPtr = new MassProperties();
  *resultPtr = selfCpp->GetMassProperties();
  JoltC_MassProperties_t * result = new JoltC_MassProperties_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

//endregion

//region properties

JoltC_TwoBodyConstraintSettings_t * JoltC_RagdollPart_mToParent_Get(
  JoltC_RagdollPart_t * self
) {
  RagdollPart * selfCpp = static_cast<RagdollPart *>(self->obj);
  const TwoBodyConstraintSettings * resultPtr = selfCpp->mToParent;
  JoltC_TwoBodyConstraintSettings_t * result = new JoltC_TwoBodyConstraintSettings_t();
  result->obj = const_cast<void *>(reinterpret_cast<const void *>(resultPtr));
  return result;
}

void JoltC_RagdollPart_mToParent_Set(
  JoltC_RagdollPart_t * self,
  JoltC_TwoBodyConstraintSettings_t * mToParent
) {
  RagdollPart * selfCpp = static_cast<RagdollPart *>(self->obj);
  selfCpp->mToParent = static_cast<TwoBodyConstraintSettings *>(mToParent->obj);
}

JoltC_RVec3_t * JoltC_RagdollPart_mPosition_Get(
  JoltC_RagdollPart_t * self
) {
  RagdollPart * selfCpp = static_cast<RagdollPart *>(self->obj);
  RVec3 * resultPtr = new RVec3();
  *resultPtr = selfCpp->mPosition;
  JoltC_RVec3_t * result = new JoltC_RVec3_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

void JoltC_RagdollPart_mPosition_Set(
  JoltC_RagdollPart_t * self,
  JoltC_RVec3_t * mPosition
) {
  RagdollPart * selfCpp = static_cast<RagdollPart *>(self->obj);
  selfCpp->mPosition = *static_cast<RVec3 *>(mPosition->obj);
}

JoltC_Quat_t * JoltC_RagdollPart_mRotation_Get(
  JoltC_RagdollPart_t * self
) {
  RagdollPart * selfCpp = static_cast<RagdollPart *>(self->obj);
  Quat * resultPtr = new Quat();
  *resultPtr = selfCpp->mRotation;
  JoltC_Quat_t * result = new JoltC_Quat_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

void JoltC_RagdollPart_mRotation_Set(
  JoltC_RagdollPart_t * self,
  JoltC_Quat_t * mRotation
) {
  RagdollPart * selfCpp = static_cast<RagdollPart *>(self->obj);
  selfCpp->mRotation = *static_cast<Quat *>(mRotation->obj);
}

JoltC_Vec3_t * JoltC_RagdollPart_mLinearVelocity_Get(
  JoltC_RagdollPart_t * self
) {
  RagdollPart * selfCpp = static_cast<RagdollPart *>(self->obj);
  Vec3 * resultPtr = new Vec3();
  *resultPtr = selfCpp->mLinearVelocity;
  JoltC_Vec3_t * result = new JoltC_Vec3_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

void JoltC_RagdollPart_mLinearVelocity_Set(
  JoltC_RagdollPart_t * self,
  JoltC_Vec3_t * mLinearVelocity
) {
  RagdollPart * selfCpp = static_cast<RagdollPart *>(self->obj);
  selfCpp->mLinearVelocity = *static_cast<Vec3 *>(mLinearVelocity->obj);
}

JoltC_Vec3_t * JoltC_RagdollPart_mAngularVelocity_Get(
  JoltC_RagdollPart_t * self
) {
  RagdollPart * selfCpp = static_cast<RagdollPart *>(self->obj);
  Vec3 * resultPtr = new Vec3();
  *resultPtr = selfCpp->mAngularVelocity;
  JoltC_Vec3_t * result = new JoltC_Vec3_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

void JoltC_RagdollPart_mAngularVelocity_Set(
  JoltC_RagdollPart_t * self,
  JoltC_Vec3_t * mAngularVelocity
) {
  RagdollPart * selfCpp = static_cast<RagdollPart *>(self->obj);
  selfCpp->mAngularVelocity = *static_cast<Vec3 *>(mAngularVelocity->obj);
}

unsigned long long int JoltC_RagdollPart_mUserData_Get(
  JoltC_RagdollPart_t * self
) {
  RagdollPart * selfCpp = static_cast<RagdollPart *>(self->obj);
  return selfCpp->mUserData;
}

void JoltC_RagdollPart_mUserData_Set(
  JoltC_RagdollPart_t * self,
  unsigned long long int mUserData
) {
  RagdollPart * selfCpp = static_cast<RagdollPart *>(self->obj);
  selfCpp->mUserData = mUserData;
}

unsigned long JoltC_RagdollPart_mObjectLayer_Get(
  JoltC_RagdollPart_t * self
) {
  RagdollPart * selfCpp = static_cast<RagdollPart *>(self->obj);
  return selfCpp->mObjectLayer;
}

void JoltC_RagdollPart_mObjectLayer_Set(
  JoltC_RagdollPart_t * self,
  unsigned long mObjectLayer
) {
  RagdollPart * selfCpp = static_cast<RagdollPart *>(self->obj);
  selfCpp->mObjectLayer = mObjectLayer;
}

JoltC_CollisionGroup_t * JoltC_RagdollPart_mCollisionGroup_Get(
  JoltC_RagdollPart_t * self
) {
  RagdollPart * selfCpp = static_cast<RagdollPart *>(self->obj);
  CollisionGroup * resultPtr = new CollisionGroup();
  *resultPtr = selfCpp->mCollisionGroup;
  JoltC_CollisionGroup_t * result = new JoltC_CollisionGroup_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

void JoltC_RagdollPart_mCollisionGroup_Set(
  JoltC_RagdollPart_t * self,
  JoltC_CollisionGroup_t * mCollisionGroup
) {
  RagdollPart * selfCpp = static_cast<RagdollPart *>(self->obj);
  selfCpp->mCollisionGroup = *static_cast<CollisionGroup *>(mCollisionGroup->obj);
}

JoltC_EMotionType JoltC_RagdollPart_mMotionType_Get(
  JoltC_RagdollPart_t * self
) {
  RagdollPart * selfCpp = static_cast<RagdollPart *>(self->obj);
  EMotionType result = selfCpp->mMotionType;
  return static_cast<JoltC_EMotionType>(static_cast<int>(result));
}

void JoltC_RagdollPart_mMotionType_Set(
  JoltC_RagdollPart_t * self,
  JoltC_EMotionType mMotionType
) {
  RagdollPart * selfCpp = static_cast<RagdollPart *>(self->obj);
  selfCpp->mMotionType = static_cast<EMotionType>(static_cast<int>(mMotionType));
}

JoltC_EAllowedDOFs JoltC_RagdollPart_mAllowedDOFs_Get(
  JoltC_RagdollPart_t * self
) {
  RagdollPart * selfCpp = static_cast<RagdollPart *>(self->obj);
  EAllowedDOFs result = selfCpp->mAllowedDOFs;
  return static_cast<JoltC_EAllowedDOFs>(static_cast<int>(result));
}

void JoltC_RagdollPart_mAllowedDOFs_Set(
  JoltC_RagdollPart_t * self,
  JoltC_EAllowedDOFs mAllowedDOFs
) {
  RagdollPart * selfCpp = static_cast<RagdollPart *>(self->obj);
  selfCpp->mAllowedDOFs = static_cast<EAllowedDOFs>(static_cast<int>(mAllowedDOFs));
}

bool JoltC_RagdollPart_mAllowDynamicOrKinematic_Get(
  JoltC_RagdollPart_t * self
) {
  RagdollPart * selfCpp = static_cast<RagdollPart *>(self->obj);
  return selfCpp->mAllowDynamicOrKinematic;
}

void JoltC_RagdollPart_mAllowDynamicOrKinematic_Set(
  JoltC_RagdollPart_t * self,
  bool mAllowDynamicOrKinematic
) {
  RagdollPart * selfCpp = static_cast<RagdollPart *>(self->obj);
  selfCpp->mAllowDynamicOrKinematic = mAllowDynamicOrKinematic;
}

bool JoltC_RagdollPart_mIsSensor_Get(
  JoltC_RagdollPart_t * self
) {
  RagdollPart * selfCpp = static_cast<RagdollPart *>(self->obj);
  return selfCpp->mIsSensor;
}

void JoltC_RagdollPart_mIsSensor_Set(
  JoltC_RagdollPart_t * self,
  bool mIsSensor
) {
  RagdollPart * selfCpp = static_cast<RagdollPart *>(self->obj);
  selfCpp->mIsSensor = mIsSensor;
}

bool JoltC_RagdollPart_mUseManifoldReduction_Get(
  JoltC_RagdollPart_t * self
) {
  RagdollPart * selfCpp = static_cast<RagdollPart *>(self->obj);
  return selfCpp->mUseManifoldReduction;
}

void JoltC_RagdollPart_mUseManifoldReduction_Set(
  JoltC_RagdollPart_t * self,
  bool mUseManifoldReduction
) {
  RagdollPart * selfCpp = static_cast<RagdollPart *>(self->obj);
  selfCpp->mUseManifoldReduction = mUseManifoldReduction;
}

bool JoltC_RagdollPart_mCollideKinematicVsNonDynamic_Get(
  JoltC_RagdollPart_t * self
) {
  RagdollPart * selfCpp = static_cast<RagdollPart *>(self->obj);
  return selfCpp->mCollideKinematicVsNonDynamic;
}

void JoltC_RagdollPart_mCollideKinematicVsNonDynamic_Set(
  JoltC_RagdollPart_t * self,
  bool mCollideKinematicVsNonDynamic
) {
  RagdollPart * selfCpp = static_cast<RagdollPart *>(self->obj);
  selfCpp->mCollideKinematicVsNonDynamic = mCollideKinematicVsNonDynamic;
}

bool JoltC_RagdollPart_mApplyGyroscopicForce_Get(
  JoltC_RagdollPart_t * self
) {
  RagdollPart * selfCpp = static_cast<RagdollPart *>(self->obj);
  return selfCpp->mApplyGyroscopicForce;
}

void JoltC_RagdollPart_mApplyGyroscopicForce_Set(
  JoltC_RagdollPart_t * self,
  bool mApplyGyroscopicForce
) {
  RagdollPart * selfCpp = static_cast<RagdollPart *>(self->obj);
  selfCpp->mApplyGyroscopicForce = mApplyGyroscopicForce;
}

JoltC_EMotionQuality JoltC_RagdollPart_mMotionQuality_Get(
  JoltC_RagdollPart_t * self
) {
  RagdollPart * selfCpp = static_cast<RagdollPart *>(self->obj);
  EMotionQuality result = selfCpp->mMotionQuality;
  return static_cast<JoltC_EMotionQuality>(static_cast<int>(result));
}

void JoltC_RagdollPart_mMotionQuality_Set(
  JoltC_RagdollPart_t * self,
  JoltC_EMotionQuality mMotionQuality
) {
  RagdollPart * selfCpp = static_cast<RagdollPart *>(self->obj);
  selfCpp->mMotionQuality = static_cast<EMotionQuality>(static_cast<int>(mMotionQuality));
}

bool JoltC_RagdollPart_mEnhancedInternalEdgeRemoval_Get(
  JoltC_RagdollPart_t * self
) {
  RagdollPart * selfCpp = static_cast<RagdollPart *>(self->obj);
  return selfCpp->mEnhancedInternalEdgeRemoval;
}

void JoltC_RagdollPart_mEnhancedInternalEdgeRemoval_Set(
  JoltC_RagdollPart_t * self,
  bool mEnhancedInternalEdgeRemoval
) {
  RagdollPart * selfCpp = static_cast<RagdollPart *>(self->obj);
  selfCpp->mEnhancedInternalEdgeRemoval = mEnhancedInternalEdgeRemoval;
}

bool JoltC_RagdollPart_mAllowSleeping_Get(
  JoltC_RagdollPart_t * self
) {
  RagdollPart * selfCpp = static_cast<RagdollPart *>(self->obj);
  return selfCpp->mAllowSleeping;
}

void JoltC_RagdollPart_mAllowSleeping_Set(
  JoltC_RagdollPart_t * self,
  bool mAllowSleeping
) {
  RagdollPart * selfCpp = static_cast<RagdollPart *>(self->obj);
  selfCpp->mAllowSleeping = mAllowSleeping;
}

float JoltC_RagdollPart_mFriction_Get(
  JoltC_RagdollPart_t * self
) {
  RagdollPart * selfCpp = static_cast<RagdollPart *>(self->obj);
  return selfCpp->mFriction;
}

void JoltC_RagdollPart_mFriction_Set(
  JoltC_RagdollPart_t * self,
  float mFriction
) {
  RagdollPart * selfCpp = static_cast<RagdollPart *>(self->obj);
  selfCpp->mFriction = mFriction;
}

float JoltC_RagdollPart_mRestitution_Get(
  JoltC_RagdollPart_t * self
) {
  RagdollPart * selfCpp = static_cast<RagdollPart *>(self->obj);
  return selfCpp->mRestitution;
}

void JoltC_RagdollPart_mRestitution_Set(
  JoltC_RagdollPart_t * self,
  float mRestitution
) {
  RagdollPart * selfCpp = static_cast<RagdollPart *>(self->obj);
  selfCpp->mRestitution = mRestitution;
}

float JoltC_RagdollPart_mLinearDamping_Get(
  JoltC_RagdollPart_t * self
) {
  RagdollPart * selfCpp = static_cast<RagdollPart *>(self->obj);
  return selfCpp->mLinearDamping;
}

void JoltC_RagdollPart_mLinearDamping_Set(
  JoltC_RagdollPart_t * self,
  float mLinearDamping
) {
  RagdollPart * selfCpp = static_cast<RagdollPart *>(self->obj);
  selfCpp->mLinearDamping = mLinearDamping;
}

float JoltC_RagdollPart_mAngularDamping_Get(
  JoltC_RagdollPart_t * self
) {
  RagdollPart * selfCpp = static_cast<RagdollPart *>(self->obj);
  return selfCpp->mAngularDamping;
}

void JoltC_RagdollPart_mAngularDamping_Set(
  JoltC_RagdollPart_t * self,
  float mAngularDamping
) {
  RagdollPart * selfCpp = static_cast<RagdollPart *>(self->obj);
  selfCpp->mAngularDamping = mAngularDamping;
}

float JoltC_RagdollPart_mMaxLinearVelocity_Get(
  JoltC_RagdollPart_t * self
) {
  RagdollPart * selfCpp = static_cast<RagdollPart *>(self->obj);
  return selfCpp->mMaxLinearVelocity;
}

void JoltC_RagdollPart_mMaxLinearVelocity_Set(
  JoltC_RagdollPart_t * self,
  float mMaxLinearVelocity
) {
  RagdollPart * selfCpp = static_cast<RagdollPart *>(self->obj);
  selfCpp->mMaxLinearVelocity = mMaxLinearVelocity;
}

float JoltC_RagdollPart_mMaxAngularVelocity_Get(
  JoltC_RagdollPart_t * self
) {
  RagdollPart * selfCpp = static_cast<RagdollPart *>(self->obj);
  return selfCpp->mMaxAngularVelocity;
}

void JoltC_RagdollPart_mMaxAngularVelocity_Set(
  JoltC_RagdollPart_t * self,
  float mMaxAngularVelocity
) {
  RagdollPart * selfCpp = static_cast<RagdollPart *>(self->obj);
  selfCpp->mMaxAngularVelocity = mMaxAngularVelocity;
}

float JoltC_RagdollPart_mGravityFactor_Get(
  JoltC_RagdollPart_t * self
) {
  RagdollPart * selfCpp = static_cast<RagdollPart *>(self->obj);
  return selfCpp->mGravityFactor;
}

void JoltC_RagdollPart_mGravityFactor_Set(
  JoltC_RagdollPart_t * self,
  float mGravityFactor
) {
  RagdollPart * selfCpp = static_cast<RagdollPart *>(self->obj);
  selfCpp->mGravityFactor = mGravityFactor;
}

unsigned long JoltC_RagdollPart_mNumVelocityStepsOverride_Get(
  JoltC_RagdollPart_t * self
) {
  RagdollPart * selfCpp = static_cast<RagdollPart *>(self->obj);
  return selfCpp->mNumVelocityStepsOverride;
}

void JoltC_RagdollPart_mNumVelocityStepsOverride_Set(
  JoltC_RagdollPart_t * self,
  unsigned long mNumVelocityStepsOverride
) {
  RagdollPart * selfCpp = static_cast<RagdollPart *>(self->obj);
  selfCpp->mNumVelocityStepsOverride = mNumVelocityStepsOverride;
}

unsigned long JoltC_RagdollPart_mNumPositionStepsOverride_Get(
  JoltC_RagdollPart_t * self
) {
  RagdollPart * selfCpp = static_cast<RagdollPart *>(self->obj);
  return selfCpp->mNumPositionStepsOverride;
}

void JoltC_RagdollPart_mNumPositionStepsOverride_Set(
  JoltC_RagdollPart_t * self,
  unsigned long mNumPositionStepsOverride
) {
  RagdollPart * selfCpp = static_cast<RagdollPart *>(self->obj);
  selfCpp->mNumPositionStepsOverride = mNumPositionStepsOverride;
}

JoltC_EOverrideMassProperties JoltC_RagdollPart_mOverrideMassProperties_Get(
  JoltC_RagdollPart_t * self
) {
  RagdollPart * selfCpp = static_cast<RagdollPart *>(self->obj);
  EOverrideMassProperties result = selfCpp->mOverrideMassProperties;
  return static_cast<JoltC_EOverrideMassProperties>(static_cast<int>(result));
}

void JoltC_RagdollPart_mOverrideMassProperties_Set(
  JoltC_RagdollPart_t * self,
  JoltC_EOverrideMassProperties mOverrideMassProperties
) {
  RagdollPart * selfCpp = static_cast<RagdollPart *>(self->obj);
  selfCpp->mOverrideMassProperties = static_cast<EOverrideMassProperties>(static_cast<int>(mOverrideMassProperties));
}

float JoltC_RagdollPart_mInertiaMultiplier_Get(
  JoltC_RagdollPart_t * self
) {
  RagdollPart * selfCpp = static_cast<RagdollPart *>(self->obj);
  return selfCpp->mInertiaMultiplier;
}

void JoltC_RagdollPart_mInertiaMultiplier_Set(
  JoltC_RagdollPart_t * self,
  float mInertiaMultiplier
) {
  RagdollPart * selfCpp = static_cast<RagdollPart *>(self->obj);
  selfCpp->mInertiaMultiplier = mInertiaMultiplier;
}

JoltC_MassProperties_t * JoltC_RagdollPart_mMassPropertiesOverride_Get(
  JoltC_RagdollPart_t * self
) {
  RagdollPart * selfCpp = static_cast<RagdollPart *>(self->obj);
  MassProperties * resultPtr = new MassProperties();
  *resultPtr = selfCpp->mMassPropertiesOverride;
  JoltC_MassProperties_t * result = new JoltC_MassProperties_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

void JoltC_RagdollPart_mMassPropertiesOverride_Set(
  JoltC_RagdollPart_t * self,
  JoltC_MassProperties_t * mMassPropertiesOverride
) {
  RagdollPart * selfCpp = static_cast<RagdollPart *>(self->obj);
  selfCpp->mMassPropertiesOverride = *static_cast<MassProperties *>(mMassPropertiesOverride->obj);
}

//endregion


#ifdef __cplusplus
}
#endif
