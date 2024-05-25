#include "JoltC/JoltC_BodyCreationSettings.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_BodyCreationSettings_t * JoltC_BodyCreationSettings_new_0(
  char** outErrMsg
) {
  try {
    JoltC_BodyCreationSettings_t * cInstance = new JoltC_BodyCreationSettings_t();
    BodyCreationSettings * cppInstance = new BodyCreationSettings();
    cInstance->obj = cppInstance;
    return cInstance;
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

JoltC_BodyCreationSettings_t * JoltC_BodyCreationSettings_new_1(
  const JoltC_Shape_t * inShape,
  JoltC_RVec3_t * inPosition,
  JoltC_Quat_t * inRotation,
  JoltC_EMotionType inMotionType,
  unsigned long inObjectLayer,
  char** outErrMsg
) {
  try {
    JoltC_BodyCreationSettings_t * cInstance = new JoltC_BodyCreationSettings_t();
    BodyCreationSettings * cppInstance = new BodyCreationSettings(
      reinterpret_cast<Shape *>(inShape->obj),
      *reinterpret_cast<RVec3 *>(inPosition->obj),
      *reinterpret_cast<Quat *>(inRotation->obj),
      static_cast<EMotionType>(static_cast<int>(inMotionType)),
      inObjectLayer
    );
    cInstance->obj = cppInstance;
    return cInstance;
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

//endregion constructors

//region functions

const JoltC_ShapeSettings_t * JoltC_BodyCreationSettings_GetShapeSettings(
  JoltC_BodyCreationSettings_t * self,
  char** outErrMsg
) {
  try {
    BodyCreationSettings * selfCpp = static_cast<BodyCreationSettings *>(self->obj);
    const ShapeSettings * result = selfCpp->GetShapeSettings();
    return reinterpret_cast<const JoltC_ShapeSettings_t *>(result);
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_BodyCreationSettings_SetShapeSettings(
  JoltC_BodyCreationSettings_t * self,
  const JoltC_ShapeSettings_t * inShape,
  char** outErrMsg
) {
  try {
    BodyCreationSettings * selfCpp = static_cast<BodyCreationSettings *>(self->obj);
    
    selfCpp->SetShapeSettings(
    reinterpret_cast<ShapeSettings *>(inShape->obj)
    );
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

JoltC_Shape_ShapeResult_t * JoltC_BodyCreationSettings_ConvertShapeSettings(
  JoltC_BodyCreationSettings_t * self,
  char** outErrMsg
) {
  try {
    BodyCreationSettings * selfCpp = static_cast<BodyCreationSettings *>(self->obj);
    Shape::ShapeResult resultValue = selfCpp->ConvertShapeSettings();
    Shape::ShapeResult* result = new Shape::ShapeResult(resultValue);
    return reinterpret_cast<JoltC_Shape_ShapeResult_t *>(result);
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

const JoltC_Shape_t * JoltC_BodyCreationSettings_GetShape(
  JoltC_BodyCreationSettings_t * self,
  char** outErrMsg
) {
  try {
    BodyCreationSettings * selfCpp = static_cast<BodyCreationSettings *>(self->obj);
    const Shape * result = selfCpp->GetShape();
    return reinterpret_cast<const JoltC_Shape_t *>(result);
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_BodyCreationSettings_SetShape(
  JoltC_BodyCreationSettings_t * self,
  const JoltC_Shape_t * inShape,
  char** outErrMsg
) {
  try {
    BodyCreationSettings * selfCpp = static_cast<BodyCreationSettings *>(self->obj);
    
    selfCpp->SetShape(
    reinterpret_cast<Shape *>(inShape->obj)
    );
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

bool JoltC_BodyCreationSettings_HasMassProperties(
  JoltC_BodyCreationSettings_t * self,
  char** outErrMsg
) {
  try {
    BodyCreationSettings * selfCpp = static_cast<BodyCreationSettings *>(self->obj);
    bool result = selfCpp->HasMassProperties();
    return result;
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

JoltC_MassProperties_t * JoltC_BodyCreationSettings_GetMassProperties(
  JoltC_BodyCreationSettings_t * self,
  char** outErrMsg
) {
  try {
    BodyCreationSettings * selfCpp = static_cast<BodyCreationSettings *>(self->obj);
    MassProperties resultValue = selfCpp->GetMassProperties();
    MassProperties* result = new MassProperties(resultValue);
    return reinterpret_cast<JoltC_MassProperties_t *>(result);
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

//endregion functions

//region properties

JoltC_RVec3_t * JoltC_BodyCreationSettings_mPosition_Get(
  JoltC_BodyCreationSettings_t * self,
  char** outErrMsg
) {
  BodyCreationSettings * selfCpp = static_cast<BodyCreationSettings *>(self->obj);
  RVec3 resultValue = selfCpp->mPosition;
  RVec3* result = new RVec3(resultValue);
  return reinterpret_cast<JoltC_RVec3_t *>(result);
};

void JoltC_BodyCreationSettings_mPosition_Set(
  JoltC_BodyCreationSettings_t * self,
  JoltC_RVec3_t * mPosition,
  char** outErrMsg
) {
  BodyCreationSettings * selfCpp = static_cast<BodyCreationSettings *>(self->obj);
  selfCpp->mPosition = *reinterpret_cast<RVec3 *>(mPosition->obj);
};

JoltC_Quat_t * JoltC_BodyCreationSettings_mRotation_Get(
  JoltC_BodyCreationSettings_t * self,
  char** outErrMsg
) {
  BodyCreationSettings * selfCpp = static_cast<BodyCreationSettings *>(self->obj);
  Quat resultValue = selfCpp->mRotation;
  Quat* result = new Quat(resultValue);
  return reinterpret_cast<JoltC_Quat_t *>(result);
};

void JoltC_BodyCreationSettings_mRotation_Set(
  JoltC_BodyCreationSettings_t * self,
  JoltC_Quat_t * mRotation,
  char** outErrMsg
) {
  BodyCreationSettings * selfCpp = static_cast<BodyCreationSettings *>(self->obj);
  selfCpp->mRotation = *reinterpret_cast<Quat *>(mRotation->obj);
};

JoltC_Vec3_t * JoltC_BodyCreationSettings_mLinearVelocity_Get(
  JoltC_BodyCreationSettings_t * self,
  char** outErrMsg
) {
  BodyCreationSettings * selfCpp = static_cast<BodyCreationSettings *>(self->obj);
  Vec3 resultValue = selfCpp->mLinearVelocity;
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JoltC_Vec3_t *>(result);
};

void JoltC_BodyCreationSettings_mLinearVelocity_Set(
  JoltC_BodyCreationSettings_t * self,
  JoltC_Vec3_t * mLinearVelocity,
  char** outErrMsg
) {
  BodyCreationSettings * selfCpp = static_cast<BodyCreationSettings *>(self->obj);
  selfCpp->mLinearVelocity = *reinterpret_cast<Vec3 *>(mLinearVelocity->obj);
};

JoltC_Vec3_t * JoltC_BodyCreationSettings_mAngularVelocity_Get(
  JoltC_BodyCreationSettings_t * self,
  char** outErrMsg
) {
  BodyCreationSettings * selfCpp = static_cast<BodyCreationSettings *>(self->obj);
  Vec3 resultValue = selfCpp->mAngularVelocity;
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JoltC_Vec3_t *>(result);
};

void JoltC_BodyCreationSettings_mAngularVelocity_Set(
  JoltC_BodyCreationSettings_t * self,
  JoltC_Vec3_t * mAngularVelocity,
  char** outErrMsg
) {
  BodyCreationSettings * selfCpp = static_cast<BodyCreationSettings *>(self->obj);
  selfCpp->mAngularVelocity = *reinterpret_cast<Vec3 *>(mAngularVelocity->obj);
};

unsigned long long int JoltC_BodyCreationSettings_mUserData_Get(
  JoltC_BodyCreationSettings_t * self,
  char** outErrMsg
) {
  BodyCreationSettings * selfCpp = static_cast<BodyCreationSettings *>(self->obj);
  unsigned long long int result = selfCpp->mUserData;
  return result;
};

void JoltC_BodyCreationSettings_mUserData_Set(
  JoltC_BodyCreationSettings_t * self,
  unsigned long long int mUserData,
  char** outErrMsg
) {
  BodyCreationSettings * selfCpp = static_cast<BodyCreationSettings *>(self->obj);
  selfCpp->mUserData = mUserData;
};

unsigned long JoltC_BodyCreationSettings_mObjectLayer_Get(
  JoltC_BodyCreationSettings_t * self,
  char** outErrMsg
) {
  BodyCreationSettings * selfCpp = static_cast<BodyCreationSettings *>(self->obj);
  unsigned long result = selfCpp->mObjectLayer;
  return result;
};

void JoltC_BodyCreationSettings_mObjectLayer_Set(
  JoltC_BodyCreationSettings_t * self,
  unsigned long mObjectLayer,
  char** outErrMsg
) {
  BodyCreationSettings * selfCpp = static_cast<BodyCreationSettings *>(self->obj);
  selfCpp->mObjectLayer = mObjectLayer;
};

JoltC_CollisionGroup_t * JoltC_BodyCreationSettings_mCollisionGroup_Get(
  JoltC_BodyCreationSettings_t * self,
  char** outErrMsg
) {
  BodyCreationSettings * selfCpp = static_cast<BodyCreationSettings *>(self->obj);
  CollisionGroup resultValue = selfCpp->mCollisionGroup;
  CollisionGroup* result = new CollisionGroup(resultValue);
  return reinterpret_cast<JoltC_CollisionGroup_t *>(result);
};

void JoltC_BodyCreationSettings_mCollisionGroup_Set(
  JoltC_BodyCreationSettings_t * self,
  JoltC_CollisionGroup_t * mCollisionGroup,
  char** outErrMsg
) {
  BodyCreationSettings * selfCpp = static_cast<BodyCreationSettings *>(self->obj);
  selfCpp->mCollisionGroup = *reinterpret_cast<CollisionGroup *>(mCollisionGroup->obj);
};

JoltC_EMotionType JoltC_BodyCreationSettings_mMotionType_Get(
  JoltC_BodyCreationSettings_t * self,
  char** outErrMsg
) {
  BodyCreationSettings * selfCpp = static_cast<BodyCreationSettings *>(self->obj);
  EMotionType result = selfCpp->mMotionType;
  return static_cast<JoltC_EMotionType>(static_cast<int>(result));
};

void JoltC_BodyCreationSettings_mMotionType_Set(
  JoltC_BodyCreationSettings_t * self,
  JoltC_EMotionType mMotionType,
  char** outErrMsg
) {
  BodyCreationSettings * selfCpp = static_cast<BodyCreationSettings *>(self->obj);
  selfCpp->mMotionType = static_cast<EMotionType>(static_cast<int>(mMotionType));
};

JoltC_EAllowedDOFs JoltC_BodyCreationSettings_mAllowedDOFs_Get(
  JoltC_BodyCreationSettings_t * self,
  char** outErrMsg
) {
  BodyCreationSettings * selfCpp = static_cast<BodyCreationSettings *>(self->obj);
  EAllowedDOFs result = selfCpp->mAllowedDOFs;
  return static_cast<JoltC_EAllowedDOFs>(static_cast<int>(result));
};

void JoltC_BodyCreationSettings_mAllowedDOFs_Set(
  JoltC_BodyCreationSettings_t * self,
  JoltC_EAllowedDOFs mAllowedDOFs,
  char** outErrMsg
) {
  BodyCreationSettings * selfCpp = static_cast<BodyCreationSettings *>(self->obj);
  selfCpp->mAllowedDOFs = static_cast<EAllowedDOFs>(static_cast<int>(mAllowedDOFs));
};

bool JoltC_BodyCreationSettings_mAllowDynamicOrKinematic_Get(
  JoltC_BodyCreationSettings_t * self,
  char** outErrMsg
) {
  BodyCreationSettings * selfCpp = static_cast<BodyCreationSettings *>(self->obj);
  bool result = selfCpp->mAllowDynamicOrKinematic;
  return result;
};

void JoltC_BodyCreationSettings_mAllowDynamicOrKinematic_Set(
  JoltC_BodyCreationSettings_t * self,
  bool mAllowDynamicOrKinematic,
  char** outErrMsg
) {
  BodyCreationSettings * selfCpp = static_cast<BodyCreationSettings *>(self->obj);
  selfCpp->mAllowDynamicOrKinematic = mAllowDynamicOrKinematic;
};

bool JoltC_BodyCreationSettings_mIsSensor_Get(
  JoltC_BodyCreationSettings_t * self,
  char** outErrMsg
) {
  BodyCreationSettings * selfCpp = static_cast<BodyCreationSettings *>(self->obj);
  bool result = selfCpp->mIsSensor;
  return result;
};

void JoltC_BodyCreationSettings_mIsSensor_Set(
  JoltC_BodyCreationSettings_t * self,
  bool mIsSensor,
  char** outErrMsg
) {
  BodyCreationSettings * selfCpp = static_cast<BodyCreationSettings *>(self->obj);
  selfCpp->mIsSensor = mIsSensor;
};

bool JoltC_BodyCreationSettings_mUseManifoldReduction_Get(
  JoltC_BodyCreationSettings_t * self,
  char** outErrMsg
) {
  BodyCreationSettings * selfCpp = static_cast<BodyCreationSettings *>(self->obj);
  bool result = selfCpp->mUseManifoldReduction;
  return result;
};

void JoltC_BodyCreationSettings_mUseManifoldReduction_Set(
  JoltC_BodyCreationSettings_t * self,
  bool mUseManifoldReduction,
  char** outErrMsg
) {
  BodyCreationSettings * selfCpp = static_cast<BodyCreationSettings *>(self->obj);
  selfCpp->mUseManifoldReduction = mUseManifoldReduction;
};

bool JoltC_BodyCreationSettings_mCollideKinematicVsNonDynamic_Get(
  JoltC_BodyCreationSettings_t * self,
  char** outErrMsg
) {
  BodyCreationSettings * selfCpp = static_cast<BodyCreationSettings *>(self->obj);
  bool result = selfCpp->mCollideKinematicVsNonDynamic;
  return result;
};

void JoltC_BodyCreationSettings_mCollideKinematicVsNonDynamic_Set(
  JoltC_BodyCreationSettings_t * self,
  bool mCollideKinematicVsNonDynamic,
  char** outErrMsg
) {
  BodyCreationSettings * selfCpp = static_cast<BodyCreationSettings *>(self->obj);
  selfCpp->mCollideKinematicVsNonDynamic = mCollideKinematicVsNonDynamic;
};

bool JoltC_BodyCreationSettings_mApplyGyroscopicForce_Get(
  JoltC_BodyCreationSettings_t * self,
  char** outErrMsg
) {
  BodyCreationSettings * selfCpp = static_cast<BodyCreationSettings *>(self->obj);
  bool result = selfCpp->mApplyGyroscopicForce;
  return result;
};

void JoltC_BodyCreationSettings_mApplyGyroscopicForce_Set(
  JoltC_BodyCreationSettings_t * self,
  bool mApplyGyroscopicForce,
  char** outErrMsg
) {
  BodyCreationSettings * selfCpp = static_cast<BodyCreationSettings *>(self->obj);
  selfCpp->mApplyGyroscopicForce = mApplyGyroscopicForce;
};

JoltC_EMotionQuality JoltC_BodyCreationSettings_mMotionQuality_Get(
  JoltC_BodyCreationSettings_t * self,
  char** outErrMsg
) {
  BodyCreationSettings * selfCpp = static_cast<BodyCreationSettings *>(self->obj);
  EMotionQuality result = selfCpp->mMotionQuality;
  return static_cast<JoltC_EMotionQuality>(static_cast<int>(result));
};

void JoltC_BodyCreationSettings_mMotionQuality_Set(
  JoltC_BodyCreationSettings_t * self,
  JoltC_EMotionQuality mMotionQuality,
  char** outErrMsg
) {
  BodyCreationSettings * selfCpp = static_cast<BodyCreationSettings *>(self->obj);
  selfCpp->mMotionQuality = static_cast<EMotionQuality>(static_cast<int>(mMotionQuality));
};

bool JoltC_BodyCreationSettings_mEnhancedInternalEdgeRemoval_Get(
  JoltC_BodyCreationSettings_t * self,
  char** outErrMsg
) {
  BodyCreationSettings * selfCpp = static_cast<BodyCreationSettings *>(self->obj);
  bool result = selfCpp->mEnhancedInternalEdgeRemoval;
  return result;
};

void JoltC_BodyCreationSettings_mEnhancedInternalEdgeRemoval_Set(
  JoltC_BodyCreationSettings_t * self,
  bool mEnhancedInternalEdgeRemoval,
  char** outErrMsg
) {
  BodyCreationSettings * selfCpp = static_cast<BodyCreationSettings *>(self->obj);
  selfCpp->mEnhancedInternalEdgeRemoval = mEnhancedInternalEdgeRemoval;
};

bool JoltC_BodyCreationSettings_mAllowSleeping_Get(
  JoltC_BodyCreationSettings_t * self,
  char** outErrMsg
) {
  BodyCreationSettings * selfCpp = static_cast<BodyCreationSettings *>(self->obj);
  bool result = selfCpp->mAllowSleeping;
  return result;
};

void JoltC_BodyCreationSettings_mAllowSleeping_Set(
  JoltC_BodyCreationSettings_t * self,
  bool mAllowSleeping,
  char** outErrMsg
) {
  BodyCreationSettings * selfCpp = static_cast<BodyCreationSettings *>(self->obj);
  selfCpp->mAllowSleeping = mAllowSleeping;
};

float JoltC_BodyCreationSettings_mFriction_Get(
  JoltC_BodyCreationSettings_t * self,
  char** outErrMsg
) {
  BodyCreationSettings * selfCpp = static_cast<BodyCreationSettings *>(self->obj);
  float result = selfCpp->mFriction;
  return result;
};

void JoltC_BodyCreationSettings_mFriction_Set(
  JoltC_BodyCreationSettings_t * self,
  float mFriction,
  char** outErrMsg
) {
  BodyCreationSettings * selfCpp = static_cast<BodyCreationSettings *>(self->obj);
  selfCpp->mFriction = mFriction;
};

float JoltC_BodyCreationSettings_mRestitution_Get(
  JoltC_BodyCreationSettings_t * self,
  char** outErrMsg
) {
  BodyCreationSettings * selfCpp = static_cast<BodyCreationSettings *>(self->obj);
  float result = selfCpp->mRestitution;
  return result;
};

void JoltC_BodyCreationSettings_mRestitution_Set(
  JoltC_BodyCreationSettings_t * self,
  float mRestitution,
  char** outErrMsg
) {
  BodyCreationSettings * selfCpp = static_cast<BodyCreationSettings *>(self->obj);
  selfCpp->mRestitution = mRestitution;
};

float JoltC_BodyCreationSettings_mLinearDamping_Get(
  JoltC_BodyCreationSettings_t * self,
  char** outErrMsg
) {
  BodyCreationSettings * selfCpp = static_cast<BodyCreationSettings *>(self->obj);
  float result = selfCpp->mLinearDamping;
  return result;
};

void JoltC_BodyCreationSettings_mLinearDamping_Set(
  JoltC_BodyCreationSettings_t * self,
  float mLinearDamping,
  char** outErrMsg
) {
  BodyCreationSettings * selfCpp = static_cast<BodyCreationSettings *>(self->obj);
  selfCpp->mLinearDamping = mLinearDamping;
};

float JoltC_BodyCreationSettings_mAngularDamping_Get(
  JoltC_BodyCreationSettings_t * self,
  char** outErrMsg
) {
  BodyCreationSettings * selfCpp = static_cast<BodyCreationSettings *>(self->obj);
  float result = selfCpp->mAngularDamping;
  return result;
};

void JoltC_BodyCreationSettings_mAngularDamping_Set(
  JoltC_BodyCreationSettings_t * self,
  float mAngularDamping,
  char** outErrMsg
) {
  BodyCreationSettings * selfCpp = static_cast<BodyCreationSettings *>(self->obj);
  selfCpp->mAngularDamping = mAngularDamping;
};

float JoltC_BodyCreationSettings_mMaxLinearVelocity_Get(
  JoltC_BodyCreationSettings_t * self,
  char** outErrMsg
) {
  BodyCreationSettings * selfCpp = static_cast<BodyCreationSettings *>(self->obj);
  float result = selfCpp->mMaxLinearVelocity;
  return result;
};

void JoltC_BodyCreationSettings_mMaxLinearVelocity_Set(
  JoltC_BodyCreationSettings_t * self,
  float mMaxLinearVelocity,
  char** outErrMsg
) {
  BodyCreationSettings * selfCpp = static_cast<BodyCreationSettings *>(self->obj);
  selfCpp->mMaxLinearVelocity = mMaxLinearVelocity;
};

float JoltC_BodyCreationSettings_mMaxAngularVelocity_Get(
  JoltC_BodyCreationSettings_t * self,
  char** outErrMsg
) {
  BodyCreationSettings * selfCpp = static_cast<BodyCreationSettings *>(self->obj);
  float result = selfCpp->mMaxAngularVelocity;
  return result;
};

void JoltC_BodyCreationSettings_mMaxAngularVelocity_Set(
  JoltC_BodyCreationSettings_t * self,
  float mMaxAngularVelocity,
  char** outErrMsg
) {
  BodyCreationSettings * selfCpp = static_cast<BodyCreationSettings *>(self->obj);
  selfCpp->mMaxAngularVelocity = mMaxAngularVelocity;
};

float JoltC_BodyCreationSettings_mGravityFactor_Get(
  JoltC_BodyCreationSettings_t * self,
  char** outErrMsg
) {
  BodyCreationSettings * selfCpp = static_cast<BodyCreationSettings *>(self->obj);
  float result = selfCpp->mGravityFactor;
  return result;
};

void JoltC_BodyCreationSettings_mGravityFactor_Set(
  JoltC_BodyCreationSettings_t * self,
  float mGravityFactor,
  char** outErrMsg
) {
  BodyCreationSettings * selfCpp = static_cast<BodyCreationSettings *>(self->obj);
  selfCpp->mGravityFactor = mGravityFactor;
};

unsigned long JoltC_BodyCreationSettings_mNumVelocityStepsOverride_Get(
  JoltC_BodyCreationSettings_t * self,
  char** outErrMsg
) {
  BodyCreationSettings * selfCpp = static_cast<BodyCreationSettings *>(self->obj);
  unsigned long result = selfCpp->mNumVelocityStepsOverride;
  return result;
};

void JoltC_BodyCreationSettings_mNumVelocityStepsOverride_Set(
  JoltC_BodyCreationSettings_t * self,
  unsigned long mNumVelocityStepsOverride,
  char** outErrMsg
) {
  BodyCreationSettings * selfCpp = static_cast<BodyCreationSettings *>(self->obj);
  selfCpp->mNumVelocityStepsOverride = mNumVelocityStepsOverride;
};

unsigned long JoltC_BodyCreationSettings_mNumPositionStepsOverride_Get(
  JoltC_BodyCreationSettings_t * self,
  char** outErrMsg
) {
  BodyCreationSettings * selfCpp = static_cast<BodyCreationSettings *>(self->obj);
  unsigned long result = selfCpp->mNumPositionStepsOverride;
  return result;
};

void JoltC_BodyCreationSettings_mNumPositionStepsOverride_Set(
  JoltC_BodyCreationSettings_t * self,
  unsigned long mNumPositionStepsOverride,
  char** outErrMsg
) {
  BodyCreationSettings * selfCpp = static_cast<BodyCreationSettings *>(self->obj);
  selfCpp->mNumPositionStepsOverride = mNumPositionStepsOverride;
};

JoltC_EOverrideMassProperties JoltC_BodyCreationSettings_mOverrideMassProperties_Get(
  JoltC_BodyCreationSettings_t * self,
  char** outErrMsg
) {
  BodyCreationSettings * selfCpp = static_cast<BodyCreationSettings *>(self->obj);
  EOverrideMassProperties result = selfCpp->mOverrideMassProperties;
  return static_cast<JoltC_EOverrideMassProperties>(static_cast<int>(result));
};

void JoltC_BodyCreationSettings_mOverrideMassProperties_Set(
  JoltC_BodyCreationSettings_t * self,
  JoltC_EOverrideMassProperties mOverrideMassProperties,
  char** outErrMsg
) {
  BodyCreationSettings * selfCpp = static_cast<BodyCreationSettings *>(self->obj);
  selfCpp->mOverrideMassProperties = static_cast<EOverrideMassProperties>(static_cast<int>(mOverrideMassProperties));
};

float JoltC_BodyCreationSettings_mInertiaMultiplier_Get(
  JoltC_BodyCreationSettings_t * self,
  char** outErrMsg
) {
  BodyCreationSettings * selfCpp = static_cast<BodyCreationSettings *>(self->obj);
  float result = selfCpp->mInertiaMultiplier;
  return result;
};

void JoltC_BodyCreationSettings_mInertiaMultiplier_Set(
  JoltC_BodyCreationSettings_t * self,
  float mInertiaMultiplier,
  char** outErrMsg
) {
  BodyCreationSettings * selfCpp = static_cast<BodyCreationSettings *>(self->obj);
  selfCpp->mInertiaMultiplier = mInertiaMultiplier;
};

JoltC_MassProperties_t * JoltC_BodyCreationSettings_mMassPropertiesOverride_Get(
  JoltC_BodyCreationSettings_t * self,
  char** outErrMsg
) {
  BodyCreationSettings * selfCpp = static_cast<BodyCreationSettings *>(self->obj);
  MassProperties resultValue = selfCpp->mMassPropertiesOverride;
  MassProperties* result = new MassProperties(resultValue);
  return reinterpret_cast<JoltC_MassProperties_t *>(result);
};

void JoltC_BodyCreationSettings_mMassPropertiesOverride_Set(
  JoltC_BodyCreationSettings_t * self,
  JoltC_MassProperties_t * mMassPropertiesOverride,
  char** outErrMsg
) {
  BodyCreationSettings * selfCpp = static_cast<BodyCreationSettings *>(self->obj);
  selfCpp->mMassPropertiesOverride = *reinterpret_cast<MassProperties *>(mMassPropertiesOverride->obj);
};

//endregion properties

#ifdef __cplusplus
}
#endif
