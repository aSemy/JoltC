#include "JoltC/JPC_RagdollPart.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region functions

const JPC_ShapeSettings_t * JPC_RagdollPart_GetShapeSettings(
  JPC_RagdollPart_t * self
) {
  RagdollPart * selfCpp = static_cast<RagdollPart *>(self->obj);
  const ShapeSettings * result = selfCpp->GetShapeSettings();
  return reinterpret_cast<const JPC_ShapeSettings_t *>(result);
};

void JPC_RagdollPart_SetShapeSettings(
  JPC_RagdollPart_t * self,
  const JPC_ShapeSettings_t * inShape
) {
  RagdollPart * selfCpp = static_cast<RagdollPart *>(self->obj);
  
  selfCpp->SetShapeSettings(
  reinterpret_cast<ShapeSettings *>(inShape->obj)
  );
};

JPC_Shape_ShapeResult_t * JPC_RagdollPart_ConvertShapeSettings(
  JPC_RagdollPart_t * self
) {
  RagdollPart * selfCpp = static_cast<RagdollPart *>(self->obj);
  Shape::ShapeResult resultValue = selfCpp->ConvertShapeSettings();
  Shape::ShapeResult* result = new Shape::ShapeResult(resultValue);
  return reinterpret_cast<JPC_Shape_ShapeResult_t *>(result);
};

const JPC_Shape_t * JPC_RagdollPart_GetShape(
  JPC_RagdollPart_t * self
) {
  RagdollPart * selfCpp = static_cast<RagdollPart *>(self->obj);
  const Shape * result = selfCpp->GetShape();
  return reinterpret_cast<const JPC_Shape_t *>(result);
};

void JPC_RagdollPart_SetShape(
  JPC_RagdollPart_t * self,
  const JPC_Shape_t * inShape
) {
  RagdollPart * selfCpp = static_cast<RagdollPart *>(self->obj);
  
  selfCpp->SetShape(
  reinterpret_cast<Shape *>(inShape->obj)
  );
};

bool JPC_RagdollPart_HasMassProperties(
  JPC_RagdollPart_t * self
) {
  RagdollPart * selfCpp = static_cast<RagdollPart *>(self->obj);
  bool result = selfCpp->HasMassProperties();
  return result;
};

JPC_MassProperties_t * JPC_RagdollPart_GetMassProperties(
  JPC_RagdollPart_t * self
) {
  RagdollPart * selfCpp = static_cast<RagdollPart *>(self->obj);
  MassProperties resultValue = selfCpp->GetMassProperties();
  MassProperties* result = new MassProperties(resultValue);
  return reinterpret_cast<JPC_MassProperties_t *>(result);
};

//endregion functions

//region properties

JPC_TwoBodyConstraintSettings_t * JPC_RagdollPart_mToParent_Get(
  JPC_RagdollPart_t * self
) {
  RagdollPart * selfCpp = static_cast<RagdollPart *>(self->obj);
  TwoBodyConstraintSettings * result = selfCpp->mToParent;
  return reinterpret_cast<JPC_TwoBodyConstraintSettings_t *>(result);
};

void JPC_RagdollPart_mToParent_Set(
  JPC_RagdollPart_t * self,
  JPC_TwoBodyConstraintSettings_t * mToParent
) {
  RagdollPart * selfCpp = static_cast<RagdollPart *>(self->obj);
  selfCpp->mToParent = reinterpret_cast<TwoBodyConstraintSettings *>(mToParent->obj);
};

JPC_RVec3_t * JPC_RagdollPart_mPosition_Get(
  JPC_RagdollPart_t * self
) {
  RagdollPart * selfCpp = static_cast<RagdollPart *>(self->obj);
  RVec3 resultValue = selfCpp->mPosition;
  RVec3* result = new RVec3(resultValue);
  return reinterpret_cast<JPC_RVec3_t *>(result);
};

void JPC_RagdollPart_mPosition_Set(
  JPC_RagdollPart_t * self,
  JPC_RVec3_t * mPosition
) {
  RagdollPart * selfCpp = static_cast<RagdollPart *>(self->obj);
  selfCpp->mPosition = *reinterpret_cast<RVec3 *>(mPosition->obj);
};

JPC_Quat_t * JPC_RagdollPart_mRotation_Get(
  JPC_RagdollPart_t * self
) {
  RagdollPart * selfCpp = static_cast<RagdollPart *>(self->obj);
  Quat resultValue = selfCpp->mRotation;
  Quat* result = new Quat(resultValue);
  return reinterpret_cast<JPC_Quat_t *>(result);
};

void JPC_RagdollPart_mRotation_Set(
  JPC_RagdollPart_t * self,
  JPC_Quat_t * mRotation
) {
  RagdollPart * selfCpp = static_cast<RagdollPart *>(self->obj);
  selfCpp->mRotation = *reinterpret_cast<Quat *>(mRotation->obj);
};

JPC_Vec3_t * JPC_RagdollPart_mLinearVelocity_Get(
  JPC_RagdollPart_t * self
) {
  RagdollPart * selfCpp = static_cast<RagdollPart *>(self->obj);
  Vec3 resultValue = selfCpp->mLinearVelocity;
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JPC_Vec3_t *>(result);
};

void JPC_RagdollPart_mLinearVelocity_Set(
  JPC_RagdollPart_t * self,
  JPC_Vec3_t * mLinearVelocity
) {
  RagdollPart * selfCpp = static_cast<RagdollPart *>(self->obj);
  selfCpp->mLinearVelocity = *reinterpret_cast<Vec3 *>(mLinearVelocity->obj);
};

JPC_Vec3_t * JPC_RagdollPart_mAngularVelocity_Get(
  JPC_RagdollPart_t * self
) {
  RagdollPart * selfCpp = static_cast<RagdollPart *>(self->obj);
  Vec3 resultValue = selfCpp->mAngularVelocity;
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JPC_Vec3_t *>(result);
};

void JPC_RagdollPart_mAngularVelocity_Set(
  JPC_RagdollPart_t * self,
  JPC_Vec3_t * mAngularVelocity
) {
  RagdollPart * selfCpp = static_cast<RagdollPart *>(self->obj);
  selfCpp->mAngularVelocity = *reinterpret_cast<Vec3 *>(mAngularVelocity->obj);
};

unsigned long long int JPC_RagdollPart_mUserData_Get(
  JPC_RagdollPart_t * self
) {
  RagdollPart * selfCpp = static_cast<RagdollPart *>(self->obj);
  unsigned long long int result = selfCpp->mUserData;
  return result;
};

void JPC_RagdollPart_mUserData_Set(
  JPC_RagdollPart_t * self,
  unsigned long long int mUserData
) {
  RagdollPart * selfCpp = static_cast<RagdollPart *>(self->obj);
  selfCpp->mUserData = mUserData;
};

unsigned long JPC_RagdollPart_mObjectLayer_Get(
  JPC_RagdollPart_t * self
) {
  RagdollPart * selfCpp = static_cast<RagdollPart *>(self->obj);
  unsigned long result = selfCpp->mObjectLayer;
  return result;
};

void JPC_RagdollPart_mObjectLayer_Set(
  JPC_RagdollPart_t * self,
  unsigned long mObjectLayer
) {
  RagdollPart * selfCpp = static_cast<RagdollPart *>(self->obj);
  selfCpp->mObjectLayer = mObjectLayer;
};

JPC_CollisionGroup_t * JPC_RagdollPart_mCollisionGroup_Get(
  JPC_RagdollPart_t * self
) {
  RagdollPart * selfCpp = static_cast<RagdollPart *>(self->obj);
  CollisionGroup resultValue = selfCpp->mCollisionGroup;
  CollisionGroup* result = new CollisionGroup(resultValue);
  return reinterpret_cast<JPC_CollisionGroup_t *>(result);
};

void JPC_RagdollPart_mCollisionGroup_Set(
  JPC_RagdollPart_t * self,
  JPC_CollisionGroup_t * mCollisionGroup
) {
  RagdollPart * selfCpp = static_cast<RagdollPart *>(self->obj);
  selfCpp->mCollisionGroup = *reinterpret_cast<CollisionGroup *>(mCollisionGroup->obj);
};

JPC_EMotionType JPC_RagdollPart_mMotionType_Get(
  JPC_RagdollPart_t * self
) {
  RagdollPart * selfCpp = static_cast<RagdollPart *>(self->obj);
  EMotionType result = selfCpp->mMotionType;
  return static_cast<JPC_EMotionType>(static_cast<int>(result));
};

void JPC_RagdollPart_mMotionType_Set(
  JPC_RagdollPart_t * self,
  JPC_EMotionType mMotionType
) {
  RagdollPart * selfCpp = static_cast<RagdollPart *>(self->obj);
  selfCpp->mMotionType = static_cast<EMotionType>(static_cast<int>(mMotionType));
};

JPC_EAllowedDOFs JPC_RagdollPart_mAllowedDOFs_Get(
  JPC_RagdollPart_t * self
) {
  RagdollPart * selfCpp = static_cast<RagdollPart *>(self->obj);
  EAllowedDOFs result = selfCpp->mAllowedDOFs;
  return static_cast<JPC_EAllowedDOFs>(static_cast<int>(result));
};

void JPC_RagdollPart_mAllowedDOFs_Set(
  JPC_RagdollPart_t * self,
  JPC_EAllowedDOFs mAllowedDOFs
) {
  RagdollPart * selfCpp = static_cast<RagdollPart *>(self->obj);
  selfCpp->mAllowedDOFs = static_cast<EAllowedDOFs>(static_cast<int>(mAllowedDOFs));
};

bool JPC_RagdollPart_mAllowDynamicOrKinematic_Get(
  JPC_RagdollPart_t * self
) {
  RagdollPart * selfCpp = static_cast<RagdollPart *>(self->obj);
  bool result = selfCpp->mAllowDynamicOrKinematic;
  return result;
};

void JPC_RagdollPart_mAllowDynamicOrKinematic_Set(
  JPC_RagdollPart_t * self,
  bool mAllowDynamicOrKinematic
) {
  RagdollPart * selfCpp = static_cast<RagdollPart *>(self->obj);
  selfCpp->mAllowDynamicOrKinematic = mAllowDynamicOrKinematic;
};

bool JPC_RagdollPart_mIsSensor_Get(
  JPC_RagdollPart_t * self
) {
  RagdollPart * selfCpp = static_cast<RagdollPart *>(self->obj);
  bool result = selfCpp->mIsSensor;
  return result;
};

void JPC_RagdollPart_mIsSensor_Set(
  JPC_RagdollPart_t * self,
  bool mIsSensor
) {
  RagdollPart * selfCpp = static_cast<RagdollPart *>(self->obj);
  selfCpp->mIsSensor = mIsSensor;
};

bool JPC_RagdollPart_mUseManifoldReduction_Get(
  JPC_RagdollPart_t * self
) {
  RagdollPart * selfCpp = static_cast<RagdollPart *>(self->obj);
  bool result = selfCpp->mUseManifoldReduction;
  return result;
};

void JPC_RagdollPart_mUseManifoldReduction_Set(
  JPC_RagdollPart_t * self,
  bool mUseManifoldReduction
) {
  RagdollPart * selfCpp = static_cast<RagdollPart *>(self->obj);
  selfCpp->mUseManifoldReduction = mUseManifoldReduction;
};

bool JPC_RagdollPart_mCollideKinematicVsNonDynamic_Get(
  JPC_RagdollPart_t * self
) {
  RagdollPart * selfCpp = static_cast<RagdollPart *>(self->obj);
  bool result = selfCpp->mCollideKinematicVsNonDynamic;
  return result;
};

void JPC_RagdollPart_mCollideKinematicVsNonDynamic_Set(
  JPC_RagdollPart_t * self,
  bool mCollideKinematicVsNonDynamic
) {
  RagdollPart * selfCpp = static_cast<RagdollPart *>(self->obj);
  selfCpp->mCollideKinematicVsNonDynamic = mCollideKinematicVsNonDynamic;
};

bool JPC_RagdollPart_mApplyGyroscopicForce_Get(
  JPC_RagdollPart_t * self
) {
  RagdollPart * selfCpp = static_cast<RagdollPart *>(self->obj);
  bool result = selfCpp->mApplyGyroscopicForce;
  return result;
};

void JPC_RagdollPart_mApplyGyroscopicForce_Set(
  JPC_RagdollPart_t * self,
  bool mApplyGyroscopicForce
) {
  RagdollPart * selfCpp = static_cast<RagdollPart *>(self->obj);
  selfCpp->mApplyGyroscopicForce = mApplyGyroscopicForce;
};

JPC_EMotionQuality JPC_RagdollPart_mMotionQuality_Get(
  JPC_RagdollPart_t * self
) {
  RagdollPart * selfCpp = static_cast<RagdollPart *>(self->obj);
  EMotionQuality result = selfCpp->mMotionQuality;
  return static_cast<JPC_EMotionQuality>(static_cast<int>(result));
};

void JPC_RagdollPart_mMotionQuality_Set(
  JPC_RagdollPart_t * self,
  JPC_EMotionQuality mMotionQuality
) {
  RagdollPart * selfCpp = static_cast<RagdollPart *>(self->obj);
  selfCpp->mMotionQuality = static_cast<EMotionQuality>(static_cast<int>(mMotionQuality));
};

bool JPC_RagdollPart_mEnhancedInternalEdgeRemoval_Get(
  JPC_RagdollPart_t * self
) {
  RagdollPart * selfCpp = static_cast<RagdollPart *>(self->obj);
  bool result = selfCpp->mEnhancedInternalEdgeRemoval;
  return result;
};

void JPC_RagdollPart_mEnhancedInternalEdgeRemoval_Set(
  JPC_RagdollPart_t * self,
  bool mEnhancedInternalEdgeRemoval
) {
  RagdollPart * selfCpp = static_cast<RagdollPart *>(self->obj);
  selfCpp->mEnhancedInternalEdgeRemoval = mEnhancedInternalEdgeRemoval;
};

bool JPC_RagdollPart_mAllowSleeping_Get(
  JPC_RagdollPart_t * self
) {
  RagdollPart * selfCpp = static_cast<RagdollPart *>(self->obj);
  bool result = selfCpp->mAllowSleeping;
  return result;
};

void JPC_RagdollPart_mAllowSleeping_Set(
  JPC_RagdollPart_t * self,
  bool mAllowSleeping
) {
  RagdollPart * selfCpp = static_cast<RagdollPart *>(self->obj);
  selfCpp->mAllowSleeping = mAllowSleeping;
};

float JPC_RagdollPart_mFriction_Get(
  JPC_RagdollPart_t * self
) {
  RagdollPart * selfCpp = static_cast<RagdollPart *>(self->obj);
  float result = selfCpp->mFriction;
  return result;
};

void JPC_RagdollPart_mFriction_Set(
  JPC_RagdollPart_t * self,
  float mFriction
) {
  RagdollPart * selfCpp = static_cast<RagdollPart *>(self->obj);
  selfCpp->mFriction = mFriction;
};

float JPC_RagdollPart_mRestitution_Get(
  JPC_RagdollPart_t * self
) {
  RagdollPart * selfCpp = static_cast<RagdollPart *>(self->obj);
  float result = selfCpp->mRestitution;
  return result;
};

void JPC_RagdollPart_mRestitution_Set(
  JPC_RagdollPart_t * self,
  float mRestitution
) {
  RagdollPart * selfCpp = static_cast<RagdollPart *>(self->obj);
  selfCpp->mRestitution = mRestitution;
};

float JPC_RagdollPart_mLinearDamping_Get(
  JPC_RagdollPart_t * self
) {
  RagdollPart * selfCpp = static_cast<RagdollPart *>(self->obj);
  float result = selfCpp->mLinearDamping;
  return result;
};

void JPC_RagdollPart_mLinearDamping_Set(
  JPC_RagdollPart_t * self,
  float mLinearDamping
) {
  RagdollPart * selfCpp = static_cast<RagdollPart *>(self->obj);
  selfCpp->mLinearDamping = mLinearDamping;
};

float JPC_RagdollPart_mAngularDamping_Get(
  JPC_RagdollPart_t * self
) {
  RagdollPart * selfCpp = static_cast<RagdollPart *>(self->obj);
  float result = selfCpp->mAngularDamping;
  return result;
};

void JPC_RagdollPart_mAngularDamping_Set(
  JPC_RagdollPart_t * self,
  float mAngularDamping
) {
  RagdollPart * selfCpp = static_cast<RagdollPart *>(self->obj);
  selfCpp->mAngularDamping = mAngularDamping;
};

float JPC_RagdollPart_mMaxLinearVelocity_Get(
  JPC_RagdollPart_t * self
) {
  RagdollPart * selfCpp = static_cast<RagdollPart *>(self->obj);
  float result = selfCpp->mMaxLinearVelocity;
  return result;
};

void JPC_RagdollPart_mMaxLinearVelocity_Set(
  JPC_RagdollPart_t * self,
  float mMaxLinearVelocity
) {
  RagdollPart * selfCpp = static_cast<RagdollPart *>(self->obj);
  selfCpp->mMaxLinearVelocity = mMaxLinearVelocity;
};

float JPC_RagdollPart_mMaxAngularVelocity_Get(
  JPC_RagdollPart_t * self
) {
  RagdollPart * selfCpp = static_cast<RagdollPart *>(self->obj);
  float result = selfCpp->mMaxAngularVelocity;
  return result;
};

void JPC_RagdollPart_mMaxAngularVelocity_Set(
  JPC_RagdollPart_t * self,
  float mMaxAngularVelocity
) {
  RagdollPart * selfCpp = static_cast<RagdollPart *>(self->obj);
  selfCpp->mMaxAngularVelocity = mMaxAngularVelocity;
};

float JPC_RagdollPart_mGravityFactor_Get(
  JPC_RagdollPart_t * self
) {
  RagdollPart * selfCpp = static_cast<RagdollPart *>(self->obj);
  float result = selfCpp->mGravityFactor;
  return result;
};

void JPC_RagdollPart_mGravityFactor_Set(
  JPC_RagdollPart_t * self,
  float mGravityFactor
) {
  RagdollPart * selfCpp = static_cast<RagdollPart *>(self->obj);
  selfCpp->mGravityFactor = mGravityFactor;
};

unsigned long JPC_RagdollPart_mNumVelocityStepsOverride_Get(
  JPC_RagdollPart_t * self
) {
  RagdollPart * selfCpp = static_cast<RagdollPart *>(self->obj);
  unsigned long result = selfCpp->mNumVelocityStepsOverride;
  return result;
};

void JPC_RagdollPart_mNumVelocityStepsOverride_Set(
  JPC_RagdollPart_t * self,
  unsigned long mNumVelocityStepsOverride
) {
  RagdollPart * selfCpp = static_cast<RagdollPart *>(self->obj);
  selfCpp->mNumVelocityStepsOverride = mNumVelocityStepsOverride;
};

unsigned long JPC_RagdollPart_mNumPositionStepsOverride_Get(
  JPC_RagdollPart_t * self
) {
  RagdollPart * selfCpp = static_cast<RagdollPart *>(self->obj);
  unsigned long result = selfCpp->mNumPositionStepsOverride;
  return result;
};

void JPC_RagdollPart_mNumPositionStepsOverride_Set(
  JPC_RagdollPart_t * self,
  unsigned long mNumPositionStepsOverride
) {
  RagdollPart * selfCpp = static_cast<RagdollPart *>(self->obj);
  selfCpp->mNumPositionStepsOverride = mNumPositionStepsOverride;
};

JPC_EOverrideMassProperties JPC_RagdollPart_mOverrideMassProperties_Get(
  JPC_RagdollPart_t * self
) {
  RagdollPart * selfCpp = static_cast<RagdollPart *>(self->obj);
  EOverrideMassProperties result = selfCpp->mOverrideMassProperties;
  return static_cast<JPC_EOverrideMassProperties>(static_cast<int>(result));
};

void JPC_RagdollPart_mOverrideMassProperties_Set(
  JPC_RagdollPart_t * self,
  JPC_EOverrideMassProperties mOverrideMassProperties
) {
  RagdollPart * selfCpp = static_cast<RagdollPart *>(self->obj);
  selfCpp->mOverrideMassProperties = static_cast<EOverrideMassProperties>(static_cast<int>(mOverrideMassProperties));
};

float JPC_RagdollPart_mInertiaMultiplier_Get(
  JPC_RagdollPart_t * self
) {
  RagdollPart * selfCpp = static_cast<RagdollPart *>(self->obj);
  float result = selfCpp->mInertiaMultiplier;
  return result;
};

void JPC_RagdollPart_mInertiaMultiplier_Set(
  JPC_RagdollPart_t * self,
  float mInertiaMultiplier
) {
  RagdollPart * selfCpp = static_cast<RagdollPart *>(self->obj);
  selfCpp->mInertiaMultiplier = mInertiaMultiplier;
};

JPC_MassProperties_t * JPC_RagdollPart_mMassPropertiesOverride_Get(
  JPC_RagdollPart_t * self
) {
  RagdollPart * selfCpp = static_cast<RagdollPart *>(self->obj);
  MassProperties resultValue = selfCpp->mMassPropertiesOverride;
  MassProperties* result = new MassProperties(resultValue);
  return reinterpret_cast<JPC_MassProperties_t *>(result);
};

void JPC_RagdollPart_mMassPropertiesOverride_Set(
  JPC_RagdollPart_t * self,
  JPC_MassProperties_t * mMassPropertiesOverride
) {
  RagdollPart * selfCpp = static_cast<RagdollPart *>(self->obj);
  selfCpp->mMassPropertiesOverride = *reinterpret_cast<MassProperties *>(mMassPropertiesOverride->obj);
};

//endregion properties

#ifdef __cplusplus
}
#endif

