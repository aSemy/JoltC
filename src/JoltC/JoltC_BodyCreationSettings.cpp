#include "JoltC/JoltC_BodyCreationSettings.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

/**
  Construct a new `BodyCreationSettings` instance.
 */
JoltC_BodyCreationSettings_t * JoltC_BodyCreationSettings_new_0() {
  JoltC_BodyCreationSettings_t * cInstance = new JoltC_BodyCreationSettings_t();
  BodyCreationSettings * cppInstance = new BodyCreationSettings();
  cInstance->obj = cppInstance;
  return cInstance;
};

/**
  Construct a new `BodyCreationSettings` instance.
 */
JoltC_BodyCreationSettings_t * JoltC_BodyCreationSettings_new_1(
  JoltC_Shape_t * inShape,
  JoltC_RVec3_t * inPosition,
  JoltC_Quat_t * inRotation,
  JoltC_EMotionType inMotionType,
  unsigned long inObjectLayer
) {
  const Shape * inShapeCpp = static_cast<const Shape *>(inShape->obj);
  RVec3 * inPositionCpp = static_cast<RVec3 *>(inPosition->obj);
  Quat * inRotationCpp = static_cast<Quat *>(inRotation->obj);
  EMotionType inMotionTypeCpp = static_cast<EMotionType>(static_cast<int>(inMotionType));
  JoltC_BodyCreationSettings_t * cInstance = new JoltC_BodyCreationSettings_t();
  BodyCreationSettings * cppInstance = new BodyCreationSettings(
    inShapeCpp,
    *inPositionCpp,
    *inRotationCpp,
    inMotionTypeCpp,
    inObjectLayer
  );
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion

//region destructor

void JoltC_BodyCreationSettings_destroy(
  JoltC_BodyCreationSettings_t * self
){
  if (self == NULL) return;
  delete static_cast<BodyCreationSettings *>(self->obj);
  free(self);
}

//endregion
//region converters

/**
 * Convert an instance of JoltC_RagdollPart_t into JoltC_BodyCreationSettings_t.
 */
JoltC_BodyCreationSettings_t * JoltC_BodyCreationSettings_From_RagdollPart(
  JoltC_RagdollPart_t * subtype
) {
  return (JoltC_BodyCreationSettings_t*) subtype;
};

//endregion

//region functions

JoltC_ShapeSettings_t * JoltC_BodyCreationSettings_GetShapeSettings(
  JoltC_BodyCreationSettings_t * self
) {
  BodyCreationSettings * selfCpp = static_cast<BodyCreationSettings *>(self->obj);
  const ShapeSettings * resultPtr = selfCpp->GetShapeSettings();
  JoltC_ShapeSettings_t * result = new JoltC_ShapeSettings_t();
  result->obj = const_cast<void *>(reinterpret_cast<const void *>(resultPtr));
  return result;
}

void JoltC_BodyCreationSettings_SetShapeSettings(
  JoltC_BodyCreationSettings_t * self,
  JoltC_ShapeSettings_t * inShape
) {
  BodyCreationSettings * selfCpp = static_cast<BodyCreationSettings *>(self->obj);
  const ShapeSettings * inShapeCpp = static_cast<const ShapeSettings *>(inShape->obj);
  selfCpp->SetShapeSettings(
    inShapeCpp
  );
}

JoltC_Shape_ShapeResult_t * JoltC_BodyCreationSettings_ConvertShapeSettings(
  JoltC_BodyCreationSettings_t * self
) {
  BodyCreationSettings * selfCpp = static_cast<BodyCreationSettings *>(self->obj);
  Shape::ShapeResult * resultPtr = new Shape::ShapeResult();
  *resultPtr = selfCpp->ConvertShapeSettings();
  JoltC_Shape_ShapeResult_t * result = new JoltC_Shape_ShapeResult_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

JoltC_Shape_t * JoltC_BodyCreationSettings_GetShape(
  JoltC_BodyCreationSettings_t * self
) {
  BodyCreationSettings * selfCpp = static_cast<BodyCreationSettings *>(self->obj);
  const Shape * resultPtr = selfCpp->GetShape();
  JoltC_Shape_t * result = new JoltC_Shape_t();
  result->obj = const_cast<void *>(reinterpret_cast<const void *>(resultPtr));
  return result;
}

void JoltC_BodyCreationSettings_SetShape(
  JoltC_BodyCreationSettings_t * self,
  JoltC_Shape_t * inShape
) {
  BodyCreationSettings * selfCpp = static_cast<BodyCreationSettings *>(self->obj);
  const Shape * inShapeCpp = static_cast<const Shape *>(inShape->obj);
  selfCpp->SetShape(
    inShapeCpp
  );
}

bool JoltC_BodyCreationSettings_HasMassProperties(
  JoltC_BodyCreationSettings_t * self
) {
  BodyCreationSettings * selfCpp = static_cast<BodyCreationSettings *>(self->obj);
  return selfCpp->HasMassProperties();
}

JoltC_MassProperties_t * JoltC_BodyCreationSettings_GetMassProperties(
  JoltC_BodyCreationSettings_t * self
) {
  BodyCreationSettings * selfCpp = static_cast<BodyCreationSettings *>(self->obj);
  MassProperties * resultPtr = new MassProperties();
  *resultPtr = selfCpp->GetMassProperties();
  JoltC_MassProperties_t * result = new JoltC_MassProperties_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

//endregion

//region properties

JoltC_RVec3_t * JoltC_BodyCreationSettings_mPosition_Get(
  JoltC_BodyCreationSettings_t * self
) {
  BodyCreationSettings * selfCpp = static_cast<BodyCreationSettings *>(self->obj);
  RVec3 * resultPtr = new RVec3();
  *resultPtr = selfCpp->mPosition;
  JoltC_RVec3_t * result = new JoltC_RVec3_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

void JoltC_BodyCreationSettings_mPosition_Set(
  JoltC_BodyCreationSettings_t * self,
  JoltC_RVec3_t * mPosition
) {
  BodyCreationSettings * selfCpp = static_cast<BodyCreationSettings *>(self->obj);
  selfCpp->mPosition = *static_cast<RVec3 *>(mPosition->obj);
}

JoltC_Quat_t * JoltC_BodyCreationSettings_mRotation_Get(
  JoltC_BodyCreationSettings_t * self
) {
  BodyCreationSettings * selfCpp = static_cast<BodyCreationSettings *>(self->obj);
  Quat * resultPtr = new Quat();
  *resultPtr = selfCpp->mRotation;
  JoltC_Quat_t * result = new JoltC_Quat_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

void JoltC_BodyCreationSettings_mRotation_Set(
  JoltC_BodyCreationSettings_t * self,
  JoltC_Quat_t * mRotation
) {
  BodyCreationSettings * selfCpp = static_cast<BodyCreationSettings *>(self->obj);
  selfCpp->mRotation = *static_cast<Quat *>(mRotation->obj);
}

JoltC_Vec3_t * JoltC_BodyCreationSettings_mLinearVelocity_Get(
  JoltC_BodyCreationSettings_t * self
) {
  BodyCreationSettings * selfCpp = static_cast<BodyCreationSettings *>(self->obj);
  Vec3 * resultPtr = new Vec3();
  *resultPtr = selfCpp->mLinearVelocity;
  JoltC_Vec3_t * result = new JoltC_Vec3_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

void JoltC_BodyCreationSettings_mLinearVelocity_Set(
  JoltC_BodyCreationSettings_t * self,
  JoltC_Vec3_t * mLinearVelocity
) {
  BodyCreationSettings * selfCpp = static_cast<BodyCreationSettings *>(self->obj);
  selfCpp->mLinearVelocity = *static_cast<Vec3 *>(mLinearVelocity->obj);
}

JoltC_Vec3_t * JoltC_BodyCreationSettings_mAngularVelocity_Get(
  JoltC_BodyCreationSettings_t * self
) {
  BodyCreationSettings * selfCpp = static_cast<BodyCreationSettings *>(self->obj);
  Vec3 * resultPtr = new Vec3();
  *resultPtr = selfCpp->mAngularVelocity;
  JoltC_Vec3_t * result = new JoltC_Vec3_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

void JoltC_BodyCreationSettings_mAngularVelocity_Set(
  JoltC_BodyCreationSettings_t * self,
  JoltC_Vec3_t * mAngularVelocity
) {
  BodyCreationSettings * selfCpp = static_cast<BodyCreationSettings *>(self->obj);
  selfCpp->mAngularVelocity = *static_cast<Vec3 *>(mAngularVelocity->obj);
}

unsigned long long int JoltC_BodyCreationSettings_mUserData_Get(
  JoltC_BodyCreationSettings_t * self
) {
  BodyCreationSettings * selfCpp = static_cast<BodyCreationSettings *>(self->obj);
  return selfCpp->mUserData;
}

void JoltC_BodyCreationSettings_mUserData_Set(
  JoltC_BodyCreationSettings_t * self,
  unsigned long long int mUserData
) {
  BodyCreationSettings * selfCpp = static_cast<BodyCreationSettings *>(self->obj);
  selfCpp->mUserData = mUserData;
}

unsigned long JoltC_BodyCreationSettings_mObjectLayer_Get(
  JoltC_BodyCreationSettings_t * self
) {
  BodyCreationSettings * selfCpp = static_cast<BodyCreationSettings *>(self->obj);
  return selfCpp->mObjectLayer;
}

void JoltC_BodyCreationSettings_mObjectLayer_Set(
  JoltC_BodyCreationSettings_t * self,
  unsigned long mObjectLayer
) {
  BodyCreationSettings * selfCpp = static_cast<BodyCreationSettings *>(self->obj);
  selfCpp->mObjectLayer = mObjectLayer;
}

JoltC_CollisionGroup_t * JoltC_BodyCreationSettings_mCollisionGroup_Get(
  JoltC_BodyCreationSettings_t * self
) {
  BodyCreationSettings * selfCpp = static_cast<BodyCreationSettings *>(self->obj);
  CollisionGroup * resultPtr = new CollisionGroup();
  *resultPtr = selfCpp->mCollisionGroup;
  JoltC_CollisionGroup_t * result = new JoltC_CollisionGroup_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

void JoltC_BodyCreationSettings_mCollisionGroup_Set(
  JoltC_BodyCreationSettings_t * self,
  JoltC_CollisionGroup_t * mCollisionGroup
) {
  BodyCreationSettings * selfCpp = static_cast<BodyCreationSettings *>(self->obj);
  selfCpp->mCollisionGroup = *static_cast<CollisionGroup *>(mCollisionGroup->obj);
}

JoltC_EMotionType JoltC_BodyCreationSettings_mMotionType_Get(
  JoltC_BodyCreationSettings_t * self
) {
  BodyCreationSettings * selfCpp = static_cast<BodyCreationSettings *>(self->obj);
  EMotionType result = selfCpp->mMotionType;
  return static_cast<JoltC_EMotionType>(static_cast<int>(result));
}

void JoltC_BodyCreationSettings_mMotionType_Set(
  JoltC_BodyCreationSettings_t * self,
  JoltC_EMotionType mMotionType
) {
  BodyCreationSettings * selfCpp = static_cast<BodyCreationSettings *>(self->obj);
  selfCpp->mMotionType = static_cast<EMotionType>(static_cast<int>(mMotionType));
}

JoltC_EAllowedDOFs JoltC_BodyCreationSettings_mAllowedDOFs_Get(
  JoltC_BodyCreationSettings_t * self
) {
  BodyCreationSettings * selfCpp = static_cast<BodyCreationSettings *>(self->obj);
  EAllowedDOFs result = selfCpp->mAllowedDOFs;
  return static_cast<JoltC_EAllowedDOFs>(static_cast<int>(result));
}

void JoltC_BodyCreationSettings_mAllowedDOFs_Set(
  JoltC_BodyCreationSettings_t * self,
  JoltC_EAllowedDOFs mAllowedDOFs
) {
  BodyCreationSettings * selfCpp = static_cast<BodyCreationSettings *>(self->obj);
  selfCpp->mAllowedDOFs = static_cast<EAllowedDOFs>(static_cast<int>(mAllowedDOFs));
}

bool JoltC_BodyCreationSettings_mAllowDynamicOrKinematic_Get(
  JoltC_BodyCreationSettings_t * self
) {
  BodyCreationSettings * selfCpp = static_cast<BodyCreationSettings *>(self->obj);
  return selfCpp->mAllowDynamicOrKinematic;
}

void JoltC_BodyCreationSettings_mAllowDynamicOrKinematic_Set(
  JoltC_BodyCreationSettings_t * self,
  bool mAllowDynamicOrKinematic
) {
  BodyCreationSettings * selfCpp = static_cast<BodyCreationSettings *>(self->obj);
  selfCpp->mAllowDynamicOrKinematic = mAllowDynamicOrKinematic;
}

bool JoltC_BodyCreationSettings_mIsSensor_Get(
  JoltC_BodyCreationSettings_t * self
) {
  BodyCreationSettings * selfCpp = static_cast<BodyCreationSettings *>(self->obj);
  return selfCpp->mIsSensor;
}

void JoltC_BodyCreationSettings_mIsSensor_Set(
  JoltC_BodyCreationSettings_t * self,
  bool mIsSensor
) {
  BodyCreationSettings * selfCpp = static_cast<BodyCreationSettings *>(self->obj);
  selfCpp->mIsSensor = mIsSensor;
}

bool JoltC_BodyCreationSettings_mUseManifoldReduction_Get(
  JoltC_BodyCreationSettings_t * self
) {
  BodyCreationSettings * selfCpp = static_cast<BodyCreationSettings *>(self->obj);
  return selfCpp->mUseManifoldReduction;
}

void JoltC_BodyCreationSettings_mUseManifoldReduction_Set(
  JoltC_BodyCreationSettings_t * self,
  bool mUseManifoldReduction
) {
  BodyCreationSettings * selfCpp = static_cast<BodyCreationSettings *>(self->obj);
  selfCpp->mUseManifoldReduction = mUseManifoldReduction;
}

bool JoltC_BodyCreationSettings_mCollideKinematicVsNonDynamic_Get(
  JoltC_BodyCreationSettings_t * self
) {
  BodyCreationSettings * selfCpp = static_cast<BodyCreationSettings *>(self->obj);
  return selfCpp->mCollideKinematicVsNonDynamic;
}

void JoltC_BodyCreationSettings_mCollideKinematicVsNonDynamic_Set(
  JoltC_BodyCreationSettings_t * self,
  bool mCollideKinematicVsNonDynamic
) {
  BodyCreationSettings * selfCpp = static_cast<BodyCreationSettings *>(self->obj);
  selfCpp->mCollideKinematicVsNonDynamic = mCollideKinematicVsNonDynamic;
}

bool JoltC_BodyCreationSettings_mApplyGyroscopicForce_Get(
  JoltC_BodyCreationSettings_t * self
) {
  BodyCreationSettings * selfCpp = static_cast<BodyCreationSettings *>(self->obj);
  return selfCpp->mApplyGyroscopicForce;
}

void JoltC_BodyCreationSettings_mApplyGyroscopicForce_Set(
  JoltC_BodyCreationSettings_t * self,
  bool mApplyGyroscopicForce
) {
  BodyCreationSettings * selfCpp = static_cast<BodyCreationSettings *>(self->obj);
  selfCpp->mApplyGyroscopicForce = mApplyGyroscopicForce;
}

JoltC_EMotionQuality JoltC_BodyCreationSettings_mMotionQuality_Get(
  JoltC_BodyCreationSettings_t * self
) {
  BodyCreationSettings * selfCpp = static_cast<BodyCreationSettings *>(self->obj);
  EMotionQuality result = selfCpp->mMotionQuality;
  return static_cast<JoltC_EMotionQuality>(static_cast<int>(result));
}

void JoltC_BodyCreationSettings_mMotionQuality_Set(
  JoltC_BodyCreationSettings_t * self,
  JoltC_EMotionQuality mMotionQuality
) {
  BodyCreationSettings * selfCpp = static_cast<BodyCreationSettings *>(self->obj);
  selfCpp->mMotionQuality = static_cast<EMotionQuality>(static_cast<int>(mMotionQuality));
}

bool JoltC_BodyCreationSettings_mEnhancedInternalEdgeRemoval_Get(
  JoltC_BodyCreationSettings_t * self
) {
  BodyCreationSettings * selfCpp = static_cast<BodyCreationSettings *>(self->obj);
  return selfCpp->mEnhancedInternalEdgeRemoval;
}

void JoltC_BodyCreationSettings_mEnhancedInternalEdgeRemoval_Set(
  JoltC_BodyCreationSettings_t * self,
  bool mEnhancedInternalEdgeRemoval
) {
  BodyCreationSettings * selfCpp = static_cast<BodyCreationSettings *>(self->obj);
  selfCpp->mEnhancedInternalEdgeRemoval = mEnhancedInternalEdgeRemoval;
}

bool JoltC_BodyCreationSettings_mAllowSleeping_Get(
  JoltC_BodyCreationSettings_t * self
) {
  BodyCreationSettings * selfCpp = static_cast<BodyCreationSettings *>(self->obj);
  return selfCpp->mAllowSleeping;
}

void JoltC_BodyCreationSettings_mAllowSleeping_Set(
  JoltC_BodyCreationSettings_t * self,
  bool mAllowSleeping
) {
  BodyCreationSettings * selfCpp = static_cast<BodyCreationSettings *>(self->obj);
  selfCpp->mAllowSleeping = mAllowSleeping;
}

float JoltC_BodyCreationSettings_mFriction_Get(
  JoltC_BodyCreationSettings_t * self
) {
  BodyCreationSettings * selfCpp = static_cast<BodyCreationSettings *>(self->obj);
  return selfCpp->mFriction;
}

void JoltC_BodyCreationSettings_mFriction_Set(
  JoltC_BodyCreationSettings_t * self,
  float mFriction
) {
  BodyCreationSettings * selfCpp = static_cast<BodyCreationSettings *>(self->obj);
  selfCpp->mFriction = mFriction;
}

float JoltC_BodyCreationSettings_mRestitution_Get(
  JoltC_BodyCreationSettings_t * self
) {
  BodyCreationSettings * selfCpp = static_cast<BodyCreationSettings *>(self->obj);
  return selfCpp->mRestitution;
}

void JoltC_BodyCreationSettings_mRestitution_Set(
  JoltC_BodyCreationSettings_t * self,
  float mRestitution
) {
  BodyCreationSettings * selfCpp = static_cast<BodyCreationSettings *>(self->obj);
  selfCpp->mRestitution = mRestitution;
}

float JoltC_BodyCreationSettings_mLinearDamping_Get(
  JoltC_BodyCreationSettings_t * self
) {
  BodyCreationSettings * selfCpp = static_cast<BodyCreationSettings *>(self->obj);
  return selfCpp->mLinearDamping;
}

void JoltC_BodyCreationSettings_mLinearDamping_Set(
  JoltC_BodyCreationSettings_t * self,
  float mLinearDamping
) {
  BodyCreationSettings * selfCpp = static_cast<BodyCreationSettings *>(self->obj);
  selfCpp->mLinearDamping = mLinearDamping;
}

float JoltC_BodyCreationSettings_mAngularDamping_Get(
  JoltC_BodyCreationSettings_t * self
) {
  BodyCreationSettings * selfCpp = static_cast<BodyCreationSettings *>(self->obj);
  return selfCpp->mAngularDamping;
}

void JoltC_BodyCreationSettings_mAngularDamping_Set(
  JoltC_BodyCreationSettings_t * self,
  float mAngularDamping
) {
  BodyCreationSettings * selfCpp = static_cast<BodyCreationSettings *>(self->obj);
  selfCpp->mAngularDamping = mAngularDamping;
}

float JoltC_BodyCreationSettings_mMaxLinearVelocity_Get(
  JoltC_BodyCreationSettings_t * self
) {
  BodyCreationSettings * selfCpp = static_cast<BodyCreationSettings *>(self->obj);
  return selfCpp->mMaxLinearVelocity;
}

void JoltC_BodyCreationSettings_mMaxLinearVelocity_Set(
  JoltC_BodyCreationSettings_t * self,
  float mMaxLinearVelocity
) {
  BodyCreationSettings * selfCpp = static_cast<BodyCreationSettings *>(self->obj);
  selfCpp->mMaxLinearVelocity = mMaxLinearVelocity;
}

float JoltC_BodyCreationSettings_mMaxAngularVelocity_Get(
  JoltC_BodyCreationSettings_t * self
) {
  BodyCreationSettings * selfCpp = static_cast<BodyCreationSettings *>(self->obj);
  return selfCpp->mMaxAngularVelocity;
}

void JoltC_BodyCreationSettings_mMaxAngularVelocity_Set(
  JoltC_BodyCreationSettings_t * self,
  float mMaxAngularVelocity
) {
  BodyCreationSettings * selfCpp = static_cast<BodyCreationSettings *>(self->obj);
  selfCpp->mMaxAngularVelocity = mMaxAngularVelocity;
}

float JoltC_BodyCreationSettings_mGravityFactor_Get(
  JoltC_BodyCreationSettings_t * self
) {
  BodyCreationSettings * selfCpp = static_cast<BodyCreationSettings *>(self->obj);
  return selfCpp->mGravityFactor;
}

void JoltC_BodyCreationSettings_mGravityFactor_Set(
  JoltC_BodyCreationSettings_t * self,
  float mGravityFactor
) {
  BodyCreationSettings * selfCpp = static_cast<BodyCreationSettings *>(self->obj);
  selfCpp->mGravityFactor = mGravityFactor;
}

unsigned long JoltC_BodyCreationSettings_mNumVelocityStepsOverride_Get(
  JoltC_BodyCreationSettings_t * self
) {
  BodyCreationSettings * selfCpp = static_cast<BodyCreationSettings *>(self->obj);
  return selfCpp->mNumVelocityStepsOverride;
}

void JoltC_BodyCreationSettings_mNumVelocityStepsOverride_Set(
  JoltC_BodyCreationSettings_t * self,
  unsigned long mNumVelocityStepsOverride
) {
  BodyCreationSettings * selfCpp = static_cast<BodyCreationSettings *>(self->obj);
  selfCpp->mNumVelocityStepsOverride = mNumVelocityStepsOverride;
}

unsigned long JoltC_BodyCreationSettings_mNumPositionStepsOverride_Get(
  JoltC_BodyCreationSettings_t * self
) {
  BodyCreationSettings * selfCpp = static_cast<BodyCreationSettings *>(self->obj);
  return selfCpp->mNumPositionStepsOverride;
}

void JoltC_BodyCreationSettings_mNumPositionStepsOverride_Set(
  JoltC_BodyCreationSettings_t * self,
  unsigned long mNumPositionStepsOverride
) {
  BodyCreationSettings * selfCpp = static_cast<BodyCreationSettings *>(self->obj);
  selfCpp->mNumPositionStepsOverride = mNumPositionStepsOverride;
}

JoltC_EOverrideMassProperties JoltC_BodyCreationSettings_mOverrideMassProperties_Get(
  JoltC_BodyCreationSettings_t * self
) {
  BodyCreationSettings * selfCpp = static_cast<BodyCreationSettings *>(self->obj);
  EOverrideMassProperties result = selfCpp->mOverrideMassProperties;
  return static_cast<JoltC_EOverrideMassProperties>(static_cast<int>(result));
}

void JoltC_BodyCreationSettings_mOverrideMassProperties_Set(
  JoltC_BodyCreationSettings_t * self,
  JoltC_EOverrideMassProperties mOverrideMassProperties
) {
  BodyCreationSettings * selfCpp = static_cast<BodyCreationSettings *>(self->obj);
  selfCpp->mOverrideMassProperties = static_cast<EOverrideMassProperties>(static_cast<int>(mOverrideMassProperties));
}

float JoltC_BodyCreationSettings_mInertiaMultiplier_Get(
  JoltC_BodyCreationSettings_t * self
) {
  BodyCreationSettings * selfCpp = static_cast<BodyCreationSettings *>(self->obj);
  return selfCpp->mInertiaMultiplier;
}

void JoltC_BodyCreationSettings_mInertiaMultiplier_Set(
  JoltC_BodyCreationSettings_t * self,
  float mInertiaMultiplier
) {
  BodyCreationSettings * selfCpp = static_cast<BodyCreationSettings *>(self->obj);
  selfCpp->mInertiaMultiplier = mInertiaMultiplier;
}

JoltC_MassProperties_t * JoltC_BodyCreationSettings_mMassPropertiesOverride_Get(
  JoltC_BodyCreationSettings_t * self
) {
  BodyCreationSettings * selfCpp = static_cast<BodyCreationSettings *>(self->obj);
  MassProperties * resultPtr = new MassProperties();
  *resultPtr = selfCpp->mMassPropertiesOverride;
  JoltC_MassProperties_t * result = new JoltC_MassProperties_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

void JoltC_BodyCreationSettings_mMassPropertiesOverride_Set(
  JoltC_BodyCreationSettings_t * self,
  JoltC_MassProperties_t * mMassPropertiesOverride
) {
  BodyCreationSettings * selfCpp = static_cast<BodyCreationSettings *>(self->obj);
  selfCpp->mMassPropertiesOverride = *static_cast<MassProperties *>(mMassPropertiesOverride->obj);
}

//endregion


#ifdef __cplusplus
}
#endif
