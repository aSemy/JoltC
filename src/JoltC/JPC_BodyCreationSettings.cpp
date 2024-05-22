#include "JoltC/JPC_BodyCreationSettings.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JPC_BodyCreationSettings_t * JPC_BodyCreationSettings_new_0() {
  JPC_BodyCreationSettings_t * cInstance = new JPC_BodyCreationSettings_t();
  BodyCreationSettings * cppInstance = new BodyCreationSettings();
  cInstance->obj = cppInstance;
  return cInstance;
};

JPC_BodyCreationSettings_t * JPC_BodyCreationSettings_new_1(
  const JPC_Shape_t * inShape,
  JPC_RVec3_t * inPosition,
  JPC_Quat_t * inRotation,
  JPC_EMotionType inMotionType,
  unsigned long inObjectLayer
) {
  JPC_BodyCreationSettings_t * cInstance = new JPC_BodyCreationSettings_t();
  BodyCreationSettings * cppInstance = new BodyCreationSettings(
    reinterpret_cast<Shape *>(inShape->obj),
    *reinterpret_cast<RVec3 *>(inPosition->obj),
    *reinterpret_cast<Quat *>(inRotation->obj),
    static_cast<EMotionType>(static_cast<int>(inMotionType)),
    inObjectLayer
  );
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion constructors

//region functions

const JPC_ShapeSettings_t * JPC_BodyCreationSettings_GetShapeSettings(
  JPC_BodyCreationSettings_t * self
) {
  BodyCreationSettings * selfCpp = static_cast<BodyCreationSettings *>(self->obj);
  const ShapeSettings * result = selfCpp->GetShapeSettings();
  return reinterpret_cast<const JPC_ShapeSettings_t *>(result);
};

void JPC_BodyCreationSettings_SetShapeSettings(
  JPC_BodyCreationSettings_t * self,
  const JPC_ShapeSettings_t * inShape
) {
  BodyCreationSettings * selfCpp = static_cast<BodyCreationSettings *>(self->obj);
  
  selfCpp->SetShapeSettings(
  reinterpret_cast<ShapeSettings *>(inShape->obj)
  );
};

JPC_Shape_ShapeResult_t * JPC_BodyCreationSettings_ConvertShapeSettings(
  JPC_BodyCreationSettings_t * self
) {
  BodyCreationSettings * selfCpp = static_cast<BodyCreationSettings *>(self->obj);
  Shape::ShapeResult resultValue = selfCpp->ConvertShapeSettings();
  Shape::ShapeResult* result = new Shape::ShapeResult(resultValue);
  return reinterpret_cast<JPC_Shape_ShapeResult_t *>(result);
};

const JPC_Shape_t * JPC_BodyCreationSettings_GetShape(
  JPC_BodyCreationSettings_t * self
) {
  BodyCreationSettings * selfCpp = static_cast<BodyCreationSettings *>(self->obj);
  const Shape * result = selfCpp->GetShape();
  return reinterpret_cast<const JPC_Shape_t *>(result);
};

void JPC_BodyCreationSettings_SetShape(
  JPC_BodyCreationSettings_t * self,
  const JPC_Shape_t * inShape
) {
  BodyCreationSettings * selfCpp = static_cast<BodyCreationSettings *>(self->obj);
  
  selfCpp->SetShape(
  reinterpret_cast<Shape *>(inShape->obj)
  );
};

bool JPC_BodyCreationSettings_HasMassProperties(
  JPC_BodyCreationSettings_t * self
) {
  BodyCreationSettings * selfCpp = static_cast<BodyCreationSettings *>(self->obj);
  bool result = selfCpp->HasMassProperties();
  return result;
};

JPC_MassProperties_t * JPC_BodyCreationSettings_GetMassProperties(
  JPC_BodyCreationSettings_t * self
) {
  BodyCreationSettings * selfCpp = static_cast<BodyCreationSettings *>(self->obj);
  MassProperties resultValue = selfCpp->GetMassProperties();
  MassProperties* result = new MassProperties(resultValue);
  return reinterpret_cast<JPC_MassProperties_t *>(result);
};

//endregion functions

//region properties

JPC_RVec3_t * JPC_BodyCreationSettings_mPosition_Get(
  JPC_BodyCreationSettings_t * self
) {
  BodyCreationSettings * selfCpp = static_cast<BodyCreationSettings *>(self->obj);
  RVec3 resultValue = selfCpp->mPosition;
  RVec3* result = new RVec3(resultValue);
  return reinterpret_cast<JPC_RVec3_t *>(result);
};

void JPC_BodyCreationSettings_mPosition_Set(
  JPC_BodyCreationSettings_t * self,
  JPC_RVec3_t * mPosition
) {
  BodyCreationSettings * selfCpp = static_cast<BodyCreationSettings *>(self->obj);
  selfCpp->mPosition = *reinterpret_cast<RVec3 *>(mPosition->obj);
};

JPC_Quat_t * JPC_BodyCreationSettings_mRotation_Get(
  JPC_BodyCreationSettings_t * self
) {
  BodyCreationSettings * selfCpp = static_cast<BodyCreationSettings *>(self->obj);
  Quat resultValue = selfCpp->mRotation;
  Quat* result = new Quat(resultValue);
  return reinterpret_cast<JPC_Quat_t *>(result);
};

void JPC_BodyCreationSettings_mRotation_Set(
  JPC_BodyCreationSettings_t * self,
  JPC_Quat_t * mRotation
) {
  BodyCreationSettings * selfCpp = static_cast<BodyCreationSettings *>(self->obj);
  selfCpp->mRotation = *reinterpret_cast<Quat *>(mRotation->obj);
};

JPC_Vec3_t * JPC_BodyCreationSettings_mLinearVelocity_Get(
  JPC_BodyCreationSettings_t * self
) {
  BodyCreationSettings * selfCpp = static_cast<BodyCreationSettings *>(self->obj);
  Vec3 resultValue = selfCpp->mLinearVelocity;
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JPC_Vec3_t *>(result);
};

void JPC_BodyCreationSettings_mLinearVelocity_Set(
  JPC_BodyCreationSettings_t * self,
  JPC_Vec3_t * mLinearVelocity
) {
  BodyCreationSettings * selfCpp = static_cast<BodyCreationSettings *>(self->obj);
  selfCpp->mLinearVelocity = *reinterpret_cast<Vec3 *>(mLinearVelocity->obj);
};

JPC_Vec3_t * JPC_BodyCreationSettings_mAngularVelocity_Get(
  JPC_BodyCreationSettings_t * self
) {
  BodyCreationSettings * selfCpp = static_cast<BodyCreationSettings *>(self->obj);
  Vec3 resultValue = selfCpp->mAngularVelocity;
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JPC_Vec3_t *>(result);
};

void JPC_BodyCreationSettings_mAngularVelocity_Set(
  JPC_BodyCreationSettings_t * self,
  JPC_Vec3_t * mAngularVelocity
) {
  BodyCreationSettings * selfCpp = static_cast<BodyCreationSettings *>(self->obj);
  selfCpp->mAngularVelocity = *reinterpret_cast<Vec3 *>(mAngularVelocity->obj);
};

unsigned long long int JPC_BodyCreationSettings_mUserData_Get(
  JPC_BodyCreationSettings_t * self
) {
  BodyCreationSettings * selfCpp = static_cast<BodyCreationSettings *>(self->obj);
  unsigned long long int result = selfCpp->mUserData;
  return result;
};

void JPC_BodyCreationSettings_mUserData_Set(
  JPC_BodyCreationSettings_t * self,
  unsigned long long int mUserData
) {
  BodyCreationSettings * selfCpp = static_cast<BodyCreationSettings *>(self->obj);
  selfCpp->mUserData = mUserData;
};

unsigned long JPC_BodyCreationSettings_mObjectLayer_Get(
  JPC_BodyCreationSettings_t * self
) {
  BodyCreationSettings * selfCpp = static_cast<BodyCreationSettings *>(self->obj);
  unsigned long result = selfCpp->mObjectLayer;
  return result;
};

void JPC_BodyCreationSettings_mObjectLayer_Set(
  JPC_BodyCreationSettings_t * self,
  unsigned long mObjectLayer
) {
  BodyCreationSettings * selfCpp = static_cast<BodyCreationSettings *>(self->obj);
  selfCpp->mObjectLayer = mObjectLayer;
};

JPC_CollisionGroup_t * JPC_BodyCreationSettings_mCollisionGroup_Get(
  JPC_BodyCreationSettings_t * self
) {
  BodyCreationSettings * selfCpp = static_cast<BodyCreationSettings *>(self->obj);
  CollisionGroup resultValue = selfCpp->mCollisionGroup;
  CollisionGroup* result = new CollisionGroup(resultValue);
  return reinterpret_cast<JPC_CollisionGroup_t *>(result);
};

void JPC_BodyCreationSettings_mCollisionGroup_Set(
  JPC_BodyCreationSettings_t * self,
  JPC_CollisionGroup_t * mCollisionGroup
) {
  BodyCreationSettings * selfCpp = static_cast<BodyCreationSettings *>(self->obj);
  selfCpp->mCollisionGroup = *reinterpret_cast<CollisionGroup *>(mCollisionGroup->obj);
};

JPC_EMotionType JPC_BodyCreationSettings_mMotionType_Get(
  JPC_BodyCreationSettings_t * self
) {
  BodyCreationSettings * selfCpp = static_cast<BodyCreationSettings *>(self->obj);
  EMotionType result = selfCpp->mMotionType;
  return static_cast<JPC_EMotionType>(static_cast<int>(result));
};

void JPC_BodyCreationSettings_mMotionType_Set(
  JPC_BodyCreationSettings_t * self,
  JPC_EMotionType mMotionType
) {
  BodyCreationSettings * selfCpp = static_cast<BodyCreationSettings *>(self->obj);
  selfCpp->mMotionType = static_cast<EMotionType>(static_cast<int>(mMotionType));
};

JPC_EAllowedDOFs JPC_BodyCreationSettings_mAllowedDOFs_Get(
  JPC_BodyCreationSettings_t * self
) {
  BodyCreationSettings * selfCpp = static_cast<BodyCreationSettings *>(self->obj);
  EAllowedDOFs result = selfCpp->mAllowedDOFs;
  return static_cast<JPC_EAllowedDOFs>(static_cast<int>(result));
};

void JPC_BodyCreationSettings_mAllowedDOFs_Set(
  JPC_BodyCreationSettings_t * self,
  JPC_EAllowedDOFs mAllowedDOFs
) {
  BodyCreationSettings * selfCpp = static_cast<BodyCreationSettings *>(self->obj);
  selfCpp->mAllowedDOFs = static_cast<EAllowedDOFs>(static_cast<int>(mAllowedDOFs));
};

bool JPC_BodyCreationSettings_mAllowDynamicOrKinematic_Get(
  JPC_BodyCreationSettings_t * self
) {
  BodyCreationSettings * selfCpp = static_cast<BodyCreationSettings *>(self->obj);
  bool result = selfCpp->mAllowDynamicOrKinematic;
  return result;
};

void JPC_BodyCreationSettings_mAllowDynamicOrKinematic_Set(
  JPC_BodyCreationSettings_t * self,
  bool mAllowDynamicOrKinematic
) {
  BodyCreationSettings * selfCpp = static_cast<BodyCreationSettings *>(self->obj);
  selfCpp->mAllowDynamicOrKinematic = mAllowDynamicOrKinematic;
};

bool JPC_BodyCreationSettings_mIsSensor_Get(
  JPC_BodyCreationSettings_t * self
) {
  BodyCreationSettings * selfCpp = static_cast<BodyCreationSettings *>(self->obj);
  bool result = selfCpp->mIsSensor;
  return result;
};

void JPC_BodyCreationSettings_mIsSensor_Set(
  JPC_BodyCreationSettings_t * self,
  bool mIsSensor
) {
  BodyCreationSettings * selfCpp = static_cast<BodyCreationSettings *>(self->obj);
  selfCpp->mIsSensor = mIsSensor;
};

bool JPC_BodyCreationSettings_mUseManifoldReduction_Get(
  JPC_BodyCreationSettings_t * self
) {
  BodyCreationSettings * selfCpp = static_cast<BodyCreationSettings *>(self->obj);
  bool result = selfCpp->mUseManifoldReduction;
  return result;
};

void JPC_BodyCreationSettings_mUseManifoldReduction_Set(
  JPC_BodyCreationSettings_t * self,
  bool mUseManifoldReduction
) {
  BodyCreationSettings * selfCpp = static_cast<BodyCreationSettings *>(self->obj);
  selfCpp->mUseManifoldReduction = mUseManifoldReduction;
};

bool JPC_BodyCreationSettings_mCollideKinematicVsNonDynamic_Get(
  JPC_BodyCreationSettings_t * self
) {
  BodyCreationSettings * selfCpp = static_cast<BodyCreationSettings *>(self->obj);
  bool result = selfCpp->mCollideKinematicVsNonDynamic;
  return result;
};

void JPC_BodyCreationSettings_mCollideKinematicVsNonDynamic_Set(
  JPC_BodyCreationSettings_t * self,
  bool mCollideKinematicVsNonDynamic
) {
  BodyCreationSettings * selfCpp = static_cast<BodyCreationSettings *>(self->obj);
  selfCpp->mCollideKinematicVsNonDynamic = mCollideKinematicVsNonDynamic;
};

bool JPC_BodyCreationSettings_mApplyGyroscopicForce_Get(
  JPC_BodyCreationSettings_t * self
) {
  BodyCreationSettings * selfCpp = static_cast<BodyCreationSettings *>(self->obj);
  bool result = selfCpp->mApplyGyroscopicForce;
  return result;
};

void JPC_BodyCreationSettings_mApplyGyroscopicForce_Set(
  JPC_BodyCreationSettings_t * self,
  bool mApplyGyroscopicForce
) {
  BodyCreationSettings * selfCpp = static_cast<BodyCreationSettings *>(self->obj);
  selfCpp->mApplyGyroscopicForce = mApplyGyroscopicForce;
};

JPC_EMotionQuality JPC_BodyCreationSettings_mMotionQuality_Get(
  JPC_BodyCreationSettings_t * self
) {
  BodyCreationSettings * selfCpp = static_cast<BodyCreationSettings *>(self->obj);
  EMotionQuality result = selfCpp->mMotionQuality;
  return static_cast<JPC_EMotionQuality>(static_cast<int>(result));
};

void JPC_BodyCreationSettings_mMotionQuality_Set(
  JPC_BodyCreationSettings_t * self,
  JPC_EMotionQuality mMotionQuality
) {
  BodyCreationSettings * selfCpp = static_cast<BodyCreationSettings *>(self->obj);
  selfCpp->mMotionQuality = static_cast<EMotionQuality>(static_cast<int>(mMotionQuality));
};

bool JPC_BodyCreationSettings_mEnhancedInternalEdgeRemoval_Get(
  JPC_BodyCreationSettings_t * self
) {
  BodyCreationSettings * selfCpp = static_cast<BodyCreationSettings *>(self->obj);
  bool result = selfCpp->mEnhancedInternalEdgeRemoval;
  return result;
};

void JPC_BodyCreationSettings_mEnhancedInternalEdgeRemoval_Set(
  JPC_BodyCreationSettings_t * self,
  bool mEnhancedInternalEdgeRemoval
) {
  BodyCreationSettings * selfCpp = static_cast<BodyCreationSettings *>(self->obj);
  selfCpp->mEnhancedInternalEdgeRemoval = mEnhancedInternalEdgeRemoval;
};

bool JPC_BodyCreationSettings_mAllowSleeping_Get(
  JPC_BodyCreationSettings_t * self
) {
  BodyCreationSettings * selfCpp = static_cast<BodyCreationSettings *>(self->obj);
  bool result = selfCpp->mAllowSleeping;
  return result;
};

void JPC_BodyCreationSettings_mAllowSleeping_Set(
  JPC_BodyCreationSettings_t * self,
  bool mAllowSleeping
) {
  BodyCreationSettings * selfCpp = static_cast<BodyCreationSettings *>(self->obj);
  selfCpp->mAllowSleeping = mAllowSleeping;
};

float JPC_BodyCreationSettings_mFriction_Get(
  JPC_BodyCreationSettings_t * self
) {
  BodyCreationSettings * selfCpp = static_cast<BodyCreationSettings *>(self->obj);
  float result = selfCpp->mFriction;
  return result;
};

void JPC_BodyCreationSettings_mFriction_Set(
  JPC_BodyCreationSettings_t * self,
  float mFriction
) {
  BodyCreationSettings * selfCpp = static_cast<BodyCreationSettings *>(self->obj);
  selfCpp->mFriction = mFriction;
};

float JPC_BodyCreationSettings_mRestitution_Get(
  JPC_BodyCreationSettings_t * self
) {
  BodyCreationSettings * selfCpp = static_cast<BodyCreationSettings *>(self->obj);
  float result = selfCpp->mRestitution;
  return result;
};

void JPC_BodyCreationSettings_mRestitution_Set(
  JPC_BodyCreationSettings_t * self,
  float mRestitution
) {
  BodyCreationSettings * selfCpp = static_cast<BodyCreationSettings *>(self->obj);
  selfCpp->mRestitution = mRestitution;
};

float JPC_BodyCreationSettings_mLinearDamping_Get(
  JPC_BodyCreationSettings_t * self
) {
  BodyCreationSettings * selfCpp = static_cast<BodyCreationSettings *>(self->obj);
  float result = selfCpp->mLinearDamping;
  return result;
};

void JPC_BodyCreationSettings_mLinearDamping_Set(
  JPC_BodyCreationSettings_t * self,
  float mLinearDamping
) {
  BodyCreationSettings * selfCpp = static_cast<BodyCreationSettings *>(self->obj);
  selfCpp->mLinearDamping = mLinearDamping;
};

float JPC_BodyCreationSettings_mAngularDamping_Get(
  JPC_BodyCreationSettings_t * self
) {
  BodyCreationSettings * selfCpp = static_cast<BodyCreationSettings *>(self->obj);
  float result = selfCpp->mAngularDamping;
  return result;
};

void JPC_BodyCreationSettings_mAngularDamping_Set(
  JPC_BodyCreationSettings_t * self,
  float mAngularDamping
) {
  BodyCreationSettings * selfCpp = static_cast<BodyCreationSettings *>(self->obj);
  selfCpp->mAngularDamping = mAngularDamping;
};

float JPC_BodyCreationSettings_mMaxLinearVelocity_Get(
  JPC_BodyCreationSettings_t * self
) {
  BodyCreationSettings * selfCpp = static_cast<BodyCreationSettings *>(self->obj);
  float result = selfCpp->mMaxLinearVelocity;
  return result;
};

void JPC_BodyCreationSettings_mMaxLinearVelocity_Set(
  JPC_BodyCreationSettings_t * self,
  float mMaxLinearVelocity
) {
  BodyCreationSettings * selfCpp = static_cast<BodyCreationSettings *>(self->obj);
  selfCpp->mMaxLinearVelocity = mMaxLinearVelocity;
};

float JPC_BodyCreationSettings_mMaxAngularVelocity_Get(
  JPC_BodyCreationSettings_t * self
) {
  BodyCreationSettings * selfCpp = static_cast<BodyCreationSettings *>(self->obj);
  float result = selfCpp->mMaxAngularVelocity;
  return result;
};

void JPC_BodyCreationSettings_mMaxAngularVelocity_Set(
  JPC_BodyCreationSettings_t * self,
  float mMaxAngularVelocity
) {
  BodyCreationSettings * selfCpp = static_cast<BodyCreationSettings *>(self->obj);
  selfCpp->mMaxAngularVelocity = mMaxAngularVelocity;
};

float JPC_BodyCreationSettings_mGravityFactor_Get(
  JPC_BodyCreationSettings_t * self
) {
  BodyCreationSettings * selfCpp = static_cast<BodyCreationSettings *>(self->obj);
  float result = selfCpp->mGravityFactor;
  return result;
};

void JPC_BodyCreationSettings_mGravityFactor_Set(
  JPC_BodyCreationSettings_t * self,
  float mGravityFactor
) {
  BodyCreationSettings * selfCpp = static_cast<BodyCreationSettings *>(self->obj);
  selfCpp->mGravityFactor = mGravityFactor;
};

unsigned long JPC_BodyCreationSettings_mNumVelocityStepsOverride_Get(
  JPC_BodyCreationSettings_t * self
) {
  BodyCreationSettings * selfCpp = static_cast<BodyCreationSettings *>(self->obj);
  unsigned long result = selfCpp->mNumVelocityStepsOverride;
  return result;
};

void JPC_BodyCreationSettings_mNumVelocityStepsOverride_Set(
  JPC_BodyCreationSettings_t * self,
  unsigned long mNumVelocityStepsOverride
) {
  BodyCreationSettings * selfCpp = static_cast<BodyCreationSettings *>(self->obj);
  selfCpp->mNumVelocityStepsOverride = mNumVelocityStepsOverride;
};

unsigned long JPC_BodyCreationSettings_mNumPositionStepsOverride_Get(
  JPC_BodyCreationSettings_t * self
) {
  BodyCreationSettings * selfCpp = static_cast<BodyCreationSettings *>(self->obj);
  unsigned long result = selfCpp->mNumPositionStepsOverride;
  return result;
};

void JPC_BodyCreationSettings_mNumPositionStepsOverride_Set(
  JPC_BodyCreationSettings_t * self,
  unsigned long mNumPositionStepsOverride
) {
  BodyCreationSettings * selfCpp = static_cast<BodyCreationSettings *>(self->obj);
  selfCpp->mNumPositionStepsOverride = mNumPositionStepsOverride;
};

JPC_EOverrideMassProperties JPC_BodyCreationSettings_mOverrideMassProperties_Get(
  JPC_BodyCreationSettings_t * self
) {
  BodyCreationSettings * selfCpp = static_cast<BodyCreationSettings *>(self->obj);
  EOverrideMassProperties result = selfCpp->mOverrideMassProperties;
  return static_cast<JPC_EOverrideMassProperties>(static_cast<int>(result));
};

void JPC_BodyCreationSettings_mOverrideMassProperties_Set(
  JPC_BodyCreationSettings_t * self,
  JPC_EOverrideMassProperties mOverrideMassProperties
) {
  BodyCreationSettings * selfCpp = static_cast<BodyCreationSettings *>(self->obj);
  selfCpp->mOverrideMassProperties = static_cast<EOverrideMassProperties>(static_cast<int>(mOverrideMassProperties));
};

float JPC_BodyCreationSettings_mInertiaMultiplier_Get(
  JPC_BodyCreationSettings_t * self
) {
  BodyCreationSettings * selfCpp = static_cast<BodyCreationSettings *>(self->obj);
  float result = selfCpp->mInertiaMultiplier;
  return result;
};

void JPC_BodyCreationSettings_mInertiaMultiplier_Set(
  JPC_BodyCreationSettings_t * self,
  float mInertiaMultiplier
) {
  BodyCreationSettings * selfCpp = static_cast<BodyCreationSettings *>(self->obj);
  selfCpp->mInertiaMultiplier = mInertiaMultiplier;
};

JPC_MassProperties_t * JPC_BodyCreationSettings_mMassPropertiesOverride_Get(
  JPC_BodyCreationSettings_t * self
) {
  BodyCreationSettings * selfCpp = static_cast<BodyCreationSettings *>(self->obj);
  MassProperties resultValue = selfCpp->mMassPropertiesOverride;
  MassProperties* result = new MassProperties(resultValue);
  return reinterpret_cast<JPC_MassProperties_t *>(result);
};

void JPC_BodyCreationSettings_mMassPropertiesOverride_Set(
  JPC_BodyCreationSettings_t * self,
  JPC_MassProperties_t * mMassPropertiesOverride
) {
  BodyCreationSettings * selfCpp = static_cast<BodyCreationSettings *>(self->obj);
  selfCpp->mMassPropertiesOverride = *reinterpret_cast<MassProperties *>(mMassPropertiesOverride->obj);
};

//endregion properties

#ifdef __cplusplus
}
#endif

