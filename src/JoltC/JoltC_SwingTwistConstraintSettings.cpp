#include "JoltC/JoltC_SwingTwistConstraintSettings.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_SwingTwistConstraintSettings_t * JoltC_SwingTwistConstraintSettings_new(
  char** outErrMsg
) {
  try {
    JoltC_SwingTwistConstraintSettings_t * cInstance = new JoltC_SwingTwistConstraintSettings_t();
    SwingTwistConstraintSettings * cppInstance = new SwingTwistConstraintSettings();
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

JoltC_Constraint_t * JoltC_SwingTwistConstraintSettings_Create(
  JoltC_SwingTwistConstraintSettings_t * self,
  JoltC_Body_t * inBody1,
  JoltC_Body_t * inBody2,
  char** outErrMsg
) {
  try {
    SwingTwistConstraintSettings * selfCpp = static_cast<SwingTwistConstraintSettings *>(self->obj);
    Constraint * result = selfCpp->Create(
    *reinterpret_cast<Body *>(inBody1->obj),
    *reinterpret_cast<Body *>(inBody2->obj)
    );
    return reinterpret_cast<JoltC_Constraint_t *>(result);
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

unsigned long JoltC_SwingTwistConstraintSettings_GetRefCount(
  JoltC_SwingTwistConstraintSettings_t * self,
  char** outErrMsg
) {
  try {
    SwingTwistConstraintSettings * selfCpp = static_cast<SwingTwistConstraintSettings *>(self->obj);
    unsigned long result = selfCpp->GetRefCount();
    return result;
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_SwingTwistConstraintSettings_AddRef(
  JoltC_SwingTwistConstraintSettings_t * self,
  char** outErrMsg
) {
  try {
    SwingTwistConstraintSettings * selfCpp = static_cast<SwingTwistConstraintSettings *>(self->obj);
    
    selfCpp->AddRef();
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_SwingTwistConstraintSettings_Release(
  JoltC_SwingTwistConstraintSettings_t * self,
  char** outErrMsg
) {
  try {
    SwingTwistConstraintSettings * selfCpp = static_cast<SwingTwistConstraintSettings *>(self->obj);
    
    selfCpp->Release();
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

JoltC_EConstraintSpace JoltC_SwingTwistConstraintSettings_mSpace_Get(
  JoltC_SwingTwistConstraintSettings_t * self,
  char** outErrMsg
) {
  SwingTwistConstraintSettings * selfCpp = static_cast<SwingTwistConstraintSettings *>(self->obj);
  EConstraintSpace result = selfCpp->mSpace;
  return static_cast<JoltC_EConstraintSpace>(static_cast<int>(result));
};

void JoltC_SwingTwistConstraintSettings_mSpace_Set(
  JoltC_SwingTwistConstraintSettings_t * self,
  JoltC_EConstraintSpace mSpace,
  char** outErrMsg
) {
  SwingTwistConstraintSettings * selfCpp = static_cast<SwingTwistConstraintSettings *>(self->obj);
  selfCpp->mSpace = static_cast<EConstraintSpace>(static_cast<int>(mSpace));
};

JoltC_RVec3_t * JoltC_SwingTwistConstraintSettings_mPosition1_Get(
  JoltC_SwingTwistConstraintSettings_t * self,
  char** outErrMsg
) {
  SwingTwistConstraintSettings * selfCpp = static_cast<SwingTwistConstraintSettings *>(self->obj);
  RVec3 resultValue = selfCpp->mPosition1;
  RVec3* result = new RVec3(resultValue);
  return reinterpret_cast<JoltC_RVec3_t *>(result);
};

void JoltC_SwingTwistConstraintSettings_mPosition1_Set(
  JoltC_SwingTwistConstraintSettings_t * self,
  JoltC_RVec3_t * mPosition1,
  char** outErrMsg
) {
  SwingTwistConstraintSettings * selfCpp = static_cast<SwingTwistConstraintSettings *>(self->obj);
  selfCpp->mPosition1 = *reinterpret_cast<RVec3 *>(mPosition1->obj);
};

JoltC_Vec3_t * JoltC_SwingTwistConstraintSettings_mTwistAxis1_Get(
  JoltC_SwingTwistConstraintSettings_t * self,
  char** outErrMsg
) {
  SwingTwistConstraintSettings * selfCpp = static_cast<SwingTwistConstraintSettings *>(self->obj);
  Vec3 resultValue = selfCpp->mTwistAxis1;
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JoltC_Vec3_t *>(result);
};

void JoltC_SwingTwistConstraintSettings_mTwistAxis1_Set(
  JoltC_SwingTwistConstraintSettings_t * self,
  JoltC_Vec3_t * mTwistAxis1,
  char** outErrMsg
) {
  SwingTwistConstraintSettings * selfCpp = static_cast<SwingTwistConstraintSettings *>(self->obj);
  selfCpp->mTwistAxis1 = *reinterpret_cast<Vec3 *>(mTwistAxis1->obj);
};

JoltC_Vec3_t * JoltC_SwingTwistConstraintSettings_mPlaneAxis1_Get(
  JoltC_SwingTwistConstraintSettings_t * self,
  char** outErrMsg
) {
  SwingTwistConstraintSettings * selfCpp = static_cast<SwingTwistConstraintSettings *>(self->obj);
  Vec3 resultValue = selfCpp->mPlaneAxis1;
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JoltC_Vec3_t *>(result);
};

void JoltC_SwingTwistConstraintSettings_mPlaneAxis1_Set(
  JoltC_SwingTwistConstraintSettings_t * self,
  JoltC_Vec3_t * mPlaneAxis1,
  char** outErrMsg
) {
  SwingTwistConstraintSettings * selfCpp = static_cast<SwingTwistConstraintSettings *>(self->obj);
  selfCpp->mPlaneAxis1 = *reinterpret_cast<Vec3 *>(mPlaneAxis1->obj);
};

JoltC_RVec3_t * JoltC_SwingTwistConstraintSettings_mPosition2_Get(
  JoltC_SwingTwistConstraintSettings_t * self,
  char** outErrMsg
) {
  SwingTwistConstraintSettings * selfCpp = static_cast<SwingTwistConstraintSettings *>(self->obj);
  RVec3 resultValue = selfCpp->mPosition2;
  RVec3* result = new RVec3(resultValue);
  return reinterpret_cast<JoltC_RVec3_t *>(result);
};

void JoltC_SwingTwistConstraintSettings_mPosition2_Set(
  JoltC_SwingTwistConstraintSettings_t * self,
  JoltC_RVec3_t * mPosition2,
  char** outErrMsg
) {
  SwingTwistConstraintSettings * selfCpp = static_cast<SwingTwistConstraintSettings *>(self->obj);
  selfCpp->mPosition2 = *reinterpret_cast<RVec3 *>(mPosition2->obj);
};

JoltC_Vec3_t * JoltC_SwingTwistConstraintSettings_mTwistAxis2_Get(
  JoltC_SwingTwistConstraintSettings_t * self,
  char** outErrMsg
) {
  SwingTwistConstraintSettings * selfCpp = static_cast<SwingTwistConstraintSettings *>(self->obj);
  Vec3 resultValue = selfCpp->mTwistAxis2;
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JoltC_Vec3_t *>(result);
};

void JoltC_SwingTwistConstraintSettings_mTwistAxis2_Set(
  JoltC_SwingTwistConstraintSettings_t * self,
  JoltC_Vec3_t * mTwistAxis2,
  char** outErrMsg
) {
  SwingTwistConstraintSettings * selfCpp = static_cast<SwingTwistConstraintSettings *>(self->obj);
  selfCpp->mTwistAxis2 = *reinterpret_cast<Vec3 *>(mTwistAxis2->obj);
};

JoltC_Vec3_t * JoltC_SwingTwistConstraintSettings_mPlaneAxis2_Get(
  JoltC_SwingTwistConstraintSettings_t * self,
  char** outErrMsg
) {
  SwingTwistConstraintSettings * selfCpp = static_cast<SwingTwistConstraintSettings *>(self->obj);
  Vec3 resultValue = selfCpp->mPlaneAxis2;
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JoltC_Vec3_t *>(result);
};

void JoltC_SwingTwistConstraintSettings_mPlaneAxis2_Set(
  JoltC_SwingTwistConstraintSettings_t * self,
  JoltC_Vec3_t * mPlaneAxis2,
  char** outErrMsg
) {
  SwingTwistConstraintSettings * selfCpp = static_cast<SwingTwistConstraintSettings *>(self->obj);
  selfCpp->mPlaneAxis2 = *reinterpret_cast<Vec3 *>(mPlaneAxis2->obj);
};

JoltC_ESwingType JoltC_SwingTwistConstraintSettings_mSwingType_Get(
  JoltC_SwingTwistConstraintSettings_t * self,
  char** outErrMsg
) {
  SwingTwistConstraintSettings * selfCpp = static_cast<SwingTwistConstraintSettings *>(self->obj);
  ESwingType result = selfCpp->mSwingType;
  return static_cast<JoltC_ESwingType>(static_cast<int>(result));
};

void JoltC_SwingTwistConstraintSettings_mSwingType_Set(
  JoltC_SwingTwistConstraintSettings_t * self,
  JoltC_ESwingType mSwingType,
  char** outErrMsg
) {
  SwingTwistConstraintSettings * selfCpp = static_cast<SwingTwistConstraintSettings *>(self->obj);
  selfCpp->mSwingType = static_cast<ESwingType>(static_cast<int>(mSwingType));
};

float JoltC_SwingTwistConstraintSettings_mNormalHalfConeAngle_Get(
  JoltC_SwingTwistConstraintSettings_t * self,
  char** outErrMsg
) {
  SwingTwistConstraintSettings * selfCpp = static_cast<SwingTwistConstraintSettings *>(self->obj);
  float result = selfCpp->mNormalHalfConeAngle;
  return result;
};

void JoltC_SwingTwistConstraintSettings_mNormalHalfConeAngle_Set(
  JoltC_SwingTwistConstraintSettings_t * self,
  float mNormalHalfConeAngle,
  char** outErrMsg
) {
  SwingTwistConstraintSettings * selfCpp = static_cast<SwingTwistConstraintSettings *>(self->obj);
  selfCpp->mNormalHalfConeAngle = mNormalHalfConeAngle;
};

float JoltC_SwingTwistConstraintSettings_mPlaneHalfConeAngle_Get(
  JoltC_SwingTwistConstraintSettings_t * self,
  char** outErrMsg
) {
  SwingTwistConstraintSettings * selfCpp = static_cast<SwingTwistConstraintSettings *>(self->obj);
  float result = selfCpp->mPlaneHalfConeAngle;
  return result;
};

void JoltC_SwingTwistConstraintSettings_mPlaneHalfConeAngle_Set(
  JoltC_SwingTwistConstraintSettings_t * self,
  float mPlaneHalfConeAngle,
  char** outErrMsg
) {
  SwingTwistConstraintSettings * selfCpp = static_cast<SwingTwistConstraintSettings *>(self->obj);
  selfCpp->mPlaneHalfConeAngle = mPlaneHalfConeAngle;
};

float JoltC_SwingTwistConstraintSettings_mTwistMinAngle_Get(
  JoltC_SwingTwistConstraintSettings_t * self,
  char** outErrMsg
) {
  SwingTwistConstraintSettings * selfCpp = static_cast<SwingTwistConstraintSettings *>(self->obj);
  float result = selfCpp->mTwistMinAngle;
  return result;
};

void JoltC_SwingTwistConstraintSettings_mTwistMinAngle_Set(
  JoltC_SwingTwistConstraintSettings_t * self,
  float mTwistMinAngle,
  char** outErrMsg
) {
  SwingTwistConstraintSettings * selfCpp = static_cast<SwingTwistConstraintSettings *>(self->obj);
  selfCpp->mTwistMinAngle = mTwistMinAngle;
};

float JoltC_SwingTwistConstraintSettings_mTwistMaxAngle_Get(
  JoltC_SwingTwistConstraintSettings_t * self,
  char** outErrMsg
) {
  SwingTwistConstraintSettings * selfCpp = static_cast<SwingTwistConstraintSettings *>(self->obj);
  float result = selfCpp->mTwistMaxAngle;
  return result;
};

void JoltC_SwingTwistConstraintSettings_mTwistMaxAngle_Set(
  JoltC_SwingTwistConstraintSettings_t * self,
  float mTwistMaxAngle,
  char** outErrMsg
) {
  SwingTwistConstraintSettings * selfCpp = static_cast<SwingTwistConstraintSettings *>(self->obj);
  selfCpp->mTwistMaxAngle = mTwistMaxAngle;
};

float JoltC_SwingTwistConstraintSettings_mMaxFrictionTorque_Get(
  JoltC_SwingTwistConstraintSettings_t * self,
  char** outErrMsg
) {
  SwingTwistConstraintSettings * selfCpp = static_cast<SwingTwistConstraintSettings *>(self->obj);
  float result = selfCpp->mMaxFrictionTorque;
  return result;
};

void JoltC_SwingTwistConstraintSettings_mMaxFrictionTorque_Set(
  JoltC_SwingTwistConstraintSettings_t * self,
  float mMaxFrictionTorque,
  char** outErrMsg
) {
  SwingTwistConstraintSettings * selfCpp = static_cast<SwingTwistConstraintSettings *>(self->obj);
  selfCpp->mMaxFrictionTorque = mMaxFrictionTorque;
};

JoltC_MotorSettings_t * JoltC_SwingTwistConstraintSettings_mSwingMotorSettings_Get(
  JoltC_SwingTwistConstraintSettings_t * self,
  char** outErrMsg
) {
  SwingTwistConstraintSettings * selfCpp = static_cast<SwingTwistConstraintSettings *>(self->obj);
  MotorSettings resultValue = selfCpp->mSwingMotorSettings;
  MotorSettings* result = new MotorSettings(resultValue);
  return reinterpret_cast<JoltC_MotorSettings_t *>(result);
};

void JoltC_SwingTwistConstraintSettings_mSwingMotorSettings_Set(
  JoltC_SwingTwistConstraintSettings_t * self,
  JoltC_MotorSettings_t * mSwingMotorSettings,
  char** outErrMsg
) {
  SwingTwistConstraintSettings * selfCpp = static_cast<SwingTwistConstraintSettings *>(self->obj);
  selfCpp->mSwingMotorSettings = *reinterpret_cast<MotorSettings *>(mSwingMotorSettings->obj);
};

JoltC_MotorSettings_t * JoltC_SwingTwistConstraintSettings_mTwistMotorSettings_Get(
  JoltC_SwingTwistConstraintSettings_t * self,
  char** outErrMsg
) {
  SwingTwistConstraintSettings * selfCpp = static_cast<SwingTwistConstraintSettings *>(self->obj);
  MotorSettings resultValue = selfCpp->mTwistMotorSettings;
  MotorSettings* result = new MotorSettings(resultValue);
  return reinterpret_cast<JoltC_MotorSettings_t *>(result);
};

void JoltC_SwingTwistConstraintSettings_mTwistMotorSettings_Set(
  JoltC_SwingTwistConstraintSettings_t * self,
  JoltC_MotorSettings_t * mTwistMotorSettings,
  char** outErrMsg
) {
  SwingTwistConstraintSettings * selfCpp = static_cast<SwingTwistConstraintSettings *>(self->obj);
  selfCpp->mTwistMotorSettings = *reinterpret_cast<MotorSettings *>(mTwistMotorSettings->obj);
};

bool JoltC_SwingTwistConstraintSettings_mEnabled_Get(
  JoltC_SwingTwistConstraintSettings_t * self,
  char** outErrMsg
) {
  SwingTwistConstraintSettings * selfCpp = static_cast<SwingTwistConstraintSettings *>(self->obj);
  bool result = selfCpp->mEnabled;
  return result;
};

void JoltC_SwingTwistConstraintSettings_mEnabled_Set(
  JoltC_SwingTwistConstraintSettings_t * self,
  bool mEnabled,
  char** outErrMsg
) {
  SwingTwistConstraintSettings * selfCpp = static_cast<SwingTwistConstraintSettings *>(self->obj);
  selfCpp->mEnabled = mEnabled;
};

long JoltC_SwingTwistConstraintSettings_mNumVelocityStepsOverride_Get(
  JoltC_SwingTwistConstraintSettings_t * self,
  char** outErrMsg
) {
  SwingTwistConstraintSettings * selfCpp = static_cast<SwingTwistConstraintSettings *>(self->obj);
  long result = selfCpp->mNumVelocityStepsOverride;
  return result;
};

void JoltC_SwingTwistConstraintSettings_mNumVelocityStepsOverride_Set(
  JoltC_SwingTwistConstraintSettings_t * self,
  long mNumVelocityStepsOverride,
  char** outErrMsg
) {
  SwingTwistConstraintSettings * selfCpp = static_cast<SwingTwistConstraintSettings *>(self->obj);
  selfCpp->mNumVelocityStepsOverride = mNumVelocityStepsOverride;
};

long JoltC_SwingTwistConstraintSettings_mNumPositionStepsOverride_Get(
  JoltC_SwingTwistConstraintSettings_t * self,
  char** outErrMsg
) {
  SwingTwistConstraintSettings * selfCpp = static_cast<SwingTwistConstraintSettings *>(self->obj);
  long result = selfCpp->mNumPositionStepsOverride;
  return result;
};

void JoltC_SwingTwistConstraintSettings_mNumPositionStepsOverride_Set(
  JoltC_SwingTwistConstraintSettings_t * self,
  long mNumPositionStepsOverride,
  char** outErrMsg
) {
  SwingTwistConstraintSettings * selfCpp = static_cast<SwingTwistConstraintSettings *>(self->obj);
  selfCpp->mNumPositionStepsOverride = mNumPositionStepsOverride;
};

//endregion properties

#ifdef __cplusplus
}
#endif

