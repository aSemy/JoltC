#include "JoltC/JoltC_SwingTwistConstraintSettings.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

/**
  Construct a new `SwingTwistConstraintSettings` instance.
 */
JoltC_SwingTwistConstraintSettings_t * JoltC_SwingTwistConstraintSettings_new() {
  JoltC_SwingTwistConstraintSettings_t * cInstance = new JoltC_SwingTwistConstraintSettings_t();
  SwingTwistConstraintSettings * cppInstance = new SwingTwistConstraintSettings();
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion

//region functions

JoltC_Constraint_t * JoltC_SwingTwistConstraintSettings_Create(
  JoltC_SwingTwistConstraintSettings_t * self,
  JoltC_Body_t * inBody1,
  JoltC_Body_t * inBody2
) {
  SwingTwistConstraintSettings * selfCpp = static_cast<SwingTwistConstraintSettings *>(self->obj);
  Body * inBody1Cpp = static_cast<Body *>(inBody1->obj);
  Body * inBody2Cpp = static_cast<Body *>(inBody2->obj);
  const Constraint * resultPtr = selfCpp->Create(
    *inBody1Cpp,
    *inBody2Cpp
  );
  JoltC_Constraint_t * result = new JoltC_Constraint_t();
  result->obj = const_cast<void *>(reinterpret_cast<const void *>(resultPtr));
  return result;
}

unsigned long JoltC_SwingTwistConstraintSettings_GetRefCount(
  JoltC_SwingTwistConstraintSettings_t * self
) {
  SwingTwistConstraintSettings * selfCpp = static_cast<SwingTwistConstraintSettings *>(self->obj);
  return selfCpp->GetRefCount();
}

void JoltC_SwingTwistConstraintSettings_AddRef(
  JoltC_SwingTwistConstraintSettings_t * self
) {
  SwingTwistConstraintSettings * selfCpp = static_cast<SwingTwistConstraintSettings *>(self->obj);
  selfCpp->AddRef();
}

void JoltC_SwingTwistConstraintSettings_Release(
  JoltC_SwingTwistConstraintSettings_t * self
) {
  SwingTwistConstraintSettings * selfCpp = static_cast<SwingTwistConstraintSettings *>(self->obj);
  selfCpp->Release();
}

//endregion

//region properties

JoltC_EConstraintSpace JoltC_SwingTwistConstraintSettings_mSpace_Get(
  JoltC_SwingTwistConstraintSettings_t * self
) {
  SwingTwistConstraintSettings * selfCpp = static_cast<SwingTwistConstraintSettings *>(self->obj);
  EConstraintSpace result = selfCpp->mSpace;
  return static_cast<JoltC_EConstraintSpace>(static_cast<int>(result));
}

void JoltC_SwingTwistConstraintSettings_mSpace_Set(
  JoltC_SwingTwistConstraintSettings_t * self,
  JoltC_EConstraintSpace mSpace
) {
  SwingTwistConstraintSettings * selfCpp = static_cast<SwingTwistConstraintSettings *>(self->obj);
  selfCpp->mSpace = static_cast<EConstraintSpace>(static_cast<int>(mSpace));
};

JoltC_RVec3_t * JoltC_SwingTwistConstraintSettings_mPosition1_Get(
  JoltC_SwingTwistConstraintSettings_t * self
) {
  SwingTwistConstraintSettings * selfCpp = static_cast<SwingTwistConstraintSettings *>(self->obj);
  RVec3 * resultPtr = new RVec3();
  *resultPtr = selfCpp->mPosition1;
  JoltC_RVec3_t * result = new JoltC_RVec3_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

void JoltC_SwingTwistConstraintSettings_mPosition1_Set(
  JoltC_SwingTwistConstraintSettings_t * self,
  JoltC_RVec3_t * mPosition1
) {
  SwingTwistConstraintSettings * selfCpp = static_cast<SwingTwistConstraintSettings *>(self->obj);
  selfCpp->mPosition1 = *static_cast<RVec3 *>(mPosition1->obj);
};

JoltC_Vec3_t * JoltC_SwingTwistConstraintSettings_mTwistAxis1_Get(
  JoltC_SwingTwistConstraintSettings_t * self
) {
  SwingTwistConstraintSettings * selfCpp = static_cast<SwingTwistConstraintSettings *>(self->obj);
  Vec3 * resultPtr = new Vec3();
  *resultPtr = selfCpp->mTwistAxis1;
  JoltC_Vec3_t * result = new JoltC_Vec3_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

void JoltC_SwingTwistConstraintSettings_mTwistAxis1_Set(
  JoltC_SwingTwistConstraintSettings_t * self,
  JoltC_Vec3_t * mTwistAxis1
) {
  SwingTwistConstraintSettings * selfCpp = static_cast<SwingTwistConstraintSettings *>(self->obj);
  selfCpp->mTwistAxis1 = *static_cast<Vec3 *>(mTwistAxis1->obj);
};

JoltC_Vec3_t * JoltC_SwingTwistConstraintSettings_mPlaneAxis1_Get(
  JoltC_SwingTwistConstraintSettings_t * self
) {
  SwingTwistConstraintSettings * selfCpp = static_cast<SwingTwistConstraintSettings *>(self->obj);
  Vec3 * resultPtr = new Vec3();
  *resultPtr = selfCpp->mPlaneAxis1;
  JoltC_Vec3_t * result = new JoltC_Vec3_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

void JoltC_SwingTwistConstraintSettings_mPlaneAxis1_Set(
  JoltC_SwingTwistConstraintSettings_t * self,
  JoltC_Vec3_t * mPlaneAxis1
) {
  SwingTwistConstraintSettings * selfCpp = static_cast<SwingTwistConstraintSettings *>(self->obj);
  selfCpp->mPlaneAxis1 = *static_cast<Vec3 *>(mPlaneAxis1->obj);
};

JoltC_RVec3_t * JoltC_SwingTwistConstraintSettings_mPosition2_Get(
  JoltC_SwingTwistConstraintSettings_t * self
) {
  SwingTwistConstraintSettings * selfCpp = static_cast<SwingTwistConstraintSettings *>(self->obj);
  RVec3 * resultPtr = new RVec3();
  *resultPtr = selfCpp->mPosition2;
  JoltC_RVec3_t * result = new JoltC_RVec3_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

void JoltC_SwingTwistConstraintSettings_mPosition2_Set(
  JoltC_SwingTwistConstraintSettings_t * self,
  JoltC_RVec3_t * mPosition2
) {
  SwingTwistConstraintSettings * selfCpp = static_cast<SwingTwistConstraintSettings *>(self->obj);
  selfCpp->mPosition2 = *static_cast<RVec3 *>(mPosition2->obj);
};

JoltC_Vec3_t * JoltC_SwingTwistConstraintSettings_mTwistAxis2_Get(
  JoltC_SwingTwistConstraintSettings_t * self
) {
  SwingTwistConstraintSettings * selfCpp = static_cast<SwingTwistConstraintSettings *>(self->obj);
  Vec3 * resultPtr = new Vec3();
  *resultPtr = selfCpp->mTwistAxis2;
  JoltC_Vec3_t * result = new JoltC_Vec3_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

void JoltC_SwingTwistConstraintSettings_mTwistAxis2_Set(
  JoltC_SwingTwistConstraintSettings_t * self,
  JoltC_Vec3_t * mTwistAxis2
) {
  SwingTwistConstraintSettings * selfCpp = static_cast<SwingTwistConstraintSettings *>(self->obj);
  selfCpp->mTwistAxis2 = *static_cast<Vec3 *>(mTwistAxis2->obj);
};

JoltC_Vec3_t * JoltC_SwingTwistConstraintSettings_mPlaneAxis2_Get(
  JoltC_SwingTwistConstraintSettings_t * self
) {
  SwingTwistConstraintSettings * selfCpp = static_cast<SwingTwistConstraintSettings *>(self->obj);
  Vec3 * resultPtr = new Vec3();
  *resultPtr = selfCpp->mPlaneAxis2;
  JoltC_Vec3_t * result = new JoltC_Vec3_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

void JoltC_SwingTwistConstraintSettings_mPlaneAxis2_Set(
  JoltC_SwingTwistConstraintSettings_t * self,
  JoltC_Vec3_t * mPlaneAxis2
) {
  SwingTwistConstraintSettings * selfCpp = static_cast<SwingTwistConstraintSettings *>(self->obj);
  selfCpp->mPlaneAxis2 = *static_cast<Vec3 *>(mPlaneAxis2->obj);
};

JoltC_ESwingType JoltC_SwingTwistConstraintSettings_mSwingType_Get(
  JoltC_SwingTwistConstraintSettings_t * self
) {
  SwingTwistConstraintSettings * selfCpp = static_cast<SwingTwistConstraintSettings *>(self->obj);
  ESwingType result = selfCpp->mSwingType;
  return static_cast<JoltC_ESwingType>(static_cast<int>(result));
}

void JoltC_SwingTwistConstraintSettings_mSwingType_Set(
  JoltC_SwingTwistConstraintSettings_t * self,
  JoltC_ESwingType mSwingType
) {
  SwingTwistConstraintSettings * selfCpp = static_cast<SwingTwistConstraintSettings *>(self->obj);
  selfCpp->mSwingType = static_cast<ESwingType>(static_cast<int>(mSwingType));
};

float JoltC_SwingTwistConstraintSettings_mNormalHalfConeAngle_Get(
  JoltC_SwingTwistConstraintSettings_t * self
) {
  SwingTwistConstraintSettings * selfCpp = static_cast<SwingTwistConstraintSettings *>(self->obj);
  return selfCpp->mNormalHalfConeAngle;
}

void JoltC_SwingTwistConstraintSettings_mNormalHalfConeAngle_Set(
  JoltC_SwingTwistConstraintSettings_t * self,
  float mNormalHalfConeAngle
) {
  SwingTwistConstraintSettings * selfCpp = static_cast<SwingTwistConstraintSettings *>(self->obj);
  selfCpp->mNormalHalfConeAngle = mNormalHalfConeAngle;
};

float JoltC_SwingTwistConstraintSettings_mPlaneHalfConeAngle_Get(
  JoltC_SwingTwistConstraintSettings_t * self
) {
  SwingTwistConstraintSettings * selfCpp = static_cast<SwingTwistConstraintSettings *>(self->obj);
  return selfCpp->mPlaneHalfConeAngle;
}

void JoltC_SwingTwistConstraintSettings_mPlaneHalfConeAngle_Set(
  JoltC_SwingTwistConstraintSettings_t * self,
  float mPlaneHalfConeAngle
) {
  SwingTwistConstraintSettings * selfCpp = static_cast<SwingTwistConstraintSettings *>(self->obj);
  selfCpp->mPlaneHalfConeAngle = mPlaneHalfConeAngle;
};

float JoltC_SwingTwistConstraintSettings_mTwistMinAngle_Get(
  JoltC_SwingTwistConstraintSettings_t * self
) {
  SwingTwistConstraintSettings * selfCpp = static_cast<SwingTwistConstraintSettings *>(self->obj);
  return selfCpp->mTwistMinAngle;
}

void JoltC_SwingTwistConstraintSettings_mTwistMinAngle_Set(
  JoltC_SwingTwistConstraintSettings_t * self,
  float mTwistMinAngle
) {
  SwingTwistConstraintSettings * selfCpp = static_cast<SwingTwistConstraintSettings *>(self->obj);
  selfCpp->mTwistMinAngle = mTwistMinAngle;
};

float JoltC_SwingTwistConstraintSettings_mTwistMaxAngle_Get(
  JoltC_SwingTwistConstraintSettings_t * self
) {
  SwingTwistConstraintSettings * selfCpp = static_cast<SwingTwistConstraintSettings *>(self->obj);
  return selfCpp->mTwistMaxAngle;
}

void JoltC_SwingTwistConstraintSettings_mTwistMaxAngle_Set(
  JoltC_SwingTwistConstraintSettings_t * self,
  float mTwistMaxAngle
) {
  SwingTwistConstraintSettings * selfCpp = static_cast<SwingTwistConstraintSettings *>(self->obj);
  selfCpp->mTwistMaxAngle = mTwistMaxAngle;
};

float JoltC_SwingTwistConstraintSettings_mMaxFrictionTorque_Get(
  JoltC_SwingTwistConstraintSettings_t * self
) {
  SwingTwistConstraintSettings * selfCpp = static_cast<SwingTwistConstraintSettings *>(self->obj);
  return selfCpp->mMaxFrictionTorque;
}

void JoltC_SwingTwistConstraintSettings_mMaxFrictionTorque_Set(
  JoltC_SwingTwistConstraintSettings_t * self,
  float mMaxFrictionTorque
) {
  SwingTwistConstraintSettings * selfCpp = static_cast<SwingTwistConstraintSettings *>(self->obj);
  selfCpp->mMaxFrictionTorque = mMaxFrictionTorque;
};

JoltC_MotorSettings_t * JoltC_SwingTwistConstraintSettings_mSwingMotorSettings_Get(
  JoltC_SwingTwistConstraintSettings_t * self
) {
  SwingTwistConstraintSettings * selfCpp = static_cast<SwingTwistConstraintSettings *>(self->obj);
  MotorSettings * resultPtr = new MotorSettings();
  *resultPtr = selfCpp->mSwingMotorSettings;
  JoltC_MotorSettings_t * result = new JoltC_MotorSettings_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

void JoltC_SwingTwistConstraintSettings_mSwingMotorSettings_Set(
  JoltC_SwingTwistConstraintSettings_t * self,
  JoltC_MotorSettings_t * mSwingMotorSettings
) {
  SwingTwistConstraintSettings * selfCpp = static_cast<SwingTwistConstraintSettings *>(self->obj);
  selfCpp->mSwingMotorSettings = *static_cast<MotorSettings *>(mSwingMotorSettings->obj);
};

JoltC_MotorSettings_t * JoltC_SwingTwistConstraintSettings_mTwistMotorSettings_Get(
  JoltC_SwingTwistConstraintSettings_t * self
) {
  SwingTwistConstraintSettings * selfCpp = static_cast<SwingTwistConstraintSettings *>(self->obj);
  MotorSettings * resultPtr = new MotorSettings();
  *resultPtr = selfCpp->mTwistMotorSettings;
  JoltC_MotorSettings_t * result = new JoltC_MotorSettings_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

void JoltC_SwingTwistConstraintSettings_mTwistMotorSettings_Set(
  JoltC_SwingTwistConstraintSettings_t * self,
  JoltC_MotorSettings_t * mTwistMotorSettings
) {
  SwingTwistConstraintSettings * selfCpp = static_cast<SwingTwistConstraintSettings *>(self->obj);
  selfCpp->mTwistMotorSettings = *static_cast<MotorSettings *>(mTwistMotorSettings->obj);
};

bool JoltC_SwingTwistConstraintSettings_mEnabled_Get(
  JoltC_SwingTwistConstraintSettings_t * self
) {
  SwingTwistConstraintSettings * selfCpp = static_cast<SwingTwistConstraintSettings *>(self->obj);
  return selfCpp->mEnabled;
}

void JoltC_SwingTwistConstraintSettings_mEnabled_Set(
  JoltC_SwingTwistConstraintSettings_t * self,
  bool mEnabled
) {
  SwingTwistConstraintSettings * selfCpp = static_cast<SwingTwistConstraintSettings *>(self->obj);
  selfCpp->mEnabled = mEnabled;
};

long JoltC_SwingTwistConstraintSettings_mNumVelocityStepsOverride_Get(
  JoltC_SwingTwistConstraintSettings_t * self
) {
  SwingTwistConstraintSettings * selfCpp = static_cast<SwingTwistConstraintSettings *>(self->obj);
  return selfCpp->mNumVelocityStepsOverride;
}

void JoltC_SwingTwistConstraintSettings_mNumVelocityStepsOverride_Set(
  JoltC_SwingTwistConstraintSettings_t * self,
  long mNumVelocityStepsOverride
) {
  SwingTwistConstraintSettings * selfCpp = static_cast<SwingTwistConstraintSettings *>(self->obj);
  selfCpp->mNumVelocityStepsOverride = mNumVelocityStepsOverride;
};

long JoltC_SwingTwistConstraintSettings_mNumPositionStepsOverride_Get(
  JoltC_SwingTwistConstraintSettings_t * self
) {
  SwingTwistConstraintSettings * selfCpp = static_cast<SwingTwistConstraintSettings *>(self->obj);
  return selfCpp->mNumPositionStepsOverride;
}

void JoltC_SwingTwistConstraintSettings_mNumPositionStepsOverride_Set(
  JoltC_SwingTwistConstraintSettings_t * self,
  long mNumPositionStepsOverride
) {
  SwingTwistConstraintSettings * selfCpp = static_cast<SwingTwistConstraintSettings *>(self->obj);
  selfCpp->mNumPositionStepsOverride = mNumPositionStepsOverride;
};

//endregion

#ifdef __cplusplus
}
#endif

